#include <DUNE/DUNE.hpp>
#include <list>

namespace Maneuver
{
    namespace ExpandingSquare
    {
        using DUNE_NAMESPACES;

        struct Task: public DUNE::Maneuvers::Maneuver
        {
            IMC::ExpandingSquare m_maneuver;

            IMC::DesiredPath m_path;

            std::list<double> waypoints;

            Task(const std::string& name, Tasks::Context& ctx):

                DUNE::Maneuvers::Maneuver(name, ctx)
            {
                bindToManeuver<Task, IMC::ExpandingSquare>();
            }

            void 
            onManeuverActivation(void) 
            {
                war("The ExpandingSquare manuever starts.");
            }
            //void onManeuverDeactivation(void) {...}
            void 
            consume(const IMC::ExpandingSquare* maneuver) 
            {
                setControl(IMC::CL_PATH);

                m_path.speed = maneuver->speed;
                m_path.speed_units = maneuver->speed_units;
                m_path.end_z = maneuver->z;
                m_path.end_z_units = maneuver->z_units;

                m_maneuver = *maneuver;

                makePath();

                double lat = waypoints.front();
                waypoints.pop_front();
                double lon = waypoints.front();
                waypoints.pop_front();

                sendPath(lat, lon);

            }

            void 
            onPathControlState(const IMC::PathControlState* pcs) 
            {

                if (!(pcs->flags & IMC::PathControlState::FL_NEAR)) {
                    signalProgress(pcs->eta);
                    return;
                }

                if (waypoints.empty()) {
                    signalCompletion();
                    return;
                }

                double lat = waypoints.front();
                waypoints.pop_front();
                double lon = waypoints.front();
                waypoints.pop_front();

                sendPath(lat, lon);
            }



            void 
            sendPath(double lat, double lon)
            {
                // Calculate WGS-84 coordinates and fill DesiredPath message
                m_path.end_lat = lat;
                m_path.end_lon = lon;
                dispatch(m_path);
            }

            void
            makePath()
            {
                bool counter_clock_rot = false;
                int spirals = m_maneuver.width/(2*m_maneuver.hstep);

                double lat = m_maneuver.lat;
                double lon = m_maneuver.lon;

                double offset_x = m_maneuver.width/2;
                double offset_y = 0;
                double& r_offset_x = offset_x;
                double& r_offset_y = offset_y;

                if (spirals < 1) {
                    offset_x = m_maneuver.width/2;
                    offset_y = 0;
                    Angles::rotate(m_maneuver.bearing, counter_clock_rot, r_offset_x, r_offset_y);
                    Coordinates::WGS84::displace(offset_x, offset_y, &lat, &lon);
                    waypoints.push_back(lat);
                    waypoints.push_back(lon);
                }

                else {
                    offset_x = m_maneuver.hstep;
                    offset_y = 0;
                    Angles::rotate(m_maneuver.bearing, counter_clock_rot, r_offset_x, r_offset_y);
                    Coordinates::WGS84::displace(offset_x, offset_y, &lat, &lon);
                    waypoints.push_back(lat);
                    waypoints.push_back(lon);
                    lat = m_maneuver.lat;
                    lon = m_maneuver.lon;
                    if (m_maneuver.first_curve_right) {
                        for (int j = 0; j < spirals; j++) {
                            for (int i = 0; i < 4; i++) {
                                if (i == 0) {
                                    offset_x = (j+1)*m_maneuver.hstep;
                                    offset_y = (j+1)*m_maneuver.hstep;
                                }
                                else if (i == 1) {
                                    offset_x = -(j+1)*m_maneuver.hstep;
                                    offset_y = (j+1)*m_maneuver.hstep;
                                }
                                else if (i == 2) {
                                    offset_x = -(j+1)*m_maneuver.hstep;
                                    offset_y = -(j+1)*m_maneuver.hstep;
                                }
                                else if (i == 3) {
                                    if (spirals == j+1) {
                                        offset_x = (j+1)*m_maneuver.hstep + (m_maneuver.width - 2*(j+1)*m_maneuver.hstep)/2;
                                        offset_y = -(j+1)*m_maneuver.hstep;
                                    }
                                    else {
                                        offset_x = (j+2)*m_maneuver.hstep;
                                        offset_y = -(j+1)*m_maneuver.hstep;
                                    }
                                }
                                Angles::rotate(m_maneuver.bearing, counter_clock_rot, r_offset_x, r_offset_y);
                                Coordinates::WGS84::displace(offset_x, offset_y, &lat, &lon);
                                waypoints.push_back(lat);
                                waypoints.push_back(lon);
                                lat = m_maneuver.lat;
                                lon = m_maneuver.lon;
                            }
                        }    
                    }

                    else {
                        for (int j = 0; j < spirals; j++) {
                            for (int i = 0; i < 4; i++) {
                                if (i == 0) {
                                    offset_x = (j+1)*m_maneuver.hstep;
                                    offset_y = -(j+1)*m_maneuver.hstep;
                                }
                                else if (i == 1) {
                                    offset_x = -(j+1)*m_maneuver.hstep;
                                    offset_y = -(j+1)*m_maneuver.hstep;
                                }
                                else if (i == 2) {
                                    offset_x = -(j+1)*m_maneuver.hstep;
                                    offset_y = (j+1)*m_maneuver.hstep;
                                }
                                else if (i == 3) {
                                    if (spirals == j+1) {
                                        offset_x = (j+1)*m_maneuver.hstep + (m_maneuver.width - 2*(j+1)*m_maneuver.hstep)/2;
                                        offset_y = (j+1)*m_maneuver.hstep;
                                    }
                                    else {
                                        offset_x = (j+2)*m_maneuver.hstep;
                                        offset_y = (j+1)*m_maneuver.hstep;
                                    }
                                }
                                Angles::rotate(m_maneuver.bearing, counter_clock_rot, r_offset_x, r_offset_y);
                                Coordinates::WGS84::displace(offset_x, offset_y, &lat, &lon);
                                waypoints.push_back(lat);
                                waypoints.push_back(lon);
                                lat = m_maneuver.lat;
                                lon = m_maneuver.lon;
                            }
                        }
                    }
                }
            }

        };
    }
}

DUNE_TASK
