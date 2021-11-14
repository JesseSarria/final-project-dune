#include <DUNE/DUNE.hpp>
#include <list>
#include <math.h>
namespace Maneuver
{
    namespace ExpandingSquare
    {
        using DUNE_NAMESPACES;

        struct Task: public DUNE::Maneuvers::Maneuver
        {
            IMC::ExpandingSquare m_maneuver;

            IMC::DesiredPath m_path;

            list<double> waypoints;

            Task(const std::string& name, Tasks::Context& ctx):

                DUNE::Maneuvers::Maneuver(name, ctx)
            {
                bindToManeuver<Task, IMC::ExpandingSquare>();
            }

            void onManeuverActivation(void) {...}
            void onManeuverDeactivation(void) {...}
            void consume(const IMC::ExpandingSquare* maneuver) 
            {

                m_maneuver = *maneuver;

                m_path.speed = maneuver->speed;
                m_path.speed_units = maneuver->speed_units;
                m_path.end_z = maneuver->z;
                m_path.end_z_units = maneuver->z_units;

                bool clockwise_rotation = false;

                double lat = maneuver->lat;
                double lon = maneuver->lon;
                double spirals = maneuver->width/(2*maneuver->hstep);

                if (spirals < 1)
                    double offset_x = maneuver->width/2;
                    double offset_y = 0;
                    Coordinates::WGS84::displace(offset_x, offset_y, &lat, &lon);
                    Angles::rotate(maneuver->bearing, clockwise_rotation, &lat, &lon);

                else if {
                    double offset_x = maneuver->hstep;
                    double offset_y = 0;
                    Coordinates::WGS84::displace(offset_x, offset_y, &lat, &lon);
                    Angles::rotate(maneuver->bearing, clockwise_rotation, &lat, &lon);
                    waypoints.push_back(lat);
                    waypoints.push_back(lon);
                    lat = maneuver->lat;
                    lon = maneuver->lon;
                    if (maneuver->first_curve_right) 
                    {
                        for (int j = 0; j < floor(spirals); j++) {
                            for (int i = 0; i < 4; i++) {
                                if (i == 0) {
                                    double offset_x = (j+1)*maneuver->hstep;
                                    double offset_y = (j+1)*maneuver->hstep;
                                }
                                if (i == 1) {
                                    double offset_x = -(j+1)*maneuver->hstep;
                                    double offset_y = (j+1)*maneuver->hstep;
                                }
                                if (i == 2) {
                                    double offset_x = -(j+1)*maneuver->hstep;
                                    double offset_y = -(j+1)*maneuver->hstep;
                                }
                                if (i == 3) {
                                    if (floor(spirals) == j+1) {
                                        double offset_x = (j+1)*maneuver->hstep + (maneuver->width - 2*(j+1)*maneuver->hstep)/2;
                                        double offset_y = -(j+1)*maneuver->hstep;
                                    }
                                    else if {
                                        double offset_x = (j+2)*maneuver->hstep;
                                        double offset_y = -(j+1)*maneuver->hstep;
                                    }
                                }
                                double offset_x = maneuver->hstep;
                                double offset_y = maneuver->hstep;
                                Coordinates::WGS84::displace(offset_x, offset_y, &lat, &lon);
                                Angles::rotate(maneuver->bearing, clockwise_rotation, &lat, &lon);
                                waypoints.push_back(lat);
                                waypoints.push_back(lon);
                                lat = maneuver->lat;
                                lon = maneuver->lon;
                            }
                        }    
                    }
                }

                lat = waypoints.front()->double;
                waypoints.pop_front();
                lon = waypoints.front()->double;
                waypoints.pop_front();

                sendPath(lat, lon);

            }

            void onPathControlState(const IMC::PathControlState* pcs) 
            {

                if (!(pcs->flags & IMC::PathControlState::FL_NEAR))
                {
                    signalProgress(pcs->eta, "NOT CLOSE ENOUGH!");
                    return;
                }

                double lat = waypoints.front()->double;
                waypoints.pop_front();
                double lon = waypoints.front()->double;
                waypoints.pop_front();

                sendPath(lat, lon);
            }



            void sendPath(double lat, double lon)
            {
                // Calculate WGS-84 coordinates and fill DesiredPath message
                m_path.end_lat = lat;
                m_path.end_lon = lon;
                dispatch(m_path);
            }
        };
    }
}
