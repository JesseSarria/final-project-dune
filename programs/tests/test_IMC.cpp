//***************************************************************************
// Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 21782feca2bd49285188ba67f3fc23c1                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.442256814323);
    msg.setSource(11800U);
    msg.setSourceEntity(214U);
    msg.setDestination(41595U);
    msg.setDestinationEntity(131U);
    msg.state = 206U;
    msg.flags = 138U;
    msg.description.assign("IOWDQZPUZYZKVMLMVLWLJAFQXRKXCLREUFPPRYAJMFTQEPGNELAWJTMAXBNJJQEQNDSDKJOYTNLHIYCCMUAOGOMGHUIMXRFNBMRCUVWFTUIIJZOABFSQAPSRZZIJKZCGTSCRSBURTFYCHZQCR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.492920668979);
    msg.setSource(50401U);
    msg.setSourceEntity(109U);
    msg.setDestination(54928U);
    msg.setDestinationEntity(50U);
    msg.state = 131U;
    msg.flags = 172U;
    msg.description.assign("JRZITKVQVPOOSKVGLBDEOWAASGVBPOBWHEGJSDMIGKNTYZGHGFPBQCHWXTNOXSETUHJVFEQYCHH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.0979706650824);
    msg.setSource(2118U);
    msg.setSourceEntity(130U);
    msg.setDestination(6180U);
    msg.setDestinationEntity(20U);
    msg.state = 137U;
    msg.flags = 198U;
    msg.description.assign("KZBBIZWMXDSJKOZEBRFRFYJGRUEBEHPURGIANOTPPKQWMGZDIJETVLX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.622720379516);
    msg.setSource(52656U);
    msg.setSourceEntity(47U);
    msg.setDestination(40089U);
    msg.setDestinationEntity(68U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.290411510078);
    msg.setSource(41998U);
    msg.setSourceEntity(5U);
    msg.setDestination(22134U);
    msg.setDestinationEntity(93U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.254713804923);
    msg.setSource(44143U);
    msg.setSourceEntity(197U);
    msg.setDestination(24770U);
    msg.setDestinationEntity(5U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.649201780739);
    msg.setSource(29386U);
    msg.setSourceEntity(204U);
    msg.setDestination(34515U);
    msg.setDestinationEntity(26U);
    msg.id = 194U;
    msg.label.assign("NVYHCUFHHDSCURUDKMPGJBUQOZDJEFEATEMBLLNPGD");
    msg.component.assign("RGXZEZKVFPREPTNDWPCSSDTJSKVJRUMWRVJY");
    msg.act_time = 14250U;
    msg.deact_time = 54311U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.973629525481);
    msg.setSource(4828U);
    msg.setSourceEntity(198U);
    msg.setDestination(33034U);
    msg.setDestinationEntity(193U);
    msg.id = 176U;
    msg.label.assign("QUWZYEJPPSPQDPFOBCABJMKKAXXDZRPHYVMPXAHALDFILG");
    msg.component.assign("XEIVJEMBONUZJAOFPNC");
    msg.act_time = 57283U;
    msg.deact_time = 20727U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.0923780664135);
    msg.setSource(28015U);
    msg.setSourceEntity(177U);
    msg.setDestination(2691U);
    msg.setDestinationEntity(203U);
    msg.id = 201U;
    msg.label.assign("QLJMGNRQTYVKLFYBTGSZMSBTYUHLQZHIDPTRNBVKMUWBPACNLVTKAVAWLWDBIIIZKTZUOHOGOORLSDTPYRAFXZIPSSGYNHHHXTJUPCEATSLODPEFDFAQCSEMXREGUFMDIRLXDUFAWRBVXHPDJG");
    msg.component.assign("TVSGYDGEQVZMWDHPFQQGQGATAADELNWNNGWDBSHGCUYTCDKBUWBIFZKFDKWUFZYVOYXWVHSPHVKJUQUQJUWIPMKEOSIIJGFIIDTLBHYGTXMLXOIOINKLJKFKOSDROXYSNBJFMBQREEPUZABUMSTMUEWCYMCHPNNCIHTMAPBUQTKAFZELBLSVGTZVXRKYLRPRLEWTOFVAXXASCLCYORHIBNOEXMHZPZCSVGJMQZPJDLC");
    msg.act_time = 6272U;
    msg.deact_time = 56996U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.688576977107);
    msg.setSource(12466U);
    msg.setSourceEntity(147U);
    msg.setDestination(53120U);
    msg.setDestinationEntity(186U);
    msg.id = 8U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.280362524402);
    msg.setSource(15880U);
    msg.setSourceEntity(67U);
    msg.setDestination(41147U);
    msg.setDestinationEntity(163U);
    msg.id = 44U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.646040903917);
    msg.setSource(6522U);
    msg.setSourceEntity(137U);
    msg.setDestination(46666U);
    msg.setDestinationEntity(232U);
    msg.id = 148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.639846154496);
    msg.setSource(44729U);
    msg.setSourceEntity(224U);
    msg.setDestination(51281U);
    msg.setDestinationEntity(174U);
    msg.op = 112U;
    msg.list.assign("HJHEWQRYBDXXWUOMIERALDFTGVFCXQGQQPTSPOLVATUIOMKDUYCBBOOZSKIKYNVUVFJDRWZBRDBWIMBNISPUDDZHGMFKMLSVKNOQLLGUPYZJKRFWVEFPABEPNZWTHU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.617533348608);
    msg.setSource(25099U);
    msg.setSourceEntity(185U);
    msg.setDestination(60233U);
    msg.setDestinationEntity(114U);
    msg.op = 149U;
    msg.list.assign("VWLVDHZUIODOCCQIFQATTTYNLJOVOGTYWCMEIKZQFZEJMGRHNRAPRBGGKAGGBMGBUBUYBSDIHUFZEKPJVPZVWDYYKQFOGMOSLEJRYOBARTVHJBVNGWAANZFWCSXKJZZTPUMPRNSCRJHQIRLHZKCCLPUHBMJSBVSXXDDQPBENNLZIFPEMWSVXIDOWIYCSXEUAMWFUAHQDLLYDKQRMIHAELOAX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.133512623267);
    msg.setSource(20982U);
    msg.setSourceEntity(67U);
    msg.setDestination(27565U);
    msg.setDestinationEntity(1U);
    msg.op = 0U;
    msg.list.assign("OZILFQNTGBUSUAJNHLGUARUWCYIJOXTRWSZITJVEAIJCANEKHDWMHQHUVKULDBEYZTJFRZOA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.176975559072);
    msg.setSource(5032U);
    msg.setSourceEntity(152U);
    msg.setDestination(12720U);
    msg.setDestinationEntity(29U);
    msg.value = 227U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.962561248057);
    msg.setSource(6827U);
    msg.setSourceEntity(2U);
    msg.setDestination(8276U);
    msg.setDestinationEntity(7U);
    msg.value = 62U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.03009377948);
    msg.setSource(1166U);
    msg.setSourceEntity(211U);
    msg.setDestination(55173U);
    msg.setDestinationEntity(208U);
    msg.value = 25U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.238673698506);
    msg.setSource(48059U);
    msg.setSourceEntity(241U);
    msg.setDestination(47900U);
    msg.setDestinationEntity(58U);
    msg.consumer.assign("OEJGCPRSBQAMCAWIWPLUHJGYJVNGQZTYCJDFUYVEOQMFCCMRHEZMSOHKLDEUEKWPPZHTDDONEOKYWLSXPXIFMGOPMSOANHJGUBVUOLUPKRHHLUCRXIJDSNUWBGRDOZLLMQAVTPKETGXIEKVWTGMYCATSBFCVIQUPJVCKLRINEVSBQFBDKRXTGQKZSIFXHFMZBEZZBSBBOHAPFZJKANVWYQLRNTIFHNXRYTAAWGXJXUXDVNYIWCDDFYZQWRNS");
    msg.message_id = 47543U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.156450418326);
    msg.setSource(11223U);
    msg.setSourceEntity(54U);
    msg.setDestination(20796U);
    msg.setDestinationEntity(167U);
    msg.consumer.assign("ORWBVJDWLAREHLYMIYQMP");
    msg.message_id = 54131U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.244801600572);
    msg.setSource(17422U);
    msg.setSourceEntity(166U);
    msg.setDestination(2353U);
    msg.setDestinationEntity(167U);
    msg.consumer.assign("VOCXKEDVGPLNHUOKCSSRZTSUGYCTLYQLHQKRWDLGHZRIFODTOJJYDOMFNFIKKMLMLCFCWSWUSRRBLOEBYETUOXTXDXCUZCGVXQJPNPRJDWBIMTVBJYYIAUPKIKORSAGFGHHWJUAEZQSZIGZANDWLBJMVZTVBSJICQDXFEUSMGNBTHPHIKILZBPPRSXMZEWXBFAYABENHYWYMDV");
    msg.message_id = 55799U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.367666328771);
    msg.setSource(46607U);
    msg.setSourceEntity(253U);
    msg.setDestination(62401U);
    msg.setDestinationEntity(88U);
    msg.type = 210U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.963874862674);
    msg.setSource(43205U);
    msg.setSourceEntity(251U);
    msg.setDestination(34043U);
    msg.setDestinationEntity(162U);
    msg.type = 10U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.915919170913);
    msg.setSource(6575U);
    msg.setSourceEntity(183U);
    msg.setDestination(62698U);
    msg.setDestinationEntity(145U);
    msg.type = 197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.0177200231783);
    msg.setSource(45904U);
    msg.setSourceEntity(54U);
    msg.setDestination(36769U);
    msg.setDestinationEntity(117U);
    msg.op = 229U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.282895633459);
    msg.setSource(50957U);
    msg.setSourceEntity(164U);
    msg.setDestination(12069U);
    msg.setDestinationEntity(124U);
    msg.op = 253U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.105231987022);
    msg.setSource(15534U);
    msg.setSourceEntity(201U);
    msg.setDestination(16510U);
    msg.setDestinationEntity(93U);
    msg.op = 246U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.461087381651);
    msg.setSource(583U);
    msg.setSourceEntity(18U);
    msg.setDestination(28176U);
    msg.setDestinationEntity(87U);
    msg.total_steps = 252U;
    msg.step_number = 48U;
    msg.step.assign("QSFCTWLNFPCSRTHZLVHHPIUHYFYTEODUTCBFQNVDLQGLYCMKOKSLTGDXZOWVHUXKUDKLUJVMCRFOBSPRKDPJOSQWZEGGACBBPDXMXIIXIIRBECQFYBTLHCGSWGOIZPWHEFUXMBKKNRVTRXPWQEIIJYTBAXS");
    msg.flags = 239U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.348174513283);
    msg.setSource(53639U);
    msg.setSourceEntity(139U);
    msg.setDestination(25530U);
    msg.setDestinationEntity(133U);
    msg.total_steps = 232U;
    msg.step_number = 105U;
    msg.step.assign("DQQTFGKUHVLYZQUMYOCCJQLRDIHWLDNKVJPHMKOWNRIINKZGXYSUFVVVYCEPYVSUNRCIHQEUMXYYFBMQOZXGLACLJGXTCHBRFCPXAIPMMCHCUDFSYBGIPNUGWWEJZZIDFVLZHIARDONBGLPQHWQNSTKDOZNOUHMPKJJWLTVGASZFVYDJPSEPHSKFZAAIFEROEASWXIAJEETNTOWESRAUJWBBRBJRBBSQPMETRYGKAKODDQGMNMTXWZL");
    msg.flags = 106U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.176370270381);
    msg.setSource(7055U);
    msg.setSourceEntity(13U);
    msg.setDestination(44858U);
    msg.setDestinationEntity(17U);
    msg.total_steps = 5U;
    msg.step_number = 243U;
    msg.step.assign("LQEKMSXNCITFYHPMNRJVNBJFXALDPJKCUZALXAQQUVYJSSNBRYARJIQTZMCAURQPLKBNDOKRMYOWMQQXBGVMWVKHHHLBYCTJILOFMQGXOUTIKAOZCPDFYIMYWKWPCLNLRDWTDVNNZSMVYKPF");
    msg.flags = 149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.374469205734);
    msg.setSource(51999U);
    msg.setSourceEntity(48U);
    msg.setDestination(15950U);
    msg.setDestinationEntity(129U);
    msg.state = 104U;
    msg.error.assign("HUKQFSQDRGUOYWMDAPWVCGBATHBQNPHZAQQOVPYQJQJVJPKHFEEBETCWUTRXGWCMZXRPKIIKBRNNTKRPZULGADZERNNEIDJDIULFMVYETVTQWTMULLBBPLZUNANBCKCFWSLXERFSIDCJMDAGSTHDCLDGKRJAKMOLWCIVZHMSZIFVOGEIUSHFWZBFJSOQJWSYBNO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.715707524845);
    msg.setSource(21260U);
    msg.setSourceEntity(57U);
    msg.setDestination(25341U);
    msg.setDestinationEntity(57U);
    msg.state = 222U;
    msg.error.assign("WDXLEEMKAJEBFQOVPPFSWNWTRISNKBJGMIORQKVGYTGSAMCPPQEQVGWAFNZMYZYBTYDAZJFZQTKUCHIZNZUPXMWKQOISGNDCYHGOHUCOISJBWHIJVBLYYSFRUXNXHVGFRVCWILTEIMJBCZBBDLZDJUTAVTHNULHKLROJNRYKALMXGDLLAZPETPJCBVPKHKOUEWOXCMXXBDSMFUROWUSQGIAFVTUTDQDCPQKFOLHZY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.54815466742);
    msg.setSource(62858U);
    msg.setSourceEntity(246U);
    msg.setDestination(64037U);
    msg.setDestinationEntity(175U);
    msg.state = 52U;
    msg.error.assign("CXCTAPLTQRRUCVLRIIWLZUVUDVSSNWUPTVDIHHPFNTITOHMFUJOTBXRWKDKGBJJQPDSWYBYDVXPMWMZUUKQGHKCOMPNQJRKHEFCJRDHYLKZLBYKWAUVXRXUORJYFIEDZAWLLRJEESIPGTUNBOEPZNKAMCZNMRGNFEDGSCVFGMQOISILCEGGKPTF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.567607926215);
    msg.setSource(19589U);
    msg.setSourceEntity(75U);
    msg.setDestination(8751U);
    msg.setDestinationEntity(42U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.436770125225);
    msg.setSource(22050U);
    msg.setSourceEntity(239U);
    msg.setDestination(55012U);
    msg.setDestinationEntity(151U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.133423845081);
    msg.setSource(4240U);
    msg.setSourceEntity(243U);
    msg.setDestination(60498U);
    msg.setDestinationEntity(40U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.223277192744);
    msg.setSource(60942U);
    msg.setSourceEntity(225U);
    msg.setDestination(58017U);
    msg.setDestinationEntity(123U);
    msg.op = 214U;
    msg.speed_min = 0.556172010649;
    msg.speed_max = 0.337467707884;
    msg.long_accel = 0.24857110127;
    msg.alt_max_msl = 0.623327418595;
    msg.dive_fraction_max = 0.567320899542;
    msg.climb_fraction_max = 0.800157255444;
    msg.bank_max = 0.809213722062;
    msg.p_max = 0.638872913679;
    msg.pitch_min = 0.6648438558;
    msg.pitch_max = 0.377366712089;
    msg.q_max = 0.961574873383;
    msg.g_min = 0.163397024841;
    msg.g_max = 0.0636802846659;
    msg.g_lat_max = 0.885314310714;
    msg.rpm_min = 0.239408533162;
    msg.rpm_max = 0.105985974456;
    msg.rpm_rate_max = 0.094983711554;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.784139747486);
    msg.setSource(31938U);
    msg.setSourceEntity(140U);
    msg.setDestination(29898U);
    msg.setDestinationEntity(204U);
    msg.op = 233U;
    msg.speed_min = 0.950012197672;
    msg.speed_max = 0.704055051415;
    msg.long_accel = 0.279778017378;
    msg.alt_max_msl = 0.2592140085;
    msg.dive_fraction_max = 0.00219632273162;
    msg.climb_fraction_max = 0.253040841465;
    msg.bank_max = 0.0994814100228;
    msg.p_max = 0.0558542886352;
    msg.pitch_min = 0.500376415508;
    msg.pitch_max = 0.235684246826;
    msg.q_max = 0.342868128646;
    msg.g_min = 0.636067741634;
    msg.g_max = 0.832548246396;
    msg.g_lat_max = 0.495838858914;
    msg.rpm_min = 0.841055088341;
    msg.rpm_max = 0.539472657298;
    msg.rpm_rate_max = 0.502696859866;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.663449535228);
    msg.setSource(36300U);
    msg.setSourceEntity(69U);
    msg.setDestination(35017U);
    msg.setDestinationEntity(13U);
    msg.op = 242U;
    msg.speed_min = 0.544186670116;
    msg.speed_max = 0.825657668235;
    msg.long_accel = 0.522176037503;
    msg.alt_max_msl = 0.918186521359;
    msg.dive_fraction_max = 0.738462933363;
    msg.climb_fraction_max = 0.907442958759;
    msg.bank_max = 0.849650257031;
    msg.p_max = 0.735656223977;
    msg.pitch_min = 0.874456310882;
    msg.pitch_max = 0.855628940182;
    msg.q_max = 0.5646531;
    msg.g_min = 0.266415189058;
    msg.g_max = 0.405217451848;
    msg.g_lat_max = 0.72500671975;
    msg.rpm_min = 0.311737798552;
    msg.rpm_max = 0.322245687262;
    msg.rpm_rate_max = 0.541422272517;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.210587568991);
    msg.setSource(6943U);
    msg.setSourceEntity(10U);
    msg.setDestination(57399U);
    msg.setDestinationEntity(28U);
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.550232488156;
    tmp_msg_0.beam_height = 0.470296362678;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.64584859319);
    msg.setSource(33273U);
    msg.setSourceEntity(123U);
    msg.setDestination(54819U);
    msg.setDestinationEntity(145U);
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 247U;
    tmp_msg_0.file.assign("CXGBURDCJWOJDAINOORJGDIBTYKOKVARQQCEXOBPXRLNKINSYFBUUWRKTWBXQLVVEBGINEHZXUDSWUMMFQMPCMFSVDBZJKYPPJQMALZVKLWYFAMHBZKHINHNOYTJZFMGHDSJLHGMNOMLELAXUIQFSCDIUATQHWYDWCEWRLJYITZQYPOVDGAJBPPTTZONPYQDHAGUCSTFGVEYXXEPEUREHGTZPKXTKXNVIWZE");
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.0478209696977);
    msg.setSource(18780U);
    msg.setSourceEntity(43U);
    msg.setDestination(53313U);
    msg.setDestinationEntity(140U);
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("MVVQEXRVKFYPWKXYCLGODCAIDAMLMXKGDRJCPWNHCEFZELWIMEDVNTZGTONPDEFAMDWRZOVJBFQXBHJCSCIJACDMFGLNPOTWHPFBTIXZAXOWEJLIPWKZXLXHOZROGXURZWMJULGJWSFLNZPQNKASSAVYKQGRYNQOPGYKNIVITSUKJKUYFQAVLYIFEJCGSUZZSAWXTNOSRKQBUPBUH");
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.43152567044);
    msg.setSource(6809U);
    msg.setSourceEntity(99U);
    msg.setDestination(55419U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.280795026694;
    msg.lon = 0.789849299923;
    msg.height = 0.425511690381;
    msg.x = 0.0844635194003;
    msg.y = 0.98255617453;
    msg.z = 0.45780852812;
    msg.phi = 0.801577920384;
    msg.theta = 0.058763979159;
    msg.psi = 0.281617762269;
    msg.u = 0.0982160332768;
    msg.v = 0.681060576229;
    msg.w = 0.35898432037;
    msg.p = 0.389912974004;
    msg.q = 0.419527973908;
    msg.r = 0.818378169534;
    msg.svx = 0.773136556823;
    msg.svy = 0.806980906781;
    msg.svz = 0.83149697408;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.8369908471);
    msg.setSource(54000U);
    msg.setSourceEntity(189U);
    msg.setDestination(7414U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.399225682867;
    msg.lon = 0.480248690103;
    msg.height = 0.544700992476;
    msg.x = 0.786595074451;
    msg.y = 0.834176278355;
    msg.z = 0.137192510152;
    msg.phi = 0.0727160064633;
    msg.theta = 0.62737394884;
    msg.psi = 0.495211434046;
    msg.u = 0.325695586522;
    msg.v = 0.35887896877;
    msg.w = 0.0555118849131;
    msg.p = 0.987380446935;
    msg.q = 0.475844787946;
    msg.r = 0.907774023934;
    msg.svx = 0.155467324062;
    msg.svy = 0.652166861019;
    msg.svz = 0.654221740787;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.670471463048);
    msg.setSource(13778U);
    msg.setSourceEntity(11U);
    msg.setDestination(34597U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.386118890648;
    msg.lon = 0.0356890290711;
    msg.height = 0.689818703402;
    msg.x = 0.6143836216;
    msg.y = 0.657625023762;
    msg.z = 0.246872323264;
    msg.phi = 0.0318342422646;
    msg.theta = 0.77718621797;
    msg.psi = 0.42543277452;
    msg.u = 0.294485570912;
    msg.v = 0.743287681533;
    msg.w = 0.418996269501;
    msg.p = 0.881337060369;
    msg.q = 0.506686137726;
    msg.r = 0.477882766108;
    msg.svx = 0.741149468309;
    msg.svy = 0.991266166784;
    msg.svz = 0.622125716963;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.645334113314);
    msg.setSource(1380U);
    msg.setSourceEntity(96U);
    msg.setDestination(54499U);
    msg.setDestinationEntity(89U);
    msg.op = 60U;
    msg.entities.assign("NEAURBMGCRZMNEWFRCYFBFVAQJDVLKEAVZJVSNSPECOZOOJCHPOPJPGZVJLPHPAZZCRYUO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.541649775727);
    msg.setSource(54390U);
    msg.setSourceEntity(134U);
    msg.setDestination(23753U);
    msg.setDestinationEntity(127U);
    msg.op = 190U;
    msg.entities.assign("RSMZJKRJWZQPFVLOOZWHACNLCRWPETXLMAKFTZIOAVUDSYVJIG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.810554507016);
    msg.setSource(8764U);
    msg.setSourceEntity(229U);
    msg.setDestination(21590U);
    msg.setDestinationEntity(215U);
    msg.op = 159U;
    msg.entities.assign("HGNHFEYUTWNUZPOZXVLOXDFIADVQCZOPOKGORDIHMVQQLHEQIKBUSHERYBSALDICZGRYCUMEPSJGWARNXZKTEBGOFYVLJSVVRPNLASUQCRMPDBHSYAOVEPQAJRSDYAZTMBJLWJIMHCZOXYAIUKFHEUZJWVGRXDG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.773308032991);
    msg.setSource(8805U);
    msg.setSourceEntity(168U);
    msg.setDestination(12541U);
    msg.setDestinationEntity(241U);
    msg.type = 147U;
    msg.speed = 13473U;
    const char tmp_msg_0[] = {98, -1, -88, -93, 5, 34, -6, 89, 60, -84, 71, -73, 13, -20, -26, -6, -74, 107, 41, -16, 79, -128, -18, -67, -46, -90, 14, 78, 82, 91, -51, 94, 4, 35, 58, -108, 122, 102, -10, -77, 47, -123};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.119677163431);
    msg.setSource(12605U);
    msg.setSourceEntity(43U);
    msg.setDestination(56479U);
    msg.setDestinationEntity(143U);
    msg.type = 189U;
    msg.speed = 6059U;
    const char tmp_msg_0[] = {-112, 31, 83, -101, -126, 93, 123, -112, 19, 78, -37, -35, 11, 60, -38, -57, -40, 3, -9, -118, 22, -73, 47, -60, 99, -16, 14, -126, -122, 50, -31, 52, 14, -114, 103, 55, -17, -123, 96, 121, 46, 26};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.110741930872);
    msg.setSource(61807U);
    msg.setSourceEntity(170U);
    msg.setDestination(44219U);
    msg.setDestinationEntity(126U);
    msg.type = 174U;
    msg.speed = 12662U;
    const char tmp_msg_0[] = {49, 23, -56, -42, -38, -54, -57, -118, -22, 57, 96, 25, 64, 73, -114, 57, 80, -87, 104, -58, 34, 23, 113};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.241083699549);
    msg.setSource(31698U);
    msg.setSourceEntity(34U);
    msg.setDestination(10019U);
    msg.setDestinationEntity(251U);
    msg.op = 72U;
    msg.tas2acc_pgain = 0.450329946709;
    msg.bank2p_pgain = 0.460538565346;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.0841551785635);
    msg.setSource(33814U);
    msg.setSourceEntity(230U);
    msg.setDestination(57383U);
    msg.setDestinationEntity(141U);
    msg.op = 58U;
    msg.tas2acc_pgain = 0.752892054479;
    msg.bank2p_pgain = 0.198621920726;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.221541017505);
    msg.setSource(38516U);
    msg.setSourceEntity(22U);
    msg.setDestination(58379U);
    msg.setDestinationEntity(108U);
    msg.op = 180U;
    msg.tas2acc_pgain = 0.427733291816;
    msg.bank2p_pgain = 0.737837819784;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.478411021712);
    msg.setSource(23184U);
    msg.setSourceEntity(34U);
    msg.setDestination(12683U);
    msg.setDestinationEntity(191U);
    msg.available = 3843989395U;
    msg.value = 140U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.637365542825);
    msg.setSource(33990U);
    msg.setSourceEntity(181U);
    msg.setDestination(54592U);
    msg.setDestinationEntity(25U);
    msg.available = 2683684303U;
    msg.value = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.321383889885);
    msg.setSource(50101U);
    msg.setSourceEntity(5U);
    msg.setDestination(53521U);
    msg.setDestinationEntity(144U);
    msg.available = 1500436583U;
    msg.value = 18U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.860578690124);
    msg.setSource(59231U);
    msg.setSourceEntity(17U);
    msg.setDestination(61272U);
    msg.setDestinationEntity(83U);
    msg.op = 119U;
    msg.snapshot.assign("GZQCQGMVSZPXUEIVCSESTFVIBPNWWXHYLJXLZWIPVGRSZNYMSDAUZNNZPC");
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("ISUWNSMOXJWIKWOTYMJNFXBQQDCFJNDETSEHKCQUTNGAQPQRRAYXLKEPOAWHKCINPODDLDOTSQZVEIRAEKOZBXYBYMNFGWRJKTCZUOKZVDAIZPPLBUVBVRQDNYWOXFMHHITRFJHXRQAEWTGUJHLMCBGCURTTIQLLIZGWSMXRLMKMSYSTSGJABVWNYNSVULFAOPHKJLAHMDJ");
    tmp_tmp_msg_0_0.lat = 0.318806659616;
    tmp_tmp_msg_0_0.lon = 0.511950537498;
    tmp_tmp_msg_0_0.depth = 0.439974003903;
    tmp_tmp_msg_0_0.query_channel = 141U;
    tmp_tmp_msg_0_0.reply_channel = 225U;
    tmp_tmp_msg_0_0.transponder_delay = 163U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.623100103859;
    tmp_msg_0.y = 0.0246916041186;
    tmp_msg_0.var_x = 0.252255343721;
    tmp_msg_0.var_y = 0.204098549411;
    tmp_msg_0.distance = 0.575754846237;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.496664199717);
    msg.setSource(41784U);
    msg.setSourceEntity(240U);
    msg.setDestination(690U);
    msg.setDestinationEntity(183U);
    msg.op = 126U;
    msg.snapshot.assign("PAUYHAGUFTEWNMGZTYCJKLSECMDWDKKCYJQNZXLXIFVVJGEIEVZ");
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 1368251359U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.644551628216);
    msg.setSource(16314U);
    msg.setSourceEntity(204U);
    msg.setDestination(36651U);
    msg.setDestinationEntity(187U);
    msg.op = 247U;
    msg.snapshot.assign("BNIRLXYFDQOJLDRNVBEERPJJWETXPRPDWSL");
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.839074564975;
    tmp_msg_0.x = 0.653598576377;
    tmp_msg_0.y = 0.510409787076;
    tmp_msg_0.z = 0.525515656367;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.970444638174);
    msg.setSource(31347U);
    msg.setSourceEntity(227U);
    msg.setDestination(21011U);
    msg.setDestinationEntity(231U);
    msg.op = 209U;
    msg.name.assign("DMLZDQWBMLRVWFDWNRINMQYRLKOEMNXJYVEKBKBPPJTQHJTOPGIEVFJZAAYGQRATHOHHBJNNVTTXOSTKBQSLZPPHPPWGMJYRCCHUZAXKXNKSMFGXSYDOVLSODXECGHIWRZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.721045615103);
    msg.setSource(61833U);
    msg.setSourceEntity(82U);
    msg.setDestination(31853U);
    msg.setDestinationEntity(229U);
    msg.op = 167U;
    msg.name.assign("ZFRTPTPSMLVGDXAYDHPQGEYUOSGXYKJFCKJSVJJEQUXNKXODNEPDWCYOBNIDAPWBTAKLCFKZSQKXKGLOGZMRIUBIFOUPCDCNPMPJBRVBMBUJQUVMTNLXDHVNXNTVHRWBPLLTZDDARGWSCAHXJCRYMDMUAVOZJSRSZSVKWFQTQFXQJAEFLXCGTOKKOHEWYEYIBWFOENQWQSYHNZZEILJHFUAYGBCOIIHCNAPMZRSVW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.205434442408);
    msg.setSource(62654U);
    msg.setSourceEntity(189U);
    msg.setDestination(43207U);
    msg.setDestinationEntity(1U);
    msg.op = 219U;
    msg.name.assign("HTFPVJTGXHZBOQYUMXJUSGAL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.211919320431);
    msg.setSource(14279U);
    msg.setSourceEntity(154U);
    msg.setDestination(1300U);
    msg.setDestinationEntity(225U);
    msg.type = 190U;
    msg.htime = 0.444843231738;
    msg.context.assign("BAJZCVHLXNZGNUDCVPFEIBUFFEDIQYECYPCQTQMYBKGNSTLOAZIRNKAVDCVTDEYXWURLJHXOJPRQXFJNYXAPGBMRBAEXMLHOZAUQJXWVLOWJMGDFTHUNSLTWIWFPNXASPVOKUVVNZVMGHGZPYCSJOOIOBBZRJUKYQEMGRKYSSGKPIXDJEKEWYSECOKVDRTMCHQKHD");
    msg.text.assign("RFEZLVEULJETXAPMYWMNNEGMVOZCXESNHTBLBYSGGNTHXOGFHBOHMWOKAAVXRCMSJQIXPYWIOLQNKXNTJXODFVFMSIWIFHUKBCTAILDSWFIZQEAVXVOHGRCWZDHUFJRS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.0641544105378);
    msg.setSource(24241U);
    msg.setSourceEntity(30U);
    msg.setDestination(42580U);
    msg.setDestinationEntity(89U);
    msg.type = 83U;
    msg.htime = 0.823850420941;
    msg.context.assign("HPHSCKYUKWGLYAMHYTJEXOFJQBIBEROZAZYEIMBUATBUWBWNQLDUZXROGNSNDLCRETGNNVYUHCHWGUZMKIQPAVKVEDKZBIYMGJJRQCINTOXNDDSMVPFWQQIJFRHCAJGUEREKNXBIHWKQGVDYKPTSAEDXNZCRFLYQTLLCFWVOKSXS");
    msg.text.assign("YUMQNRAQMZSYBLNDEIMJENPDSCXSHJEZZGRFDHYQLGQOASGMBPAQCNRAIXKOLUNXKJTPHGKWNCCPCVLWKIERLFYZRKEESRKTZWFFECJLZSTUUWOHOTJVCBTAXBZIFQPEIXXBJQJAKNSMWGXVQBHBJSMOGLJWADFPMDNZUWHVDXDTMRVOVOUETIFNPQIHRCYDCDY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.186063274134);
    msg.setSource(36060U);
    msg.setSourceEntity(44U);
    msg.setDestination(49380U);
    msg.setDestinationEntity(142U);
    msg.type = 97U;
    msg.htime = 0.297504346751;
    msg.context.assign("AVCIQWTPGWOTAHEEWDDGRBVCMQYSZEUFOKXNTJESJCOYANDXMMUKZJAJZFBKLNIHMJRTWSVHRIDCWLANDITCCPBMJARMECJSZCLYXVWDPBOFARKJXGHPEPQKCRKBGSOWBEGOAOAVKVLXIYQHNYYSNBQYZWSXLPPBLDYZFKDXTMVTMUYEIFREULFGCMIWVLQQTSUNYXXPDDUFZKHTGSIGBUUOMHRPFNVUG");
    msg.text.assign("LOMMNPNAFLCOCLLHEZKNOUEGSPDIJDTVNDUMSFWTTXDWRUPYIZPPSKIRFWGAQZNQILZWVZCGOMWVKFJGBVUASTVTXJLOMECURXIKXTAJSAHSKIBFZUMQOUACFQFTYFWCTQRMBPSJOREOJCCZBQTMGDAGTRJLBYISKHXPIRHXZFHMVLHXXDFSKVHWQZYGYDJJDWGNNMHQNBLYKOJH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.477167230221);
    msg.setSource(27734U);
    msg.setSourceEntity(68U);
    msg.setDestination(61082U);
    msg.setDestinationEntity(8U);
    msg.command = 34U;
    msg.htime = 0.226782506334;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.211015070006);
    msg.setSource(35732U);
    msg.setSourceEntity(117U);
    msg.setDestination(4891U);
    msg.setDestinationEntity(174U);
    msg.command = 117U;
    msg.htime = 0.481944182723;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 8U;
    tmp_msg_0.htime = 0.415757754988;
    tmp_msg_0.context.assign("MTAVONOIVZCKVKXHRMXWEDQEIAYDSIUJYICCZTGVZKEEAQPQGSUFZJXMRMPWKCTNTGHADNAOQOQAPHZDVSJFURNFBPUBRTIHPBAMSHLIYGSRIUEYDTZDRGGOEUVRUZVAWASEFVZBLKQ");
    tmp_msg_0.text.assign("GTFNJJWXFSHADXRUHQVHJQIQBMZBZTXYOKZGDZJGJSCUHUCROEIYQBYEFHRPSRYSYXKJKUOUZHLMQCLDFMNOSDNQCLLEGSRGGWPGTPCTFJKNMVCLBMGBPNBAVVLYFTIEOWILGGZFMRLIOWPACNSQPKIIKHYDXXRDWATODCQVMFFZCTWMUKNPX");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.448813648728);
    msg.setSource(59907U);
    msg.setSourceEntity(254U);
    msg.setDestination(5134U);
    msg.setDestinationEntity(124U);
    msg.command = 198U;
    msg.htime = 0.556993495315;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 26U;
    tmp_msg_0.htime = 0.110702631014;
    tmp_msg_0.context.assign("GZWGCPTIBEXOXPNOFQHYYOVZDKZNXABEJAELDENAEPYXYSFNNCGZTD");
    tmp_msg_0.text.assign("CYUBPMIOZGESWZGQQGQFIZDJXKNPTJKEBOOXFXLEYLVSRTMJNMGNPVQWEPAVBZWHATTCCIYNZSHOWQZTBJYDAQEJYZMXYFLRWWMWYKRTCTDVGOHDMFDUKKUFESCASOLFITQVDGPIMREPJNHLMXFUKXRCRKABHLGGZRDVVEGSTSUNRR");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.0131873238539);
    msg.setSource(48380U);
    msg.setSourceEntity(107U);
    msg.setDestination(33957U);
    msg.setDestinationEntity(214U);
    msg.op = 88U;
    msg.file.assign("RBBWNXHFNEWVQGCTFZXAHMGGNABZTKPDQCURABFQNDWGSWWQYLKXYJHZWLTMZK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.762517870319);
    msg.setSource(6118U);
    msg.setSourceEntity(135U);
    msg.setDestination(11170U);
    msg.setDestinationEntity(137U);
    msg.op = 48U;
    msg.file.assign("RSABLTTZBJWCARXSIQMYSJNHVWHXOWLZKMTMYJRTFNXURDJCYDOXFZBJIYNMUOJSBPAWDWPZAEWQFUSCMQHPGPZCRXIOWQZAKGCYLIEQRLJSGOGVA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.757529337476);
    msg.setSource(17793U);
    msg.setSourceEntity(73U);
    msg.setDestination(45385U);
    msg.setDestinationEntity(30U);
    msg.op = 62U;
    msg.file.assign("MLYAGJGBYWXDWKJRVODVEVIMSVPQYXVUUUDRHCOMNPTAMKOZRGAJENWWSYJKRZEKQOUGBPSDNRTHWILHAFCMUBYSJUZFIHNKHZDSTPREXODLQCISWUCYXZOJNGNDCJXLLAFORQDXXDTQSUKBXFWGPQTMKPIZAVBMEHCYYZIAGCDEBTELAWBHNENJJSGULQMLWEYRTSRGMBFQJVCHEOFBQPOFCZFZAZORTTBK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.0947651071293);
    msg.setSource(53743U);
    msg.setSourceEntity(106U);
    msg.setDestination(62567U);
    msg.setDestinationEntity(2U);
    msg.op = 140U;
    msg.clock = 0.569986371397;
    msg.tz = 77;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.555662272751);
    msg.setSource(6943U);
    msg.setSourceEntity(80U);
    msg.setDestination(58351U);
    msg.setDestinationEntity(193U);
    msg.op = 12U;
    msg.clock = 0.97723231934;
    msg.tz = -69;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.992031674206);
    msg.setSource(52736U);
    msg.setSourceEntity(245U);
    msg.setDestination(37696U);
    msg.setDestinationEntity(76U);
    msg.op = 46U;
    msg.clock = 0.272217685336;
    msg.tz = 116;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.946406965107);
    msg.setSource(28704U);
    msg.setSourceEntity(163U);
    msg.setDestination(59742U);
    msg.setDestinationEntity(222U);
    msg.conductivity = 0.382128015759;
    msg.temperature = 0.231547158351;
    msg.depth = 0.594418526183;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.178516497381);
    msg.setSource(27044U);
    msg.setSourceEntity(119U);
    msg.setDestination(1307U);
    msg.setDestinationEntity(153U);
    msg.conductivity = 0.739809377563;
    msg.temperature = 0.623893638753;
    msg.depth = 0.566087114992;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.682856219817);
    msg.setSource(64359U);
    msg.setSourceEntity(210U);
    msg.setDestination(45574U);
    msg.setDestinationEntity(87U);
    msg.conductivity = 0.338360777413;
    msg.temperature = 0.123031820499;
    msg.depth = 0.945221836378;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.320107663407);
    msg.setSource(62379U);
    msg.setSourceEntity(251U);
    msg.setDestination(17024U);
    msg.setDestinationEntity(227U);
    msg.altitude = 0.42394596002;
    msg.roll = 41036U;
    msg.pitch = 40168U;
    msg.yaw = 19949U;
    msg.speed = 19264;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.720056126972);
    msg.setSource(42634U);
    msg.setSourceEntity(41U);
    msg.setDestination(64138U);
    msg.setDestinationEntity(199U);
    msg.altitude = 0.530845168482;
    msg.roll = 29490U;
    msg.pitch = 1171U;
    msg.yaw = 27735U;
    msg.speed = 1933;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.97618700152);
    msg.setSource(15405U);
    msg.setSourceEntity(185U);
    msg.setDestination(30437U);
    msg.setDestinationEntity(66U);
    msg.altitude = 0.575175288848;
    msg.roll = 620U;
    msg.pitch = 2016U;
    msg.yaw = 41836U;
    msg.speed = -2586;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.551453766697);
    msg.setSource(41399U);
    msg.setSourceEntity(139U);
    msg.setDestination(39038U);
    msg.setDestinationEntity(110U);
    msg.altitude = 0.997686746927;
    msg.width = 0.0203529210724;
    msg.length = 0.202352724712;
    msg.bearing = 0.181589109842;
    msg.pxl = -26404;
    msg.encoding = 247U;
    const char tmp_msg_0[] = {6, 74, 120, -96, 117, -104, -53, 104, -65, -90, 120, 86, -128, -21, -128, 47, 125, 93, 83, 32, -5, 93, -29, -31, -65, -94, -2, 21};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.0545287532343);
    msg.setSource(56613U);
    msg.setSourceEntity(138U);
    msg.setDestination(47825U);
    msg.setDestinationEntity(146U);
    msg.altitude = 0.857880795367;
    msg.width = 0.230165919073;
    msg.length = 0.543006831783;
    msg.bearing = 0.0144386820089;
    msg.pxl = 28916;
    msg.encoding = 103U;
    const char tmp_msg_0[] = {-116, 114, 56, 111, -38, -82, 123, -16, -59, -34, 9, -43, -42, 79, 2, -53, -46, 114, -6, 25, 2, 36, 22, -17, -22, -37, 20, 60, -101, -120, 65, 51, -91, -33, -26, -5, -33, 52, 82, -66, 120, 91, 61, 29, 62, 70, -15, -50, -46, -33, 1, -86, 46, -50, 17, -110, 31, 37, -48, 115, 26, 17, 105, -56, 74, 53, -68, 100, -24, -41, 85, 74, 89, 124, -85, 12, 0, 21, -92, 89, -87, 103, -68, -97, -69, -25, -18, -117, -117, -12, -123, -110, -54, 123, -105, -44, -6, -127, 59, 50, 6, 34, -13, 42, -19, -21, -13, -112, 40, -125, 72, 111, 98, -126, 21, -99, 11, -77, -28, -116, 75, -42, -110, -41, -5, 67, 86, -10, 18, 3, 79, -39, -90, -73, 82, 55, -54, -77, 14, -98, 76, -102, 98, -52, -55, -27, -30, 45, 45, -2, 9, -49, 4, -15, 24, 29, -102, -103, 68, -77, 79, 55, 83, 68, -68, 62, 91, -102, -9, -2, 52, 34, 18, 56, 85, -108, -85, 14, -128, 22, 1, -2, 7, 36, -16, -91, 6, -66, -104, -20, -37, -7, 36, 86, -49, -112, 46, 31, 41, 111, 80, -114, 37, -56, -80, 85, 60, -14, 84, -28, 111, 119, 11, 39, 27, 101, 29, -15, -45, -64, -114, -94};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.082874191161);
    msg.setSource(65445U);
    msg.setSourceEntity(30U);
    msg.setDestination(11604U);
    msg.setDestinationEntity(89U);
    msg.altitude = 0.914847404802;
    msg.width = 0.538396905555;
    msg.length = 0.922045317807;
    msg.bearing = 0.161359870674;
    msg.pxl = -16327;
    msg.encoding = 186U;
    const char tmp_msg_0[] = {30, 116, -53, 35, 106, 117, -9, -73, -53, -95, 57, -124, -47, 2, 40, -58, -12, -106, 91, 85, -54, 78, -91, 32, 117, -7, -116, 64, -51, 59, 97, -97, 32, 96, 56, 121, -19, 105, 121, 27, 34, -8, -53, 43, 114, 91, 126, -128, 77, 82, 106, -61, 9, 111, -124, -44, -1, 82, 73, -53, 17, 105, 8, 47, 20, -104, -114, -76, 92, -58, 77, 43, 77, -72, 78, -128, 108, -126, -79, -75, -2, 49, -105, 26, -99, -119, 105, 86, 72, -108, -18, -86, 5, 69, -128, 61, 47, 25, -57, 58, 85, 26, 17};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.684202337291);
    msg.setSource(42073U);
    msg.setSourceEntity(179U);
    msg.setDestination(9154U);
    msg.setDestinationEntity(126U);
    msg.text.assign("UBLUNOGVGJOHCIHXKPMLNVHRVFIUPASSPKUZJBZDEMAPOQILOZBBDIEAKHEGOHALCRGLYXMKCKGHFFRWMZAAQGKQNIUWUDQMQHGDIUNWZZTWDQPXNEYXWYHRRLJMV");
    msg.type = 175U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.859961530642);
    msg.setSource(59557U);
    msg.setSourceEntity(105U);
    msg.setDestination(30990U);
    msg.setDestinationEntity(209U);
    msg.text.assign("RPBUXPOWUQBMKVMHYEVZUPADPZUFVFVTQVRYNZBXB");
    msg.type = 171U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.424006749045);
    msg.setSource(2155U);
    msg.setSourceEntity(243U);
    msg.setDestination(57500U);
    msg.setDestinationEntity(160U);
    msg.text.assign("IAGOKLWSEYKLTILUHVHIHQ");
    msg.type = 221U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.171849885704);
    msg.setSource(35115U);
    msg.setSourceEntity(44U);
    msg.setDestination(45237U);
    msg.setDestinationEntity(58U);
    msg.parameter = 15U;
    msg.numsamples = 18U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 1809U;
    tmp_msg_0.avg = 0.127412454566;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.94611489027;
    msg.lon = 0.137739412302;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.62023092069);
    msg.setSource(6786U);
    msg.setSourceEntity(15U);
    msg.setDestination(5533U);
    msg.setDestinationEntity(79U);
    msg.parameter = 37U;
    msg.numsamples = 219U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 20896U;
    tmp_msg_0.avg = 0.327873217671;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.912546869672;
    msg.lon = 0.725927392163;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.338359944578);
    msg.setSource(23204U);
    msg.setSourceEntity(149U);
    msg.setDestination(1405U);
    msg.setDestinationEntity(94U);
    msg.parameter = 216U;
    msg.numsamples = 17U;
    msg.lat = 0.351378859171;
    msg.lon = 0.158893895137;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.383726342662);
    msg.setSource(48804U);
    msg.setSourceEntity(160U);
    msg.setDestination(40978U);
    msg.setDestinationEntity(68U);
    msg.depth = 13521U;
    msg.avg = 0.065677032265;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.730306265272);
    msg.setSource(53070U);
    msg.setSourceEntity(97U);
    msg.setDestination(57865U);
    msg.setDestinationEntity(38U);
    msg.depth = 64798U;
    msg.avg = 0.685385126164;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.862425385879);
    msg.setSource(7307U);
    msg.setSourceEntity(191U);
    msg.setDestination(3579U);
    msg.setDestinationEntity(194U);
    msg.depth = 47790U;
    msg.avg = 0.649366896419;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.22146020722);
    msg.setSource(39154U);
    msg.setSourceEntity(166U);
    msg.setDestination(33796U);
    msg.setDestinationEntity(6U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.682021897992);
    msg.setSource(33298U);
    msg.setSourceEntity(193U);
    msg.setDestination(9821U);
    msg.setDestinationEntity(234U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.100854675811);
    msg.setSource(57095U);
    msg.setSourceEntity(81U);
    msg.setDestination(3048U);
    msg.setDestinationEntity(198U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.284823827101);
    msg.setSource(46999U);
    msg.setSourceEntity(157U);
    msg.setDestination(38901U);
    msg.setDestinationEntity(43U);
    msg.sys_name.assign("KOTAZONWXILFJDCBJTBQHVVRAPZVRWPUBNNNMYWYMXKDDKSKRUYTXCOYLCTXLTERRTLCDHNYHOPQFSQUXRGJQGPHPQBKNQZFULZSJJSUICIIEQIAIHLGCLHYKCNFWWALWFMTZBMAXQVOHTPHOAGFFVHZIDJEVRDUKUQOBMBXATLFOJGEOMBEVGEMWKFZEOZJDUXRRBYMXGGSTRSNCSANUPIPDPMWPJYFWY");
    msg.sys_type = 27U;
    msg.owner = 25100U;
    msg.lat = 0.386390107014;
    msg.lon = 0.0630805144167;
    msg.height = 0.436697396822;
    msg.services.assign("KJQOWEYMETTTOIRUNXSDBWDFHWTCBAYLERODWAXHFXKNKMVERNOLOHXZYVKTRJJGOHRDLFQLFIAMLPVQIMCUGVZXIKPSAJXCBTASZVMBNCEGBBWYXQNOHLEJPIIQCGJLWYLZNSOZKPHGFEEGSKQUPOSTKHCCMCGIFDHKSJQUDAFRGQVFUSWLWFYTQCRIMPJQSZBDCIGJEUUZBIXYVHHFBBGATVDJNXLTMPWAVNYRP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.0775229940193);
    msg.setSource(17345U);
    msg.setSourceEntity(112U);
    msg.setDestination(5593U);
    msg.setDestinationEntity(107U);
    msg.sys_name.assign("RVHZQZDFUAAFIMWBGGWVDHONKCMTWFBGVUEONJILABJAPMZQBJCRWBWNIKRKPPXQYYXGVSNALCRGDJAEWSLVPNEEIFCNWTSMDOPSUSRPKYEGKHTYPSZJEQXBHVBULVSTZVIOGYMEJHMVFOIIODQMNRHDNGODXMUCRIKNARHIUTZKXCLZXIBUHDTLAWJJ");
    msg.sys_type = 157U;
    msg.owner = 48849U;
    msg.lat = 0.84278179506;
    msg.lon = 0.628781227966;
    msg.height = 0.704411261135;
    msg.services.assign("UGVESMMMZJDPIJPILVEMPBQYLETRMWGDSGSRWVOHSUJDRYVBBZMQKZIPFNPHOPKIZLSSDTRRAAJDXCYLHTMCJWYBBWZHYIREDKEPHNHIPJXHQRQBQQWNNDYDMLAFGYGOLKCNXQGWCTTLVYAWEXWWOTVBZI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.918304836829);
    msg.setSource(182U);
    msg.setSourceEntity(207U);
    msg.setDestination(25072U);
    msg.setDestinationEntity(159U);
    msg.sys_name.assign("STBYZKVERHDWBNAVPMJLEFULCOGLIGFCZFMAJMGSEHGLAIJPOPXIWASEVWXDLZUJJOKDRGIGSVB");
    msg.sys_type = 216U;
    msg.owner = 47245U;
    msg.lat = 0.190454513062;
    msg.lon = 0.553905611279;
    msg.height = 0.456968629051;
    msg.services.assign("JUCDWVSNHQGQWRHBJHBKGZZEOYAZQKWIHCNOFTPQYBRNIOACOJUPGAWIEDJRTDLLJSIWDFMIYCPWNGYSXUYCJBDAKLKJTXZPMUKGUGICBSAHQBVSTULARNTWRXQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.483612461081);
    msg.setSource(55712U);
    msg.setSourceEntity(5U);
    msg.setDestination(58583U);
    msg.setDestinationEntity(188U);
    msg.service.assign("PBQYHVMNOZGEPZDRIGJAJUEBTTUWCJLXKFHEPXZTDKMVXUOIBTLWKGYFCHERHORMCUKLGNEXLGECLQEVWLNYTIORAYUZNQRBSRPJSRFCYRIYSMIWTXMNRDKQFDBUUWVVWUCHNKQCJSLIX");
    msg.service_type = 161U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.0807358629366);
    msg.setSource(6907U);
    msg.setSourceEntity(241U);
    msg.setDestination(42674U);
    msg.setDestinationEntity(62U);
    msg.service.assign("VNOQUCVPYGYAOWSSUYGWRQOHPPPBDNVMMENCKOBEYJIERZSOKSNJEVYIGEHSQCJHUTRMJPZFDWXAVMCITMAVDHXQNJLXOHPUZTGWQNFQATRWOKLXMMCJBPNWFBKIQPWYHSIDRLDLZTGKHAHEFJWBKJIEUCUUQXIYYRCPSYKFMBBZRBIFXCKHRKLVZZSXUQUEGBIAXQIGDF");
    msg.service_type = 219U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.400737757331);
    msg.setSource(34520U);
    msg.setSourceEntity(238U);
    msg.setDestination(23512U);
    msg.setDestinationEntity(230U);
    msg.service.assign("KVNTOJASGTSHPFASHFKRYIJKHYCVMIONAKBWRONJZFDMIBNMKXXYKWJEXXOZYPDALPICWNIZMQUEFORKIYCXFCUHCEGDFETSMYSIMGZKRGLOOTUMQBDXLBFUQZMHJXPUWZRDSNNDNBTTSLDRB");
    msg.service_type = 175U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.881851219809);
    msg.setSource(7494U);
    msg.setSourceEntity(29U);
    msg.setDestination(4332U);
    msg.setDestinationEntity(166U);
    msg.value = 0.0583717421391;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.153500221986);
    msg.setSource(5009U);
    msg.setSourceEntity(237U);
    msg.setDestination(23468U);
    msg.setDestinationEntity(152U);
    msg.value = 0.220539549299;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.90388790416);
    msg.setSource(42051U);
    msg.setSourceEntity(118U);
    msg.setDestination(47559U);
    msg.setDestinationEntity(77U);
    msg.value = 0.822299276154;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.110391694983);
    msg.setSource(51042U);
    msg.setSourceEntity(181U);
    msg.setDestination(36141U);
    msg.setDestinationEntity(74U);
    msg.value = 0.465769946777;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.998448580386);
    msg.setSource(33277U);
    msg.setSourceEntity(75U);
    msg.setDestination(42728U);
    msg.setDestinationEntity(194U);
    msg.value = 0.564976969657;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.846993383832);
    msg.setSource(61249U);
    msg.setSourceEntity(71U);
    msg.setDestination(54909U);
    msg.setDestinationEntity(85U);
    msg.value = 0.522313197936;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.606987403768);
    msg.setSource(28664U);
    msg.setSourceEntity(117U);
    msg.setDestination(25597U);
    msg.setDestinationEntity(185U);
    msg.value = 0.94662117485;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.104563902378);
    msg.setSource(64085U);
    msg.setSourceEntity(151U);
    msg.setDestination(26723U);
    msg.setDestinationEntity(105U);
    msg.value = 0.47352924063;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.262613119058);
    msg.setSource(11589U);
    msg.setSourceEntity(55U);
    msg.setDestination(38758U);
    msg.setDestinationEntity(133U);
    msg.value = 0.776006259949;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.996267731466);
    msg.setSource(50773U);
    msg.setSourceEntity(207U);
    msg.setDestination(62874U);
    msg.setDestinationEntity(171U);
    msg.number.assign("AGOFBVPXPZJCHMKVUBSIWVDRGMITUJLMSDXUZIQWQPKKUULJZPHYDYYZXGWTMTTZULEKQSDDQTQJNVAATJHYSPQGGZZHAYYBLLIXUCFWDPGBQFJANXJNKGOAYHFBJPEPRO");
    msg.timeout = 20149U;
    msg.contents.assign("EWSPQGQEVCTWLYRVIHADWUJCILRTHEVWZBSLWJWZZDBYJURDAJOEZEGXSGULMESTKPAPXFPZSRAQUHPQFWCOYUHEXDFXMVQWWDZXCNPKCBBLCZHKOCSCEIODMPRQUXDMNGFUYIYJVAHOXQNPTF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.833641565558);
    msg.setSource(50035U);
    msg.setSourceEntity(32U);
    msg.setDestination(17698U);
    msg.setDestinationEntity(220U);
    msg.number.assign("DRHVYMQSOWCCQGEWAFQZTUPTXPUMEATASCKFYPUAZVFOWOVPLZLRMWLTOBNJUGJNHOQRISOGTLMSIIJIRHGNGDGMVQUW");
    msg.timeout = 57265U;
    msg.contents.assign("DWFGFRXQHOPCQOLW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.722472587072);
    msg.setSource(38281U);
    msg.setSourceEntity(79U);
    msg.setDestination(9625U);
    msg.setDestinationEntity(20U);
    msg.number.assign("BWQCMNXKFWJAUPGZCJJISWJUZYEOBMHVGMJOYBIRXAFJGCULKDUVVRJNILDTBVAHCYWRIEFHEVLRLRHMEZSSQBPSXCPWVGIZDEKJQRCYAKXSLMQUHGOLNYLRTYTRDQXDKOGSAZPIDMOUCLHZDGFVETVHCYIPXSDPLQWTPASSZNOIAWMBLOEMJPGFDYQVIUKTPWKOM");
    msg.timeout = 57648U;
    msg.contents.assign("AGYAYWRPCTYDNAVFSITTXFKATFFHTEJSIIVSEEBVIFUM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.986690772362);
    msg.setSource(24491U);
    msg.setSourceEntity(253U);
    msg.setDestination(7817U);
    msg.setDestinationEntity(170U);
    msg.seq = 1639251298U;
    msg.destination.assign("DYMZJCDCVNXULIBFBIOTUYLIBKTEWRCEHSBACFLMFFHPWVTWUUANMRCSSTYPWBDAJNOPCXJIXYMQXAQXJ");
    msg.timeout = 31328U;
    const char tmp_msg_0[] = {-119, 24, -128, -27, 104, 91, 82, 35, 39, -98, 110, -105, 77, -79, -33, -67, -128, -1, 69, -17, -70, 24, 16, 72, 12, -13, -111, 55, 14, 54, -59, -110, 2, -65, 73, 34, 88, 50, -34, 80, -101, 96, 22, -31, -50, 69, 123, -103, -3, -78, -43, 55, 107, 109, -42, -105, -20, 25, -78, 49, -86, -56, 41, -42, 6, 49, 5, 39, 114, -59, -64, 124, -76, -16, 37, 19, -76, 126, -127, -1, 32, 47, -23, 57, 68, -99, -55, -51, -78, 60, 62, -103, -79, -30, 21, 124, -1, 125, -39, -1, 38, -61, 66, 113, -31, 96, -107, 106, 57, -12, -121, -18, 26, -1, -120, -66, -106, 56, 51, -50, -19, 36, 121, -65, -98, -81, 55, 91, 40, -19, -81, -118, -13, -120, 50, 79, -32, 74, 114, 27, -72, 12, 15, -82, -116, 107, -14, 87, -21, -113, 81, 73, -98, 40, -78, 107, 60, 100, -17, 96, -66, -31, 58, 90, 14, -103, 51, -17, 31, -41, 15};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.48269467304);
    msg.setSource(45637U);
    msg.setSourceEntity(76U);
    msg.setDestination(33829U);
    msg.setDestinationEntity(173U);
    msg.seq = 200957586U;
    msg.destination.assign("EVVQLZFFNRIKIRAZXTDCRVDKDYHNIBFAUHZBKFJH");
    msg.timeout = 31176U;
    const char tmp_msg_0[] = {-98, 93, 69, 8, 121, -97, 115, -20, -72, -59, -39, 15, -115, 5, -124, -28, 116, -46, -81, -40, 109, -17, 43, -29, -16, -85, -68, -87, 20, 78, 110, -5, -20, 32, -97, -21, 106, 17, 1, 52, -69, -17, -60, -46, -40, -32, -109, -3, 31, 116, 50, -56, 9, -14, 110, -92, 66, 91, -17, -11, -53, -112, -43, 99, 12, -56, 72, -14, -57, 4, -50, 86, 74, 44, -3, -116, 23, -92, -82, -45, -126, -82, 120, -1, -7, 41, 59, 71, -14, 98, 100, -68, 5, -89, 111, -66, -80, -77, 103, -11, 116, 114, 88, -73, -106, 41, -8, 126, 37, 54, -13, 28, 43, 17, -109, -118, -99, 93, -56, -1, -59, -105, -117, -20, -125, 16, -13, 103, 90, -66, 98, 39, -2, 99, -38, 28, -48, -105, -37, 66, -66, 19, 12, 16, -72, 15, -38, -120, 104, -53, 38, -86, 18, -15, 64, -107, 72, 34, 8, -72, -27, -55, 63, -62, 66, -59, 95, 88, 32, -118, -77, -20, 75, 41, 45, -96, 77, -30, -81, 126, -11, 37, 122, 62, -115, -19, -57, 104, 56, 18, 76, -55, 105, 2, 50, -93, 122, 115, -128, -92, 73, -81, 77, 81, 95, 51, -20, -3, -116, -55, 104, -71, 56, 113, 68, 17, -1, -50, 43, 112, -63, 123, -87, 113, 52, -32, 82, 67, 123, -56, 46, 121, 67, -73, -88};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.163430981961);
    msg.setSource(25167U);
    msg.setSourceEntity(254U);
    msg.setDestination(16156U);
    msg.setDestinationEntity(107U);
    msg.seq = 845615165U;
    msg.destination.assign("VKNCCCARIQRRQUBQXESPWJUDOFZGCEIM");
    msg.timeout = 45835U;
    const char tmp_msg_0[] = {-105, -119, 55, -115, -11, -33, 118, -48, 112, 61};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.471579730052);
    msg.setSource(57036U);
    msg.setSourceEntity(105U);
    msg.setDestination(52971U);
    msg.setDestinationEntity(87U);
    msg.source.assign("LXNFBMVSFOPPARMJDHQBZLRJGQYANIMDFBNKEVAGROOVFAREXTWSGZNHQUZESIAONAZPPIBHIWBHAUUUD");
    const char tmp_msg_0[] = {-64, -113, -128, 43, 110, 86, 103, -98, 93, 40, 63, -77, -61, -120, 90, 34, -31, -47, -64, -119, -46, 61, 125, -91, -16, 26, -114, 42, -22, -116, 60, -2, -117, 111, -22, -112, -54, 113, -73, -38, -8, 7, 51, 38, -110, -8, -56, 58, 77, 11, 91, -124, -71, 4, -124, 67};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.614465700313);
    msg.setSource(48510U);
    msg.setSourceEntity(204U);
    msg.setDestination(23777U);
    msg.setDestinationEntity(206U);
    msg.source.assign("PEUMLRBUFAABPCCDXCDHXZLWVKFOGCQZMBWIOIXLTMXINUGIJZIDKESGLFBGWXQAAKNRJAQRTNPCDKMGSHXPCFQLPGDVCYDIEEROHSQJTQHPEMNMZITEKXZTAWFKEHNDVYRIRLBCVODVKORAWZZJWOGFKLUSIZJMVYBHHTYAZSSXHUFVAPTQYN");
    const char tmp_msg_0[] = {110, -109, -59, 66, 51, -7, 125, -113, 60, -47, -64, 110, 72, 86, 100, -73, 126, -52, 38, 106, 30, -86, -54, -39, -22, -107, -13, -7, -40, 21, -112, 35, 60, -117, 44, -2, -76, 113, -24, 126, 88, -46, -40, 22, 6, 50, -107, 76, -1, -10, -127, -2, -84, 77, 120, -40};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.98917921372);
    msg.setSource(8525U);
    msg.setSourceEntity(233U);
    msg.setDestination(44899U);
    msg.setDestinationEntity(249U);
    msg.source.assign("DWWUFAKDXQ");
    const char tmp_msg_0[] = {-46, 75, 20, -111, -23, 96, 113, 94, 61, 66, 92, -123, 99, -106, 108, -96, -29, -51, 43, 110, 125, 112, 87, -6, 14, 85, 109, -93, -94, 58, 21, -110, -8, 10, 61, -100, 115, 28, -19, -96, -24, 47, -14, 123, -96, 121, 20, -124, -66, 115, 76, -92, -32, -84, -85, -108, -94, -27, -121, 121, 46, 75, 119, -69, -56, -67, -96, 52, -120, 45, 37, 60, 96, -60, 105, 46, 61, -92, 93, 6, -114, 43, -123, 125, -23, -110, 79, -72, 61, 85, -30, 5, 45, 34, -46, 60, -43, -113, -42, -58, 18, 58, -117, -82, -96, 74, -104, -27, 86, -4, -50, 107, -35, -31, -121, 34, 52, -44, -35, -54, -37, 55, -61, -62, 13, 17, 29, -123, 8, -86, -113, 88, 111, -71, 96, 3, 73, -68, -121, 13, -37, 107, 55, -89, -107, -98, 96, -14, -118, 121, -5, 55, 96, 20, -44, -83, -23, -14, 56, -118, 97, -38, -16, 74, -53, -61, 99, 45, -96, -8, -33, -66};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.51331454609);
    msg.setSource(4508U);
    msg.setSourceEntity(70U);
    msg.setDestination(64906U);
    msg.setDestinationEntity(210U);
    msg.seq = 2041286933U;
    msg.state = 174U;
    msg.error.assign("SJWQRRNRYLKOZNUGOHGOUNASLRCZTBTUYCRUIAWUWINLWRMIFMXDGYHVVDAZMQZPEVSIWBSRTOB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.0779142541159);
    msg.setSource(50296U);
    msg.setSourceEntity(168U);
    msg.setDestination(10051U);
    msg.setDestinationEntity(242U);
    msg.seq = 2169939293U;
    msg.state = 74U;
    msg.error.assign("KHDDMVXIAEVSEKHGYTETEMLNCERSSLTYASIZKMIDFNOKWTONTXOBGAFWJRMULVPVZYKWRUSXDTJJFDSHPXN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.350480621029);
    msg.setSource(62043U);
    msg.setSourceEntity(93U);
    msg.setDestination(60931U);
    msg.setDestinationEntity(223U);
    msg.seq = 820973537U;
    msg.state = 69U;
    msg.error.assign("CMIKTEGEOUEVZKZNJKUDOMKFSLCKUYJXSPMVJORXNUIILNISLSWYCGSTQGTFYZVBGVWDDZRCPJHFWWVWJIJVXLYTYOVXBZWEQBQBITMZCTOVGUCUFDBEYVRWFRQMYWQYKLZJCHQXQNDHK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.772271197307);
    msg.setSource(4728U);
    msg.setSourceEntity(142U);
    msg.setDestination(14055U);
    msg.setDestinationEntity(235U);
    msg.origin.assign("IGPPXLMUERMPNHSWHHRBATSO");
    msg.text.assign("CYOLFQOGHVLGYOHJNKXPVAXWSVDSJZUBIPADFWQTZJWWVKELILDKUZNPLDPGQOHNMRRYNTTHQJFNQTRLSTBQEXDZU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.689590092815);
    msg.setSource(33910U);
    msg.setSourceEntity(2U);
    msg.setDestination(45550U);
    msg.setDestinationEntity(150U);
    msg.origin.assign("OTSUOUJXGZXNNAKLQBEWNOJMEZTEDQWHYLJEEWUMDSSBEZXQZWXNJSVPYSULPUYQGHCUBMIVRSBQFHVFQVSLPDYDRPOGMIWAJPTLBVPOFZHGYLZYVMKQGIBOHGRFDZICGDNM");
    msg.text.assign("QCRUBONOWUTEIVQPKYQGASDZTLUMCZYSLKABUSQTNRXLNULNUVHORDOPMGNAFIXZWRPHDIIHBLYKPVJPKLTGJQJFEGIHBINYCDQYBASKWGHZZEMNZSOAKVWESNZKCUHGKAOTAWXFMIJPWUU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.241668865676);
    msg.setSource(21568U);
    msg.setSourceEntity(8U);
    msg.setDestination(16349U);
    msg.setDestinationEntity(25U);
    msg.origin.assign("VCIKBLPFFUIMYWNGFOBEDWAYWQTOCRADCKUDDDXSBNTPKOMGOBKXXPFFQYYVNLSORJKAWJTMOTILQUKBLVIAXKAHTEBZPQCWYZEJWQZUTFDLWRFKBRDLGVJAWOJDOYXGIWFVSFUHEQMLQSXNBLMXZRXNUSYRTVJXMTZZYZMQZNCMEEOVEVIPLPVHSKPCHATJRUHEULFYRWGCSNXRIMPDJQKHYHRCSNQ");
    msg.text.assign("MNZHGHTIXXCMWLYQDITMYKGBWQSKVYJOQKFLQLMOPXTIRQZDPHREFOKZKPLNSEDMIBUJGKZJHLJPTJZSCFBHBHERKFTEAYYUILWVOMNBUOFXMCRVETCUOGUUYCAXWIRRNFPAJWSFZICUKSOWNAEPOQQICM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.539463260483);
    msg.setSource(56476U);
    msg.setSourceEntity(177U);
    msg.setDestination(8345U);
    msg.setDestinationEntity(62U);
    msg.origin.assign("YKTBKKDJKJWLNHJRFBBIKULVEAYUDOEKNETZLIIJCIDNHQMANBDKVNMFEXTMTMXMFVSKVYMNLABXIJCZWMIVF");
    msg.htime = 0.582391739971;
    msg.lat = 0.0398062755469;
    msg.lon = 0.8666495978;
    const char tmp_msg_0[] = {-13, 63, -92, -59, 88, 68, 62, -103, -53, -106, -117, 69, 75, 37, 87, -83, 65, 64, 41, -7, 23, 125, 52, 39, 10, 19, -94, -45, -127, -78, 24, 123, -75, -5, -38, -111, 64, 89, 87, 13, -99, -92, -100, 60, 118, 87, -19, -41, -76, 46, -38, 4, -46, -20, 67, -61, 110, 5, 88, 60, -92, -58, -24, 98, 106, -91, 87, -125, 106, 78, 19, 57, 105, 44, 33, -124, 92, 105, -32, 41, 114, 2, -70, -6, -112, 14, -80, -59, -93, -10, -76, 59, -116, 32, -120, -31, 32, -13, 60, 82, 38, -34, -111, -28, -30, -34, 48, -23, 119, -56, -66, -84, -46, -112, -108, 124, 78, 104, -74, 83, 68, -46, 121, -34, -34, 52, 19, -124, -128, 103, -85, -58, -81, 69, 116, 107, 4, 49, -92, -94};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.661794303827);
    msg.setSource(64296U);
    msg.setSourceEntity(247U);
    msg.setDestination(27885U);
    msg.setDestinationEntity(179U);
    msg.origin.assign("APUJELMKVQKTTGHGMYTROAQAVHEHRYYMNTPTYIYCQUSRQNXFDTIOZMPZOJKKPHWWXSAFDNENLJVLZHWXTJHDCNDWPLRFZVPADHDBDECSEJNCGGVOMGUPIXIEUOIZKEGLBNUMAEPAALUVFLVZ");
    msg.htime = 0.698728824191;
    msg.lat = 0.298351167785;
    msg.lon = 0.18846034856;
    const char tmp_msg_0[] = {-87, 62, -69, 88, 77, 85, 28, 112, 43, -43, 125, -97, 39, 114, -15, 76, -81, 52, 113, -78, 71, -86, -9, -114, 70, 80, -121, 77, -121, 113, 106, -41, -97, 102, -24, 61, -99, -94, 10, 46, 2, -91, -127, -22, -109, -30, 53, 3, -84, -67, -92, -57, -3, -62, 100, 80, -57, 6, -91, -23, 21, 66, -71, -118, -19, -34, -126, 97, 26, -21, -34, 13, 111, 116, -14, -118, -107, -63, 88, 109, -58, -8, 1, 124, 117, -35, -114, -127, 65, -97, 86, -29, 94, -113, -11, -15, 60, -95, 24, 35, 41, 79, -123, 8, -70, -61, 91, -2, -88, 31, -90, -91, 73, -81, -59, 82, 114, -47, 123, -115, -19, 55};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.230584039886);
    msg.setSource(29792U);
    msg.setSourceEntity(253U);
    msg.setDestination(20492U);
    msg.setDestinationEntity(87U);
    msg.origin.assign("NILQOPEWQCHWRTTJZKEYSXOBSEVNYDYHLKUGSDUJCEATPJLUYAGMDDGZTGFQXFPRXFBMWMRVOMHZROQFMKXIT");
    msg.htime = 0.389504951944;
    msg.lat = 0.0996514718148;
    msg.lon = 0.501056503719;
    const char tmp_msg_0[] = {60, -98, -116, -49, -125, 59, -102, 100, 59, -121, -123, 94, 25, -8, -104, -61, -113, 59, -85, 21, 34, -84, -32, 88, 126, -43, -48, 24, 47, 38, -111, 62, 88, -71, -58, 1, -82, -97, -73, -68, -125, -12, 107, 10, -50, -111, -33, -102, -76, 27, -75, -108, -10, 20, 89, -119, 72, 62, 14, -128, -73, 81, -98, 125, -14, 40, -32, 85, -67, -75, -110, 26, -71, -29, 87, 37, 116, -30, -113, 122, -19, -106, 112, -110, -67, 111, -109, 120, 102, 65, -89, 18, -120, -8, -46, -94, 6, 51, 15, -77, -58, 11, -28, 10, -118, 58, 81, -68, 58, 100, 40, 90, -113, 58, -9, 125, -64, -89, 7, -67, -67, -67, -95, -66, -3, -122, -109, 70, -62, 54, 58, 5, -27, 42, -124, 125, 82, 116, 122, -8, -72};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.663236545429);
    msg.setSource(26907U);
    msg.setSourceEntity(56U);
    msg.setDestination(9554U);
    msg.setDestinationEntity(63U);
    msg.req_id = 10186U;
    msg.ttl = 5731U;
    msg.destination.assign("JENVWRNAWNJHKVOFAKGPKNNRWONNCSSEINVOQMQADBIQZOGPELBDRIUDZWYOERGQFHTGQTAYSEJVLHGYDBXIKAUSRPDVVWIPCASGKXJOTMMIWHCTPBUDUUUURFTHGLVDKMQFSJTZFXYKZEPCWMPBKGTFJGPCBLJQALICYCRDLXZXXHHXOOLDFOBNCKBMBZVRVESAHMMBGQXFHLTSYYPILFCOYETXWESAMWSUQUAF");
    const char tmp_msg_0[] = {86, 126, -100, -41, -63, 74, 19, -127, -21, 48, -2, -104, -51, -72, 58, 35, -124, 89, -112, 28, 61, 79, 58, 92, -96, -100, 56, -127, 18, 118, 85, -13, 89, -96, 117, -24, 28, 61, 118, -7, 23, -18, 20, -89, 87, 70, 54, 108, -13, -57, -70, 23, 44, 109, -91, -17, -95, 80, -53, 118, -119, 96, -76, 44, 107, -16, -50, 13, 16, -104, 41, -45, 91, -121, -49, 25, 10, 9, 49, 10, -68, -123, -31, 38, -80, -90, -40, 23, 15, -81, -87, -84, -28, -103, 35, 23, -89, -119, -117, 26, 27, -46, -2, -46, 112, -98, 41, -94, -14, 66, 18, 63, -27, -15, 17, -47, -98, 110, 66, -107, -70};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.593175286446);
    msg.setSource(61310U);
    msg.setSourceEntity(196U);
    msg.setDestination(44428U);
    msg.setDestinationEntity(58U);
    msg.req_id = 47124U;
    msg.ttl = 2928U;
    msg.destination.assign("HDZNGOAHVHQRBMNYSXBIPXYFWUKLWOQJAHFJDWTAIAOPXERSGNODHZQEPDEMMVFNTWMMDFQSXZGGYIIKWPDUGCVUYQNHCLTXBTEQJTJFCZIVICUPFQNEXMPROGJACKBWQAVBUGYOKLNLZZCXZALLYFTJZLEXHDMLIJLTRCDZYIPOLUMBRNFCOFEAWTSSJBSRIVCGYFNBSYPETNWOOHUUQKB");
    const char tmp_msg_0[] = {-123, -77, -9, 29, 52, 21, 65, 35, 119, 87, 78, -13, -15, -63, 0, 13, 122, -59, 43, 33, -87, -120, -29, 4, -15, -40, -7, -1, -21, 18, -67, 47, -79, 113, -107, -58, 29, -74, -99, -76, -45, 122, 3, -22, -46, 21, -49, -122, -92, 109, 108, 84, -35, -53, -87, -76, 94, 64, -73, 107, -118, 33, -11, 58, -59, 81, -10, 91, -51, 119, -74, 23, -32, -87, 81, -26, -74, -123, -89, 11, -4, 41, 95, -43, 102, -96, -30, 65, -78, 49, 46, 32, -116, 80, 116, 116, 15, -127, -123, -70, 77, 18, -6, 126, -7, 1, -56, 110, 84, 85, -94, -85, 44, 2, 70, 90, -97, 89, 106, -79, 124, 93, 35, -127, -116, -77, -93, 58, 32, -122, -27, -3, -127, 78, -91, -110};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.357617478978);
    msg.setSource(37343U);
    msg.setSourceEntity(161U);
    msg.setDestination(38947U);
    msg.setDestinationEntity(177U);
    msg.req_id = 36818U;
    msg.ttl = 61322U;
    msg.destination.assign("NUJJWEKCZSIQUFWYUSTQKXKYSHOAGECFHZGGSBCBUUEVVAIBYQYHJOUPENVSHTZVPKYJUFELRRCMRRMHDJDWLJGNYXIAW");
    const char tmp_msg_0[] = {-83, -125, -112, -101, -77, -19, 113, -64, -40, 92, -26, -76, -108, 119, -59, -34, 60, 34, 76, 11, -43, 87, 57, -45, -44, -15, 63, 58, -1, -8, -99, -117, -46, 88, 12, 24, -6, 74, 86, 9, 50, -91, -124, 101, -113, -88, -68, -46, -114, 42, 121, -19, -87, -62, -56, 121, -52, -64, 30, 126, -70, 80, 7, -86, -3, 124, -1, -122, -83, 7, 13, 64, -52, -77, 105, -88, 24, 106, 32, -119, 89, 103, 89, 26, 34, -108, -49, -56, -50, 97, -75, 32, -5, 117, 58, -34, 99, 49, 80, -117, -82, -83, 55, -84, 9, -85, -92, 121, 86, -89, 26, 0, -74, -8, -95, -53, -87, -9, -20, 102, -6, 36, -20, 54, -45, -28, -98, -105, -45, 55, -61, -107, -57, -58, -17, 29, 51, -46, -34, -75, 120, -4, 82, 75, -8, 44, 40, 113, -122, 45, -83, -14, 54, -101, 125, -93, -14, 87, 16, -97, 21, 34, -101, 63, -19, 105, 3, 63, -54, 73, 31, -78, 0, -11, 22, -37, 84, -21, 111, -94, 22, -116, -3, -42, 36, -126, 17, 126, 114, 117, 13, -34, -123, 67, 35, -75};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.00598550339987);
    msg.setSource(35961U);
    msg.setSourceEntity(113U);
    msg.setDestination(59684U);
    msg.setDestinationEntity(159U);
    msg.req_id = 34129U;
    msg.status = 107U;
    msg.text.assign("OSPSKBYGPSYTCORLCEUCAGKTMWYJXQZXEZDFDBNHYIHLQTQKOXLWBIYWOYZSCHTOPRTSIFXRPMKHUMWNAXYUBBFMVRHRPZKDVLWPKWFSLWTYLKAAZDRQQMAYVQPWBXSIANEBRENWGXZJBVFTAUQGCIDWJNFUFNLFXLEDGEUNTJUTQAKCELIPXDGVZSTKZDAPGX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.788862367099);
    msg.setSource(39760U);
    msg.setSourceEntity(121U);
    msg.setDestination(57910U);
    msg.setDestinationEntity(191U);
    msg.req_id = 62658U;
    msg.status = 51U;
    msg.text.assign("IIVEFAMGWJJTKLVIONRBHBODNOUENCPRYXZKLVLOBGFYFCXGAKPTPEGXXVIPRSQQFESKWQLEUHIBVXHVHBWXZRGCKCTKQNZCGNMTVHRNLFWKRPIRANMBQCUJTXYYFDZVFECHKJUVISPNDPBSMXEOETWYMDLJCSDNQPJUIUAHNWSBPJUMQWZRFGLJGSGZAMWQABSZKIFORVODAQZDIHEKHMTJYYCYFUCXLOMAWQHPSYWU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.755698934042);
    msg.setSource(16335U);
    msg.setSourceEntity(71U);
    msg.setDestination(50896U);
    msg.setDestinationEntity(67U);
    msg.req_id = 11213U;
    msg.status = 74U;
    msg.text.assign("AMFQHQSCGQPQAXXFUNFYNQUXOVUDFVMMDHXUJZPCTKHGBKDPYNTFNWVIKGJFPTQTMSHCTLFJWOSAHJIBYFOCOKJZJLRBPGZASELEZOHLQUVOWNCAEUXZNEPBSRIWAGHOREDYDPNTZMVBWJDUCJYRWRZPHOOQRDIIEMYYVBRCWGXXGDMTUDAKNLVETITIOVWTSJPWRVY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.404534443013);
    msg.setSource(18771U);
    msg.setSourceEntity(89U);
    msg.setDestination(22217U);
    msg.setDestinationEntity(240U);
    msg.group_name.assign("PHWOMBLWWTOYQILSRUSPLFLSIKLKDDADF");
    msg.links = 1598116014U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.492543413858);
    msg.setSource(53743U);
    msg.setSourceEntity(7U);
    msg.setDestination(25127U);
    msg.setDestinationEntity(38U);
    msg.group_name.assign("LAHGLVGUWBOQJBHFJNBLLFDCXZUKNOFCFWGUHDMZEMZXCZLTKIICPAUEXNFFMPCWJAPSNRUDHUZKJEYEOBVQVDNOCUJTXOUPGKBJGFBZBQISLITALOPMVBFGIHLOLSGRW");
    msg.links = 3680590070U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.766671919819);
    msg.setSource(42561U);
    msg.setSourceEntity(215U);
    msg.setDestination(39723U);
    msg.setDestinationEntity(207U);
    msg.group_name.assign("GVJOTYDESDDGQMVNOJVXOLTFQAYDAPBBFUILQAJGXMTKOFQVGDECIBHRKZCWFH");
    msg.links = 2013360663U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.30999858259);
    msg.setSource(48462U);
    msg.setSourceEntity(196U);
    msg.setDestination(7860U);
    msg.setDestinationEntity(95U);
    msg.groupname.assign("XWEQOADETFOWBNVCIBDIA");
    msg.action = 43U;
    msg.grouplist.assign("MXGANOQPSVTFYAXXUTVEQKTNKRDKPGWEMWYBXBURHVFORHDDRUDPBPZAVLZIMOBUORQFGVUEJKYNKBZNIQXMNJKGJD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.34485507981);
    msg.setSource(15540U);
    msg.setSourceEntity(87U);
    msg.setDestination(22623U);
    msg.setDestinationEntity(160U);
    msg.groupname.assign("PETXYEWRBZYZFZNUCDKQYSHHDKHPOIRXNCDRTVQIJLNDKVARTPCNKGSCHNBXYMRDAJUMYUWKXOUCCQPSDHJPQNMFWGAEZTWSQELIMRASIBIRSAJYOHSFUXMIIEHZKNBOVETQPGCFIBFBWOAMLXEOLVQLWDOQUCRWQHLKXBVYCEXLTKJJTVGOMJNLWVFYXIJTPGFUKGYNWGSJOGMDJVAUSEVHHSAEFZPPQKCTLZFDAAPZRMBTYLIXUGNBGFU");
    msg.action = 18U;
    msg.grouplist.assign("NQVFOBDXAOGVTPDKZPJKYVGOCDMOWCIKUHKQHDZBBBHBJXFRZJZNCZUJGLVWBYAIWNRTGXXTEFLWKCQCHNCVZETLBIKQNXMPUHTDZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.352349894539);
    msg.setSource(30106U);
    msg.setSourceEntity(23U);
    msg.setDestination(58117U);
    msg.setDestinationEntity(249U);
    msg.groupname.assign("EVRHFQPPOGTMRDPJHWBHXQFSRGPH");
    msg.action = 54U;
    msg.grouplist.assign("MMRSIXHLNJNAVVNQMJHDNHYIMJTXDXRDRHPDEAPZJEWWUGMXCSWMDFNNIFTRPOAJVGACDXSOOJEPQZOKVQCUPYGYCLTYTWRATLFYQWGFTWMASBHVWSWPHKXQGEFJCAUEZOYXBZNBNSYZAUKCB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.876031055123);
    msg.setSource(8534U);
    msg.setSourceEntity(53U);
    msg.setDestination(32356U);
    msg.setDestinationEntity(104U);
    msg.value = 0.0450277933072;
    msg.sys_src = 4927U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.102024095751);
    msg.setSource(50140U);
    msg.setSourceEntity(36U);
    msg.setDestination(3801U);
    msg.setDestinationEntity(94U);
    msg.value = 0.339988544467;
    msg.sys_src = 25284U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.305864494793);
    msg.setSource(28984U);
    msg.setSourceEntity(143U);
    msg.setDestination(36754U);
    msg.setDestinationEntity(179U);
    msg.value = 0.839650648442;
    msg.sys_src = 39235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.556905204272);
    msg.setSource(11712U);
    msg.setSourceEntity(155U);
    msg.setDestination(21730U);
    msg.setDestinationEntity(220U);
    msg.value = 0.525389826513;
    msg.units = 247U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.218193496855);
    msg.setSource(12687U);
    msg.setSourceEntity(244U);
    msg.setDestination(29506U);
    msg.setDestinationEntity(227U);
    msg.value = 0.38202991679;
    msg.units = 218U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.889844343377);
    msg.setSource(43038U);
    msg.setSourceEntity(204U);
    msg.setDestination(30672U);
    msg.setDestinationEntity(154U);
    msg.value = 0.68661273011;
    msg.units = 76U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.636587448359);
    msg.setSource(64830U);
    msg.setSourceEntity(165U);
    msg.setDestination(6020U);
    msg.setDestinationEntity(100U);
    msg.base_lat = 0.298894381777;
    msg.base_lon = 0.933146095477;
    msg.base_time = 0.555972435906;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 39651U;
    tmp_msg_0.destination = 4512U;
    tmp_msg_0.timeout = 0.856815913362;
    IMC::PlanStatistics tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("HWALEFXJSMVXXZGVJHYZMRGZNJKMQUPDQBPCJQQTXWYSFPVPRGIOWDNZINOSYKTEWQKHXUPXYLOLSIAFPMAWUBMJRGRQYMUOUMXQOCCTLODKHOEVTUAIRINHBFIUJGZKZTBAEASRDFFKMDKRMJEGHZNKTCVPOAVEVYWYRBXNHEORPCKHYDZBGCQNINSQGELXKEVFTWYDQPTISJUDJFHSLOUHGXFCVSLZMUFW");
    tmp_tmp_msg_0_0.type = 65U;
    tmp_tmp_msg_0_0.properties = 31U;
    tmp_tmp_msg_0_0.durations.assign("CDRYMXOGQABANZSREJTCZMOFPUUWLPTCVNVUELBKKQHCWUEXOWYTGXDPQQAWHJTRMYMHBMKDZSHOSHQAKXMDMYRJTENISRBFZBYOPUIAQFDNXSBTWOVVRYIFLOGANZDKKUMCLVEUVLZCENAGLEIGEWYDWGNTHFFLFINYSCFHIJQGERLSPQGXYFDSVZHKKEBXVLDPIMJUOMQYZXKDRCBCTVWOSRGT");
    tmp_tmp_msg_0_0.distances.assign("ONDTMEXQSUWYRTIEHGOVPXNKBPQQAWOTGCHMRISSJDPARXOY");
    tmp_tmp_msg_0_0.actions.assign("DGFBMIOCTMWGCDSADDPPFPHPLQEJQCAUTPITVGQCEFWXOWNYFTFKBJMHBNTTFHGMSZTBAZFZBRWRKMQZHHHXTSBAYDILODUCURRYSVVNVNHOPNUEIZVSCOEZXMGYAUIRXJREGWTNNLZXYDYKJQZGLNGHJZBKDOILJPGFELAWUBSVSAEQNBKUOPXSVJEQEIGCYFWEMLXRCKUUJYXOCIKPT");
    tmp_tmp_msg_0_0.fuel.assign("YPTKMAQANXDXJSVZEZENWGXVORYJITKABKAC");
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.458225634413);
    msg.setSource(20435U);
    msg.setSourceEntity(49U);
    msg.setDestination(35188U);
    msg.setDestinationEntity(45U);
    msg.base_lat = 0.741964486346;
    msg.base_lon = 0.577286282648;
    msg.base_time = 0.100546018337;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 60948U;
    tmp_msg_0.priority = 19;
    tmp_msg_0.x = -1281;
    tmp_msg_0.y = -1178;
    tmp_msg_0.z = -8935;
    tmp_msg_0.t = 10236;
    IMC::LeakSimulation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 246U;
    tmp_tmp_msg_0_0.entities.assign("CEPPLNSSMGKVWEIMBGWSPVMBHTOSQHDAUKOBQSTRLSEDDYLNUOPGHBJWERUQWGCV");
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.414552330212);
    msg.setSource(15736U);
    msg.setSourceEntity(23U);
    msg.setDestination(39529U);
    msg.setDestinationEntity(147U);
    msg.base_lat = 0.871969727471;
    msg.base_lon = 0.0124498914137;
    msg.base_time = 0.852067392629;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 44855U;
    tmp_msg_0.priority = -20;
    tmp_msg_0.x = -3610;
    tmp_msg_0.y = 3349;
    tmp_msg_0.z = -9800;
    tmp_msg_0.t = -15096;
    IMC::StorageUsage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.available = 1460789225U;
    tmp_tmp_msg_0_0.value = 5U;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.845602800457);
    msg.setSource(55188U);
    msg.setSourceEntity(3U);
    msg.setDestination(61957U);
    msg.setDestinationEntity(11U);
    msg.base_lat = 0.418768743724;
    msg.base_lon = 0.887227619353;
    msg.base_time = 0.851674281477;
    const char tmp_msg_0[] = {78, 92, 108, 66, 22, 86, -59, 23, -61, 38, 91, -89, 90, 114, 29, 84, 58, 107, -66, 18, 123, 5, -17, 8, 50, -75, -96, 107, 35, 97, -43, -36, 104, 112, 118, 57, -39, -23, -9, 39, 120, -11, -33, 11, 17, -34, -70, -100, 101, -69, 122, -122, 63, 50, -4, 74, 95, 16, 60, 53, -74, 106, -99, 40, -98, -4, -106, 48, -72, 11, 112, 28, -112, 30, -69, 73, -16, -48, -8, -11, 50, 126, 86, 108, -80, 112, 109, -112, 29, 89, 3, 117, 46, -16, 103, -41, 103, -28, 101, -107, -25, -46, -58, -93, -11, -3, 107, 5, -42, 113, 67, 23, -21, -99, 110, -1, 115, -92, 117, -124, -107, -110, -84, -80, 107, -10, 49, -20, 61, -62, 6, -114, -13, 13, -44, 77, 24, 46, -76, -103, -31, 67, 3, 49, -123, -50, 41, -106, 43, 27, 83, 27, 100, -70, -34, -107, 107, -28, 35, 1, 26, 82, -105, 78, -106, -27, -104, 1, -119, 98, -4, 46, -126, -109, 16, -36, 40, -67, 110, 53, 109, -88, -120, -6, 91, -63, 41, -123, 9, -85, 104, -11, -92, -68, -18, -59, 90, 9, 59, -92, 19, -95, 48, -95, -73, -33, 46, -60, -48, 103, 42, 53, 73, -12, -5, 81, 93, -16, -35, 5, 110, 58, 92, 103, 19, 14, -117, 32, 87, -52, -101, -1, -57, 9, -9, 76, 118, 20, 70, -68, -37, 72, -93, -11, -86, -47, -113, 104, 7, -56, -96, 9};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.980428744582);
    msg.setSource(64628U);
    msg.setSourceEntity(42U);
    msg.setDestination(31656U);
    msg.setDestinationEntity(181U);
    msg.base_lat = 0.411976429911;
    msg.base_lon = 0.0758409174275;
    msg.base_time = 0.489540869178;
    const char tmp_msg_0[] = {110, -98, 12, 29, -115, 119, 105, -82, 23, -14, -91, 7, -56, 10, -85, 71, -28, -27, 60, 111, -39, 1, 31, -5, -42, 57, 89, -85, 63, -127, -120, -97, 32, 49, 32, -32, -4, -70, 125, 69, -21, -97, -102, -105, -53, -39, 58, 123, -104, -82, -122, -41, -110, 99, -101, -4, -75, -123, 37, 115, -9, -126, -23, 63, 21, -28, 79, 98, -36, 2, -127, -23, -32, 5, 67, 85, -92, -27, 39, 70, -89, -125, -16, 6, -12, -99, -121, 26, 126, 95, 72, 91, -60, 59, -17, -76, -3, 90, 107, -65, 25, -2, 78, -61, -109, -19, 99, 9, 71, -22, -15, 36, -71, -17, 10, -88, -26, -91, -62, 63, 76, -107, -14, 116, -80, -119, -59, -22, -101, 93, -97, 107, -85, -67, -2, -113, 80, -84, 56, -22, 44, 101, 58, 0, 96, 64, -121, -11, -127, 10, -26, 47, 19, 39, 110, 25, -107, -96, -62, 113, 84, 74, 64, 26, -60, -97, 120, -48, 120, -48, 22, -92, 15, 9, 119, -97, -40, -80, 106, 12, 82, -35, -24, -104, -33, -113, -111, 125, 20, -58, -117, -48, -20, 89, 121, 61, -53, -4};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.717237079519);
    msg.setSource(13688U);
    msg.setSourceEntity(153U);
    msg.setDestination(42553U);
    msg.setDestinationEntity(65U);
    msg.base_lat = 0.633332194256;
    msg.base_lon = 0.1596812562;
    msg.base_time = 0.593776729799;
    const char tmp_msg_0[] = {66, 100, -126, -92, -45, 109, -63, 42, -44, -3, -76, -108, 52, -97, -49, 20, -118, -20, 22, -93, 110, -16, 46, -7, -88, -60, -111, -19, -126, 115, 113, -43, -47, 54, -52, -46, -8, 72, -68, 113, 55, 23, 4, 6, 54, 88, -86, 111, 48, 121, -50, 20, -84, -10, -107, -69, 57, 19, 30, 33, 106, -15, -79, 57, -124, -109, 98, -113, -23, -89, -42, -103, 123, -117, 84, 11, 16, 36, -44, -42, 101, 60, -127, -11, -110, -44, 98, 80, 11, -24, 39, -122, 103, 53, 33, 47, 85, -18, 17, -121, 31, -72, 48, -109, 48, 28, 123, 22, 103, -87, -28, -126, 99, -20, -58, 73, 33, 20, -30, -40, 82, 38};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.174663192926);
    msg.setSource(33053U);
    msg.setSourceEntity(116U);
    msg.setDestination(60460U);
    msg.setDestinationEntity(230U);
    msg.sys_id = 39072U;
    msg.priority = -13;
    msg.x = 13492;
    msg.y = -21492;
    msg.z = -4794;
    msg.t = -5191;
    IMC::VtolState tmp_msg_0;
    tmp_msg_0.state = 28U;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.640120962465);
    msg.setSource(29341U);
    msg.setSourceEntity(97U);
    msg.setDestination(23240U);
    msg.setDestinationEntity(4U);
    msg.sys_id = 54124U;
    msg.priority = -19;
    msg.x = -24910;
    msg.y = -9264;
    msg.z = -30612;
    msg.t = -26910;
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 235U;
    tmp_msg_0.goal_id.assign("VDWUEMWWXFDKPOFFEGTLTZYXEMQPAKHNGSCITJTMZMRPLKOEUGOZCTKNAYVPXJSBSSOIMHEIWIYSSZTPTCFSUGQCPVLCGKGSRQJASUAWDJMHRWJVDPFYKRDQKZTXOMBAYMPJHEFANNRYAGIQVWALUXNILSQDLXMEMYCHROXHYKQVGUBDZZGBIAKTVFBDNCZTBPLUQYQEVOGCDQF");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("ASNTCTQQFOFRQKUAZHONFBCLYZHWVTQGDTLYOMNOVSRSLPBCMFFMAMULJHXQVVEZEFVARAZXJKOPRTHYMPRGHJXRWRJHIOZSNISYFXHMKQXOUNFLARALBDHEUXIAWKLZKPLUNGINKETWBDMZIJEPUJEGHBFVLIDKZWCPMMXIIYDUDEIGQJKUCQRIDPDPBODWSEJUCSTCTNBJQHXQLVKOAYDCCPVKGEG");
    tmp_tmp_msg_0_0.predicate.assign("YHGJDLNZQPCHZISXYFFUVVKAQTFIJVWRQMTRSGIAUAUENZELGTXGNBIDEYJFXCZQYNMXWKUICRPTRFSISGMBCHYJPJYLOWRZKOKXEDUQUFCONDQAKMLJOBMHIRWTFZXVCOKSLWXLPSAPGCFNXKEBULVOKDFTLEWQJMZSBNJCLEPPSYVITDQJEHUQKZGHTVORGUAGIDJPMYNBAYEXHKXGVWSOMSEUMDPVT");
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.478035873472);
    msg.setSource(25886U);
    msg.setSourceEntity(238U);
    msg.setDestination(32665U);
    msg.setDestinationEntity(166U);
    msg.sys_id = 26863U;
    msg.priority = 32;
    msg.x = 1261;
    msg.y = 4575;
    msg.z = 25921;
    msg.t = 26081;
    IMC::HistoricTelemetry tmp_msg_0;
    tmp_msg_0.altitude = 0.74928790908;
    tmp_msg_0.roll = 36285U;
    tmp_msg_0.pitch = 57919U;
    tmp_msg_0.yaw = 2087U;
    tmp_msg_0.speed = 4054;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.385933294992);
    msg.setSource(54455U);
    msg.setSourceEntity(201U);
    msg.setDestination(44806U);
    msg.setDestinationEntity(43U);
    msg.req_id = 36694U;
    msg.type = 122U;
    msg.max_size = 8782U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.554104302657;
    tmp_msg_0.base_lon = 0.516257644553;
    tmp_msg_0.base_time = 0.363679344346;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 32490U;
    tmp_tmp_msg_0_0.priority = 99;
    tmp_tmp_msg_0_0.x = -28668;
    tmp_tmp_msg_0_0.y = -16104;
    tmp_tmp_msg_0_0.z = -3576;
    tmp_tmp_msg_0_0.t = 14853;
    IMC::GroupStreamVelocity tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.826182063103;
    tmp_tmp_tmp_msg_0_0_0.y = 0.653509969634;
    tmp_tmp_tmp_msg_0_0_0.z = 0.695100615514;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.950143589472);
    msg.setSource(48854U);
    msg.setSourceEntity(249U);
    msg.setDestination(24262U);
    msg.setDestinationEntity(35U);
    msg.req_id = 22798U;
    msg.type = 226U;
    msg.max_size = 40884U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.32277056672;
    tmp_msg_0.base_lon = 0.799010957576;
    tmp_msg_0.base_time = 0.681211491425;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.0662748720219);
    msg.setSource(2204U);
    msg.setSourceEntity(41U);
    msg.setDestination(42630U);
    msg.setDestinationEntity(36U);
    msg.req_id = 37364U;
    msg.type = 153U;
    msg.max_size = 8757U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.446984973387;
    tmp_msg_0.base_lon = 0.812636967641;
    tmp_msg_0.base_time = 0.372640294741;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 2223U;
    tmp_tmp_msg_0_0.destination = 49128U;
    tmp_tmp_msg_0_0.timeout = 0.480894858874;
    IMC::PlanStatistics tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.plan_id.assign("LAHYOOBWFAWQIXEPQEOWDLAIAMNLKBGFGVWVKXXUJOZIYYNFFVOVPVNNBFGTIJDYUYTKZCFRWZXSIRXSKUMBQTSEFRGYWSEZJKQMREBSQHUYPNAHBEQKDDHL");
    tmp_tmp_tmp_msg_0_0_0.type = 21U;
    tmp_tmp_tmp_msg_0_0_0.properties = 31U;
    tmp_tmp_tmp_msg_0_0_0.durations.assign("JHSOCITUHFBJYHDIJRGXNDTNMGCNULZHWNITKFNCXVPEPKLVLJMJGUGSAJYNTZQUWTFHSMBFKBINPTLOBNGAAWEBSYZGQSIEVOUBCMXI");
    tmp_tmp_tmp_msg_0_0_0.distances.assign("ATNZSODDJIHUMFVNLYKNQWWGYTVEHXYCGKKHHTEWXQLSRWQJVHDRXCLYVVPNJUCPBXEETGOIMFOPMDPWUTVEBJKDROYPZXKZMXHETUPPLQSF");
    tmp_tmp_tmp_msg_0_0_0.actions.assign("ZDQAWCAPUDWXDYKICXFZVIPVBNLFPJYMXACDRBNTJWUNONYJXRSSGPMFELSHIHYWKNGAQRLMDVBCMDOTLRQTHMHLLVTPAKKOTHXDEZECPBWOFNJPLYR");
    tmp_tmp_tmp_msg_0_0_0.fuel.assign("EFAPWXVFPKOZNJGYUGJOWMGJUKSBJJQHGOQSXTPNMXKDRYOLEBFAYLQPYLDBATKYCHNYNISMWNNQZLTRCIMTZKOQLXVSKWRRHUBNWOFMFFKGXMUICHKGCRZZAAVCHHWWDCHVLSJJRWPEARXDIJZSOSBFBHLIOUZLMHGTQMVREUTLBGVECPQXNGNREYIAUEZNCLOV");
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.0131278894361);
    msg.setSource(61774U);
    msg.setSourceEntity(70U);
    msg.setDestination(34451U);
    msg.setDestinationEntity(16U);
    msg.original_source = 5807U;
    msg.destination = 48943U;
    msg.timeout = 0.965599748886;
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("ZSYQKXHXLHMEZKGQZKOFKTKSEBWQNFVLRVVLHDRUYWAHWIOGIDYYAUTOXGDVRLRNNBPGXJQHMJDIBJCWLATWPLYXRINSNUPVCHRVGFBCQOFIGSGPZIPESETQYZUJWENSMBRVUOCJCANFYJOOTQVGDITIJMSBGZTRJSPMUTVEQMYTODYIPTNVFENFXFCACKZCQABYZRQHHOCWNHHXMLKWJDDASAJDLK");
    tmp_msg_0.op = 7U;
    tmp_msg_0.lat = 0.0589908872929;
    tmp_msg_0.lon = 0.965554027354;
    tmp_msg_0.height = 0.25464806319;
    tmp_msg_0.x = 0.828023022136;
    tmp_msg_0.y = 0.622093855099;
    tmp_msg_0.z = 0.623372944066;
    tmp_msg_0.phi = 0.517740802873;
    tmp_msg_0.theta = 0.800046522843;
    tmp_msg_0.psi = 0.464750040267;
    tmp_msg_0.vx = 0.680991361994;
    tmp_msg_0.vy = 0.770596195122;
    tmp_msg_0.vz = 0.67149375773;
    tmp_msg_0.p = 0.198046566767;
    tmp_msg_0.q = 0.197616508931;
    tmp_msg_0.r = 0.305081368268;
    tmp_msg_0.svx = 0.485368207483;
    tmp_msg_0.svy = 0.494669137995;
    tmp_msg_0.svz = 0.266864984575;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.863152112268);
    msg.setSource(26464U);
    msg.setSourceEntity(114U);
    msg.setDestination(34259U);
    msg.setDestinationEntity(219U);
    msg.original_source = 34865U;
    msg.destination = 21078U;
    msg.timeout = 0.177635502773;
    IMC::UsblAnglesExtended tmp_msg_0;
    tmp_msg_0.target.assign("GFEOOCQXDIBDWAWSHNTLDULAKZVMQVVRFGKAANMQRBSBRFOXKPPGRNZCQBCJIXWEIMGPDYUEJRCVHVKVZRMRUDYWDONIYBKNQTJLJFOXTIFOAIKTJNUGZQZPLWTSIVVMOCUWYDMIESRWUJACCSRJTBJEECKUGHYPEHVWTUGXOAPGPSXZHMNTLFHLOULDTK");
    tmp_msg_0.lbearing = 0.989417996396;
    tmp_msg_0.lelevation = 0.474380860385;
    tmp_msg_0.bearing = 0.833786119251;
    tmp_msg_0.elevation = 0.245164415055;
    tmp_msg_0.phi = 0.943010871984;
    tmp_msg_0.theta = 0.786571982682;
    tmp_msg_0.psi = 0.865514258368;
    tmp_msg_0.accuracy = 0.0362522777083;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.903636889915);
    msg.setSource(32351U);
    msg.setSourceEntity(232U);
    msg.setDestination(44825U);
    msg.setDestinationEntity(11U);
    msg.original_source = 58932U;
    msg.destination = 53575U;
    msg.timeout = 0.710864105755;
    IMC::NeptusBlob tmp_msg_0;
    tmp_msg_0.content_type.assign("BSDWOUIOMIQOZHJPEEPGCEQPHFJHHIWZZQBSNSNUGPTKIYPTSZVBNCENGQYHMMDIHWBQKUHSKCBAGLXAJVMYYXOYAJGBCWVOFAQOHXPCGLBVLKOEZJQDWEJGTSQJOULUWRPYXPFVZTKMAVXOLCWDJRPLRZRTFQRXGNTTUMGFBOEMAICDHIZRYCYF");
    const char tmp_tmp_msg_0_0[] = {16, 111, 80, 90, 97, -86, -30, 84, 52, 35, -118, -14, -81, -96, 82, 44, -16, -98, -7, 34, -24, 51, -81, 124, 86, -62, -33, 18, 10, 94, -97, 12, -118, 54, 111, 24, -125, -112, 119, 7, 46, 9, 39, -87, 13, -18, 101, -83, -87, 68, 10, 114, 25, 14, 78, 1, -105, 71, 116, 112, 59, -99, -66, -84, -51, -44, -27, 67, 4, 109, 104, 102};
    tmp_msg_0.content.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.941388502596);
    msg.setSource(775U);
    msg.setSourceEntity(196U);
    msg.setDestination(55066U);
    msg.setDestinationEntity(96U);
    msg.type = 118U;
    msg.comm_interface = 64443U;
    msg.model = 16182U;
    msg.list.assign("KWQTAZSODOPBQAOPOWXQLLITPDQFDLQWEDJCYFCIPCKBCSJRYTJUXKUKHPDHITGDEWJGKBXVGGZTMGWFSVAPZHRAAFFXLWPMJOANYBGEEYKSQZOINNRISUMFTLUWRVYCLIVZHRTKBCZWUNTXVXELQIERUXVIVFNKPHBMFHMFFZLDVRDCZOYGJEAYSNAYJNODHGXBUNERNWKSHTJGMEJUPWZSMRHQDJIOIBQOMEYGVNUS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.689118389082);
    msg.setSource(64340U);
    msg.setSourceEntity(106U);
    msg.setDestination(4522U);
    msg.setDestinationEntity(177U);
    msg.type = 182U;
    msg.comm_interface = 50504U;
    msg.model = 64819U;
    msg.list.assign("RRMOJMRNTKABUECVNBORBDOYZHMJSNQUFOLXXSGGQXREIKVWHTAYMNCVWIWFNTUKLRIQVAHGODDITJOCAQPJZBQQLEKZLXOLZYUJUYFDJHSPRPEQGVRDRJPFVKPTOZHWDEISUIYJKANBVWHTPGKXPNFVLFUSIQLCZHMWFXSN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.455662177799);
    msg.setSource(60145U);
    msg.setSourceEntity(238U);
    msg.setDestination(12972U);
    msg.setDestinationEntity(172U);
    msg.type = 79U;
    msg.comm_interface = 62781U;
    msg.model = 61794U;
    msg.list.assign("QUKVXONFWRJUVQXCBSAKBDUKMHUQWNTOQRLOIOAVIQTVXEOPNEVARPCDNQLKSAXVTPNREUOYCXFGLEWXCGWFMGCTITVCSKFQBODGJLJSRMIMEQTYZUFZUHIROTJSKJNCIZSPUGZMZLNBRTFFWKTDEWLEPEZAOHYHBYXPVFDKTHKAPHSICAJKPLPMDWEVNJBGRZZBJYRFQXMDQGWUHMDVYYNXMYXWWIMZBIRHCGELPYNCYGSJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.637348880913);
    msg.setSource(21969U);
    msg.setSourceEntity(174U);
    msg.setDestination(35322U);
    msg.setDestinationEntity(142U);
    msg.type = 134U;
    msg.req_id = 2957498511U;
    msg.ttl = 49460U;
    msg.code = 102U;
    msg.destination.assign("MHTANFDLSDMKOKNQYNPPSRRXUWVQTIXOLRDUZAGSVX");
    msg.source.assign("LLIQHYVIHKBQOJFEXILBGBRJRDVMZZCYSSWKPIUGAAFBAZGEIECYBJRLGKQFFPUBCROIZKAQTXKHUBGSSMFSORPPBNNHWWWTQTLGFONUSMXJJNZFDAVYHKPNZJJVYCGSXECWRMTVBTWQXJVMJPJLTLCWWXKHOANCPDAKTUTNNZMTWNCVOWCGPIMMEPFDORNHMEDAXVCOOZFYVQQAUXUDLFEVEILQEUIDYQSMGLRRX");
    msg.acknowledge = 101U;
    msg.status = 36U;
    const char tmp_msg_0[] = {-96, 114, -88, -63, 108, 69, 0, -47, -19, -115, 13, 121, -99, -109, -31, 77, 67, -16, -126, 114, 85, 83, 126, -108, 75, -65, 63, 32, 100, 41, -41, 53, -8, -93, -118, -69, -101, 97, 33, 34, -44, -98, 43, -23, -107, -79, 85, -29, -110, 106, 90, -9, 76, 18, -103, -32, 72, -126, -73, 5, 25, 50, -6, 105, -82, -125, 59, 82, 116, 0, 124, 40, -23, 66, 49, 81, 48, 51, -69, 121, -49, 34, -106, -51, 97, -55, 123, 21, 34, 4, -26, 9, -111, 24, -34, -86, 69, 64, -112, 45, -37, 62, 90, -90, 103, -93, -93, -68, 42, 51, 69, 48, -84, 90, -70, -72, -16, 47, 95, -114, 87, -46, -25, -24, -34, -59, 53, 116, -89, -103, -128, -25, -94, -89, 75, -4, -22, -64, 64, 120, 82, -102, 114, 113, 125, 18, -41, -15, 15, 9, 37, -68};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.813815536487);
    msg.setSource(40649U);
    msg.setSourceEntity(223U);
    msg.setDestination(22595U);
    msg.setDestinationEntity(189U);
    msg.type = 252U;
    msg.req_id = 3384200378U;
    msg.ttl = 60664U;
    msg.code = 249U;
    msg.destination.assign("EZXLRFBSFQYWJXVABYLFZZGTZPPNTFEGNYGXTWNWALFQYNIODHDP");
    msg.source.assign("PVMNLOWXOYIWFUFOZIVMPIGMG");
    msg.acknowledge = 185U;
    msg.status = 77U;
    const char tmp_msg_0[] = {-103, -38, 121, 22, 51, 63, -41, 106, -45, -107, 4, -76, -78, -122, -39, 104, -20, -89, -23, -26, 62, 15, 41, 106, -16, -108, 39, 111, -5, -76, 58, 34, 105, 0, -29, -84, 9, 101, 1, -86, 37, 84, 39, 38, 118, 68, 121, 74, -91, 47, -117, -25, -26, -98, 30, -128, 69, 75, -67, 110, -73, -97, -105, 71, 115, -50, -122, 106, -36, 91, -8, -113, -12, -59, 46, -61, 0, 27, 85, 65, 77, -14, -105, -72, 2, -121, -19, -78, -75, 10, 65, 31, 89, 69, -26, 13, 92, 3, -22, 61, -22, -71, 52, 86, 73, 81, 27, -127, -27, -55, -9, -49, 8, 19, -121, 80, 54, 80, 21, -18, -116, -67, 51, 60, -78, -81, 70, 88, -20, 55, -33, 116, 28, 75, 125, -124, 81, -54, -28, -117, -116, -54, 89, 7, 117, -58, 45, 74, 86, -52, -27, 83, -87, -96, 41, -72, -55, -90, 126, 50, -82, -120, -19, -58, -100, -41, -112, -47, 12, -92, -110, -111, 78, 123, 114, 98, 68, -1, 9, 7, -25, -42, 86, -13, 61, 38, 84, 29, 8, -87, 72, -63, 98, 57, 11, 108, -24, -15, 30, -78, 54, -61, -107, -34, -67, 17, 31, -5, -39, 71, -47, 87, -27};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.926843292517);
    msg.setSource(15150U);
    msg.setSourceEntity(190U);
    msg.setDestination(62169U);
    msg.setDestinationEntity(229U);
    msg.type = 147U;
    msg.req_id = 3239681841U;
    msg.ttl = 30996U;
    msg.code = 22U;
    msg.destination.assign("XGXSGWWGEVHHDZBCEHVYZOKLMNNMRBIJIZIFXAGWBZVDTQIUETNYAKXWGCVSSUVADQRHERXQTVNUSOZPFJHLZNAOFJUUGPSLRZFPMFPKWBCOJZLCOGQQWTPBQWO");
    msg.source.assign("DWEASIVHDCGHOITSUOHOANQMZKXHKJQEULPAREXRWPZCLKHUWPLTBNBEDTDLURWPWHCJDPSCECJFWYITZGJWJEXOZBYYAVSTGUVJOKESQUFVFCRSUFZXUVXNKOJNGXKCNWNUSYTJEQTGOFBAMRRIFMITAMQR");
    msg.acknowledge = 195U;
    msg.status = 164U;
    const char tmp_msg_0[] = {39, 105, 95, -108, 107, -17, -34, 121, -71, -7, 6, 44, -1, -54, -47, 118, -98, 45, -103, -110, 104, 109, 90, -6, -99, -65, -101, -19, 3, -107, 8, 108, 45, 107, -66, -71, -18, -122, -40, 106, -76, 51, -95, -26, -72, -105, -75, 80, -30, 114, -27, 51, -101, 46, -126, 113, -42, -9, -105, 116, -9, 91, -59, 54, -29, -34, -123, -109, -31, 123, -15, 5, 87, -55, 20, 115, -106, -50, -87, -27, -97, -101, 64, -105, -89, 108, -125, -1, -45, 80, 124, 69, -33, -17, 17, -54, -128, 51, 11, 117, -53, 26, -110, -77, 119, 81, 23, 63, 16, -101, -77, -87, -124, -39, -104, 15, -55, -112, -39, -50, 30, -4, 2, -32, 88, -100, 20, -38, 37, -56, 21, -14, -87, -81, -8, 34, 88, 21, -47, 35, 12, 60, 74, -104, 7, 88, 23, -51, 82, -77, -121, 111, 126, -34, 12, -46, 66, 36, -51, -98, 43, 18, -117, 64, 86, 113, -25, -7, 96, 73, -3, -51, 74, 104, 17, 89, -70, -120, 29, 102, -27, -104, 35, 97, -105, 79, 118, 92, -11, -122, -69, -78, -66, 21, -100, 80, 121, 86, -86, -119, -25, 81, -49, -105, 87, 98, 15, -9};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.866440502513);
    msg.setSource(65481U);
    msg.setSourceEntity(98U);
    msg.setDestination(35560U);
    msg.setDestinationEntity(244U);
    msg.id = 237U;
    msg.range = 0.262440638827;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.40438491174);
    msg.setSource(38894U);
    msg.setSourceEntity(100U);
    msg.setDestination(21330U);
    msg.setDestinationEntity(164U);
    msg.id = 193U;
    msg.range = 0.271023787016;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.260662143622);
    msg.setSource(22112U);
    msg.setSourceEntity(158U);
    msg.setDestination(62020U);
    msg.setDestinationEntity(24U);
    msg.id = 158U;
    msg.range = 0.685071815824;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.327353333247);
    msg.setSource(42236U);
    msg.setSourceEntity(47U);
    msg.setDestination(235U);
    msg.setDestinationEntity(50U);
    msg.beacon.assign("EQLAOHACYLFGJJKDLXNGFVUPNKYQTUAZEUTSKPKBPJAOFMUHICVIWTEPYGNXRQMBHHBYGQLZFMMRZOHNIRCSOTUATYAIQKGIPTUTMKIGWYEFIJSFWZVLKWBHWGVEVDEOMRQXCZUJRODSTDJBLRLASAGYXXNZWSATVWDKLCKGZBHNHXZIVXRNICJYDQPYPG");
    msg.lat = 0.229092205166;
    msg.lon = 0.026688963083;
    msg.depth = 0.912730080704;
    msg.query_channel = 181U;
    msg.reply_channel = 147U;
    msg.transponder_delay = 184U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.72849803267);
    msg.setSource(517U);
    msg.setSourceEntity(121U);
    msg.setDestination(10514U);
    msg.setDestinationEntity(120U);
    msg.beacon.assign("QQBMGTZEFCAHOAATGDXYJIQPCUQILOPRIAAGXN");
    msg.lat = 0.867744236096;
    msg.lon = 0.793391200156;
    msg.depth = 0.36772885673;
    msg.query_channel = 232U;
    msg.reply_channel = 39U;
    msg.transponder_delay = 7U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.142866131399);
    msg.setSource(5698U);
    msg.setSourceEntity(139U);
    msg.setDestination(52393U);
    msg.setDestinationEntity(188U);
    msg.beacon.assign("ZFCYUYNTEYKUOIZIVAFSDIEPAMGRRBDCTKFSBQIJZBSTEVCNKPLZHWSJOLIYNQBLLRVEXXGKDJVQAK");
    msg.lat = 0.107535070151;
    msg.lon = 0.526406097768;
    msg.depth = 0.670198826424;
    msg.query_channel = 74U;
    msg.reply_channel = 38U;
    msg.transponder_delay = 159U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.281477883178);
    msg.setSource(267U);
    msg.setSourceEntity(237U);
    msg.setDestination(11208U);
    msg.setDestinationEntity(215U);
    msg.op = 79U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.943931931359);
    msg.setSource(34103U);
    msg.setSourceEntity(33U);
    msg.setDestination(48706U);
    msg.setDestinationEntity(179U);
    msg.op = 63U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CQDZXPENSPIO");
    tmp_msg_0.lat = 0.216768690536;
    tmp_msg_0.lon = 0.999322314286;
    tmp_msg_0.depth = 0.918902484575;
    tmp_msg_0.query_channel = 148U;
    tmp_msg_0.reply_channel = 50U;
    tmp_msg_0.transponder_delay = 207U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.16498261014);
    msg.setSource(37495U);
    msg.setSourceEntity(176U);
    msg.setDestination(48236U);
    msg.setDestinationEntity(61U);
    msg.op = 140U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TIPUIEFOTARLGZMODNEKIVPSCIQOHXTOWCDEVQMHMCKPIHDQSSLDJZZJPPABFEHHSDALGLNJHFWSHKETNJIVSCPV");
    tmp_msg_0.lat = 0.433072451093;
    tmp_msg_0.lon = 0.0829356383268;
    tmp_msg_0.depth = 0.624041533954;
    tmp_msg_0.query_channel = 68U;
    tmp_msg_0.reply_channel = 103U;
    tmp_msg_0.transponder_delay = 234U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.96918335131);
    msg.setSource(37924U);
    msg.setSourceEntity(191U);
    msg.setDestination(29553U);
    msg.setDestinationEntity(71U);
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("HOFDDUFPDSPPQDQTSCWGGJLUANGCDFULOGUFNDCSZISABPMLVSOVHTWFNRNOYRTJWRGTVXDHMTIFZZOKRYDJZKPHKYEYEHJOPJJYMAQFXBUFBMNVICHBPWXJINHWETBZNOWLPKGKYAYUIDEHTQXQQPHYKXVWZOCCWLETTRCIQQW");
    tmp_msg_0.type = 69U;
    tmp_msg_0.properties = 197U;
    tmp_msg_0.durations.assign("TPUBQTOOVJQSLEKKNIHSRFPHCBXIXDGZNGEDGHSVMNFJIPMTVOCBPMZPVLACBWUJMRBARKXJSLQFOWSVNKXAUKBOIAGAMERWJKQBEYQIJCUGNXYHAXUTZKMZLHXFWTWRDGSFYGCRQDMMYKTDLCUYCQAVZYNSMRFPJAWOZYMJPCEZHDTVWXIPBHFQXLELPXQZDFGJSEJOOBDYOVGLRWNFUIUQZWIGYEVRNWBDFHSRUHVTENTYEDL");
    tmp_msg_0.distances.assign("AGFVWNNLNCHKNYEDIHRIRHTBXMCGLCWCOVEEVZWQFGBPBVVVEYHWRT");
    tmp_msg_0.actions.assign("TNRCXNYBGHJYZKDSBCYMKEDAGAVUMGWBNHQBRJQXHZFWMZSGDCRCLCVHGVDFORLBWOYMVOZWICFCXJWPEPQAGDMATYDUEOOWMPRUVXYBUHOIHLITAHGFEOJQSDARBMPLATD");
    tmp_msg_0.fuel.assign("CJRTOCNLLQFFDOTWLIYGOBIUZFQPRXMXGMYSLAKRITYNNKTFOMEOUBZZWJQHEFGYLSSEBIWSOQNOXGEPWNSXJBRFKEADMWHWPUNPPIXSHZERSPEPBZPIQXAOACMWJHIAVQMBNRJWYCYVJMBCVKVAINEUSDCTGHGVRCQXXKAQAUIBJBNDLDCWMYZGULYQUDYCRKHAVRGYGFBVTXIFDRJGPVHMMUTZSLDPTFKNLKEVKHJJFOWUZTAOUKEXQDHLZ");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.402943997407);
    msg.setSource(57093U);
    msg.setSourceEntity(198U);
    msg.setDestination(32783U);
    msg.setDestinationEntity(93U);
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 239U;
    tmp_msg_0.htime = 0.882464456521;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.614115031396);
    msg.setSource(7634U);
    msg.setSourceEntity(101U);
    msg.setDestination(15994U);
    msg.setDestinationEntity(113U);
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.918645355569;
    tmp_msg_0.lon = 0.40929317208;
    tmp_msg_0.speed = 0.863852937071;
    tmp_msg_0.speed_units = 211U;
    tmp_msg_0.limits = 163U;
    tmp_msg_0.max_depth = 0.851933419773;
    tmp_msg_0.min_alt = 0.619069219037;
    tmp_msg_0.time_limit = 0.187689833173;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.620764576451;
    tmp_tmp_msg_0_0.lon = 0.158570031028;
    tmp_msg_0.area_limits.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.controller.assign("ZJIOOQDKQOXFKMNPWHKIXOGUORIHGGGVTCKKNUTLAJBUTDUMSCKVPVQIJXLPYGITXTSWUMFPCALAYEYKJCTHQFPBXVGONSCWEVXTHRLWVDBGOBZBDEAHWIBQVUWRRZMDUSFDWIRASWCDETDPXRJGKOEPMMYSFPGMJJWZHJBFYTQKNHTYIAUENLHAUYNMZFSBRZXAGXQEQSRDKCFLULJCOZAQLFDVVSNPNMJ");
    tmp_msg_0.custom.assign("CNWBTYIMMKSDQCJXGELXUAVEQXITSYEHJMBOPJCRTFDTVBVYLPAGIIEEBFDUQKWMGNMCLGYQHSORGJVHCGPAVSOAXOHTIOXDHFFNUWPCDONWFIRK");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.516436863798);
    msg.setSource(63487U);
    msg.setSourceEntity(155U);
    msg.setDestination(898U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.478355906975;
    msg.lon = 0.959498930427;
    msg.depth = 0.886433027861;
    msg.sentence.assign("JISKLGNOBSJWUWYWRZZLVGLAKVFAHMRLSMUMWCKPRTFOZRMKCOYHGPUGCVEBVLJQWDFUECGFBZUSPECHVTXZEAVTDZEDFHGJQHRJGKNRPHXEURAJGMKIBUONNOPNXTJQVSQTYZBUYERKIOTIXAKJOAJHJIGEKXYDFHDSGFIVCNLQMPOFBKESXLSMYDIIAWWQMDUIABVLTZTCAPHFUYADQZXFSTZNN");
    msg.txtime = 0.490593667071;
    msg.modem_type.assign("HEXMPUTQMCDPXESVHZGHGFXCBFFVYDITRUTQGSYEJBHOESLTOGBSOLCPPCIFVFFVPWNONNGALWNKJKHXABRMXXPNWUODYHBGBZSJEAAMIRDGXIZTAPBCYCAMSANYLUBHRDIDSWJLQYTQKHNEVSRHAUZVMOWCZEFNZOKCIJJFBMDWETEYKPVOIJXFZSWKRSVITLYHUDGLFYQBUCKRONJTZMQGAWKPDRRLQUTQZUVJIKVCUZXXDWEJOPAYN");
    msg.sys_src.assign("LIIEGXTSVSSGGDPKVXGECUXJIKLRQFHZAOQYMNTAIWPXSZJRDNLQTUUHZPIXDBREQOFPXFHFNXZIUGMREUSAHWKFSNCDQTJHJVBTNYFEDKNNZILGASLMOEYQAOYYOOEDPT");
    msg.seq = 44397U;
    msg.sys_dst.assign("RNIDBKTXFXSEGJQZNNYADAPGWNGMWGLQOBBOGGSYONKVXTCDOMUQKFZQOZD");
    msg.flags = 203U;
    const char tmp_msg_0[] = {43, -27, 4, 117, 122, 11, -104, -122, 6, -118, 43, -45, -9, 115, 57, -11, 44, 117, -86, 43, -115, -45, 66, 19, -29, -2, 62, -19, 34, -96, -18, -107, 80, 113, -82, -63, 9, -56, -50, 68, 64, 18, -10, 1, 3, 2, -26, -118, -89, 55, -88, -84, 79, 115, 26, -44, -73, -87, -49, 114, -125, 71, 0, -74, -22, 0, -12, 32, 36, -106, -73, 20, 34, -48, -88, -55, 108, -4, 60, 91, -85, 108, 27, 93, -23, 1, -101, 9, -53, -68, 86, -37, 110, -71, -116, -30, -86, 50, 92, -116, -80, 91, 31, -9, 13, 103, 4, 105, 16, -106, 39, -13, -54, -45, 103, 11, -1, -51, -82, -122, -37, 25, -43, -55, -53, 111, -48, 37, 44, 18, -101, 58, 116, -116, -62, -90, -6, 108, -100, 85, -57, 0, 110, -14, -69, -62, 71, -123, 85, 43, 91, -20, 42, 89, 24, -96, -116, -44, 118, -93, 107, 40, -54, -45, 85, 77, -123, -86, -105, 90, -121, -123, 42, -98, 119, 74, -20, 65, 8, 24, 64, 3, -40, -85, 7, -108, -5, 101, -112, 107, -37, 45, -1, 117, -67, 115, -32, -118, 39, 65, -71, -120, -128, 119, -24, -63, -79, -95, 21, -95, -77, 10, -96, -100, 67, -6, -94, -61, 1, 86, 47, 4, 71, -49, 28, 75, 120, -84, -121, 96, 12, -52, -63, -76, -102, 3, -115, 41, 108, 17, -11, -112, -50, 37, 87, -82};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.864817665913);
    msg.setSource(21143U);
    msg.setSourceEntity(75U);
    msg.setDestination(45705U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.271745220641;
    msg.lon = 0.974994523731;
    msg.depth = 0.136755977816;
    msg.sentence.assign("PKQXDXZNKCGJMNXQDSOJBRQNPFSUUVRRGDQZRZHEWVEUAGUDDILVWDKSVZYCVYAPNYRYGNTCHFLRJHEMVLBSXRDGAJGYAEPPDMFSNZBFTSKCSHWHQBCTAKZPQMMPHOQAEWFEUONKSMXOHZSIYFKTOCJHUNTPYGLQITEIZBOYMLODQBCIFXWKRLKAJJLFVITBFLVJVPNH");
    msg.txtime = 0.7923491566;
    msg.modem_type.assign("VVJGUWUXKGNSRCTZYE");
    msg.sys_src.assign("YQZSVUNRHQEMDLQMEBOMIUDDWTCLTSGLUWZZJMCJWCHWCIWTLTLXZFKNQDBBYNWRMXYRTMGGBKJTHIYKBRRARAIEMXNSQITPJVYSDOMACKVJLSXRHTJOJUVZEVSNWJKUKPXFWOUMEPZMYYOAUBQOHFHWFSSELVUZXPLKURIECFQVFZSHPQXKINADFKBNCPDKXQGNVNBPYPLGPOUGCAJ");
    msg.seq = 50391U;
    msg.sys_dst.assign("USFRRDTGEXUXUWNSGOXFTBFCSLJOKIQMGAZDVOLCQCMQMLZBSZJDNLYTHCWBYJWMISNYLBMAQMVEUHPFTKVACDJZBETJIRYWWYGREHWTKUQYNCCZAKGTFAHXIEWREGNGDUIJDCEIIVPZQRZIMJEONJJOBVBBOGTKXANFYMBYMQUXNXTF");
    msg.flags = 216U;
    const char tmp_msg_0[] = {77, -34, 109, -76, 42, -67, -30, 50, 56, -21, 8, -94, -38, 1, 7, 122, 64, 66, -87, -125, -64, 54, -67, -34, -43, -72, 119, -95, -100, -36, -23, 15, -67, 69, 88, -105, 109, 80, -33, -73, 21, 54, 14, -57, 36, 116, -7, -81, 124, -3, -34, 80, -94, -29, -84, -22, -39, -30, 23, -122, 49, -44, 14, 67, -47, -11, -34, -83, 80, 113, 78, -103, -62, 4, -42, 91, -80, -28, -88, -127, -7, -33, 89, 126, -89, 30, -30, 53, 92, -104, 73, -73, 103, -67, -59, 58, -95, -105, 64, -85, -58, -38, -34, 11, 79, 72, 116, -94, -119, 10, -112, -112, 79, 19, -93, 10, 44, -44, 99, -55, 45, 116, 72, -82, 2, 65, -83, -13, 74, 66, -91, -92, 115, 37, -26, 75, -84};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.64633142339);
    msg.setSource(37908U);
    msg.setSourceEntity(26U);
    msg.setDestination(55472U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.961696944046;
    msg.lon = 0.497713540322;
    msg.depth = 0.572447421926;
    msg.sentence.assign("DLIGOBHMCUAELJMNCZFTGJRAFDVGVWILRIKMNZLBGKBEZZRYOACGOJORGSJSQNJQTSRKFQYBCOQGFMVOFISAPRDHDSTVHKWIJWPPMITUCEPSYHGLTVDIASQDEJHYLSEZVELVYHYXAWNNWPQJZYMZARTHXBPNWXOLSPKZBUKPIDCZXKHWDFYBFUMDXPNTFONIUNBCWTCVUUWBIHRCMQASTXFGUKNBHAKFJTXWUOEAMEZLDOYJK");
    msg.txtime = 0.0145059851459;
    msg.modem_type.assign("ZFFTWAGIMNKESBKJDIPPKEQELDOLOCYDAXPMIJBXGUUNCVNAZUOROHVHLWYJJQVVWHZXLKVMMNVDPHWATVENWBYUASRKTDJITKUCRDRDYFNWCCQ");
    msg.sys_src.assign("JADTJPYLRVEAERQUXCAEPCSNOLBOLLNKGLXSWJFPSWHEGATHDPRQOOVLBSRRMOAGIZRFDBVJADYJVNSGPJJKKKXTMIKDVQUUCYIGLTQXSSKICVUFHUEZZFXTBMFOBTJDHL");
    msg.seq = 7023U;
    msg.sys_dst.assign("EDAYBZNRQFVLGYUQFERNMNZIOLVTTKJGBEPMYFDFOZHWXEEBBGFBKVSGZBCHRNMIAVDYMICTPR");
    msg.flags = 89U;
    const char tmp_msg_0[] = {-116, 122, -90, 113, -31, 114, -113, -14, 39, -59, 27, 85, -122, 45, 116, -17, -61, 24, 48, 17, 111, 40, 4, -107, 35, -76, 69, 62, 102, 26, -3, 29, 113, 2, -19, 37, 119, -50, 21, 30, -75, -113, 119, -121, -80, 41};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.00573499203793);
    msg.setSource(5737U);
    msg.setSourceEntity(237U);
    msg.setDestination(60344U);
    msg.setDestinationEntity(20U);
    msg.op = 252U;
    msg.system.assign("KBTKVEXNBHBQQWGOPNAIQJPCEERJZTWZEEBUHFBVVYXFKDMQEBRKWSGUFNRUOLZNCCLWDNNUXWRPCYXMKHDFWLGAEKFYCUXIIJDSBGJAAYJPAMRAOLEQMBYWCVZWHDDSNLUBZOXCSOYSFDDTISKIIYVMPHLATIGRVSHOOLMUHBGYNOXJESTXZVLVJMMNCHZZFPAOAIQZ");
    msg.range = 0.503065132597;
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 77U;
    tmp_msg_0.plan_id.assign("HUXQSIRIYQWLOMFNVAMURHIKIZCLWDCORSSKGVNFBPNZPWJFUCXJFIJEYQXPVPXGGVCBDVVKTLQKBJVGHHDETJVOPZGAXQGVTUIQDOZSRNIASNDUMQSRQYHLYKUEFENG");
    tmp_msg_0.plan_eta = 646896761;
    tmp_msg_0.plan_progress = 0.737886225425;
    tmp_msg_0.man_id.assign("DYEZNUZHNRKOUNSUDAUBAGUCJGIBHHFY");
    tmp_msg_0.man_type = 18027U;
    tmp_msg_0.man_eta = 96757230;
    tmp_msg_0.last_outcome = 242U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.628594339004);
    msg.setSource(23114U);
    msg.setSourceEntity(214U);
    msg.setDestination(13392U);
    msg.setDestinationEntity(90U);
    msg.op = 22U;
    msg.system.assign("VKVZHWIUQYHVTRMWQFFXUXYFSZAIELVRLTVJMHAYZTGSGDIRXCNYNDAPTE");
    msg.range = 0.907956524031;
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 157U;
    tmp_msg_0.range = 0.348758731084;
    tmp_msg_0.acceptance = 98U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.485697091468);
    msg.setSource(34247U);
    msg.setSourceEntity(15U);
    msg.setDestination(54548U);
    msg.setDestinationEntity(2U);
    msg.op = 172U;
    msg.system.assign("CMUPHDLXRZEBEDYYHNDPVTOOQNYYXPRGYZUKZZETDOZGKRJQNXIPZCOGIVYXWBAWENPIQNHMJBBBYOLHUOUHCAQJBHIDSFVJATMWAHVMTRYXTMTIVCHMCJOANFRCVIKFEUDJSWASDQFSIKPJBLUBWO");
    msg.range = 0.227614992508;
    IMC::Redox tmp_msg_0;
    tmp_msg_0.value = 0.222094107317;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.735715768905);
    msg.setSource(25149U);
    msg.setSourceEntity(25U);
    msg.setDestination(28165U);
    msg.setDestinationEntity(161U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.867997152946);
    msg.setSource(2465U);
    msg.setSourceEntity(202U);
    msg.setDestination(17531U);
    msg.setDestinationEntity(138U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.15587911717);
    msg.setSource(43721U);
    msg.setSourceEntity(180U);
    msg.setDestination(8582U);
    msg.setDestinationEntity(153U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.652235757503);
    msg.setSource(33050U);
    msg.setSourceEntity(27U);
    msg.setDestination(36702U);
    msg.setDestinationEntity(194U);
    msg.list.assign("MRREIXOJPFGSVBMYSENCEOAKLQKBEDOMKGAGMLTZXWIKQIVVSCDYQCMTBTDKGJWFCLCQCBRZGTZYBYRCLFQURSFIDHRSXHUNWXHBAPDFUGURXBXZUVVSUVMPNVCPSPGTSLWNEMGOZXJCPMBHEIKDIYRJOFHFTEJYQJMNKHZTDCDUPUOANWLGUBZWQLFTEWFSAWVAHWQVVDGEYZRLIOJBMQEJKAZANQJNT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.352084024476);
    msg.setSource(19655U);
    msg.setSourceEntity(243U);
    msg.setDestination(5611U);
    msg.setDestinationEntity(52U);
    msg.list.assign("DWLFRYKVSPJJBTNLSQXZVAYKPQIPQBWVFSGHEKQYOCVQNLNOEYLPPMRQMJFAZYEKACIFLKUGODGTHSZCEPWFRLTWRMCNUSRVMOAWIDYAKILXGZCLGTHJTEBIDVQMBJNBAXEFCVPULWUCMTTGRYKWUGKIEIGMUHOOPVOTSDJJUYXFHAGDFBZDPXRZOULKCXHZCENXODYFSSAUEEIWTMYGHVJBUDWSMHSROQXHDBWNBXJMXN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.482605894606);
    msg.setSource(10031U);
    msg.setSourceEntity(207U);
    msg.setDestination(41050U);
    msg.setDestinationEntity(108U);
    msg.list.assign("NTOUTZYJHAXKOIAMIBUINWNCCMZKRAVTYFRIVYDPEYQAYADSWCGHUYIMEXALUBNFIGRMJHKODHXQMNLSDJSZUEOVJFGSTGILDZOWFMSNEBERRBCDUIYCMJPDEZWXTHVGBXPXEVWFZPSEGVQGJZKORHEDNHSGUBMPCOKD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.839039312558);
    msg.setSource(64522U);
    msg.setSourceEntity(241U);
    msg.setDestination(2655U);
    msg.setDestinationEntity(142U);
    msg.peer.assign("SLMOLXTTYHQLCPPBXKYNBQTSWTCYZIBNSERYQQXSOXUQRFYIVPJXONVGFJHOGLURUEOBMDITAWEYUOGUKXTZXUMHEFMOREPNFEARPJHVQSEZYRAHJGGBZFDWQLNBUZVDRGOPCNT");
    msg.rssi = 0.75655480169;
    msg.integrity = 44605U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.0289642984373);
    msg.setSource(41494U);
    msg.setSourceEntity(113U);
    msg.setDestination(7593U);
    msg.setDestinationEntity(73U);
    msg.peer.assign("OWAJUXGCDJKWNTOFAAOCXBPGFTUVQIBKIFZQKSFOJCVLBMJYRIXJVZQZFASYTLMBQKXLGVHWPUAOJCCNFLLRCPESRLQIXXYZIXMDOAISHPIQDBEVEWEKZNDLMSRXWUGIMKPHM");
    msg.rssi = 0.748238024112;
    msg.integrity = 6972U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.123362896676);
    msg.setSource(13795U);
    msg.setSourceEntity(106U);
    msg.setDestination(52067U);
    msg.setDestinationEntity(114U);
    msg.peer.assign("QUUCCAILJDOLHNHCMCOTVRXAHMFLEBQJHFQMFAJUYYZIHQPTKONKRBKHZXEUVTZZSUALZYQLICTTWEEXFGEZLNLZQCQSFJBYARXWRNQNVAVSYEZPLSORKJZWYJNFAITKDRXWPIGTRODKUGSXBPEMIUSWWZPYHBQPVBPLMDOKXIAGNIJGWYTDS");
    msg.rssi = 0.194299929873;
    msg.integrity = 62375U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.184230679293);
    msg.setSource(9383U);
    msg.setSourceEntity(165U);
    msg.setDestination(52637U);
    msg.setDestinationEntity(187U);
    msg.req_id = 61671U;
    msg.destination.assign("TFWCAPRASDIXNPILMVNNEZLXUKXADFUNMLGGRRXZXOGGIQQNBTAHZPXDPUAVJRKLHZAKKRSVCSUHFRWKLFIYFHJCXSWJAICVSALTRXTYVQVTPWPXOSBOLJPSKVMYNUBMTFYGKEEDINPKWJHUFQOEJYXUMZOGNDHDDZH");
    msg.timeout = 0.149832035024;
    msg.range = 0.269400933109;
    msg.type = 182U;
    IMC::Force tmp_msg_0;
    tmp_msg_0.value = 0.454444393236;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.820666855786);
    msg.setSource(19367U);
    msg.setSourceEntity(52U);
    msg.setDestination(45042U);
    msg.setDestinationEntity(84U);
    msg.req_id = 35404U;
    msg.destination.assign("DQGSKPLTTSMCUSQCNAXVFQQRBBBZDHQPAEXZFDAETA");
    msg.timeout = 0.59277701297;
    msg.range = 0.533817992847;
    msg.type = 238U;
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 175U;
    tmp_msg_0.file.assign("BVRJTGNITGRSJYEGXWVSWOFMQPQNIXEJTZBKXEQEMKZBXATAYFACDDQDLLUPOWDCLDJAFBIORWRIEWAPAFUYMJWSHHHAZFNHMMBOYKPRECKYXIRYHOVPGNIWVGJLZVWHPSFOYTMTQHNBSFIHFNCZVAFPOGJNXUJRYXDPWGYIJDSUEVCCTQQMKKJUPMUIZAPSDLDOMQSTNSLKCOFQHNSMKZ");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.91662457999);
    msg.setSource(14582U);
    msg.setSourceEntity(134U);
    msg.setDestination(63772U);
    msg.setDestinationEntity(207U);
    msg.req_id = 41604U;
    msg.destination.assign("UBYXLMVYSEDTFMFAVLSQPSIZMIXDHBSQPGFYGNLVTALANAAPOGOYYTHRZQJNROPBIYUSMWFCTQWFRINDJOGSZXUKGVYJFZKRNZRCDHJDEEUGCYEOUNJSXDOIKDFIFUQAXRXFQTZYCVMEPVTKXEEDSEKAKCROQBAMLBOQMEAWNMGBWHKWUTZGTZLHUPCHJLDEWKNKWLWYQXICGHIFSWHPKJJ");
    msg.timeout = 0.508875626279;
    msg.range = 0.198233541554;
    msg.type = 192U;
    IMC::StopManeuver tmp_msg_0;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.500710296038);
    msg.setSource(35435U);
    msg.setSourceEntity(43U);
    msg.setDestination(60889U);
    msg.setDestinationEntity(67U);
    msg.req_id = 33199U;
    msg.type = 148U;
    msg.status = 3U;
    msg.info.assign("HPHWVHZMMCHVKGGYWXVOULEOVDSGZCXJGMAWMKFUYIOWFFDZDEICIQSRQQWPTRRWAUSHPVFVCJAUWXJTSRANTTBYSLPNDSQED");
    msg.range = 0.344705265288;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.355078667662);
    msg.setSource(34279U);
    msg.setSourceEntity(210U);
    msg.setDestination(19841U);
    msg.setDestinationEntity(101U);
    msg.req_id = 62005U;
    msg.type = 218U;
    msg.status = 204U;
    msg.info.assign("KVBPBQPUSCHKXMMNOETDDHXJFTGYLIZQHHVPXVAMZPEEWIQUDWXGJYZVAUEKZECBIAWIODCBOKRIGCWQXSJLDVGBRPDWOXYKTSCUSEATKMGHXKGTPNVNULTNQNFYMW");
    msg.range = 0.789272176311;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.982387758643);
    msg.setSource(27049U);
    msg.setSourceEntity(203U);
    msg.setDestination(42736U);
    msg.setDestinationEntity(144U);
    msg.req_id = 37564U;
    msg.type = 219U;
    msg.status = 147U;
    msg.info.assign("MUCCXEXPEQNSIHYBUOTFEKWGGVZOXZAHCZURVOAQETHRUPJBPOVL");
    msg.range = 0.558987526618;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.32204122941);
    msg.setSource(25997U);
    msg.setSourceEntity(214U);
    msg.setDestination(39088U);
    msg.setDestinationEntity(53U);
    msg.value = -23142;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.885954866571);
    msg.setSource(38274U);
    msg.setSourceEntity(225U);
    msg.setDestination(33481U);
    msg.setDestinationEntity(13U);
    msg.value = 13704;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.991528679568);
    msg.setSource(19509U);
    msg.setSourceEntity(235U);
    msg.setDestination(49807U);
    msg.setDestinationEntity(181U);
    msg.value = -25908;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.702348146017);
    msg.setSource(48154U);
    msg.setSourceEntity(51U);
    msg.setDestination(18546U);
    msg.setDestinationEntity(244U);
    msg.value = 0.685831700201;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.673492047693);
    msg.setSource(10601U);
    msg.setSourceEntity(13U);
    msg.setDestination(21081U);
    msg.setDestinationEntity(86U);
    msg.value = 0.504485288297;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.564584822398);
    msg.setSource(26131U);
    msg.setSourceEntity(203U);
    msg.setDestination(20088U);
    msg.setDestinationEntity(54U);
    msg.value = 0.927237664325;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.124816931179);
    msg.setSource(49511U);
    msg.setSourceEntity(160U);
    msg.setDestination(39407U);
    msg.setDestinationEntity(1U);
    msg.value = 0.249682550815;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.0468690895269);
    msg.setSource(26069U);
    msg.setSourceEntity(53U);
    msg.setDestination(27207U);
    msg.setDestinationEntity(192U);
    msg.value = 0.469226931215;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.109720275705);
    msg.setSource(53755U);
    msg.setSourceEntity(209U);
    msg.setDestination(6322U);
    msg.setDestinationEntity(109U);
    msg.value = 0.648632653392;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.102554153598);
    msg.setSource(33224U);
    msg.setSourceEntity(132U);
    msg.setDestination(58997U);
    msg.setDestinationEntity(32U);
    msg.validity = 57726U;
    msg.type = 92U;
    msg.utc_year = 30599U;
    msg.utc_month = 64U;
    msg.utc_day = 117U;
    msg.utc_time = 0.489549251495;
    msg.lat = 0.847291311005;
    msg.lon = 0.368768974755;
    msg.height = 0.341726087114;
    msg.satellites = 6U;
    msg.cog = 0.849632539255;
    msg.sog = 0.402059983768;
    msg.hdop = 0.262630684298;
    msg.vdop = 0.00242020736792;
    msg.hacc = 0.15938282978;
    msg.vacc = 0.193863742774;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.255674188016);
    msg.setSource(38682U);
    msg.setSourceEntity(180U);
    msg.setDestination(40876U);
    msg.setDestinationEntity(73U);
    msg.validity = 22429U;
    msg.type = 21U;
    msg.utc_year = 32819U;
    msg.utc_month = 156U;
    msg.utc_day = 116U;
    msg.utc_time = 0.440068860592;
    msg.lat = 0.685962020782;
    msg.lon = 0.936732877222;
    msg.height = 0.110758871511;
    msg.satellites = 179U;
    msg.cog = 0.934209651297;
    msg.sog = 0.881614287314;
    msg.hdop = 0.891586808218;
    msg.vdop = 0.235180240177;
    msg.hacc = 0.164574884609;
    msg.vacc = 0.799321737666;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.495619699245);
    msg.setSource(18676U);
    msg.setSourceEntity(86U);
    msg.setDestination(57831U);
    msg.setDestinationEntity(77U);
    msg.validity = 16034U;
    msg.type = 11U;
    msg.utc_year = 37965U;
    msg.utc_month = 45U;
    msg.utc_day = 156U;
    msg.utc_time = 0.141658746814;
    msg.lat = 0.485235513121;
    msg.lon = 0.476328068444;
    msg.height = 0.321899539007;
    msg.satellites = 122U;
    msg.cog = 0.627976418017;
    msg.sog = 0.125416941637;
    msg.hdop = 0.385117746405;
    msg.vdop = 0.292493787983;
    msg.hacc = 0.384536400255;
    msg.vacc = 0.393973098748;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.635518509623);
    msg.setSource(52399U);
    msg.setSourceEntity(195U);
    msg.setDestination(63839U);
    msg.setDestinationEntity(62U);
    msg.time = 0.779232428629;
    msg.phi = 0.631795738826;
    msg.theta = 0.422280428856;
    msg.psi = 0.280401689339;
    msg.psi_magnetic = 0.0704320302239;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.602038008678);
    msg.setSource(65258U);
    msg.setSourceEntity(204U);
    msg.setDestination(51033U);
    msg.setDestinationEntity(53U);
    msg.time = 0.490785575637;
    msg.phi = 0.559691932156;
    msg.theta = 0.770082572105;
    msg.psi = 0.798277809865;
    msg.psi_magnetic = 0.164228920696;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.627623227036);
    msg.setSource(64937U);
    msg.setSourceEntity(65U);
    msg.setDestination(48954U);
    msg.setDestinationEntity(233U);
    msg.time = 0.524127818884;
    msg.phi = 0.417371367082;
    msg.theta = 0.16563965665;
    msg.psi = 0.547490668799;
    msg.psi_magnetic = 0.0076832596608;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.63584376693);
    msg.setSource(34695U);
    msg.setSourceEntity(26U);
    msg.setDestination(38980U);
    msg.setDestinationEntity(80U);
    msg.time = 0.543243658758;
    msg.x = 0.558396481564;
    msg.y = 0.0907717404809;
    msg.z = 0.729916716573;
    msg.timestep = 0.0812792230186;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.766955411035);
    msg.setSource(20047U);
    msg.setSourceEntity(162U);
    msg.setDestination(55526U);
    msg.setDestinationEntity(74U);
    msg.time = 0.992001013956;
    msg.x = 0.213237554651;
    msg.y = 0.853106710467;
    msg.z = 0.463406593005;
    msg.timestep = 0.28026767522;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.83379290761);
    msg.setSource(23175U);
    msg.setSourceEntity(159U);
    msg.setDestination(55409U);
    msg.setDestinationEntity(27U);
    msg.time = 0.323600258585;
    msg.x = 0.615965408591;
    msg.y = 0.0832079493896;
    msg.z = 0.965478029617;
    msg.timestep = 0.570595622922;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.485522585346);
    msg.setSource(59613U);
    msg.setSourceEntity(24U);
    msg.setDestination(25368U);
    msg.setDestinationEntity(128U);
    msg.time = 0.310287150005;
    msg.x = 0.163801740741;
    msg.y = 0.503624255767;
    msg.z = 0.0867616523268;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.93216336048);
    msg.setSource(32731U);
    msg.setSourceEntity(75U);
    msg.setDestination(44739U);
    msg.setDestinationEntity(162U);
    msg.time = 0.962462888368;
    msg.x = 0.963582068039;
    msg.y = 0.774950627645;
    msg.z = 0.806084733258;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.117607918286);
    msg.setSource(13901U);
    msg.setSourceEntity(174U);
    msg.setDestination(19747U);
    msg.setDestinationEntity(153U);
    msg.time = 0.489599134527;
    msg.x = 0.200272526737;
    msg.y = 0.67724404081;
    msg.z = 0.661196744362;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.101718935246);
    msg.setSource(14821U);
    msg.setSourceEntity(104U);
    msg.setDestination(8180U);
    msg.setDestinationEntity(90U);
    msg.time = 0.375278022199;
    msg.x = 0.134177645506;
    msg.y = 0.805952039737;
    msg.z = 0.715933862886;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.911740952723);
    msg.setSource(61897U);
    msg.setSourceEntity(47U);
    msg.setDestination(10087U);
    msg.setDestinationEntity(97U);
    msg.time = 0.718148258501;
    msg.x = 0.308428985395;
    msg.y = 0.106714510607;
    msg.z = 0.348087316382;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.648715776361);
    msg.setSource(34490U);
    msg.setSourceEntity(112U);
    msg.setDestination(57321U);
    msg.setDestinationEntity(70U);
    msg.time = 0.190630955445;
    msg.x = 0.347870675769;
    msg.y = 0.0981040903603;
    msg.z = 0.349091852688;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.00773376876711);
    msg.setSource(25592U);
    msg.setSourceEntity(102U);
    msg.setDestination(44404U);
    msg.setDestinationEntity(19U);
    msg.time = 0.87282518146;
    msg.x = 0.955458236911;
    msg.y = 0.601703547275;
    msg.z = 0.196282036406;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.624367389145);
    msg.setSource(5272U);
    msg.setSourceEntity(137U);
    msg.setDestination(65377U);
    msg.setDestinationEntity(157U);
    msg.time = 0.868380065329;
    msg.x = 0.125313722651;
    msg.y = 0.610762271087;
    msg.z = 0.0759112742211;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.351501977393);
    msg.setSource(59095U);
    msg.setSourceEntity(211U);
    msg.setDestination(56746U);
    msg.setDestinationEntity(179U);
    msg.time = 0.903954974511;
    msg.x = 0.23676568744;
    msg.y = 0.631458376757;
    msg.z = 0.725287592018;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.44532631421);
    msg.setSource(54979U);
    msg.setSourceEntity(167U);
    msg.setDestination(27446U);
    msg.setDestinationEntity(176U);
    msg.validity = 103U;
    msg.x = 0.839412819065;
    msg.y = 0.881210442606;
    msg.z = 0.891145684257;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.297175617775);
    msg.setSource(39798U);
    msg.setSourceEntity(73U);
    msg.setDestination(32146U);
    msg.setDestinationEntity(126U);
    msg.validity = 147U;
    msg.x = 0.720894565979;
    msg.y = 0.346409153753;
    msg.z = 0.507881244976;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.436040098591);
    msg.setSource(64352U);
    msg.setSourceEntity(145U);
    msg.setDestination(33949U);
    msg.setDestinationEntity(72U);
    msg.validity = 146U;
    msg.x = 0.901232814336;
    msg.y = 0.592773621859;
    msg.z = 0.95343312303;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.0533869775715);
    msg.setSource(10413U);
    msg.setSourceEntity(186U);
    msg.setDestination(35405U);
    msg.setDestinationEntity(175U);
    msg.validity = 200U;
    msg.x = 0.16592438073;
    msg.y = 0.355343595085;
    msg.z = 0.864000381921;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.767543056266);
    msg.setSource(60732U);
    msg.setSourceEntity(241U);
    msg.setDestination(18901U);
    msg.setDestinationEntity(219U);
    msg.validity = 190U;
    msg.x = 0.00525833115223;
    msg.y = 0.410993499425;
    msg.z = 0.615853473659;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.808780857974);
    msg.setSource(25414U);
    msg.setSourceEntity(29U);
    msg.setDestination(49243U);
    msg.setDestinationEntity(205U);
    msg.validity = 248U;
    msg.x = 0.629348385166;
    msg.y = 0.131630284512;
    msg.z = 0.547222911465;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.369409895901);
    msg.setSource(36023U);
    msg.setSourceEntity(189U);
    msg.setDestination(25337U);
    msg.setDestinationEntity(76U);
    msg.time = 0.463305631731;
    msg.x = 0.21930164775;
    msg.y = 0.715792407825;
    msg.z = 0.548863721125;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.54384474593);
    msg.setSource(29711U);
    msg.setSourceEntity(81U);
    msg.setDestination(19504U);
    msg.setDestinationEntity(41U);
    msg.time = 0.383364986584;
    msg.x = 0.912580545799;
    msg.y = 0.881432157808;
    msg.z = 0.276454213477;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.81769609066);
    msg.setSource(46225U);
    msg.setSourceEntity(138U);
    msg.setDestination(45060U);
    msg.setDestinationEntity(94U);
    msg.time = 0.461981057376;
    msg.x = 0.864118906116;
    msg.y = 0.424400829813;
    msg.z = 0.00369064692563;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.428992895592);
    msg.setSource(3027U);
    msg.setSourceEntity(135U);
    msg.setDestination(17787U);
    msg.setDestinationEntity(1U);
    msg.validity = 244U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.861634029828;
    tmp_msg_0.y = 0.0569065690595;
    tmp_msg_0.z = 0.384592328953;
    tmp_msg_0.phi = 0.475297069379;
    tmp_msg_0.theta = 0.658591627098;
    tmp_msg_0.psi = 0.730812080624;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.027485186517;
    tmp_msg_1.beam_height = 0.00746691685786;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.105550651484;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.55772350913);
    msg.setSource(19396U);
    msg.setSourceEntity(154U);
    msg.setDestination(60313U);
    msg.setDestinationEntity(186U);
    msg.validity = 152U;
    msg.value = 0.0804882244822;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.274328820603);
    msg.setSource(62215U);
    msg.setSourceEntity(82U);
    msg.setDestination(21043U);
    msg.setDestinationEntity(66U);
    msg.validity = 200U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.514532497379;
    tmp_msg_0.beam_height = 0.570627575949;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.598452111739;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.955342620834);
    msg.setSource(4621U);
    msg.setSourceEntity(69U);
    msg.setDestination(51761U);
    msg.setDestinationEntity(53U);
    msg.value = 0.811974223144;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.0595790555738);
    msg.setSource(34154U);
    msg.setSourceEntity(0U);
    msg.setDestination(57631U);
    msg.setDestinationEntity(227U);
    msg.value = 0.284160027867;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.536968123373);
    msg.setSource(44259U);
    msg.setSourceEntity(242U);
    msg.setDestination(53842U);
    msg.setDestinationEntity(14U);
    msg.value = 0.38512006074;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.930308265511);
    msg.setSource(35640U);
    msg.setSourceEntity(222U);
    msg.setDestination(38938U);
    msg.setDestinationEntity(217U);
    msg.value = 0.491469152752;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.172090968853);
    msg.setSource(13471U);
    msg.setSourceEntity(30U);
    msg.setDestination(16504U);
    msg.setDestinationEntity(115U);
    msg.value = 0.639428197333;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.975797050115);
    msg.setSource(42704U);
    msg.setSourceEntity(247U);
    msg.setDestination(25828U);
    msg.setDestinationEntity(215U);
    msg.value = 0.451102337373;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.611682732956);
    msg.setSource(54356U);
    msg.setSourceEntity(125U);
    msg.setDestination(13749U);
    msg.setDestinationEntity(193U);
    msg.value = 0.326876827622;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.413694576647);
    msg.setSource(15910U);
    msg.setSourceEntity(238U);
    msg.setDestination(48299U);
    msg.setDestinationEntity(50U);
    msg.value = 0.97180121673;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.111179913366);
    msg.setSource(11771U);
    msg.setSourceEntity(17U);
    msg.setDestination(33123U);
    msg.setDestinationEntity(39U);
    msg.value = 0.0318685987857;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.861306641276);
    msg.setSource(42869U);
    msg.setSourceEntity(80U);
    msg.setDestination(34763U);
    msg.setDestinationEntity(221U);
    msg.value = 0.478235527805;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.713614009922);
    msg.setSource(58251U);
    msg.setSourceEntity(241U);
    msg.setDestination(65477U);
    msg.setDestinationEntity(141U);
    msg.value = 0.82470352748;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.110743685085);
    msg.setSource(54132U);
    msg.setSourceEntity(37U);
    msg.setDestination(32062U);
    msg.setDestinationEntity(63U);
    msg.value = 0.230735507352;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.0313021243096);
    msg.setSource(35972U);
    msg.setSourceEntity(83U);
    msg.setDestination(60565U);
    msg.setDestinationEntity(176U);
    msg.value = 0.234691207362;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.314766469296);
    msg.setSource(55696U);
    msg.setSourceEntity(97U);
    msg.setDestination(3898U);
    msg.setDestinationEntity(200U);
    msg.value = 0.209766248721;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.196818777645);
    msg.setSource(27195U);
    msg.setSourceEntity(163U);
    msg.setDestination(48827U);
    msg.setDestinationEntity(6U);
    msg.value = 0.52350446187;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.0364211886027);
    msg.setSource(17340U);
    msg.setSourceEntity(81U);
    msg.setDestination(12832U);
    msg.setDestinationEntity(66U);
    msg.value = 0.519158347713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.378975951337);
    msg.setSource(36319U);
    msg.setSourceEntity(144U);
    msg.setDestination(34453U);
    msg.setDestinationEntity(195U);
    msg.value = 0.65176710413;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.333934933813);
    msg.setSource(38890U);
    msg.setSourceEntity(7U);
    msg.setDestination(3080U);
    msg.setDestinationEntity(163U);
    msg.value = 0.503357357443;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.930957110938);
    msg.setSource(59510U);
    msg.setSourceEntity(38U);
    msg.setDestination(53004U);
    msg.setDestinationEntity(163U);
    msg.value = 0.85920255986;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.294727043533);
    msg.setSource(8785U);
    msg.setSourceEntity(76U);
    msg.setDestination(2424U);
    msg.setDestinationEntity(185U);
    msg.value = 0.19595558137;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.387348648664);
    msg.setSource(32343U);
    msg.setSourceEntity(122U);
    msg.setDestination(45513U);
    msg.setDestinationEntity(25U);
    msg.value = 0.98097865802;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.968612240044);
    msg.setSource(39736U);
    msg.setSourceEntity(15U);
    msg.setDestination(9703U);
    msg.setDestinationEntity(225U);
    msg.value = 0.72728821635;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.971675703888);
    msg.setSource(33544U);
    msg.setSourceEntity(35U);
    msg.setDestination(56557U);
    msg.setDestinationEntity(210U);
    msg.value = 0.865814723832;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.474160656367);
    msg.setSource(16438U);
    msg.setSourceEntity(115U);
    msg.setDestination(59490U);
    msg.setDestinationEntity(247U);
    msg.value = 0.19687876448;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.224127405208);
    msg.setSource(31918U);
    msg.setSourceEntity(70U);
    msg.setDestination(32721U);
    msg.setDestinationEntity(185U);
    msg.direction = 0.897825989763;
    msg.speed = 0.25617116408;
    msg.turbulence = 0.871128615188;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.398817548159);
    msg.setSource(4210U);
    msg.setSourceEntity(156U);
    msg.setDestination(64631U);
    msg.setDestinationEntity(217U);
    msg.direction = 0.177823505767;
    msg.speed = 0.223881428469;
    msg.turbulence = 0.184598457959;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.0121453053535);
    msg.setSource(43170U);
    msg.setSourceEntity(138U);
    msg.setDestination(35097U);
    msg.setDestinationEntity(0U);
    msg.direction = 0.208331486834;
    msg.speed = 0.338671418168;
    msg.turbulence = 0.435973174639;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.811473629419);
    msg.setSource(46765U);
    msg.setSourceEntity(56U);
    msg.setDestination(57598U);
    msg.setDestinationEntity(158U);
    msg.value = 0.523254879784;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.867661017244);
    msg.setSource(3354U);
    msg.setSourceEntity(99U);
    msg.setDestination(2063U);
    msg.setDestinationEntity(146U);
    msg.value = 0.387292080607;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.68109280402);
    msg.setSource(32018U);
    msg.setSourceEntity(239U);
    msg.setDestination(8735U);
    msg.setDestinationEntity(176U);
    msg.value = 0.582251164379;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.035396673589);
    msg.setSource(5378U);
    msg.setSourceEntity(190U);
    msg.setDestination(63213U);
    msg.setDestinationEntity(127U);
    msg.value.assign("REHOEGCENWGCTXMDLNOBVPSULPLXSDYPGOSWUYSUWRNOITPVYEJGDIMVZPVANDMQFEBDIFRKNJOZWULASOUFIRNRAKZXVEUHQQXRLBSGHFPDXIQDXNWKJCZJVXEWYKNAYZFIGNLKCFTHHVOYTVWUEUVYQBRXHRZXJWPUQGOCDKOMKECAFMCZPHCJJTWFMMBJJBLQASBSKGTAACPDCZQAHITHKWPHTY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.689641436035);
    msg.setSource(57610U);
    msg.setSourceEntity(1U);
    msg.setDestination(57826U);
    msg.setDestinationEntity(159U);
    msg.value.assign("LAOIQGCVPVZFIMFQDOQUHAZOWAEKNCKGJRRDORDRNWUIIATKWGCXHXFXZNLPVAFJEQLMSQNMEVIOMBZWBIBXBHLDPAEJHLMJFDEZCYNZYXYUSLBUPMGYRWMVOIONZBGLMNJUFTRWENUGEZLOFPSQWSUZLQYHBKWVJCVSDZTTXHSODKTYEATBCTDKFYJCACIUTQAYJFUIMRNKECWJMKQPPPOGRPYNRSTX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.265359508943);
    msg.setSource(39237U);
    msg.setSourceEntity(132U);
    msg.setDestination(60313U);
    msg.setDestinationEntity(39U);
    msg.value.assign("QZKNTGCOFJETBRRLXBQMLIDJRRPCUQVABDTZDVKGREUIGSRPISFETJUSEEMIIMWKR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.527179289028);
    msg.setSource(7215U);
    msg.setSourceEntity(23U);
    msg.setDestination(24542U);
    msg.setDestinationEntity(246U);
    const char tmp_msg_0[] = {-126, -31, 78, -6, 59, 36, -17, -37, -78, -13, 122, -3, -34, 38, -69, -66, -9, -54, 110, -112, -125, -41, 13, -108, -31, -106, -47, 61, -55, 38, 40, -71, -104, -49, 108, 67, -60, 115};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.597613629601);
    msg.setSource(17431U);
    msg.setSourceEntity(2U);
    msg.setDestination(31954U);
    msg.setDestinationEntity(13U);
    const char tmp_msg_0[] = {-101, 35, -101, 114, 77, 69, -61, 18, 63, 75, 6, 23, 61, -19, 122, -104, 115, 119, 19, -24, -48, -119, 120, -64, 18, -74, -88, -84, 118, 37, 56, -84, 56, -127, -124, 31, 67, 31, -11, -55, -88, -99, -87, -40, -73, -110, 68, 106, -69, -115, -105, 7, -70, -37, 90, -33, -29, -78, 107, -4, -31, 12, -96, -11, 83, 123, 37, 66, -3, 83, 102, -66, 90, 114, 84, -67, 41};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.890456199537);
    msg.setSource(864U);
    msg.setSourceEntity(153U);
    msg.setDestination(26075U);
    msg.setDestinationEntity(148U);
    const char tmp_msg_0[] = {-116, -41, 59, 76, -91, -126, -32, -125, -107, -52, 16, 40, -86, 107, -15, -47, 95, 6, 4, 91, -51, 113, -102, -69, 69, -70, 114, 68, 90, 27, -82, -1, -127, 104, 117, 55, 77, 57, -126, -46, 70, -120, -77, 30, 54, -120, -36, 18, 84, -25, -45, -7, -9, -122, -23, 27, -52, -97, 62, 5, 108, -107, 117, -92, 124, 54, 15, -23, 103, -59, -52, -60, 27, 102, 63, 58, 3, -57, -73};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.859391560881);
    msg.setSource(44538U);
    msg.setSourceEntity(176U);
    msg.setDestination(24573U);
    msg.setDestinationEntity(206U);
    msg.value = 0.149290524065;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.0962120176885);
    msg.setSource(59865U);
    msg.setSourceEntity(90U);
    msg.setDestination(55160U);
    msg.setDestinationEntity(34U);
    msg.value = 0.851510226028;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.261755508072);
    msg.setSource(16112U);
    msg.setSourceEntity(80U);
    msg.setDestination(16113U);
    msg.setDestinationEntity(237U);
    msg.value = 0.0729923324694;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.935728750593);
    msg.setSource(41023U);
    msg.setSourceEntity(239U);
    msg.setDestination(10089U);
    msg.setDestinationEntity(127U);
    msg.type = 87U;
    msg.frequency = 548574105U;
    msg.min_range = 26595U;
    msg.max_range = 3353U;
    msg.bits_per_point = 221U;
    msg.scale_factor = 0.42462529834;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.390092593153;
    tmp_msg_0.beam_height = 0.130413161778;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-45, -36, 59, 96, -41, -2, 11, -24, 16, 67, 34, 101, -69, -10, -33, -12, -102, 71, 34, -28, -57, -104, 118, 43, 107, 31, 101, -70, -126, -112, -97, -80, 0, -98, -87, -108, -40, -89, -46, 93, 29, 65, 2, 97, -80, 98, -7, 50, -111, 69, 3, -61, -114, -86, 78, -102, 43, -101, 37, 58, 95, -112, 95, -117, 123, -90, -119, -83, -106, -46, -18, 64, 120, 1, 42, -15, -101, -91, -105, -37, 74, -65, 115, 102, -93, -96, 1, 40, 86, 25};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.786277718922);
    msg.setSource(48627U);
    msg.setSourceEntity(221U);
    msg.setDestination(51846U);
    msg.setDestinationEntity(134U);
    msg.type = 251U;
    msg.frequency = 4030273694U;
    msg.min_range = 23956U;
    msg.max_range = 58434U;
    msg.bits_per_point = 26U;
    msg.scale_factor = 0.247806482287;
    const char tmp_msg_0[] = {63, 94, -24, -85, 112, -51, -88, -16, -100, -61, 13, 80, -126, -115, -48, 111, 32, -50, 24, -123, 27, 112, -84, 102, 71, -96, 32, 24, 101, -42, -17, 65, 102, 123, 40, -62, -75, 66, 54, -106, 64, 42, -117, 91, -107, 36, 73, 97, 5, 50, 92, -40, 82, -96, -88, -86, -27, 49, -27, 87, -57, -75, -116, -52, 93, 88, 124, -116, -119, -52, 101, -88, -98, -77, 47, -103, -13, -111, 118, -123, -42, 22, -103, -6, 72, 74, 106, -59, 85, -30, 66, 107, -60, 38, 34, -69, -8, 12, -29, -115, -74, 13, -64, -66, -17, 71, 57, -53, 92, -60, -20, -57, -45, -105, -22, 80, 124, 59, -17, 25, -27, 20, 47, 104, 69, 50, 31, -22, 82, -100, -100, -90, 123, 39, 68, -95, 118, -128, 20, 0, -43, 11, -97, -110, -17, 23, -59, 100, -102, -120, -10, -68, 110, 98, -127, -101, 59, 81, -56, 39, 68, 56, -86, 13, -16, -77, -39, 9, -115, -20, -89, -104, -92, 33, 63, -93, -86, 13, -64, 10, 45, 117, 102, -91, -61, 92, 76, 46, 38, 22, -37, -58, -26, 14, -112, 108, -107, -66, 3, 112, -44, 80, -13, -19, 85, -54, -25, 2, 65, -88, -60, 41, 108, 106, -60, 62, -61, -8, 107, 112, -89};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.568383077928);
    msg.setSource(43136U);
    msg.setSourceEntity(146U);
    msg.setDestination(12048U);
    msg.setDestinationEntity(7U);
    msg.type = 82U;
    msg.frequency = 4169045211U;
    msg.min_range = 46181U;
    msg.max_range = 62973U;
    msg.bits_per_point = 182U;
    msg.scale_factor = 0.488555392377;
    const char tmp_msg_0[] = {54, -125, -66, 96, 89, -70, -42, -54, -119, -58, -122, 52, 50, -114, 78, -21, 100, -64, -93, 84, 51, -3, 29, -62, -113, -110, -98, -31, -75, -111, 114, 67, 92, -96, -110, -112, 121, -64, 95, 27, 44, -20, 96, -1, -4, -58, -73, -33, -41, -112, -59, 106, 117, 73, -28, 64, -85, 124, 23, 54, 30, -24, -101, -25, -26, -35, -32, 38, -127, 64, 96, -93, 48, -61, -26, -101, 48, 57, -39, -107, 88, -97, -99, -27, 101, 40, -65, -117, -25, 111, 85, -17, -75, 113, 71, -21, 125, -15, -32, -55, -39, -8, -101, -48, -86, 39, -1, 51, -58, -92, -52, -95, 106, 66, -126, -112, 114, -109, -99, 46, 38, 45, -7, 12, -120, -94, -90, 77, 94, 54, 29, -3, 20, 37, 67, 88, -65, 78, 72, 92, -24, 51, -97, -4, -35, 48, 37, -101, 26, -81, -62, -80, 50, 38, -85, -57, -96, -99, 123, -13, 29, -44, 119, 55, -103, 88, -128, 29, 82, -35, 105};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.158194140305);
    msg.setSource(51649U);
    msg.setSourceEntity(98U);
    msg.setDestination(30064U);
    msg.setDestinationEntity(59U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.447594009059);
    msg.setSource(52556U);
    msg.setSourceEntity(77U);
    msg.setDestination(24939U);
    msg.setDestinationEntity(2U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.224877651248);
    msg.setSource(9403U);
    msg.setSourceEntity(145U);
    msg.setDestination(28336U);
    msg.setDestinationEntity(225U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.95658720141);
    msg.setSource(36681U);
    msg.setSourceEntity(130U);
    msg.setDestination(56258U);
    msg.setDestinationEntity(110U);
    msg.op = 228U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.397738579348);
    msg.setSource(51324U);
    msg.setSourceEntity(220U);
    msg.setDestination(59405U);
    msg.setDestinationEntity(223U);
    msg.op = 59U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.263720829152);
    msg.setSource(18191U);
    msg.setSourceEntity(147U);
    msg.setDestination(32264U);
    msg.setDestinationEntity(13U);
    msg.op = 240U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.999885482616);
    msg.setSource(32121U);
    msg.setSourceEntity(238U);
    msg.setDestination(16015U);
    msg.setDestinationEntity(67U);
    msg.value = 0.872355619863;
    msg.confidence = 0.639727856962;
    msg.opmodes.assign("CWTSQHIWHJTDHAJFXUYGRNKAIPXJOBIAHZUNSERNMKEFPBMZCJBRMWXZDULLINVMWYKFAJPWWPFKGHQBQRHEONTVVWKZFCIPGUAFKEITIWXLIKUEXQEGQBPFURBDVMTVDYXGMVNCZCKKANXRFUEVRQTTJJBEOJAYOZFCYYQWKLANDSMRYZSTPPCXVJGLXOTVBOHQUYCGJIZPVOEOPLISGORNWDFELDZYYUDLOCGAUML");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.314810419239);
    msg.setSource(26801U);
    msg.setSourceEntity(49U);
    msg.setDestination(39685U);
    msg.setDestinationEntity(88U);
    msg.value = 0.788832833918;
    msg.confidence = 0.208153276879;
    msg.opmodes.assign("ZUOQYJZFXVLDYCKKUO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.544894801297);
    msg.setSource(41318U);
    msg.setSourceEntity(219U);
    msg.setDestination(43413U);
    msg.setDestinationEntity(202U);
    msg.value = 0.262463434803;
    msg.confidence = 0.172769863914;
    msg.opmodes.assign("RGIOOXBDOUGLNUNBZHVMLNUVAWDRQANMOJIKEKKCBEHGLMOQBLBLXLVCSNFQSIVZFYZVGISQRVAWMRGHXEJTLNIWZXKJKEZIGFRBXCTQANHOJTWYILYTPOHMGHSFXFUYFFDOPMAYPDMBTSYXADWTGPEGRFJCVYMZTAGT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.756592096556);
    msg.setSource(50209U);
    msg.setSourceEntity(219U);
    msg.setDestination(39528U);
    msg.setDestinationEntity(22U);
    msg.itow = 3413040028U;
    msg.lat = 0.839408000843;
    msg.lon = 0.0474649210879;
    msg.height_ell = 0.938898508979;
    msg.height_sea = 0.377818597073;
    msg.hacc = 0.700058356203;
    msg.vacc = 0.399711977843;
    msg.vel_n = 0.70607468038;
    msg.vel_e = 0.569068860564;
    msg.vel_d = 0.0460015298251;
    msg.speed = 0.150966288558;
    msg.gspeed = 0.524884249546;
    msg.heading = 0.308685111596;
    msg.sacc = 0.897083029888;
    msg.cacc = 0.316318783187;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.578006122815);
    msg.setSource(10813U);
    msg.setSourceEntity(24U);
    msg.setDestination(43514U);
    msg.setDestinationEntity(23U);
    msg.itow = 3952388250U;
    msg.lat = 0.0510471958554;
    msg.lon = 0.292192428261;
    msg.height_ell = 0.998803372169;
    msg.height_sea = 0.0985816501157;
    msg.hacc = 0.636529251052;
    msg.vacc = 0.413436322089;
    msg.vel_n = 0.0851435863925;
    msg.vel_e = 0.660665295538;
    msg.vel_d = 0.570129078159;
    msg.speed = 0.848219942836;
    msg.gspeed = 0.186058986628;
    msg.heading = 0.7701301569;
    msg.sacc = 0.569402173192;
    msg.cacc = 0.999798751753;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.52363892144);
    msg.setSource(25089U);
    msg.setSourceEntity(91U);
    msg.setDestination(37016U);
    msg.setDestinationEntity(95U);
    msg.itow = 3709218426U;
    msg.lat = 0.799630567825;
    msg.lon = 0.474502741976;
    msg.height_ell = 0.25216713259;
    msg.height_sea = 0.326103637845;
    msg.hacc = 0.0918642693189;
    msg.vacc = 0.102060552528;
    msg.vel_n = 0.719333058808;
    msg.vel_e = 0.282506768041;
    msg.vel_d = 0.527109952783;
    msg.speed = 0.382313142292;
    msg.gspeed = 0.615999641895;
    msg.heading = 0.715491029157;
    msg.sacc = 0.946441352298;
    msg.cacc = 0.364718721569;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.995633051929);
    msg.setSource(48290U);
    msg.setSourceEntity(197U);
    msg.setDestination(8115U);
    msg.setDestinationEntity(77U);
    msg.id = 170U;
    msg.value = 0.897899126307;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.317129481053);
    msg.setSource(20132U);
    msg.setSourceEntity(99U);
    msg.setDestination(55226U);
    msg.setDestinationEntity(242U);
    msg.id = 84U;
    msg.value = 0.867436698382;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.434720065519);
    msg.setSource(21177U);
    msg.setSourceEntity(223U);
    msg.setDestination(62062U);
    msg.setDestinationEntity(216U);
    msg.id = 40U;
    msg.value = 0.640723613357;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.942956479211);
    msg.setSource(6934U);
    msg.setSourceEntity(185U);
    msg.setDestination(16171U);
    msg.setDestinationEntity(37U);
    msg.x = 0.681292998736;
    msg.y = 0.443083613266;
    msg.z = 0.663096001369;
    msg.phi = 0.847550518552;
    msg.theta = 0.126794029715;
    msg.psi = 0.569650023213;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.58602974031);
    msg.setSource(45637U);
    msg.setSourceEntity(89U);
    msg.setDestination(53833U);
    msg.setDestinationEntity(195U);
    msg.x = 0.875733601225;
    msg.y = 0.512338894633;
    msg.z = 0.202870661546;
    msg.phi = 0.0626418423731;
    msg.theta = 0.715968648157;
    msg.psi = 0.295413907169;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.801948736981);
    msg.setSource(56392U);
    msg.setSourceEntity(102U);
    msg.setDestination(1080U);
    msg.setDestinationEntity(245U);
    msg.x = 0.566803326243;
    msg.y = 0.278257718807;
    msg.z = 0.425571148433;
    msg.phi = 0.886457525082;
    msg.theta = 0.671364995348;
    msg.psi = 0.310457648818;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.822334662205);
    msg.setSource(23288U);
    msg.setSourceEntity(64U);
    msg.setDestination(43466U);
    msg.setDestinationEntity(89U);
    msg.beam_width = 0.306927369688;
    msg.beam_height = 0.204474727165;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.0868739079686);
    msg.setSource(17373U);
    msg.setSourceEntity(12U);
    msg.setDestination(3306U);
    msg.setDestinationEntity(69U);
    msg.beam_width = 0.775849307633;
    msg.beam_height = 0.38786747977;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.781552548116);
    msg.setSource(2728U);
    msg.setSourceEntity(155U);
    msg.setDestination(39326U);
    msg.setDestinationEntity(86U);
    msg.beam_width = 0.0358265205437;
    msg.beam_height = 0.7673883723;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.932788362109);
    msg.setSource(10443U);
    msg.setSourceEntity(174U);
    msg.setDestination(32999U);
    msg.setDestinationEntity(32U);
    msg.sane = 175U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.754434281975);
    msg.setSource(14001U);
    msg.setSourceEntity(223U);
    msg.setDestination(17634U);
    msg.setDestinationEntity(68U);
    msg.sane = 60U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.577100744508);
    msg.setSource(57261U);
    msg.setSourceEntity(224U);
    msg.setDestination(14337U);
    msg.setDestinationEntity(153U);
    msg.sane = 227U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.903449473283);
    msg.setSource(49779U);
    msg.setSourceEntity(33U);
    msg.setDestination(29192U);
    msg.setDestinationEntity(58U);
    msg.value = 0.867796135046;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.188521272464);
    msg.setSource(33305U);
    msg.setSourceEntity(97U);
    msg.setDestination(23622U);
    msg.setDestinationEntity(229U);
    msg.value = 0.282623853138;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.535098049979);
    msg.setSource(58337U);
    msg.setSourceEntity(157U);
    msg.setDestination(57177U);
    msg.setDestinationEntity(117U);
    msg.value = 0.131476561289;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.503876599812);
    msg.setSource(30041U);
    msg.setSourceEntity(180U);
    msg.setDestination(39260U);
    msg.setDestinationEntity(211U);
    msg.value = 0.613770334865;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.336831876621);
    msg.setSource(6335U);
    msg.setSourceEntity(97U);
    msg.setDestination(22546U);
    msg.setDestinationEntity(39U);
    msg.value = 0.995207431022;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.763688674695);
    msg.setSource(57592U);
    msg.setSourceEntity(222U);
    msg.setDestination(45031U);
    msg.setDestinationEntity(167U);
    msg.value = 0.741039240282;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.492407762824);
    msg.setSource(27589U);
    msg.setSourceEntity(231U);
    msg.setDestination(31623U);
    msg.setDestinationEntity(72U);
    msg.value = 0.231348665478;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.776253549804);
    msg.setSource(26400U);
    msg.setSourceEntity(238U);
    msg.setDestination(3764U);
    msg.setDestinationEntity(166U);
    msg.value = 0.610634476102;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.171833555485);
    msg.setSource(59300U);
    msg.setSourceEntity(233U);
    msg.setDestination(39585U);
    msg.setDestinationEntity(16U);
    msg.value = 0.527905690516;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.267702294051);
    msg.setSource(8934U);
    msg.setSourceEntity(61U);
    msg.setDestination(11880U);
    msg.setDestinationEntity(152U);
    msg.value = 0.647299543697;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.68453007715);
    msg.setSource(44627U);
    msg.setSourceEntity(62U);
    msg.setDestination(2453U);
    msg.setDestinationEntity(76U);
    msg.value = 0.118198019447;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.927212293634);
    msg.setSource(3945U);
    msg.setSourceEntity(71U);
    msg.setDestination(58025U);
    msg.setDestinationEntity(163U);
    msg.value = 0.0612087966767;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.647748535104);
    msg.setSource(24260U);
    msg.setSourceEntity(34U);
    msg.setDestination(46350U);
    msg.setDestinationEntity(207U);
    msg.value = 0.821629420982;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.13022089135);
    msg.setSource(29881U);
    msg.setSourceEntity(170U);
    msg.setDestination(44706U);
    msg.setDestinationEntity(141U);
    msg.value = 0.620249046843;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.107981169276);
    msg.setSource(1782U);
    msg.setSourceEntity(186U);
    msg.setDestination(12713U);
    msg.setDestinationEntity(151U);
    msg.value = 0.483084189697;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.457960029489);
    msg.setSource(15554U);
    msg.setSourceEntity(2U);
    msg.setDestination(1032U);
    msg.setDestinationEntity(139U);
    msg.value = 0.936804566548;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.89086028175);
    msg.setSource(61833U);
    msg.setSourceEntity(16U);
    msg.setDestination(9244U);
    msg.setDestinationEntity(39U);
    msg.value = 0.145363829903;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.942166975043);
    msg.setSource(51692U);
    msg.setSourceEntity(254U);
    msg.setDestination(31802U);
    msg.setDestinationEntity(27U);
    msg.value = 0.55320210129;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.283391428404);
    msg.setSource(59764U);
    msg.setSourceEntity(18U);
    msg.setDestination(41940U);
    msg.setDestinationEntity(120U);
    msg.value = 0.546610315859;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.100683588065);
    msg.setSource(21559U);
    msg.setSourceEntity(238U);
    msg.setDestination(49117U);
    msg.setDestinationEntity(73U);
    msg.value = 0.777542763814;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.466084241167);
    msg.setSource(33052U);
    msg.setSourceEntity(247U);
    msg.setDestination(18747U);
    msg.setDestinationEntity(191U);
    msg.value = 0.623619928428;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.354263834784);
    msg.setSource(5227U);
    msg.setSourceEntity(46U);
    msg.setDestination(34692U);
    msg.setDestinationEntity(42U);
    msg.value = 0.147746030952;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.736867112666);
    msg.setSource(58252U);
    msg.setSourceEntity(203U);
    msg.setDestination(56998U);
    msg.setDestinationEntity(216U);
    msg.value = 0.268159858849;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.801441572267);
    msg.setSource(25755U);
    msg.setSourceEntity(99U);
    msg.setDestination(35328U);
    msg.setDestinationEntity(7U);
    msg.value = 0.526033929634;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.154900299053);
    msg.setSource(10769U);
    msg.setSourceEntity(87U);
    msg.setDestination(59509U);
    msg.setDestinationEntity(222U);
    msg.validity = 55647U;
    msg.type = 101U;
    msg.tow = 3678784027U;
    msg.base_lat = 0.438102571293;
    msg.base_lon = 0.524322481625;
    msg.base_height = 0.921998189844;
    msg.n = 0.251609110789;
    msg.e = 0.400517058158;
    msg.d = 0.33640645881;
    msg.v_n = 0.411513387777;
    msg.v_e = 0.849574611443;
    msg.v_d = 0.20878030765;
    msg.satellites = 177U;
    msg.iar_hyp = 57134U;
    msg.iar_ratio = 0.329499311118;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.316190055155);
    msg.setSource(32777U);
    msg.setSourceEntity(63U);
    msg.setDestination(65234U);
    msg.setDestinationEntity(90U);
    msg.validity = 52348U;
    msg.type = 54U;
    msg.tow = 1030116764U;
    msg.base_lat = 0.471465861141;
    msg.base_lon = 0.382633827508;
    msg.base_height = 0.846716000713;
    msg.n = 0.129527105936;
    msg.e = 0.956343380236;
    msg.d = 0.980610162288;
    msg.v_n = 0.731027315092;
    msg.v_e = 0.84031442649;
    msg.v_d = 0.100055891978;
    msg.satellites = 69U;
    msg.iar_hyp = 19506U;
    msg.iar_ratio = 0.697511439196;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.996286200207);
    msg.setSource(47661U);
    msg.setSourceEntity(243U);
    msg.setDestination(20811U);
    msg.setDestinationEntity(187U);
    msg.validity = 7093U;
    msg.type = 201U;
    msg.tow = 1581205418U;
    msg.base_lat = 0.725688689406;
    msg.base_lon = 0.167933163951;
    msg.base_height = 0.894091624602;
    msg.n = 0.73366704782;
    msg.e = 0.219107126959;
    msg.d = 0.744507257905;
    msg.v_n = 0.751034877412;
    msg.v_e = 0.824736076708;
    msg.v_d = 0.732597393153;
    msg.satellites = 185U;
    msg.iar_hyp = 29603U;
    msg.iar_ratio = 0.924768582188;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.772229662691);
    msg.setSource(16230U);
    msg.setSourceEntity(165U);
    msg.setDestination(34111U);
    msg.setDestinationEntity(150U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.581566360387;
    tmp_msg_0.lon = 0.764929760827;
    tmp_msg_0.height = 0.521913098623;
    tmp_msg_0.x = 0.580607789581;
    tmp_msg_0.y = 0.401294307039;
    tmp_msg_0.z = 0.679276391587;
    tmp_msg_0.phi = 0.0474226048509;
    tmp_msg_0.theta = 0.165484076281;
    tmp_msg_0.psi = 0.775111083993;
    tmp_msg_0.u = 0.104652123927;
    tmp_msg_0.v = 0.901640518449;
    tmp_msg_0.w = 0.395017334368;
    tmp_msg_0.vx = 0.745862995053;
    tmp_msg_0.vy = 0.626814106382;
    tmp_msg_0.vz = 0.420407007506;
    tmp_msg_0.p = 0.920055735759;
    tmp_msg_0.q = 0.760817144583;
    tmp_msg_0.r = 0.798020967893;
    tmp_msg_0.depth = 0.958558730525;
    tmp_msg_0.alt = 0.949195915684;
    msg.state.set(tmp_msg_0);
    msg.type = 223U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.624450804059);
    msg.setSource(64598U);
    msg.setSourceEntity(203U);
    msg.setDestination(25176U);
    msg.setDestinationEntity(8U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.394657896056;
    tmp_msg_0.lon = 0.420260940029;
    tmp_msg_0.height = 0.44867380414;
    tmp_msg_0.x = 0.691203099559;
    tmp_msg_0.y = 0.890218213369;
    tmp_msg_0.z = 0.885773298626;
    tmp_msg_0.phi = 0.769903671316;
    tmp_msg_0.theta = 0.533454288412;
    tmp_msg_0.psi = 0.200659122899;
    tmp_msg_0.u = 0.110708279163;
    tmp_msg_0.v = 0.92202268545;
    tmp_msg_0.w = 0.934512833326;
    tmp_msg_0.vx = 0.498823252055;
    tmp_msg_0.vy = 0.639528803438;
    tmp_msg_0.vz = 0.0563198067873;
    tmp_msg_0.p = 0.952008877439;
    tmp_msg_0.q = 0.526483972064;
    tmp_msg_0.r = 0.342784395095;
    tmp_msg_0.depth = 0.448073221299;
    tmp_msg_0.alt = 0.137125167406;
    msg.state.set(tmp_msg_0);
    msg.type = 44U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.554581694463);
    msg.setSource(39148U);
    msg.setSourceEntity(153U);
    msg.setDestination(25861U);
    msg.setDestinationEntity(119U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.850743457095;
    tmp_msg_0.lon = 0.384048261812;
    tmp_msg_0.height = 0.909071406033;
    tmp_msg_0.x = 0.323060672117;
    tmp_msg_0.y = 0.217040168712;
    tmp_msg_0.z = 0.924413396567;
    tmp_msg_0.phi = 0.571354882511;
    tmp_msg_0.theta = 0.670221379415;
    tmp_msg_0.psi = 0.547172586621;
    tmp_msg_0.u = 0.954007754571;
    tmp_msg_0.v = 0.897937210679;
    tmp_msg_0.w = 0.733770787952;
    tmp_msg_0.vx = 0.261396541718;
    tmp_msg_0.vy = 0.267371518868;
    tmp_msg_0.vz = 0.484349266563;
    tmp_msg_0.p = 0.128602799777;
    tmp_msg_0.q = 0.985719941309;
    tmp_msg_0.r = 0.370778627397;
    tmp_msg_0.depth = 0.612210865472;
    tmp_msg_0.alt = 0.109346405884;
    msg.state.set(tmp_msg_0);
    msg.type = 106U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.3641081612);
    msg.setSource(36340U);
    msg.setSourceEntity(88U);
    msg.setDestination(32397U);
    msg.setDestinationEntity(5U);
    msg.value = 0.914774035771;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.499965563565);
    msg.setSource(31389U);
    msg.setSourceEntity(173U);
    msg.setDestination(65372U);
    msg.setDestinationEntity(184U);
    msg.value = 0.522301970178;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.299583121572);
    msg.setSource(54832U);
    msg.setSourceEntity(139U);
    msg.setDestination(54992U);
    msg.setDestinationEntity(236U);
    msg.value = 0.773589007917;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.777548273367);
    msg.setSource(36379U);
    msg.setSourceEntity(222U);
    msg.setDestination(9479U);
    msg.setDestinationEntity(151U);
    msg.value = 0.118014580776;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.170216701382);
    msg.setSource(6700U);
    msg.setSourceEntity(63U);
    msg.setDestination(62044U);
    msg.setDestinationEntity(138U);
    msg.value = 0.18913105326;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.140915739945);
    msg.setSource(64791U);
    msg.setSourceEntity(72U);
    msg.setDestination(23649U);
    msg.setDestinationEntity(17U);
    msg.value = 0.288089930487;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.858321484544);
    msg.setSource(25850U);
    msg.setSourceEntity(54U);
    msg.setDestination(25591U);
    msg.setDestinationEntity(110U);
    msg.value = 0.669045777416;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.968661220505);
    msg.setSource(28657U);
    msg.setSourceEntity(236U);
    msg.setDestination(9947U);
    msg.setDestinationEntity(84U);
    msg.value = 0.865594903389;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.778681439804);
    msg.setSource(49428U);
    msg.setSourceEntity(142U);
    msg.setDestination(61176U);
    msg.setDestinationEntity(111U);
    msg.value = 0.609958565628;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.614336382393);
    msg.setSource(55603U);
    msg.setSourceEntity(197U);
    msg.setDestination(20234U);
    msg.setDestinationEntity(172U);
    msg.value = 0.761941236892;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.449014770532);
    msg.setSource(20775U);
    msg.setSourceEntity(196U);
    msg.setDestination(2279U);
    msg.setDestinationEntity(137U);
    msg.value = 0.155161806436;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.38738658426);
    msg.setSource(19651U);
    msg.setSourceEntity(98U);
    msg.setDestination(54073U);
    msg.setDestinationEntity(186U);
    msg.value = 0.0471346793936;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.487266820428);
    msg.setSource(4002U);
    msg.setSourceEntity(13U);
    msg.setDestination(44683U);
    msg.setDestinationEntity(143U);
    msg.value = 0.415317982227;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.557624069367);
    msg.setSource(16718U);
    msg.setSourceEntity(132U);
    msg.setDestination(7316U);
    msg.setDestinationEntity(64U);
    msg.value = 0.785207590312;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.368814069661);
    msg.setSource(39904U);
    msg.setSourceEntity(191U);
    msg.setDestination(53118U);
    msg.setDestinationEntity(213U);
    msg.value = 0.217348707141;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.182490106899);
    msg.setSource(18320U);
    msg.setSourceEntity(63U);
    msg.setDestination(55871U);
    msg.setDestinationEntity(64U);
    msg.id = 106U;
    msg.zoom = 97U;
    msg.action = 192U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.361738437991);
    msg.setSource(48528U);
    msg.setSourceEntity(171U);
    msg.setDestination(15600U);
    msg.setDestinationEntity(238U);
    msg.id = 190U;
    msg.zoom = 234U;
    msg.action = 109U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.0117333279011);
    msg.setSource(54882U);
    msg.setSourceEntity(219U);
    msg.setDestination(35570U);
    msg.setDestinationEntity(215U);
    msg.id = 17U;
    msg.zoom = 167U;
    msg.action = 101U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.961123620345);
    msg.setSource(11883U);
    msg.setSourceEntity(91U);
    msg.setDestination(47424U);
    msg.setDestinationEntity(189U);
    msg.id = 107U;
    msg.value = 0.897869532468;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.0308524933543);
    msg.setSource(38637U);
    msg.setSourceEntity(247U);
    msg.setDestination(7940U);
    msg.setDestinationEntity(149U);
    msg.id = 82U;
    msg.value = 0.715971486806;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.921286282038);
    msg.setSource(60754U);
    msg.setSourceEntity(203U);
    msg.setDestination(59499U);
    msg.setDestinationEntity(84U);
    msg.id = 51U;
    msg.value = 0.484904526053;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.665389757964);
    msg.setSource(43008U);
    msg.setSourceEntity(74U);
    msg.setDestination(22088U);
    msg.setDestinationEntity(173U);
    msg.id = 197U;
    msg.value = 0.15767708346;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.947938548159);
    msg.setSource(42633U);
    msg.setSourceEntity(135U);
    msg.setDestination(21494U);
    msg.setDestinationEntity(2U);
    msg.id = 48U;
    msg.value = 0.925738088749;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.40432929423);
    msg.setSource(45960U);
    msg.setSourceEntity(152U);
    msg.setDestination(56251U);
    msg.setDestinationEntity(153U);
    msg.id = 189U;
    msg.value = 0.269404703544;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.669416319688);
    msg.setSource(14151U);
    msg.setSourceEntity(137U);
    msg.setDestination(37847U);
    msg.setDestinationEntity(24U);
    msg.id = 81U;
    msg.angle = 0.581805142618;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.768645068209);
    msg.setSource(2884U);
    msg.setSourceEntity(92U);
    msg.setDestination(59716U);
    msg.setDestinationEntity(160U);
    msg.id = 32U;
    msg.angle = 0.558636031359;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.772050148975);
    msg.setSource(29830U);
    msg.setSourceEntity(5U);
    msg.setDestination(62373U);
    msg.setDestinationEntity(142U);
    msg.id = 15U;
    msg.angle = 0.0426888014152;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.671896862111);
    msg.setSource(52833U);
    msg.setSourceEntity(168U);
    msg.setDestination(19709U);
    msg.setDestinationEntity(221U);
    msg.op = 96U;
    msg.actions.assign("GVCXLTHOBMMELCNSYHYVHAJUPLBPDFKIUREOCXGRMOFTFZFLUAULFPRBMTCPDVGVWGNCXNUHSPUSDNDQITEWYIEYCPAZP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.671063771669);
    msg.setSource(38897U);
    msg.setSourceEntity(76U);
    msg.setDestination(24551U);
    msg.setDestinationEntity(54U);
    msg.op = 36U;
    msg.actions.assign("SXIVYJCGGIWLZLEBRVZYSOLKKAVYLRKZIVOUSFPHSSJUGX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.0512750266579);
    msg.setSource(2521U);
    msg.setSourceEntity(29U);
    msg.setDestination(49142U);
    msg.setDestinationEntity(82U);
    msg.op = 195U;
    msg.actions.assign("PMXXQWNKUIHPPGFXMSEDPVBXQFVPVRHWLCEGWGMIAUFKIVGXXAELEODRTDCCTMOZHPTUACTFDXUCJZMBVLHYSZYDCOJKZAHWRQLJZTSGYAHIRFYOFVBIJZLCRETSQUKRHJTLOLBBMJEHTAARDJXNFWRNUNDDSNYWBVIGNDIUKRMZNPVYFTXFCC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.0951781076969);
    msg.setSource(28381U);
    msg.setSourceEntity(185U);
    msg.setDestination(6372U);
    msg.setDestinationEntity(82U);
    msg.actions.assign("GJSTZAULOYHTMJCWXLWECJRHUUIPKYHLPEMWKGHYAGIFXMFGANNQBMWHLQBSQRFKMXYBQRKACPQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.474716712122);
    msg.setSource(52022U);
    msg.setSourceEntity(228U);
    msg.setDestination(18383U);
    msg.setDestinationEntity(228U);
    msg.actions.assign("XTRLIJKRVFUUJLMSYAAKTNADUDJSYKCUDNBBEWJQCEJIWYSIXDVBYQWCLXQLPGZWEYPVEBFKGQVFMTKIWSYZNPEOCRPLDEVLBRHUNCRBKRPZOODJUPJAASXQLUEOGTQASQMUMGFJNLMGWYSNPLMOMVNCWIIOOCDAGMZQHFFHNMZZBSZJEXHFOVHSSXBFTTVYCQHCTXUWVGWNPGYURXL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.13548791668);
    msg.setSource(59127U);
    msg.setSourceEntity(169U);
    msg.setDestination(7302U);
    msg.setDestinationEntity(72U);
    msg.actions.assign("DNGSALBDEHKAPCFZDHLVQJSGDJPPMXBVNXUCMPGWLOHBEXSMRQQAQGTFYYFKIIOWQWHFRPIYIUZXITWVLBWMXZCKNVYAOHXQQEUWDVHZEVIJOJUUFEOIMZGWSMK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.892981157318);
    msg.setSource(25949U);
    msg.setSourceEntity(169U);
    msg.setDestination(26070U);
    msg.setDestinationEntity(250U);
    msg.button = 25U;
    msg.value = 140U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.571496851975);
    msg.setSource(13983U);
    msg.setSourceEntity(100U);
    msg.setDestination(4403U);
    msg.setDestinationEntity(129U);
    msg.button = 120U;
    msg.value = 23U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.183144746797);
    msg.setSource(64356U);
    msg.setSourceEntity(218U);
    msg.setDestination(24764U);
    msg.setDestinationEntity(29U);
    msg.button = 107U;
    msg.value = 244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.664475251493);
    msg.setSource(56042U);
    msg.setSourceEntity(244U);
    msg.setDestination(21322U);
    msg.setDestinationEntity(92U);
    msg.op = 101U;
    msg.text.assign("XMGRWSJUWTJSTZXITKUARDGOUYJPDIBJILGJPRZJZUVSKSMCNIPITDKTKTOWQCBPCCUAYKEFIBVMXDHLEDEBAITEHCEOVNCGNQDWYQESQFMZGGFGNDKFEUBNQCLLIMHHVTQRGVSXZXUUJVKYQCWORVXHXYYYMPFQBPUIBRFPVZZOCSTNPFFW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.899786116519);
    msg.setSource(35574U);
    msg.setSourceEntity(127U);
    msg.setDestination(21093U);
    msg.setDestinationEntity(233U);
    msg.op = 32U;
    msg.text.assign("SIJXYPDFFBYDHWAPAYHIUVCNKBAGNVCPZGWYECBNEDTPXGXNXBSTIKFQEHBZIJTVBQYEKNMVAAKXMGFAHSJTSRQNYLKYIKMGILDOSENUEPJRBWLWDHZRJPFFXWZSOMMHSWWYVAMMJYFTSUZOCIHROHAVKASMRNIIUDCZNLBOPXZRRROAFQDFQLODLRRUTUGQQD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.889674824907);
    msg.setSource(6766U);
    msg.setSourceEntity(102U);
    msg.setDestination(31808U);
    msg.setDestinationEntity(10U);
    msg.op = 109U;
    msg.text.assign("CNRWGZIIHSVMJAYNQMHFGQYNMFSAAUGDZBTHFBAOANHUNIDDDYPUIOTWYTCRSGCYZQHKKJZMEWEFDLUETBLRMZTPDBFPFTWKIAKGMLKPVHUKAZELRBBVVCWOBMUNFLJNCIJVOCAWLTWO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.496006391292);
    msg.setSource(1781U);
    msg.setSourceEntity(136U);
    msg.setDestination(58913U);
    msg.setDestinationEntity(148U);
    msg.op = 161U;
    msg.time_remain = 0.545466807308;
    msg.sched_time = 0.742624715208;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.637104780232);
    msg.setSource(31706U);
    msg.setSourceEntity(74U);
    msg.setDestination(50202U);
    msg.setDestinationEntity(13U);
    msg.op = 49U;
    msg.time_remain = 0.755486878961;
    msg.sched_time = 0.370254875822;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.721913596489);
    msg.setSource(43030U);
    msg.setSourceEntity(177U);
    msg.setDestination(37356U);
    msg.setDestinationEntity(131U);
    msg.op = 125U;
    msg.time_remain = 0.0606542514695;
    msg.sched_time = 0.313130895306;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.288047555162);
    msg.setSource(40712U);
    msg.setSourceEntity(231U);
    msg.setDestination(22175U);
    msg.setDestinationEntity(92U);
    msg.name.assign("HXJFLOJNDJMSDFLQSKVZVAKPLAWJVKUJEJEURLIQOKMSOLVZCIPIXZWBUUZWYMXQPYCQYMIFXPENRKVRJWHMZGQCWJAGIOHEACHNICZUPGY");
    msg.op = 220U;
    msg.sched_time = 0.465713835966;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.967476516124);
    msg.setSource(7686U);
    msg.setSourceEntity(113U);
    msg.setDestination(35415U);
    msg.setDestinationEntity(129U);
    msg.name.assign("KHRDLPXMPILCATZQRHTPJPOUZNUDZKDLXJMXUOMFPCVQSQNXICWCBWDJKDRRAYNEVGPYIRPKRRJEIWECHAOXNURVJPSHCACGFUZOWSMDEFLGQKYWYFGXSTOJMUOMTVOZPDKUNUZYXQIYNJFIOGKTWAQAJTUVNAAJQOATXSHSBMZSZBYXHMQWGQVMJKVFELWPBLBSZBWCKWNVDOFIXIAULBGLHILHFBBLDGSCGRETEDEYE");
    msg.op = 10U;
    msg.sched_time = 0.032878744576;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.631854701847);
    msg.setSource(31467U);
    msg.setSourceEntity(144U);
    msg.setDestination(42813U);
    msg.setDestinationEntity(247U);
    msg.name.assign("LSYLRXOTWIZFCNPWMJENQCOCPFYWWTQSDTIQBECHETYVSTXIAVJTZLF");
    msg.op = 115U;
    msg.sched_time = 0.361401233357;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.0610037496533);
    msg.setSource(49670U);
    msg.setSourceEntity(115U);
    msg.setDestination(30899U);
    msg.setDestinationEntity(53U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.480352058294);
    msg.setSource(52938U);
    msg.setSourceEntity(227U);
    msg.setDestination(9641U);
    msg.setDestinationEntity(140U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.866418012692);
    msg.setSource(9540U);
    msg.setSourceEntity(203U);
    msg.setDestination(58189U);
    msg.setDestinationEntity(163U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.517587636837);
    msg.setSource(45460U);
    msg.setSourceEntity(120U);
    msg.setDestination(56375U);
    msg.setDestinationEntity(118U);
    msg.name.assign("PLXULWJKIDKQTOYCLKIAAYLFGOLPLZSKXCRZOHZKNDNL");
    msg.state = 75U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.740254802251);
    msg.setSource(26036U);
    msg.setSourceEntity(69U);
    msg.setDestination(65052U);
    msg.setDestinationEntity(0U);
    msg.name.assign("VSEJAWGZDNRSZXBWVPWHERQUYZZQDWOBAJJUXMIAPICCRLKBPMOHBSFWTGZHHWWCVGUAMTMJSPUMFSMDINREQNQBUHKLEIZSUAEHAHEYNXCUSGWLOLARDEAKKZQVKYKNCDIBILYXYTTXODGIVQAYCPRXDFFGOGVJICTROUJMJBPPPFXEOKDFUSMVJEWLZWSTLIRCGBOVNCXLNUYJDQMLYGRBTKPXHKFGKPO");
    msg.state = 129U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.784719500562);
    msg.setSource(62803U);
    msg.setSourceEntity(31U);
    msg.setDestination(3967U);
    msg.setDestinationEntity(112U);
    msg.name.assign("VQXSUQPJWTNXZHZWJHCBXMZATBDMBSYOJAYYHPPWNPWJCLIRJCNMLPOYRTRIEGTQQBQFHRQLALDIKQGYWYMDYOVOFYFUZKWUDEUVHVLTADKDTZLNOPLABBQCYDSSFACULUHGFBRQHLHPGBXPZWAPICRMCKNPHGXCXDRIOZYIESGDJXTFEKNMAISCVFWAJUIVDTKEGWZNETMQOKG");
    msg.state = 25U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.62329527228);
    msg.setSource(56286U);
    msg.setSourceEntity(43U);
    msg.setDestination(16179U);
    msg.setDestinationEntity(136U);
    msg.name.assign("BYZXAQMTUJWTIVAEQOWRDAMGSNDOPRHPTSEOAGKZGOKGCAGBCXFMKPXPFVJGYUQRTKKXQDOYKIVJUNUWIWBOF");
    msg.value = 26U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.695082386384);
    msg.setSource(24576U);
    msg.setSourceEntity(200U);
    msg.setDestination(37977U);
    msg.setDestinationEntity(118U);
    msg.name.assign("AJAVQZQNVHABOAGSDCJEOPEHLGNECFYHWDYFTCYYYPIMNKYPQMSGBHHSQNZGADSVCXPHVUFSXTTYTJOULZBGWHMRTIOBWICXOWSBRBOKCLUVFIVUVCIPILXTXSKJCUZQNNDQQRMTRYAQSOCYFXJRLPJZEMNWLPTGPFKUUJMZXBHHBFZKEGOFRBIUVRDTNPDDZEHRZPVEUXDIQEAOLWNRAGKVSKUEKFMGYJMKWA");
    msg.value = 127U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.704316953273);
    msg.setSource(53396U);
    msg.setSourceEntity(165U);
    msg.setDestination(58449U);
    msg.setDestinationEntity(98U);
    msg.name.assign("SMBKUJRMWDTLURWZNVYADYQFTSFOYCVGAQPZOEQCSPNKIRKDGTRKMIQGLNFHEWFEVNHJZCUZFKOTUWOOQLZIOJXIGCBQHMWPUSLOHQTVXAYHXYTPAEFIVDPXDHVLPJPGBNKQAOSBANRUSDAJVKXWVMELQJZDYFUSVDTZPCGUUARCJLFLKHETZCIMERXOLZCMSMBYNYHFWRXKNSTGPSEEMMJXVOIYBJDJAYNGUXRGBWPIIWXAE");
    msg.value = 205U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.0595168024068);
    msg.setSource(41479U);
    msg.setSourceEntity(17U);
    msg.setDestination(16874U);
    msg.setDestinationEntity(190U);
    msg.name.assign("HCJDZSUJFFCTVCENWPSYZRULUHWEYMWEDERTAKMJBNHVGVVNNPDBZZGDYIKFYMTCCRBUOADJQQUKXGWOKMPZQVTXYWMTIWUMOLFZNLJNESWNZGLICFCYQXFEUGGIQMXNDPJSWHDPSKKBSAQBJIDAGXEYEBPOCNAOUORCFQRVJUAXJVKOATPOIXBHLXCDFMGKQVDJMLSFGITANTQLGPIZERBKERPBIYHVHYMFXWOBHRZAYOKTHIASZS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.0119407028472);
    msg.setSource(63153U);
    msg.setSourceEntity(77U);
    msg.setDestination(40869U);
    msg.setDestinationEntity(89U);
    msg.name.assign("GVUVGRGQPWEIDWLPOTSDVQGSTOPFSYLYSFZYANAXBQHUJISGRLPQAMLAZDCVYBMHMLUUTHMKEFJOIDYHZSWKXMWTITIHUPAITWNBVBNPGFCUMCRAZDTFJNJRFIGOJQZRZKBXVK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.682363624466);
    msg.setSource(20655U);
    msg.setSourceEntity(102U);
    msg.setDestination(24674U);
    msg.setDestinationEntity(135U);
    msg.name.assign("FQXGZWAQKUWZUCHDZUCGYRSMUSUMMGLHTOXOOBTLRAFUYTWQPBAQXSNLROWXQPGITMYIY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.939567913034);
    msg.setSource(42054U);
    msg.setSourceEntity(46U);
    msg.setDestination(29796U);
    msg.setDestinationEntity(178U);
    msg.name.assign("EGGVYSVKOLLAOFXFJOQSDZRUGAYERUJBNHJPREBHTRTNTAVJONWAEOHKMCKUDTPIXSJWMWPXAAMWGCICWKMYZLMUIABEUPRSTLSYFFNDBZKFDPTSACADFZIYWKWPBUGLYQDZPDUGHXOBFVPJUVUICWQONOGQITWFVPZXZJIHHCKLSYNDMQLKHIEYEFOXTRQDUQRYGQJ");
    msg.value = 195U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.723652780167);
    msg.setSource(16999U);
    msg.setSourceEntity(182U);
    msg.setDestination(63620U);
    msg.setDestinationEntity(249U);
    msg.name.assign("YYQQZRHNLYARJWLIBGCFORXJTAYKVURFWO");
    msg.value = 41U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.8206802677);
    msg.setSource(18753U);
    msg.setSourceEntity(218U);
    msg.setDestination(39264U);
    msg.setDestinationEntity(148U);
    msg.name.assign("LNRNNRXUUMQSPFILAXJQEFHQAULIAVKCFBOPLZVNYBYQIPUAXGCRDGYGTNKBMRKCJCSUPHFLTDMVGLDOSSFPHPWWBZOKVDMIIMZISPFEPFZCSXWBRFXLDBEJMDNKTCJTZEVUBGRJSEEVDBDTOHWXWYQZYVHHLUXXQYWAUIOFNTNUZHOZHKJXGAAKMZEGYLMMOTVRUSAKEAIGJOFDQBQKYWGH");
    msg.value = 29U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.605053821647);
    msg.setSource(5433U);
    msg.setSourceEntity(177U);
    msg.setDestination(65460U);
    msg.setDestinationEntity(140U);
    msg.id = 198U;
    msg.period = 1516061056U;
    msg.duty_cycle = 889399067U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.158319303245);
    msg.setSource(34882U);
    msg.setSourceEntity(123U);
    msg.setDestination(55619U);
    msg.setDestinationEntity(237U);
    msg.id = 158U;
    msg.period = 491839207U;
    msg.duty_cycle = 4012373458U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.689821999018);
    msg.setSource(62447U);
    msg.setSourceEntity(3U);
    msg.setDestination(14287U);
    msg.setDestinationEntity(135U);
    msg.id = 151U;
    msg.period = 1434541051U;
    msg.duty_cycle = 3396783548U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.350963946019);
    msg.setSource(21563U);
    msg.setSourceEntity(60U);
    msg.setDestination(61679U);
    msg.setDestinationEntity(0U);
    msg.id = 46U;
    msg.period = 4016233626U;
    msg.duty_cycle = 4802939U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.72854900331);
    msg.setSource(33262U);
    msg.setSourceEntity(162U);
    msg.setDestination(5689U);
    msg.setDestinationEntity(43U);
    msg.id = 89U;
    msg.period = 913641057U;
    msg.duty_cycle = 1930302402U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.920859266412);
    msg.setSource(55840U);
    msg.setSourceEntity(238U);
    msg.setDestination(21650U);
    msg.setDestinationEntity(184U);
    msg.id = 9U;
    msg.period = 1031658077U;
    msg.duty_cycle = 3300408054U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.0114103324805);
    msg.setSource(18391U);
    msg.setSourceEntity(36U);
    msg.setDestination(10703U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.51228088385;
    msg.lon = 0.544738142578;
    msg.height = 0.690335699398;
    msg.x = 0.400529326935;
    msg.y = 0.460562115433;
    msg.z = 0.95263999427;
    msg.phi = 0.010810827273;
    msg.theta = 0.236778199983;
    msg.psi = 0.0144052629962;
    msg.u = 0.490469027185;
    msg.v = 0.809561151584;
    msg.w = 0.540567578999;
    msg.vx = 0.3485642432;
    msg.vy = 0.570039237132;
    msg.vz = 0.998526044638;
    msg.p = 0.167460849324;
    msg.q = 0.370145772003;
    msg.r = 0.954085720545;
    msg.depth = 0.366780787719;
    msg.alt = 0.491917198031;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.361983112525);
    msg.setSource(27775U);
    msg.setSourceEntity(226U);
    msg.setDestination(34280U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.620939631387;
    msg.lon = 0.366174743941;
    msg.height = 0.652753317325;
    msg.x = 0.369834546282;
    msg.y = 0.332830724105;
    msg.z = 0.149034083787;
    msg.phi = 0.496976212992;
    msg.theta = 0.759803681226;
    msg.psi = 0.0359163304946;
    msg.u = 0.67696122339;
    msg.v = 0.674082972031;
    msg.w = 0.900770924539;
    msg.vx = 0.13233059637;
    msg.vy = 0.883634916553;
    msg.vz = 0.814786635513;
    msg.p = 0.811088521554;
    msg.q = 0.536145260497;
    msg.r = 0.298800470338;
    msg.depth = 0.910880223144;
    msg.alt = 0.832903335803;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.412233434381);
    msg.setSource(44964U);
    msg.setSourceEntity(38U);
    msg.setDestination(3414U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.197673542357;
    msg.lon = 0.531722086641;
    msg.height = 0.497666978743;
    msg.x = 0.242128040567;
    msg.y = 0.178459581861;
    msg.z = 0.727776402078;
    msg.phi = 0.90798593594;
    msg.theta = 0.504175628906;
    msg.psi = 0.666781755017;
    msg.u = 0.531490901712;
    msg.v = 0.839377176237;
    msg.w = 0.0130481117301;
    msg.vx = 0.38340561073;
    msg.vy = 0.959449530359;
    msg.vz = 0.439043782051;
    msg.p = 0.25877257215;
    msg.q = 0.191864154824;
    msg.r = 0.972579486747;
    msg.depth = 0.119010385022;
    msg.alt = 0.277000151721;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.728059945942);
    msg.setSource(30763U);
    msg.setSourceEntity(238U);
    msg.setDestination(7356U);
    msg.setDestinationEntity(125U);
    msg.x = 0.12468721353;
    msg.y = 0.243138023294;
    msg.z = 0.237341433498;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.290046435064);
    msg.setSource(23115U);
    msg.setSourceEntity(163U);
    msg.setDestination(42376U);
    msg.setDestinationEntity(104U);
    msg.x = 0.170277703688;
    msg.y = 0.817318920627;
    msg.z = 0.083480492919;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.0802416029667);
    msg.setSource(52890U);
    msg.setSourceEntity(0U);
    msg.setDestination(62311U);
    msg.setDestinationEntity(96U);
    msg.x = 0.753749552943;
    msg.y = 0.731676675698;
    msg.z = 0.271704956281;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.684300736806);
    msg.setSource(60683U);
    msg.setSourceEntity(157U);
    msg.setDestination(32078U);
    msg.setDestinationEntity(140U);
    msg.value = 0.722759417558;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.0696544543851);
    msg.setSource(34817U);
    msg.setSourceEntity(208U);
    msg.setDestination(14095U);
    msg.setDestinationEntity(121U);
    msg.value = 0.970496213135;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.500646090941);
    msg.setSource(5728U);
    msg.setSourceEntity(203U);
    msg.setDestination(58836U);
    msg.setDestinationEntity(242U);
    msg.value = 0.868501068143;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.752003211316);
    msg.setSource(52010U);
    msg.setSourceEntity(131U);
    msg.setDestination(46527U);
    msg.setDestinationEntity(247U);
    msg.value = 0.550570195055;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.895334451907);
    msg.setSource(44579U);
    msg.setSourceEntity(83U);
    msg.setDestination(16992U);
    msg.setDestinationEntity(249U);
    msg.value = 0.0949154707112;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.842665703295);
    msg.setSource(35751U);
    msg.setSourceEntity(161U);
    msg.setDestination(21751U);
    msg.setDestinationEntity(169U);
    msg.value = 0.0230849993841;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.850580083358);
    msg.setSource(32332U);
    msg.setSourceEntity(134U);
    msg.setDestination(31821U);
    msg.setDestinationEntity(221U);
    msg.x = 0.617518794579;
    msg.y = 0.0296295285736;
    msg.z = 0.655086982968;
    msg.phi = 0.46777091761;
    msg.theta = 0.963698915704;
    msg.psi = 0.649678279579;
    msg.p = 0.572483432107;
    msg.q = 0.115987349102;
    msg.r = 0.41910405372;
    msg.u = 0.0649392173784;
    msg.v = 0.790620912875;
    msg.w = 0.680558965313;
    msg.bias_psi = 0.0849419076796;
    msg.bias_r = 0.030458185464;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.183102124884);
    msg.setSource(7514U);
    msg.setSourceEntity(98U);
    msg.setDestination(44173U);
    msg.setDestinationEntity(230U);
    msg.x = 0.836659107252;
    msg.y = 0.712406132635;
    msg.z = 0.0408003810996;
    msg.phi = 0.261396749521;
    msg.theta = 0.227888997932;
    msg.psi = 0.28476272045;
    msg.p = 0.434371108986;
    msg.q = 0.52412854993;
    msg.r = 0.856416430517;
    msg.u = 0.0152126201832;
    msg.v = 0.254135466383;
    msg.w = 0.579228614203;
    msg.bias_psi = 0.521057817014;
    msg.bias_r = 0.197127164901;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.472981188136);
    msg.setSource(917U);
    msg.setSourceEntity(23U);
    msg.setDestination(7414U);
    msg.setDestinationEntity(154U);
    msg.x = 0.344019714562;
    msg.y = 0.15616927041;
    msg.z = 0.698413848696;
    msg.phi = 0.136118209233;
    msg.theta = 0.564430977862;
    msg.psi = 0.644491856161;
    msg.p = 0.868251010045;
    msg.q = 0.580338705637;
    msg.r = 0.74106642265;
    msg.u = 0.279504833326;
    msg.v = 0.574513386521;
    msg.w = 0.145217711837;
    msg.bias_psi = 0.0695137657942;
    msg.bias_r = 0.987989390868;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.712200202514);
    msg.setSource(23153U);
    msg.setSourceEntity(128U);
    msg.setDestination(39316U);
    msg.setDestinationEntity(90U);
    msg.bias_psi = 0.481224933826;
    msg.bias_r = 0.669772702919;
    msg.cog = 0.755362845301;
    msg.cyaw = 0.352600750586;
    msg.lbl_rej_level = 0.0266572005553;
    msg.gps_rej_level = 0.586336415679;
    msg.custom_x = 0.486408007628;
    msg.custom_y = 0.958405135143;
    msg.custom_z = 0.0897948012841;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.226202157099);
    msg.setSource(29165U);
    msg.setSourceEntity(114U);
    msg.setDestination(43556U);
    msg.setDestinationEntity(101U);
    msg.bias_psi = 0.871360245261;
    msg.bias_r = 0.409383605914;
    msg.cog = 0.353499238311;
    msg.cyaw = 0.0296507281636;
    msg.lbl_rej_level = 0.3068904614;
    msg.gps_rej_level = 0.929065297723;
    msg.custom_x = 0.716891314123;
    msg.custom_y = 0.42779707752;
    msg.custom_z = 0.228888791926;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.185660521341);
    msg.setSource(2965U);
    msg.setSourceEntity(217U);
    msg.setDestination(41309U);
    msg.setDestinationEntity(221U);
    msg.bias_psi = 0.820451177244;
    msg.bias_r = 0.19370068803;
    msg.cog = 0.62337679718;
    msg.cyaw = 0.0454138995731;
    msg.lbl_rej_level = 0.00206329499401;
    msg.gps_rej_level = 0.226245867434;
    msg.custom_x = 0.136323123322;
    msg.custom_y = 0.205702725723;
    msg.custom_z = 0.556804813806;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.685996122898);
    msg.setSource(55843U);
    msg.setSourceEntity(203U);
    msg.setDestination(17742U);
    msg.setDestinationEntity(43U);
    msg.utc_time = 0.430683198651;
    msg.reason = 70U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.00858912181733);
    msg.setSource(12963U);
    msg.setSourceEntity(52U);
    msg.setDestination(63245U);
    msg.setDestinationEntity(215U);
    msg.utc_time = 0.275878410938;
    msg.reason = 190U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.414096535297);
    msg.setSource(63901U);
    msg.setSourceEntity(152U);
    msg.setDestination(11126U);
    msg.setDestinationEntity(229U);
    msg.utc_time = 0.326584725011;
    msg.reason = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.0745228412143);
    msg.setSource(64556U);
    msg.setSourceEntity(185U);
    msg.setDestination(4558U);
    msg.setDestinationEntity(77U);
    msg.id = 234U;
    msg.range = 0.184488939852;
    msg.acceptance = 129U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.274251977314);
    msg.setSource(18467U);
    msg.setSourceEntity(156U);
    msg.setDestination(29205U);
    msg.setDestinationEntity(63U);
    msg.id = 92U;
    msg.range = 0.735027829801;
    msg.acceptance = 47U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.619500856232);
    msg.setSource(60194U);
    msg.setSourceEntity(84U);
    msg.setDestination(26855U);
    msg.setDestinationEntity(165U);
    msg.id = 22U;
    msg.range = 0.85144946122;
    msg.acceptance = 108U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.969094495894);
    msg.setSource(33869U);
    msg.setSourceEntity(110U);
    msg.setDestination(17600U);
    msg.setDestinationEntity(13U);
    msg.type = 38U;
    msg.reason = 160U;
    msg.value = 0.349110650345;
    msg.timestep = 0.567327690142;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.367386977475);
    msg.setSource(25177U);
    msg.setSourceEntity(82U);
    msg.setDestination(13993U);
    msg.setDestinationEntity(51U);
    msg.type = 14U;
    msg.reason = 155U;
    msg.value = 0.136583865735;
    msg.timestep = 0.21812041502;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.211615589198);
    msg.setSource(11342U);
    msg.setSourceEntity(218U);
    msg.setDestination(4216U);
    msg.setDestinationEntity(216U);
    msg.type = 184U;
    msg.reason = 104U;
    msg.value = 0.418686642214;
    msg.timestep = 0.49248289334;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.655726789656);
    msg.setSource(57216U);
    msg.setSourceEntity(90U);
    msg.setDestination(54722U);
    msg.setDestinationEntity(250U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KHGRATXWMHWHMOGEUEDEHFIEMLAJLADZEQPSXRNFVBRPNFFKOQPCREBTGAPVEJLMSGNLQGYTYJFNDODCRBKOUIRNEECKQPHBZBMHDWROZYGTKUZPKJQMGRWVWAOQUVPDNSSFRSOXJKYIYVWLGUFSYIFOPXBC");
    tmp_msg_0.lat = 0.800303147594;
    tmp_msg_0.lon = 0.545007196097;
    tmp_msg_0.depth = 0.361220231955;
    tmp_msg_0.query_channel = 62U;
    tmp_msg_0.reply_channel = 233U;
    tmp_msg_0.transponder_delay = 243U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.325573221069;
    msg.y = 0.547384187026;
    msg.var_x = 0.665202298667;
    msg.var_y = 0.907689194994;
    msg.distance = 0.587680334418;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.466431044123);
    msg.setSource(13016U);
    msg.setSourceEntity(30U);
    msg.setDestination(3047U);
    msg.setDestinationEntity(27U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SMGIZNVBBWWLJLKQPDLSLNYYMKZYVBNQKDQCXJHDHNRREEPCCKGXUTAVDEAGVSMJBQFGSFWTEBPYMWZSRFWZFNMPRJTJVBONHPEOKDMNQHPGJOJXMAEJWYTNGDGWQUUIXMOALAYLGGYQZJCSNLAKXFXETIXOIUPJARTKXLRVYTKZUSOUFTHTQDUTVIXKEICCIDCPKELOOBBWRUGIHYCDSZIV");
    tmp_msg_0.lat = 0.123136261591;
    tmp_msg_0.lon = 0.332650237918;
    tmp_msg_0.depth = 0.43931399807;
    tmp_msg_0.query_channel = 39U;
    tmp_msg_0.reply_channel = 219U;
    tmp_msg_0.transponder_delay = 11U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.415946427657;
    msg.y = 0.0651046191546;
    msg.var_x = 0.42816645486;
    msg.var_y = 0.431732193969;
    msg.distance = 0.635128712078;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.860397745432);
    msg.setSource(43548U);
    msg.setSourceEntity(133U);
    msg.setDestination(7956U);
    msg.setDestinationEntity(37U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZLQDSWDSZUPTEAQPJMTSIAOMXHFYHMKCBVHFOHUAECDZNOQYHATPXQWYEYGDRRNXBMTAXECFNURSDLOYWLHEVPZXYFGCBPJKTWCNLWULSVHHDWOPAMKKGMXOJMQVJNSRVIJJEORXFRYIMUDGKPBGMOQTAETRDIKDYJAZUUPLIMNJTWWKPILBIE");
    tmp_msg_0.lat = 0.756301854954;
    tmp_msg_0.lon = 0.106466997343;
    tmp_msg_0.depth = 0.648779501347;
    tmp_msg_0.query_channel = 73U;
    tmp_msg_0.reply_channel = 14U;
    tmp_msg_0.transponder_delay = 189U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.855474215521;
    msg.y = 0.314981163726;
    msg.var_x = 0.51177783342;
    msg.var_y = 0.891458336075;
    msg.distance = 0.599336935387;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.653347089404);
    msg.setSource(26727U);
    msg.setSourceEntity(76U);
    msg.setDestination(20155U);
    msg.setDestinationEntity(63U);
    msg.state = 108U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.998349357097);
    msg.setSource(50121U);
    msg.setSourceEntity(162U);
    msg.setDestination(32796U);
    msg.setDestinationEntity(95U);
    msg.state = 226U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.842822021164);
    msg.setSource(24386U);
    msg.setSourceEntity(214U);
    msg.setDestination(55184U);
    msg.setDestinationEntity(91U);
    msg.state = 92U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.650715337251);
    msg.setSource(51168U);
    msg.setSourceEntity(156U);
    msg.setDestination(14642U);
    msg.setDestinationEntity(4U);
    msg.x = 0.558156712293;
    msg.y = 0.0597839429695;
    msg.z = 0.965202399243;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.507457581838);
    msg.setSource(40191U);
    msg.setSourceEntity(226U);
    msg.setDestination(63914U);
    msg.setDestinationEntity(119U);
    msg.x = 0.614206350843;
    msg.y = 0.0704906997305;
    msg.z = 0.580895062131;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.279967487178);
    msg.setSource(35985U);
    msg.setSourceEntity(24U);
    msg.setDestination(1779U);
    msg.setDestinationEntity(77U);
    msg.x = 0.380320250277;
    msg.y = 0.979707749374;
    msg.z = 0.854958142883;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.630068298296);
    msg.setSource(867U);
    msg.setSourceEntity(167U);
    msg.setDestination(30590U);
    msg.setDestinationEntity(154U);
    msg.va = 0.053014464002;
    msg.aoa = 0.428708512941;
    msg.ssa = 0.743161925857;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.924509303298);
    msg.setSource(27198U);
    msg.setSourceEntity(211U);
    msg.setDestination(15820U);
    msg.setDestinationEntity(31U);
    msg.va = 0.643742712152;
    msg.aoa = 0.762486354345;
    msg.ssa = 0.950776945073;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.576305296895);
    msg.setSource(28745U);
    msg.setSourceEntity(154U);
    msg.setDestination(13477U);
    msg.setDestinationEntity(167U);
    msg.va = 0.944472640396;
    msg.aoa = 0.586274237187;
    msg.ssa = 0.434976479485;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.24424739681);
    msg.setSource(38064U);
    msg.setSourceEntity(201U);
    msg.setDestination(63965U);
    msg.setDestinationEntity(162U);
    msg.value = 0.836715424544;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.0152879494809);
    msg.setSource(47560U);
    msg.setSourceEntity(249U);
    msg.setDestination(34650U);
    msg.setDestinationEntity(111U);
    msg.value = 0.55387287431;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.384642231667);
    msg.setSource(29609U);
    msg.setSourceEntity(56U);
    msg.setDestination(23875U);
    msg.setDestinationEntity(206U);
    msg.value = 0.884025819086;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.297455957793);
    msg.setSource(64344U);
    msg.setSourceEntity(66U);
    msg.setDestination(18479U);
    msg.setDestinationEntity(123U);
    msg.value = 0.454808002401;
    msg.z_units = 122U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.183600936005);
    msg.setSource(50422U);
    msg.setSourceEntity(180U);
    msg.setDestination(15246U);
    msg.setDestinationEntity(107U);
    msg.value = 0.977611487133;
    msg.z_units = 80U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.288880745059);
    msg.setSource(60176U);
    msg.setSourceEntity(24U);
    msg.setDestination(41186U);
    msg.setDestinationEntity(40U);
    msg.value = 0.847883491016;
    msg.z_units = 92U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.0983337700244);
    msg.setSource(53789U);
    msg.setSourceEntity(92U);
    msg.setDestination(64078U);
    msg.setDestinationEntity(137U);
    msg.value = 0.0609394521801;
    msg.speed_units = 18U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.947571913797);
    msg.setSource(22405U);
    msg.setSourceEntity(112U);
    msg.setDestination(38952U);
    msg.setDestinationEntity(205U);
    msg.value = 0.920926043344;
    msg.speed_units = 167U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.0527115223709);
    msg.setSource(8596U);
    msg.setSourceEntity(130U);
    msg.setDestination(25068U);
    msg.setDestinationEntity(246U);
    msg.value = 0.855504151499;
    msg.speed_units = 50U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.406484844621);
    msg.setSource(55276U);
    msg.setSourceEntity(81U);
    msg.setDestination(2501U);
    msg.setDestinationEntity(186U);
    msg.value = 0.138875960849;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.995558333569);
    msg.setSource(36561U);
    msg.setSourceEntity(23U);
    msg.setDestination(4614U);
    msg.setDestinationEntity(62U);
    msg.value = 0.330681542933;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.644867464211);
    msg.setSource(51943U);
    msg.setSourceEntity(52U);
    msg.setDestination(30547U);
    msg.setDestinationEntity(51U);
    msg.value = 0.944006155663;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.64471009984);
    msg.setSource(28473U);
    msg.setSourceEntity(167U);
    msg.setDestination(2273U);
    msg.setDestinationEntity(200U);
    msg.value = 0.732679365553;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.589299830347);
    msg.setSource(3986U);
    msg.setSourceEntity(192U);
    msg.setDestination(56761U);
    msg.setDestinationEntity(35U);
    msg.value = 0.635171855342;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.704980879618);
    msg.setSource(26415U);
    msg.setSourceEntity(253U);
    msg.setDestination(63671U);
    msg.setDestinationEntity(242U);
    msg.value = 0.00175194364203;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.0313043271505);
    msg.setSource(46849U);
    msg.setSourceEntity(63U);
    msg.setDestination(48161U);
    msg.setDestinationEntity(139U);
    msg.value = 0.979427587482;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.647112301608);
    msg.setSource(14242U);
    msg.setSourceEntity(222U);
    msg.setDestination(41060U);
    msg.setDestinationEntity(71U);
    msg.value = 0.144895125105;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.566062357704);
    msg.setSource(26247U);
    msg.setSourceEntity(105U);
    msg.setDestination(44910U);
    msg.setDestinationEntity(135U);
    msg.value = 0.81277841591;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.964595100264);
    msg.setSource(18077U);
    msg.setSourceEntity(118U);
    msg.setDestination(19497U);
    msg.setDestinationEntity(64U);
    msg.path_ref = 3583510785U;
    msg.start_lat = 0.836974478808;
    msg.start_lon = 0.117500472317;
    msg.start_z = 0.0314089335373;
    msg.start_z_units = 152U;
    msg.end_lat = 0.376444091406;
    msg.end_lon = 0.0649829824602;
    msg.end_z = 0.0637497867053;
    msg.end_z_units = 194U;
    msg.speed = 0.336798714418;
    msg.speed_units = 164U;
    msg.lradius = 0.145826981042;
    msg.flags = 221U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.16814053579);
    msg.setSource(56909U);
    msg.setSourceEntity(110U);
    msg.setDestination(52365U);
    msg.setDestinationEntity(161U);
    msg.path_ref = 707831108U;
    msg.start_lat = 0.716222983587;
    msg.start_lon = 0.517515852208;
    msg.start_z = 0.440516837776;
    msg.start_z_units = 98U;
    msg.end_lat = 0.763810640564;
    msg.end_lon = 0.139203380429;
    msg.end_z = 0.556832486489;
    msg.end_z_units = 85U;
    msg.speed = 0.336101453083;
    msg.speed_units = 245U;
    msg.lradius = 0.729710579765;
    msg.flags = 13U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.624763125825);
    msg.setSource(15123U);
    msg.setSourceEntity(202U);
    msg.setDestination(33323U);
    msg.setDestinationEntity(1U);
    msg.path_ref = 1201169568U;
    msg.start_lat = 0.86829328188;
    msg.start_lon = 0.258536268065;
    msg.start_z = 0.981642704284;
    msg.start_z_units = 100U;
    msg.end_lat = 0.17721482532;
    msg.end_lon = 0.682063396332;
    msg.end_z = 0.255233908254;
    msg.end_z_units = 133U;
    msg.speed = 0.705931943773;
    msg.speed_units = 152U;
    msg.lradius = 0.554352894911;
    msg.flags = 71U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.0521787885325);
    msg.setSource(29539U);
    msg.setSourceEntity(151U);
    msg.setDestination(9235U);
    msg.setDestinationEntity(130U);
    msg.x = 0.731298847225;
    msg.y = 0.400885301633;
    msg.z = 0.857879091913;
    msg.k = 0.0993506340526;
    msg.m = 0.540351503323;
    msg.n = 0.055809904166;
    msg.flags = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.835154906248);
    msg.setSource(54679U);
    msg.setSourceEntity(143U);
    msg.setDestination(55177U);
    msg.setDestinationEntity(150U);
    msg.x = 0.179600026285;
    msg.y = 0.959077369717;
    msg.z = 0.460669958921;
    msg.k = 0.960520638477;
    msg.m = 0.863575359349;
    msg.n = 0.142858942929;
    msg.flags = 168U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.0834262784199);
    msg.setSource(3105U);
    msg.setSourceEntity(136U);
    msg.setDestination(39767U);
    msg.setDestinationEntity(215U);
    msg.x = 0.595075927345;
    msg.y = 0.0245944928185;
    msg.z = 0.245179991671;
    msg.k = 0.538619261591;
    msg.m = 0.982085269809;
    msg.n = 0.498324726012;
    msg.flags = 8U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.240080741416);
    msg.setSource(468U);
    msg.setSourceEntity(81U);
    msg.setDestination(23386U);
    msg.setDestinationEntity(136U);
    msg.value = 0.0473917116586;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.910008752738);
    msg.setSource(58690U);
    msg.setSourceEntity(142U);
    msg.setDestination(11239U);
    msg.setDestinationEntity(57U);
    msg.value = 0.278138946815;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.783524926818);
    msg.setSource(42590U);
    msg.setSourceEntity(214U);
    msg.setDestination(58439U);
    msg.setDestinationEntity(144U);
    msg.value = 0.364342612767;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.958088898413);
    msg.setSource(9530U);
    msg.setSourceEntity(44U);
    msg.setDestination(53692U);
    msg.setDestinationEntity(18U);
    msg.u = 0.628044852611;
    msg.v = 0.496149463994;
    msg.w = 0.923988794222;
    msg.p = 0.326690435331;
    msg.q = 0.721384724096;
    msg.r = 0.099240750844;
    msg.flags = 239U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.639065291131);
    msg.setSource(20930U);
    msg.setSourceEntity(69U);
    msg.setDestination(42655U);
    msg.setDestinationEntity(178U);
    msg.u = 0.685110009508;
    msg.v = 0.405661155475;
    msg.w = 0.669420278699;
    msg.p = 0.621919608096;
    msg.q = 0.912833024964;
    msg.r = 0.228922093851;
    msg.flags = 170U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.764181010785);
    msg.setSource(9637U);
    msg.setSourceEntity(119U);
    msg.setDestination(11390U);
    msg.setDestinationEntity(60U);
    msg.u = 0.684978419542;
    msg.v = 0.167045504763;
    msg.w = 0.174043415186;
    msg.p = 0.306417657071;
    msg.q = 0.897549958984;
    msg.r = 0.536115688384;
    msg.flags = 240U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.802457425143);
    msg.setSource(51287U);
    msg.setSourceEntity(183U);
    msg.setDestination(30369U);
    msg.setDestinationEntity(66U);
    msg.path_ref = 610529579U;
    msg.start_lat = 0.837774127917;
    msg.start_lon = 0.137682690355;
    msg.start_z = 0.0344971165367;
    msg.start_z_units = 154U;
    msg.end_lat = 0.544283080517;
    msg.end_lon = 0.721901935027;
    msg.end_z = 0.567794141803;
    msg.end_z_units = 28U;
    msg.lradius = 0.203195420471;
    msg.flags = 206U;
    msg.x = 0.275993120797;
    msg.y = 0.584539071309;
    msg.z = 0.842439967759;
    msg.vx = 0.332436914869;
    msg.vy = 0.971485892417;
    msg.vz = 0.588378323894;
    msg.course_error = 0.221822755277;
    msg.eta = 48356U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.887167097428);
    msg.setSource(9004U);
    msg.setSourceEntity(182U);
    msg.setDestination(17024U);
    msg.setDestinationEntity(191U);
    msg.path_ref = 3835513841U;
    msg.start_lat = 0.304806761695;
    msg.start_lon = 0.000141897966931;
    msg.start_z = 0.611965860656;
    msg.start_z_units = 126U;
    msg.end_lat = 0.95091217155;
    msg.end_lon = 0.850962714982;
    msg.end_z = 0.889735813103;
    msg.end_z_units = 26U;
    msg.lradius = 0.686983567002;
    msg.flags = 97U;
    msg.x = 0.395794586147;
    msg.y = 0.795628623795;
    msg.z = 0.390754423206;
    msg.vx = 0.641738054331;
    msg.vy = 0.284412563738;
    msg.vz = 0.609995380117;
    msg.course_error = 0.581160583983;
    msg.eta = 3857U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.686189586128);
    msg.setSource(11320U);
    msg.setSourceEntity(182U);
    msg.setDestination(37452U);
    msg.setDestinationEntity(14U);
    msg.path_ref = 2145483972U;
    msg.start_lat = 0.67094744955;
    msg.start_lon = 0.911483568817;
    msg.start_z = 0.32876383367;
    msg.start_z_units = 84U;
    msg.end_lat = 0.357115728142;
    msg.end_lon = 0.197911049882;
    msg.end_z = 0.687074110897;
    msg.end_z_units = 179U;
    msg.lradius = 0.693703509765;
    msg.flags = 7U;
    msg.x = 0.943087120599;
    msg.y = 0.606158187391;
    msg.z = 0.968232710335;
    msg.vx = 0.952284526144;
    msg.vy = 0.29276856884;
    msg.vz = 0.370746715474;
    msg.course_error = 0.73514091223;
    msg.eta = 14753U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.421073051476);
    msg.setSource(43587U);
    msg.setSourceEntity(245U);
    msg.setDestination(55013U);
    msg.setDestinationEntity(36U);
    msg.k = 0.0735727923924;
    msg.m = 0.629322180384;
    msg.n = 0.151605800364;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.0802097506292);
    msg.setSource(25486U);
    msg.setSourceEntity(204U);
    msg.setDestination(18093U);
    msg.setDestinationEntity(137U);
    msg.k = 0.384446287364;
    msg.m = 0.735739144415;
    msg.n = 0.488189680831;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.340158256603);
    msg.setSource(45507U);
    msg.setSourceEntity(223U);
    msg.setDestination(46850U);
    msg.setDestinationEntity(96U);
    msg.k = 0.59835808168;
    msg.m = 0.648727589213;
    msg.n = 0.433227573499;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.436449956365);
    msg.setSource(40528U);
    msg.setSourceEntity(132U);
    msg.setDestination(7502U);
    msg.setDestinationEntity(212U);
    msg.p = 0.757767375768;
    msg.i = 0.0931631111799;
    msg.d = 0.491541956457;
    msg.a = 0.686108250669;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.295790313816);
    msg.setSource(45350U);
    msg.setSourceEntity(27U);
    msg.setDestination(24953U);
    msg.setDestinationEntity(246U);
    msg.p = 0.600697125151;
    msg.i = 0.266977020733;
    msg.d = 0.00536536712397;
    msg.a = 0.598431954952;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.101989664196);
    msg.setSource(20061U);
    msg.setSourceEntity(167U);
    msg.setDestination(21758U);
    msg.setDestinationEntity(186U);
    msg.p = 0.309905670447;
    msg.i = 0.0997685105558;
    msg.d = 0.783753275469;
    msg.a = 0.498874670836;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.772807243724);
    msg.setSource(65438U);
    msg.setSourceEntity(104U);
    msg.setDestination(20167U);
    msg.setDestinationEntity(30U);
    msg.op = 147U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.938387137724);
    msg.setSource(36993U);
    msg.setSourceEntity(207U);
    msg.setDestination(65294U);
    msg.setDestinationEntity(6U);
    msg.op = 47U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.662121608493);
    msg.setSource(29601U);
    msg.setSourceEntity(55U);
    msg.setDestination(63083U);
    msg.setDestinationEntity(247U);
    msg.op = 210U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.464491662989);
    msg.setSource(9921U);
    msg.setSourceEntity(118U);
    msg.setDestination(8959U);
    msg.setDestinationEntity(250U);
    msg.x = 0.511847448513;
    msg.y = 0.674061212804;
    msg.z = 0.592347018803;
    msg.vx = 0.864715669033;
    msg.vy = 0.470379464358;
    msg.vz = 0.906484662886;
    msg.ax = 0.450794516781;
    msg.ay = 0.119371991129;
    msg.az = 0.0319295488879;
    msg.flags = 55504U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.910179189113);
    msg.setSource(16250U);
    msg.setSourceEntity(193U);
    msg.setDestination(16835U);
    msg.setDestinationEntity(156U);
    msg.x = 0.709883381208;
    msg.y = 0.00555809731942;
    msg.z = 0.240657907928;
    msg.vx = 0.697716671126;
    msg.vy = 0.00554481983572;
    msg.vz = 0.859019159876;
    msg.ax = 0.738539390077;
    msg.ay = 0.145648732179;
    msg.az = 0.150956324812;
    msg.flags = 54046U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.328687017931);
    msg.setSource(44241U);
    msg.setSourceEntity(197U);
    msg.setDestination(4455U);
    msg.setDestinationEntity(162U);
    msg.x = 0.990997053396;
    msg.y = 0.441140501979;
    msg.z = 0.95995466843;
    msg.vx = 0.326126303843;
    msg.vy = 0.729656321224;
    msg.vz = 0.501545824721;
    msg.ax = 0.963426743804;
    msg.ay = 0.391375985603;
    msg.az = 0.493769712788;
    msg.flags = 54013U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.568799381013);
    msg.setSource(39044U);
    msg.setSourceEntity(183U);
    msg.setDestination(30102U);
    msg.setDestinationEntity(216U);
    msg.value = 0.590232236628;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.551933729097);
    msg.setSource(60620U);
    msg.setSourceEntity(217U);
    msg.setDestination(57072U);
    msg.setDestinationEntity(160U);
    msg.value = 0.252046557687;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.552182601521);
    msg.setSource(16366U);
    msg.setSourceEntity(110U);
    msg.setDestination(950U);
    msg.setDestinationEntity(198U);
    msg.value = 0.0774148976268;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.613006091308);
    msg.setSource(36579U);
    msg.setSourceEntity(35U);
    msg.setDestination(58681U);
    msg.setDestinationEntity(16U);
    msg.timeout = 28722U;
    msg.lat = 0.459760737948;
    msg.lon = 0.165845624514;
    msg.z = 0.482691726172;
    msg.z_units = 17U;
    msg.speed = 0.211851393638;
    msg.speed_units = 131U;
    msg.roll = 0.210644789615;
    msg.pitch = 0.668965579323;
    msg.yaw = 0.850033755862;
    msg.custom.assign("RYARNFGIRXEKLB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.19833413882);
    msg.setSource(37143U);
    msg.setSourceEntity(169U);
    msg.setDestination(52268U);
    msg.setDestinationEntity(217U);
    msg.timeout = 23820U;
    msg.lat = 0.940145878678;
    msg.lon = 0.83588227209;
    msg.z = 0.362320839243;
    msg.z_units = 124U;
    msg.speed = 0.818857949201;
    msg.speed_units = 214U;
    msg.roll = 0.143408621632;
    msg.pitch = 0.527048284388;
    msg.yaw = 0.383628738565;
    msg.custom.assign("IJVMLBCXMOTQLUFJURDMKTDULGHBAZOTTOMNGAZNIJZPSNMNUSCENDORZDWLJESETBMILGNQHCBEERUBMWKHFPZOQXDRAAYEQAXHXKJCMIOPWWKQQNMYEAGZLPXOXCWLAUICWVNYHSDFXNKAJVILJXBYRPQLEDFGBFZWYGZTCHY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.414579725754);
    msg.setSource(57194U);
    msg.setSourceEntity(119U);
    msg.setDestination(31755U);
    msg.setDestinationEntity(40U);
    msg.timeout = 58142U;
    msg.lat = 0.188141833818;
    msg.lon = 0.539578561159;
    msg.z = 0.484605461731;
    msg.z_units = 94U;
    msg.speed = 0.602849356113;
    msg.speed_units = 141U;
    msg.roll = 0.726270858499;
    msg.pitch = 0.99037373952;
    msg.yaw = 0.0315515538508;
    msg.custom.assign("SCWYBRQRUSLXFIHYMLZSNPWTTQKKIZPV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.347722051177);
    msg.setSource(40310U);
    msg.setSourceEntity(203U);
    msg.setDestination(13655U);
    msg.setDestinationEntity(24U);
    msg.timeout = 18262U;
    msg.lat = 0.682445739314;
    msg.lon = 0.292326544186;
    msg.z = 0.264498437239;
    msg.z_units = 138U;
    msg.speed = 0.647521780587;
    msg.speed_units = 222U;
    msg.duration = 61417U;
    msg.radius = 0.312924927189;
    msg.flags = 9U;
    msg.custom.assign("NMMIWGRBKZBKINSJQWRPRMKCVHLYEEUTBHSZIONVONANVSCYCSSYSFYGVONJLGAMHTAVXMEXKFHCAQBKJMVHECOCLFQGDWQMIRBIDETRQJBPOUDK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.766706137835);
    msg.setSource(41934U);
    msg.setSourceEntity(61U);
    msg.setDestination(18953U);
    msg.setDestinationEntity(32U);
    msg.timeout = 22587U;
    msg.lat = 0.842109914995;
    msg.lon = 0.530151506798;
    msg.z = 0.118676619437;
    msg.z_units = 126U;
    msg.speed = 0.020294542484;
    msg.speed_units = 216U;
    msg.duration = 41197U;
    msg.radius = 0.0595074372527;
    msg.flags = 14U;
    msg.custom.assign("RCBQAFEDXPCKHYXUNISTVLPQRGMUCZUPGBSROFWDVIUJIJYXWVPFACRVEEUZKSEYLFESOQZQRTUMLQMTLTTZV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.501983816624);
    msg.setSource(51147U);
    msg.setSourceEntity(149U);
    msg.setDestination(38565U);
    msg.setDestinationEntity(220U);
    msg.timeout = 40703U;
    msg.lat = 0.991676353342;
    msg.lon = 0.967612253027;
    msg.z = 0.472512586855;
    msg.z_units = 181U;
    msg.speed = 0.429575919243;
    msg.speed_units = 245U;
    msg.duration = 53551U;
    msg.radius = 0.026442793426;
    msg.flags = 53U;
    msg.custom.assign("OGXTWHESMXVLSMNEFLKQTIYVUOPEBLKUTEWDFQWRZYEIHZDBFUTHBFBFHLTWQJDVIRMZZNCSGRAGDPYQLFCHZKMVMOHSYYPGDOIBDORCPRXWBFPPVVHZOCYKSNGMUWQPAVYXUOGNSXBLFXQJGAXKQDBA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.381033311247);
    msg.setSource(28812U);
    msg.setSourceEntity(23U);
    msg.setDestination(39024U);
    msg.setDestinationEntity(195U);
    msg.custom.assign("TADGXUQDOSBNGLMTFNDZLDDRVCIEGIVYUFPYHRAKGLMMPCOLEGSKHPAJTVUYOFDCGAKNNTMTOAJEUCIAMZYGUAUZHZKCSWMIOXYRWCGRSBTVQRLSNQGRFLBZBESBC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.892000960389);
    msg.setSource(55621U);
    msg.setSourceEntity(220U);
    msg.setDestination(49735U);
    msg.setDestinationEntity(151U);
    msg.custom.assign("WSAGZFHQWPOPFDYBBCHJEUBDTQUQQLRCRLEURAGONAVOSGIEEPQRXEMLSQAYJODHIIBNNMYWLTLHPHJDFCSVVUJWMAPXHCDIPFGAMBUYEKWKEFMCYQIONZCUYZZHQZAVIBJERFTGPXRPEOBOIGVHKTXMZWKXUQXMLDPKSLLFDGUAUKIJQFOFSXNMWXJXINOGSWVUSXTGVESTCYCMRBONLYZHFVYJWIGJWBANRKTPTCRY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.266560177327);
    msg.setSource(26684U);
    msg.setSourceEntity(156U);
    msg.setDestination(7913U);
    msg.setDestinationEntity(187U);
    msg.custom.assign("AJZOAIIMRVAKAVYKRSTVLXO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.0418501478797);
    msg.setSource(30159U);
    msg.setSourceEntity(199U);
    msg.setDestination(41086U);
    msg.setDestinationEntity(221U);
    msg.timeout = 2684U;
    msg.lat = 0.700136316383;
    msg.lon = 0.479397414571;
    msg.z = 0.0400517020117;
    msg.z_units = 35U;
    msg.duration = 48748U;
    msg.speed = 0.821109326871;
    msg.speed_units = 124U;
    msg.type = 58U;
    msg.radius = 0.371295029824;
    msg.length = 0.6136693962;
    msg.bearing = 0.638702786545;
    msg.direction = 118U;
    msg.custom.assign("RKXXMVYPQIOLNLBAONJJKDJTMUMWKVIBAHHFFKKEXRMTTCFNACUYJGJSGZYBEGPNMZCNQIOAXYJDEOOXTQZTHRSXDLEOKBIKDNSQYWEFUYUATEIFSACSZERKFTLBGHMCNAUMGDQRLVAJQBWSESJCIPVPDWOBTIYCMSL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.190119331681);
    msg.setSource(48231U);
    msg.setSourceEntity(122U);
    msg.setDestination(33055U);
    msg.setDestinationEntity(33U);
    msg.timeout = 807U;
    msg.lat = 0.478358133714;
    msg.lon = 0.286815475534;
    msg.z = 0.188569193015;
    msg.z_units = 159U;
    msg.duration = 32446U;
    msg.speed = 0.781321173329;
    msg.speed_units = 76U;
    msg.type = 64U;
    msg.radius = 0.877528747034;
    msg.length = 0.94445338584;
    msg.bearing = 0.430702570349;
    msg.direction = 254U;
    msg.custom.assign("QJIBINEUKIAZJU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.153352129201);
    msg.setSource(54993U);
    msg.setSourceEntity(119U);
    msg.setDestination(50690U);
    msg.setDestinationEntity(79U);
    msg.timeout = 18865U;
    msg.lat = 0.572685615361;
    msg.lon = 0.129975674526;
    msg.z = 0.591646986813;
    msg.z_units = 31U;
    msg.duration = 33023U;
    msg.speed = 0.749489795097;
    msg.speed_units = 6U;
    msg.type = 194U;
    msg.radius = 0.18918978348;
    msg.length = 0.871248623254;
    msg.bearing = 0.760106277884;
    msg.direction = 14U;
    msg.custom.assign("MZFDIKYAPUKAJQZUKHEDIEMEVLTUBPIQXOGFTUNXDJXGOHQLVBYSBBQZWTHPMXEGBSFMNRKVHWWPDHGFZJKARVRZMFSKTQKIDNCVDGXTSXRYSMCYAWUBUUIHTWQCUMZHXQNOLMTXNSJLOULAVECZCJWERGNYBXDPMHOAOCBSNIWXAGSQOZTVQYJZKOMLWRDAIIRDBHEPFYJFTCCZJCYALIONGPNWDEPGQJCTNAHEFKLRKJP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.192649845297);
    msg.setSource(61256U);
    msg.setSourceEntity(111U);
    msg.setDestination(34192U);
    msg.setDestinationEntity(68U);
    msg.duration = 15581U;
    msg.custom.assign("FKAQSZYRHYZECBNTFRJOXNQSFLRBRIZWBVF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.754358649655);
    msg.setSource(47898U);
    msg.setSourceEntity(142U);
    msg.setDestination(27883U);
    msg.setDestinationEntity(150U);
    msg.duration = 10993U;
    msg.custom.assign("TTEARFHUCGWKRMKNXDXVUYFPKODIGLLKYWBJBYGFLPKAULIJQKGNOXPTQAGJPSUXNPUDBCOCNCBHABAORETSNQLQY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.793183881058);
    msg.setSource(49593U);
    msg.setSourceEntity(179U);
    msg.setDestination(12419U);
    msg.setDestinationEntity(48U);
    msg.duration = 1922U;
    msg.custom.assign("YGQPINCNCWUOAGZQEPOSLNVZDXHHVZEIBEWEFAORWMHFICVVOWIEOWPNCATDNDTKTTLOGDIDATISQZTKCTSAAOFSAEYREJCXJRMXHYIOKQPUKMSVGGFNSFULOJIQFDHULBWEZWMLVAMBIQLVUMPNYGJHNRPFBXDULSTTDWXARWLEHQXLYBSPXBKCKKDHRIXZVMPGYJKZRHQKZMMFQEBHGDYZXNVNMRSJXJPKQUGBBJBCC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.421468640865);
    msg.setSource(38113U);
    msg.setSourceEntity(184U);
    msg.setDestination(39927U);
    msg.setDestinationEntity(124U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.486299102544;
    tmp_msg_0.speed_units = 205U;
    msg.control.set(tmp_msg_0);
    msg.duration = 23574U;
    msg.custom.assign("SOYOQSMZDALXSNGSMVLZKSTZNUAHMAVSFHEBWMWVE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.813470319442);
    msg.setSource(37005U);
    msg.setSourceEntity(226U);
    msg.setDestination(46501U);
    msg.setDestinationEntity(174U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.125947908133;
    msg.control.set(tmp_msg_0);
    msg.duration = 35170U;
    msg.custom.assign("NXNSUJQMHCPCMCFODRKNQTOILI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.331683705521);
    msg.setSource(48325U);
    msg.setSourceEntity(162U);
    msg.setDestination(35471U);
    msg.setDestinationEntity(234U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.984542804027;
    msg.control.set(tmp_msg_0);
    msg.duration = 46959U;
    msg.custom.assign("AXWMETYHHMNGROCSSTUFRRLSNWNGLVWRDQCETSOGCYZVEFXNLUCKNKJLLLCXQDTMXXBNOTEJFLGIHDKFFDYXRJGZKIKHBVRBDPTSZQZMLLYLFABOEPPYRBGBUIXDCZWYJWEXOOSPIQQCCJJPVOFWJFQMEQHGYVVNBISYUGZWCCTOGMAAIBNUGKFKWZDRPF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.579389709099);
    msg.setSource(53843U);
    msg.setSourceEntity(183U);
    msg.setDestination(36974U);
    msg.setDestinationEntity(237U);
    msg.timeout = 64798U;
    msg.lat = 0.420646202451;
    msg.lon = 0.998341517769;
    msg.z = 0.208182456081;
    msg.z_units = 174U;
    msg.speed = 0.0778360793321;
    msg.speed_units = 101U;
    msg.bearing = 0.299708234837;
    msg.cross_angle = 0.22965324574;
    msg.width = 0.746421167161;
    msg.length = 0.755206132624;
    msg.hstep = 0.878122018338;
    msg.coff = 224U;
    msg.alternation = 20U;
    msg.flags = 235U;
    msg.custom.assign("OTHVMCNMBROXXDZHCSEIGHZRAPYWUVHGPIBFIDJUKPAKBJAPLNOZTLADREWMXXIKJQVGNHSFSHQICRHSQSNJGQEZGVXYKJDZLNDZKJFSIIWKTMYDRQEWMNKFSFOEBSYAZJSLS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.570960691988);
    msg.setSource(51115U);
    msg.setSourceEntity(206U);
    msg.setDestination(32092U);
    msg.setDestinationEntity(178U);
    msg.timeout = 62141U;
    msg.lat = 0.481218773583;
    msg.lon = 0.567567694806;
    msg.z = 0.257873640835;
    msg.z_units = 69U;
    msg.speed = 0.255498308913;
    msg.speed_units = 201U;
    msg.bearing = 0.372499159396;
    msg.cross_angle = 0.888607203338;
    msg.width = 0.211897623168;
    msg.length = 0.590152511267;
    msg.hstep = 0.980883963886;
    msg.coff = 137U;
    msg.alternation = 90U;
    msg.flags = 54U;
    msg.custom.assign("GMYLMKOPQCOIIIKSXOUNLZUWRRQHESPXMCDARXNITREWIZHFALMLQDTFHTACBZJGMZHLWFMHIKUKZHOWECHSZUUWUZOVBYMGPEUG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.693625486482);
    msg.setSource(51277U);
    msg.setSourceEntity(84U);
    msg.setDestination(8521U);
    msg.setDestinationEntity(60U);
    msg.timeout = 55798U;
    msg.lat = 0.97774020423;
    msg.lon = 0.69374321633;
    msg.z = 0.160871328524;
    msg.z_units = 28U;
    msg.speed = 0.706808310385;
    msg.speed_units = 208U;
    msg.bearing = 0.960080389195;
    msg.cross_angle = 0.192034126279;
    msg.width = 0.237551685464;
    msg.length = 0.152315768634;
    msg.hstep = 0.287791883739;
    msg.coff = 252U;
    msg.alternation = 184U;
    msg.flags = 144U;
    msg.custom.assign("EQSIZQCBGTVUZWPICWHWXKNRHDOFBKMUITVSLGMYNXLUJCBEVWSMRDPRWJNLDZVHJNMZDFBDOKOOOIDNPRBNJYKIGJRZVX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.492996114598);
    msg.setSource(60679U);
    msg.setSourceEntity(220U);
    msg.setDestination(10408U);
    msg.setDestinationEntity(225U);
    msg.timeout = 43356U;
    msg.lat = 0.215759354737;
    msg.lon = 0.193534380219;
    msg.z = 0.589265115617;
    msg.z_units = 154U;
    msg.speed = 0.15915815491;
    msg.speed_units = 79U;
    msg.custom.assign("EQHOZXQRKFFKQGIUGE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.413594112429);
    msg.setSource(54712U);
    msg.setSourceEntity(48U);
    msg.setDestination(753U);
    msg.setDestinationEntity(214U);
    msg.timeout = 24303U;
    msg.lat = 0.0996462476718;
    msg.lon = 0.222304331774;
    msg.z = 0.735360659358;
    msg.z_units = 39U;
    msg.speed = 0.802490337578;
    msg.speed_units = 243U;
    msg.custom.assign("PKIIXLRSCFJWCFTJWZXTADQKCSRUOXEOJJJRMEKUAWVIEJAEQSDUXYKVHXWIOLFAHQVPBGCTIGMCXPMDBRSBDYZLQYVJQUQBFOGKBTBHMPWNVXMOYHGEAIQBJKVBREHALRNGDPHBNIZGJLQFETUNWZJGXAEPONXNMICDFZYNOVEQGBULRLSGMPSKLCWNVDTFZOTRUYUSPFSM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.691051576859);
    msg.setSource(57682U);
    msg.setSourceEntity(26U);
    msg.setDestination(18227U);
    msg.setDestinationEntity(123U);
    msg.timeout = 29961U;
    msg.lat = 0.325169996202;
    msg.lon = 0.406585098714;
    msg.z = 0.0659029876388;
    msg.z_units = 167U;
    msg.speed = 0.128710523038;
    msg.speed_units = 92U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.624377892102;
    tmp_msg_0.y = 0.269304442265;
    tmp_msg_0.z = 0.0769239719032;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YUMVMBKWEOQHBZJWIROVWESNAIHMSCCLRGIUKDUANKHJZQLYJSYUBRAJBWPFDXSIOAQEYSMJNFENGHHHVDRCQQWGDPNJTIPGFSAHBQKHJGIPWVNAUWCWLMMQBKRDVWLXOJOMPMBBYZLFCQIYJWGLVCVFXSA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.405623457347);
    msg.setSource(45929U);
    msg.setSourceEntity(168U);
    msg.setDestination(5142U);
    msg.setDestinationEntity(129U);
    msg.x = 0.70933562007;
    msg.y = 0.0968490035439;
    msg.z = 0.543639038325;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.624457175523);
    msg.setSource(48847U);
    msg.setSourceEntity(112U);
    msg.setDestination(63933U);
    msg.setDestinationEntity(175U);
    msg.x = 0.125032957751;
    msg.y = 0.421973076868;
    msg.z = 0.940162664265;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.757119653848);
    msg.setSource(22471U);
    msg.setSourceEntity(28U);
    msg.setDestination(24558U);
    msg.setDestinationEntity(167U);
    msg.x = 0.351598289371;
    msg.y = 0.952768312894;
    msg.z = 0.364256074531;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.0977461485406);
    msg.setSource(945U);
    msg.setSourceEntity(65U);
    msg.setDestination(35399U);
    msg.setDestinationEntity(228U);
    msg.timeout = 44797U;
    msg.lat = 0.125350033298;
    msg.lon = 0.0127404132774;
    msg.z = 0.359222889156;
    msg.z_units = 171U;
    msg.amplitude = 0.230649894148;
    msg.pitch = 0.92694272804;
    msg.speed = 0.394802835097;
    msg.speed_units = 173U;
    msg.custom.assign("WDKHCXHQUQPIKBDNBHUDRYSKQQSDJXOASMHZLLCSARWIZLEFCNZAVKKWMJWQBKPMAOZAEGWXRGKDYILIXFTXPAOUFLAXYYUBTWYFWQLAITRCRRXUROOPYMOKJEGVFHCUUJLTGENZEFL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.810289207299);
    msg.setSource(42740U);
    msg.setSourceEntity(62U);
    msg.setDestination(25967U);
    msg.setDestinationEntity(155U);
    msg.timeout = 33233U;
    msg.lat = 0.312859575503;
    msg.lon = 0.411892515481;
    msg.z = 0.808818782711;
    msg.z_units = 64U;
    msg.amplitude = 0.276471982431;
    msg.pitch = 0.855833818995;
    msg.speed = 0.369973365137;
    msg.speed_units = 236U;
    msg.custom.assign("FBRDPGWCXVIBKTXJVYWCKWDNHCETVANQHTVFFDKQDUGHZCQNNAYEYOKCNOT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.908420689645);
    msg.setSource(26905U);
    msg.setSourceEntity(102U);
    msg.setDestination(17424U);
    msg.setDestinationEntity(86U);
    msg.timeout = 11325U;
    msg.lat = 0.214004111188;
    msg.lon = 0.835804843678;
    msg.z = 0.228349400332;
    msg.z_units = 145U;
    msg.amplitude = 0.753263018726;
    msg.pitch = 0.984243697062;
    msg.speed = 0.248547140063;
    msg.speed_units = 93U;
    msg.custom.assign("SFPVJSBHLRLBHMDLPTQBEAZGUCUVDWYCMAEEEQKTCGOLNFSOAVWGWTGZEOIXYRKVDQRDDKKVOUSJCDQGUPYGQUTHKWFRRIINACOGFAJJZREHZNAOXQCCUC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.139700021392);
    msg.setSource(4265U);
    msg.setSourceEntity(116U);
    msg.setDestination(33714U);
    msg.setDestinationEntity(165U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.427890484583);
    msg.setSource(18790U);
    msg.setSourceEntity(53U);
    msg.setDestination(56905U);
    msg.setDestinationEntity(23U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.889853568037);
    msg.setSource(11847U);
    msg.setSourceEntity(183U);
    msg.setDestination(37879U);
    msg.setDestinationEntity(170U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.395943704049);
    msg.setSource(40421U);
    msg.setSourceEntity(75U);
    msg.setDestination(54470U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.0985320344958;
    msg.lon = 0.450114890714;
    msg.z = 0.0798332859489;
    msg.z_units = 44U;
    msg.radius = 0.859990774607;
    msg.duration = 9339U;
    msg.speed = 0.225901706414;
    msg.speed_units = 211U;
    msg.custom.assign("YZHFXKVBNWILOKUTINBCMWDJFPCKEMHISYACMHPZNDBVUOPMGDTORQZGGEEONLTFVLVXAQDSTHGPDVRYMKAUIWRIJPJYBZPHUDWCIXKFQJNKXSNEWWALSHNPJKVTSWCTGAEPNQEWVHOUUJUOLFAQSGQXLFOHBZDZTYHAREKXQXVYWQMCOBTROSRFDDYBPJGRLEAIIVCFBMIUJLUZCLEYKRQAGFBYQCNXSJDKLCZRMEMXTTHIMBOZZG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.383301456739);
    msg.setSource(9190U);
    msg.setSourceEntity(105U);
    msg.setDestination(18714U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.922771607085;
    msg.lon = 0.750819882659;
    msg.z = 0.40337652148;
    msg.z_units = 121U;
    msg.radius = 0.5582626415;
    msg.duration = 36997U;
    msg.speed = 0.730703604944;
    msg.speed_units = 240U;
    msg.custom.assign("DAUCGMYLZPXVTOTSZUIDGOHAKQJCWAYMDJDOBDSUEEAFGKZWNABKIRQJEUABPOGANOGKTXJPHCYWTQZRBUSOXZCRPIJVMRBNQFVFJZRSAYCJFZTSIJLXZGLTIUPVMZWVUNBKTXRNEDRHYPFYKYBEIUVROEGTMOHMXGILDLHCNXHKKXWMPLFRUPHWMDVJEKQUWHBELXKQWYQJHBPNHQAIEVFTWLNNBESIOFMGVYPFCLCFTNZADXMQS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.441175035999);
    msg.setSource(18293U);
    msg.setSourceEntity(39U);
    msg.setDestination(26027U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.829279594701;
    msg.lon = 0.352512314798;
    msg.z = 0.178828265058;
    msg.z_units = 201U;
    msg.radius = 0.875896790381;
    msg.duration = 10477U;
    msg.speed = 0.522394390336;
    msg.speed_units = 78U;
    msg.custom.assign("BHYASOTNKQECRHZUMFVPXSONPVTKXGYOQCSBGNGANHNAMVZEUMIJGVKPPKWZPZFBCUJXJXNJIOHEIOJIAYCFEALKRYDJPQZOCVTYMUFTWPQEIPCWFKLHBRAYSCXCYIWTGBSJFHTWABGOBUBUCDDERROWLQRGJZKZYXJSHMLUEQESZQSFF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.641605647538);
    msg.setSource(63347U);
    msg.setSourceEntity(215U);
    msg.setDestination(28105U);
    msg.setDestinationEntity(0U);
    msg.timeout = 54332U;
    msg.flags = 123U;
    msg.lat = 0.366056326904;
    msg.lon = 0.309606291278;
    msg.start_z = 0.209477009366;
    msg.start_z_units = 35U;
    msg.end_z = 0.64782258273;
    msg.end_z_units = 124U;
    msg.radius = 0.816941615301;
    msg.speed = 0.437149890501;
    msg.speed_units = 11U;
    msg.custom.assign("YLQUYVSOHAIICXZRXEHWTUEKIRAASZNMBZZOJFPZOZYHCYGPKFXJVYEPKXAGBCSAUJTVWKOVFAMYFXGHMBSLAQUIBTWFGQUPJFTUMDHCAOSRDZDSTPFYJPDYWRQEPTRUGWFIQPALXXDELIRHFVIQNEZKIJWAZBZMGCWGVGEHNMQQNLTXK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.857442355212);
    msg.setSource(35811U);
    msg.setSourceEntity(175U);
    msg.setDestination(23346U);
    msg.setDestinationEntity(111U);
    msg.timeout = 22366U;
    msg.flags = 23U;
    msg.lat = 0.529246462252;
    msg.lon = 0.620362859378;
    msg.start_z = 0.385037614432;
    msg.start_z_units = 27U;
    msg.end_z = 0.312653722838;
    msg.end_z_units = 100U;
    msg.radius = 0.83767522265;
    msg.speed = 0.176955627273;
    msg.speed_units = 33U;
    msg.custom.assign("ZFMSLOPTSYA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.979854160354);
    msg.setSource(53368U);
    msg.setSourceEntity(78U);
    msg.setDestination(32084U);
    msg.setDestinationEntity(151U);
    msg.timeout = 31380U;
    msg.flags = 63U;
    msg.lat = 0.470988056954;
    msg.lon = 0.177175674737;
    msg.start_z = 0.557145302222;
    msg.start_z_units = 250U;
    msg.end_z = 0.892190460146;
    msg.end_z_units = 18U;
    msg.radius = 0.00464481655325;
    msg.speed = 0.674202744252;
    msg.speed_units = 245U;
    msg.custom.assign("GOLBDEOGUPNUZAMNIGFUPDHIJQUHAXIVUJNHQDFTBSKRADELVGMTFRGCQPUPBVKLFLFVFJKZBVMGGZSCIMSHNTHRPEQPXCJWFDKRJKSEIBLFMLATDXTBQNRJECSTSFYOIYWXZCICQGMWMHLOMUWLCSRBSENYAOOZGDWXRFBBRGVQHWHPZMACXPZAVVCXXXOYCOJZYWL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.105558232568);
    msg.setSource(42221U);
    msg.setSourceEntity(159U);
    msg.setDestination(5953U);
    msg.setDestinationEntity(107U);
    msg.timeout = 3794U;
    msg.lat = 0.688027573279;
    msg.lon = 0.317710086234;
    msg.z = 0.80670259285;
    msg.z_units = 3U;
    msg.speed = 0.795525698816;
    msg.speed_units = 70U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.46247273643;
    tmp_msg_0.y = 0.396145043521;
    tmp_msg_0.z = 0.00522403064605;
    tmp_msg_0.t = 0.0925615782398;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ORZGGNANEDGBDUEQQIQDZUGEXJDMABDSSLPBTENDRWHDCTZHGWODMTVNIUXPFJPLGSLOMTKNMFVROOTJHWVRCAFBVSLFIFEYCAAEUCSSYRLJSTWERLDCKYFUBPEPAKLYSFUYGVC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.684498788419);
    msg.setSource(56794U);
    msg.setSourceEntity(224U);
    msg.setDestination(15846U);
    msg.setDestinationEntity(79U);
    msg.timeout = 62349U;
    msg.lat = 0.289855809386;
    msg.lon = 0.0759522311699;
    msg.z = 0.110337760283;
    msg.z_units = 127U;
    msg.speed = 0.62447703824;
    msg.speed_units = 171U;
    msg.custom.assign("KOQMFCVXJZQRSBODKOUZMMLFGWHCMFQVCXSTZACCDMDGXFIGPYGGJASKTVI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.836959512678);
    msg.setSource(13683U);
    msg.setSourceEntity(56U);
    msg.setDestination(28110U);
    msg.setDestinationEntity(205U);
    msg.timeout = 41196U;
    msg.lat = 0.841485833808;
    msg.lon = 0.626123586298;
    msg.z = 0.576919365795;
    msg.z_units = 146U;
    msg.speed = 0.634596273331;
    msg.speed_units = 175U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.786470038131;
    tmp_msg_0.y = 0.761607530209;
    tmp_msg_0.z = 0.143091515812;
    tmp_msg_0.t = 0.872893307993;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JISELFFFOAIWDYSKXU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.138466713805);
    msg.setSource(8545U);
    msg.setSourceEntity(9U);
    msg.setDestination(13086U);
    msg.setDestinationEntity(250U);
    msg.x = 0.0949734207778;
    msg.y = 0.997672152185;
    msg.z = 0.549890120719;
    msg.t = 0.133109233944;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.652526406241);
    msg.setSource(42378U);
    msg.setSourceEntity(160U);
    msg.setDestination(12435U);
    msg.setDestinationEntity(218U);
    msg.x = 0.335699285578;
    msg.y = 0.119000838545;
    msg.z = 0.068320570552;
    msg.t = 0.33438916441;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.112526566655);
    msg.setSource(415U);
    msg.setSourceEntity(109U);
    msg.setDestination(59917U);
    msg.setDestinationEntity(24U);
    msg.x = 0.769357491232;
    msg.y = 0.275980966035;
    msg.z = 0.718031245884;
    msg.t = 0.329189076413;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.869186918738);
    msg.setSource(11713U);
    msg.setSourceEntity(145U);
    msg.setDestination(58065U);
    msg.setDestinationEntity(153U);
    msg.timeout = 5748U;
    msg.name.assign("BWWONGWVHKFIVDTKDJKCWPKGLCTVPIULRSTQEVTBMSONYISNSDWDJNWLFBDZWFCZOBQUFFJZJXHAAFRNKRQOOYYYIGRMLCQAZJYEMMMTLCHRYUUPIVKEQWZFRDHOHVQMIXPEEVXHYQSHHUHOALNULGSDUTNDSZNKJOQFKGTVPOIZGAMK");
    msg.custom.assign("GSQCTJKVWMJBXRZCSYRECXAMEWXLQAVAIIBSOCHTTTCZBTQUROLGMPUIRJLGFQPVKCFFUMOOIXKYDLRQHAEYJPWUDXGMNSGRZPYWLMYSNKJNKCZGZCVDNFVOZMAAPUUEOOLWYPYJDUVYFTHRQWQXNTQJDPKGQSMDGBBLIW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.965407508676);
    msg.setSource(56623U);
    msg.setSourceEntity(225U);
    msg.setDestination(32192U);
    msg.setDestinationEntity(152U);
    msg.timeout = 11162U;
    msg.name.assign("MNEMZZAJNIMDTPQGQXIKTOBUYWAXWYKTUSPBDBYPZCKWHQUBHEYRFPZNFFZRKWLBHYVMCHXFGXBPMBXRZKUWILJLIVESAZSOLWMDKYAOUAZTTQQYMVDXVIRTSHWOIFXRAJGS");
    msg.custom.assign("JBIOWERCWUONHSGUGYOTJTIADDCJANVKWKJARDBFXLVCXVAEZIJCQFXQVTVBACXDFHLGATXPLNSVXGHMZAAWMYUHDOFFQDWZMJWIDGNWFNPZQOLVQWFBZLMSMLJJPIXZRKYPGSUCDUNFQMSEPQEMJGKFRKFIYKTULAWIEHWJEGIYZNIVPRCNMLRQQHOOCEUTHRAEYOSCESBKRNBVHGKGVXDMMZT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.947035505344);
    msg.setSource(16339U);
    msg.setSourceEntity(237U);
    msg.setDestination(47829U);
    msg.setDestinationEntity(96U);
    msg.timeout = 56967U;
    msg.name.assign("MPWSGRRXXMNFQPMVUUCSAWIYWZFJBSXHQJJOVCKLITXIMVAEGLUNRAUCWPUGSBILALDIRPVBAADDLKBMYNSDWGQEHQSBJOFAJBAFKNBTTTQMHLOQCFSCKRLQJPCTJNVTTLNZTWCHFXZZFXAEHKIUVGDYROUKORQVWDXMLIJBRGHFVEIXZKLSFTZHMEYKOADWORMGPVHSSKYYZHXDEK");
    msg.custom.assign("JBIMBMQBUMAVONRHMDAWVZXKQDRZMVIMYWKREKXXJAOEFRCKSDXUPNHIDTKUUGYZBKICSPYKPTFHCACESLDBZMBWNYZFJDQCVLQMCPHUTXQTDMZWFKQWVJEEHUNKGXNRZBTXOSOTEPFWZFNPIBIDOSVBLIQTIHCHIGJJDL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.201299923608);
    msg.setSource(14016U);
    msg.setSourceEntity(13U);
    msg.setDestination(15076U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.533207017069;
    msg.lon = 0.612422542047;
    msg.z = 0.0259271426991;
    msg.z_units = 101U;
    msg.speed = 0.194468118481;
    msg.speed_units = 66U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.67352535438;
    tmp_msg_0.y = 0.337503198245;
    tmp_msg_0.z = 0.740972881139;
    tmp_msg_0.t = 0.831691567224;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.131493303527;
    msg.custom.assign("RGENKUMWFXOPWSLEGPBCQGRYQJQNYBUBKUVKOPSLVNPXEKCHTSPOAMHADNVCGNHMMHSWKMXCKWFLFQUVJLSGLUZPIBDYDAHAARLWEXSTSIRJYMNWPYTKAEJALQUGFCIULGQZHTVDIPDKYZAISFVWOEX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.160965605319);
    msg.setSource(24323U);
    msg.setSourceEntity(18U);
    msg.setDestination(35428U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.769930410822;
    msg.lon = 0.834408472857;
    msg.z = 0.677351266051;
    msg.z_units = 75U;
    msg.speed = 0.445459226534;
    msg.speed_units = 179U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 21284U;
    tmp_msg_0.off_x = 0.837596295301;
    tmp_msg_0.off_y = 0.0431006706121;
    tmp_msg_0.off_z = 0.160990339215;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.971034218302;
    msg.custom.assign("NNQWDDCZYGKRILPTGIUUPFMHPVFKR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.327067104832);
    msg.setSource(3601U);
    msg.setSourceEntity(42U);
    msg.setDestination(59046U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.33943931692;
    msg.lon = 0.386299797236;
    msg.z = 0.391399437858;
    msg.z_units = 168U;
    msg.speed = 0.394351175969;
    msg.speed_units = 17U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.105890042243;
    tmp_msg_0.y = 0.247175424553;
    tmp_msg_0.z = 0.521729183046;
    tmp_msg_0.t = 0.295189167034;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.083191703558;
    msg.custom.assign("XJQGNUMARXYQFICZEJTTUOSZOOKMTYMYLFEBMUGRYWOLLDYWVERHMFANRBJIKQBZDNHLLCUCWWAWAU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.733021503496);
    msg.setSource(8887U);
    msg.setSourceEntity(20U);
    msg.setDestination(39614U);
    msg.setDestinationEntity(37U);
    msg.vid = 24331U;
    msg.off_x = 0.899018398014;
    msg.off_y = 0.428598001534;
    msg.off_z = 0.0153899954253;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.261615542547);
    msg.setSource(30044U);
    msg.setSourceEntity(69U);
    msg.setDestination(4793U);
    msg.setDestinationEntity(100U);
    msg.vid = 6198U;
    msg.off_x = 0.575164225119;
    msg.off_y = 0.151884803011;
    msg.off_z = 0.386632569193;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.273558327904);
    msg.setSource(4306U);
    msg.setSourceEntity(234U);
    msg.setDestination(37147U);
    msg.setDestinationEntity(238U);
    msg.vid = 4391U;
    msg.off_x = 0.519053565119;
    msg.off_y = 0.965386692819;
    msg.off_z = 0.929582741901;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.111965555357);
    msg.setSource(64599U);
    msg.setSourceEntity(160U);
    msg.setDestination(37305U);
    msg.setDestinationEntity(130U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.512233755153);
    msg.setSource(27036U);
    msg.setSourceEntity(112U);
    msg.setDestination(34520U);
    msg.setDestinationEntity(152U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.964641186425);
    msg.setSource(12725U);
    msg.setSourceEntity(164U);
    msg.setDestination(45309U);
    msg.setDestinationEntity(89U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.2304832199);
    msg.setSource(52308U);
    msg.setSourceEntity(131U);
    msg.setDestination(12707U);
    msg.setDestinationEntity(186U);
    msg.mid = 31711U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.673779351236);
    msg.setSource(45434U);
    msg.setSourceEntity(40U);
    msg.setDestination(7233U);
    msg.setDestinationEntity(250U);
    msg.mid = 22107U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.0212127903555);
    msg.setSource(38792U);
    msg.setSourceEntity(97U);
    msg.setDestination(9901U);
    msg.setDestinationEntity(1U);
    msg.mid = 52725U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.274928138476);
    msg.setSource(52300U);
    msg.setSourceEntity(220U);
    msg.setDestination(18979U);
    msg.setDestinationEntity(19U);
    msg.state = 178U;
    msg.eta = 39240U;
    msg.info.assign("XTKQNZTIYLBYTMBEHKPUPWGPCXLZQVHAH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.0478180210234);
    msg.setSource(50662U);
    msg.setSourceEntity(166U);
    msg.setDestination(6982U);
    msg.setDestinationEntity(130U);
    msg.state = 170U;
    msg.eta = 42924U;
    msg.info.assign("WKXVMVAIOBCRCFLUKJBJFWYZVUCLKUAGMDZXLPBESVCBHXSTP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.811735406972);
    msg.setSource(45625U);
    msg.setSourceEntity(24U);
    msg.setDestination(49474U);
    msg.setDestinationEntity(61U);
    msg.state = 75U;
    msg.eta = 14334U;
    msg.info.assign("AVWLSJSWFJUWCCFMOKDAZAMVCOZVLSZADCJXVXSDDYJKGUTTPRQCFNULRGEZXHAGHMOXIEPHRKNKLNQAJYYPPNODCAZMDYYUIXMQVIBNJBBUYCXEZFOHSMEPQCGFYONDNVTUM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.971686685318);
    msg.setSource(12996U);
    msg.setSourceEntity(110U);
    msg.setDestination(12286U);
    msg.setDestinationEntity(94U);
    msg.system = 9497U;
    msg.duration = 52816U;
    msg.speed = 0.0614978829904;
    msg.speed_units = 46U;
    msg.x = 0.486583148609;
    msg.y = 0.578680001068;
    msg.z = 0.238973182441;
    msg.z_units = 102U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.743697050584);
    msg.setSource(47812U);
    msg.setSourceEntity(52U);
    msg.setDestination(1259U);
    msg.setDestinationEntity(206U);
    msg.system = 15768U;
    msg.duration = 32202U;
    msg.speed = 0.509796772927;
    msg.speed_units = 28U;
    msg.x = 0.772177872757;
    msg.y = 0.801791526651;
    msg.z = 0.222990709868;
    msg.z_units = 228U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.145767361016);
    msg.setSource(14921U);
    msg.setSourceEntity(243U);
    msg.setDestination(16770U);
    msg.setDestinationEntity(231U);
    msg.system = 30975U;
    msg.duration = 13263U;
    msg.speed = 0.762480541219;
    msg.speed_units = 169U;
    msg.x = 0.597553440824;
    msg.y = 0.184568044281;
    msg.z = 0.605573802175;
    msg.z_units = 111U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.128964473048);
    msg.setSource(27729U);
    msg.setSourceEntity(115U);
    msg.setDestination(43208U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.410903518964;
    msg.lon = 0.479040863905;
    msg.speed = 0.57907802187;
    msg.speed_units = 232U;
    msg.duration = 41448U;
    msg.sys_a = 11068U;
    msg.sys_b = 27326U;
    msg.move_threshold = 0.294615442112;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.38317732628);
    msg.setSource(46259U);
    msg.setSourceEntity(10U);
    msg.setDestination(30454U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.183398162935;
    msg.lon = 0.827973609816;
    msg.speed = 0.0642864112654;
    msg.speed_units = 199U;
    msg.duration = 27634U;
    msg.sys_a = 29693U;
    msg.sys_b = 10527U;
    msg.move_threshold = 0.315927030567;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.196374810484);
    msg.setSource(8553U);
    msg.setSourceEntity(240U);
    msg.setDestination(34931U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.739552833173;
    msg.lon = 0.439611303813;
    msg.speed = 0.376661614781;
    msg.speed_units = 98U;
    msg.duration = 46613U;
    msg.sys_a = 30213U;
    msg.sys_b = 18680U;
    msg.move_threshold = 0.0859458999988;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.448322181579);
    msg.setSource(60571U);
    msg.setSourceEntity(77U);
    msg.setDestination(30666U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.0884075365149;
    msg.lon = 0.852383005685;
    msg.z = 0.0101857899166;
    msg.z_units = 178U;
    msg.speed = 0.346140780923;
    msg.speed_units = 201U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.124876663295;
    tmp_msg_0.lon = 0.946289807264;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YUJDLLJRXOAKWDYEGHIEFWLPXSOHTBTRTVOCXVLCMSOVXMGPBRSONWAAGUGAJFHJFZDBSVLYHUHYWKIABFZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.220361301724);
    msg.setSource(63580U);
    msg.setSourceEntity(90U);
    msg.setDestination(47213U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.891154011004;
    msg.lon = 0.0415521648214;
    msg.z = 0.744747223001;
    msg.z_units = 52U;
    msg.speed = 0.86457773742;
    msg.speed_units = 88U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0401779138199;
    tmp_msg_0.lon = 0.0184231926284;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("OWQUBURECAASTZVVADNYDGXBLYPSOKOMJMC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.145430156493);
    msg.setSource(51848U);
    msg.setSourceEntity(190U);
    msg.setDestination(58275U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.344349623528;
    msg.lon = 0.077622126778;
    msg.z = 0.06227817114;
    msg.z_units = 252U;
    msg.speed = 0.231809188601;
    msg.speed_units = 220U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.571556053545;
    tmp_msg_0.lon = 0.673259879227;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("WERIOBBASQVOENTGXGWZFNULOVURGFORVIDKEXHGMDKIUTAUXBEJOWHEMWQFCLFPMWHXMSZLCIQYBAYSMGYDYSQG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.776226640887);
    msg.setSource(20787U);
    msg.setSourceEntity(46U);
    msg.setDestination(61458U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.101432976804;
    msg.lon = 0.337395660749;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.518851944893);
    msg.setSource(1191U);
    msg.setSourceEntity(231U);
    msg.setDestination(46688U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.0156562208596;
    msg.lon = 0.791818624609;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.132560884466);
    msg.setSource(46328U);
    msg.setSourceEntity(244U);
    msg.setDestination(60773U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.105628942119;
    msg.lon = 0.183430825339;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.976818995143);
    msg.setSource(26372U);
    msg.setSourceEntity(62U);
    msg.setDestination(50482U);
    msg.setDestinationEntity(143U);
    msg.timeout = 63731U;
    msg.lat = 0.70131379233;
    msg.lon = 0.587303521591;
    msg.z = 0.306678731947;
    msg.z_units = 218U;
    msg.pitch = 0.441503726272;
    msg.amplitude = 0.231047359533;
    msg.duration = 30077U;
    msg.speed = 0.985328668289;
    msg.speed_units = 29U;
    msg.radius = 0.0949980273691;
    msg.direction = 241U;
    msg.custom.assign("DONCVDLFYCLECWCXZZNSPNRTFTMEIRJKYYQZAEGAASRMCTTWTFWAPEYVAIONPKGFGCJHOQQNLKHWVHMRHINEQZFVMBORBYHYJSVXPAELSFHXGJBI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.587876259744);
    msg.setSource(19442U);
    msg.setSourceEntity(94U);
    msg.setDestination(43449U);
    msg.setDestinationEntity(147U);
    msg.timeout = 32057U;
    msg.lat = 0.644356363669;
    msg.lon = 0.390681362265;
    msg.z = 0.250575554558;
    msg.z_units = 240U;
    msg.pitch = 0.163776504021;
    msg.amplitude = 0.0159858124209;
    msg.duration = 59U;
    msg.speed = 0.977729324249;
    msg.speed_units = 48U;
    msg.radius = 0.900177326202;
    msg.direction = 147U;
    msg.custom.assign("NZUFNVUXFAJBUQCQFAXJIMKRTWGYZFSXHMMSBIWEPZLWTPGDWMKEJBUYNHGYOTRIHRILNKAOSFHYDATJVIGZKZPXSDAQHHZVDCZKMVIBBTCOKWEHYTLDOMFYNECYLWSQEUUVPOGKKBKIFOHQJCPRRTIMAYZQONBSNTMDIUUEBJLXOXRANVJGVALQPTWCXDP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.750743693162);
    msg.setSource(41943U);
    msg.setSourceEntity(29U);
    msg.setDestination(15424U);
    msg.setDestinationEntity(22U);
    msg.timeout = 2816U;
    msg.lat = 0.415377688952;
    msg.lon = 0.414439698969;
    msg.z = 0.733411390589;
    msg.z_units = 21U;
    msg.pitch = 0.138683716363;
    msg.amplitude = 0.930344005281;
    msg.duration = 34369U;
    msg.speed = 0.896095300189;
    msg.speed_units = 124U;
    msg.radius = 0.236340050392;
    msg.direction = 13U;
    msg.custom.assign("OVMMFXRQBYOSIYCCXEAKJYAPCWGLUVKVVRDAZUEFYHFMZZYUBFHOCURIQARQPNWDABBGDAGSSGBWTLEDZTLPTRWVLFYRSWZNJEPDAZFMKOTYXIYBMFNELKMNPDVGVVSSDTHWQIJWDGBHTWJONYSMKKZIZFXUUOAJLFGJSOCIRBDRHNMWBUXHCOS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.985384683863);
    msg.setSource(52064U);
    msg.setSourceEntity(246U);
    msg.setDestination(7295U);
    msg.setDestinationEntity(31U);
    msg.formation_name.assign("LEUXZKBNTAZCDDSKFHDMZJVLQCRWWVAIXNGKQBR");
    msg.reference_frame = 89U;
    msg.custom.assign("SVQIDGWKTKTVHQMULNHKWWSHADUFBSMXZZGKNIFJPNXWUPCIKSOFUBEILZQQJJABQHRROEGCDLBZZEUVJKJXHTUBYYNNADEYCLQZIIQGNJABRCYVPUMEHFMNWPHIBBPWTPOSMGJEFRPCVENKKF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.444010155879);
    msg.setSource(14891U);
    msg.setSourceEntity(84U);
    msg.setDestination(28212U);
    msg.setDestinationEntity(209U);
    msg.formation_name.assign("GULLRCZEVYQIMPWXKDLUUCNXHSWZREGOQRMQXGLAEQNKHVZYYFTSFINJZZNDFMLZLYVNLKJFRUCMAJIUWDASQIFTI");
    msg.reference_frame = 241U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 57255U;
    tmp_msg_0.off_x = 0.847825793828;
    tmp_msg_0.off_y = 0.800455160693;
    tmp_msg_0.off_z = 0.419720385262;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("FVXOMOLADYLPMJATOLFPULNLBENFQTNRTYWNUIGUXKDELVJHPZFVACOKBSAHYZMDADPIQREEKEKHDBRQTOYMQIKQWVZTWSVFCWWKPERRWOIMOKCJE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.224035473166);
    msg.setSource(15617U);
    msg.setSourceEntity(43U);
    msg.setDestination(21359U);
    msg.setDestinationEntity(192U);
    msg.formation_name.assign("KLOZGJQIDIQOFLASENPNORMJJWJTRJPBLDEKFFZNXSHVCCFNNBEPQMCFSGXVKTIEOJMOSVCNZUYUIGBDMNOFXMWNSHRHHZPMGBADBTZEDKCXQIAHGWKJVVOMWEHTSJUOBAMAXUUCFNYKWWDDZRODTZQWALYLFCQTIHYDOHJXYFLUGWBKESIRZSYCRVYXVKUSGVCPYBKZLMPUDHBWQPGPIETTBPJXGRLTMUYAQITPAANVVCFKLSEUYHAILWXRE");
    msg.reference_frame = 84U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 31519U;
    tmp_msg_0.off_x = 0.780373309862;
    tmp_msg_0.off_y = 0.195706547429;
    tmp_msg_0.off_z = 0.438241857184;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("CMTNGPRSAWYXHZHZQZHBXXSLOOXDLKPJITFDPIGXJRQODGPHJDUASI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.549393228487);
    msg.setSource(1769U);
    msg.setSourceEntity(90U);
    msg.setDestination(36824U);
    msg.setDestinationEntity(170U);
    msg.group_name.assign("PNVDRJOSBALTFSZEBHIMKFRHWDCCXOUIGAENOQRFKRTQHKEKWDOGRMNHLUGWLQNZTWMHIBTSIKRTIKVHGSTMSIZYAXVVQKUUOBGBCVLTTZYWGOUZSZEPQKFRHHMVCEPLFQSERJBZODCZCIIMZIYXIRAEYXMXGCCYXJYHLXYLULBPJCKPSSHPOPNBWDMQWUNEWKDOQFDFGUFFPJVNMTBDRAJAVPBYXMAAJAJFLAUQYJDNJWNXX");
    msg.formation_name.assign("SBRMUSZAMHNQTNQYZOMJFCCMQAKDDHWRGMEPRCKWANPBPRWAWDGLUBJLPXDCBVTFVVGKGNSZZOXNFXSTXQI");
    msg.plan_id.assign("UORYPLBBQZGFFHQZWXMNGBFUAXEAJQL");
    msg.description.assign("BBIVPQLHPZGVHFVSMAKQEYZMSVWAQKGSUADXCCYFIHKJAOFIQVJSYPECHZXXJUEZJNGDBPTOEQBBLZKKXCEWHLUEDLMOHWFRMUPWUUNHVFLDKOWIPRFOISLKYYCJZLGRUTXNFLGCAJYGCQWETYMGTPOWREXXLFGDSJQDSNNTNTAYWNATBMROPZCDPMIVICJWDRRORMHBZGBDCNTVO");
    msg.leader_speed = 0.0742168672138;
    msg.leader_bank_lim = 0.34793201444;
    msg.pos_sim_err_lim = 0.804438931114;
    msg.pos_sim_err_wrn = 0.290875111493;
    msg.pos_sim_err_timeout = 51838U;
    msg.converg_max = 0.523131929949;
    msg.converg_timeout = 51029U;
    msg.comms_timeout = 13381U;
    msg.turb_lim = 0.679278266565;
    msg.custom.assign("SOZWDRGZIFVFWYPGJMCFKCNXJTWCNFUROSAQXWUNINQVAPMHJHWNSKKGBJEHJJUJZCEYBRSDIWTCHPDCH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.726944145146);
    msg.setSource(39578U);
    msg.setSourceEntity(123U);
    msg.setDestination(47417U);
    msg.setDestinationEntity(202U);
    msg.group_name.assign("BMNWVOEAIXFCEFATSPRRJPLSYFLHTKTGVOZCJKGFVWAWQIAXWHVZZJCOKELHGBDKECDQHXSNRLJPUMMTQGTQKQBHIORUVEYOIKSZNNRDHBPAYFIASQYXOPIWKVLMAXAUUDUHINKDQSDCYOETITDBCJGXJCYUEFEPMRGTMBMSLARYVMN");
    msg.formation_name.assign("CRLSHSMEBXNWAKZIDODQUKDUYYOKMJPHPTSXQYAPUVRNUMGPCBIWEBQWGCIGQFIVNZVAIXXCQXWWEKOTIJPCEETHKILSOBHCHWAWGHCOBZBEIYSBFXMUVKRUJVYJEULLUNGWFNRMYAFAKEJRCQOZWVNSCKYJMDZANZADRLOBZTTZXBDHMAMGLGLVWRAYQSEUHNVKTYFUSPLPFQHMDDTPDJYTRX");
    msg.plan_id.assign("LNUHNQRHTCQKQKDVTXIRRIFACRQSKEGWWJNBLLBATYWGPXVLBRIUSIEWFSMDFOTOUPYDOGSBAVVCXEQZISYTOKVHDOKQNJGYTZNZHUAACHGXHOUACVYNCFRCQLNJPVPJGZFITHQLAPSCCEBYBKOORBPGWSXZRVMXWEDHIGZUQNLGVPLTEARFIJMXALYFWODJSFKYKCWNTBMEJDQZTWKX");
    msg.description.assign("NFVLAYEYWXQMZBJBZHGBCPJNMXOGHXGSTTQXOTYQHXYORIOODJUGJFAISDNWVRHPANDUTDVBWUARAHNGEQCHBAJXMQODISGICSBCRYZDZFMWTPYUSIQLGSYLBJWJQNWUKXFCUWSYCJKKAXSYZMHNZWFBOCLMKZPENZDFIMNHUFSGPWFUKRRVUJQOEHTRNEYZKPAGCTJETHEISQEWLVPDLCLXVFVMLOIBR");
    msg.leader_speed = 0.759085041962;
    msg.leader_bank_lim = 0.802449056715;
    msg.pos_sim_err_lim = 0.820592946328;
    msg.pos_sim_err_wrn = 0.085510238831;
    msg.pos_sim_err_timeout = 49359U;
    msg.converg_max = 0.414437939142;
    msg.converg_timeout = 5377U;
    msg.comms_timeout = 14333U;
    msg.turb_lim = 0.25638049694;
    msg.custom.assign("HYWRPQFOYTYTA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.212818548619);
    msg.setSource(42461U);
    msg.setSourceEntity(154U);
    msg.setDestination(43248U);
    msg.setDestinationEntity(157U);
    msg.group_name.assign("HIRAMIHVMWAJXRUTCSMOEKQHZUDRSLZVSBJLAZHOCBKAKSHNDGZUJBMRWPKFNQTKCWOVJLLEYFEBHGFPOFHENPLLLCTDVWJFMUKDQORVKGNOZINUOQANVNQUEDXYCCZJPYWGPTIYMLIBZSSWKVVFLRWUHKAEGFXBPKRGEIHEZXVINFCJPQUFRDDAARDBPWHGCXZEGRWXZJSATTMBQBYUYPMMOCINQSSWTGYXOJYQXM");
    msg.formation_name.assign("BQOZKJCXNODPLUYNUSURPGRNRFPBITADHDOXHQOWNKNPCOWSCZZDTDXKVIKIQGIBAYWSXQKFYJOYELIVBXJZHBEJFKAKLZTEXQL");
    msg.plan_id.assign("IJNYIBWOEQTBWNUVFFIFPDITHSRHCQKCGRWTHRXUDFUPACXCVLJCNDUYGDBXLKBBOOYRFSMSDNLQSVYUXEPHKXRTHSIRRDEYKT");
    msg.description.assign("AWIQXHSTZGKFDWFAVFXJVIZXOWLLMODKMXLQJIERFRQVZAJUPJHGBULIMNQSUJYU");
    msg.leader_speed = 0.883478501396;
    msg.leader_bank_lim = 0.596654381059;
    msg.pos_sim_err_lim = 0.548497547852;
    msg.pos_sim_err_wrn = 0.115034722022;
    msg.pos_sim_err_timeout = 47141U;
    msg.converg_max = 0.306724437265;
    msg.converg_timeout = 1905U;
    msg.comms_timeout = 52789U;
    msg.turb_lim = 0.5895423837;
    msg.custom.assign("OZPEWMOYVITAZXGEIKLXNWKELBGVFCRKOUWSYQYVYZSHBUMCSQMDHMZQLCBJGMVVNIVGTKSHJJKAFBDYNKJLASDACQNEEYDZLNQLQARZMBBXDFRTEDZKSNEXNCMVPYJGBCUFIRDVTMDLOHPUPAIXRRTUVOGAUDYXSWNNCWOGFTRCPJWTFMWIBYAPHJVZKHPPKZSETFRQIUCHFUFRPO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.259779327999);
    msg.setSource(9679U);
    msg.setSourceEntity(31U);
    msg.setDestination(48655U);
    msg.setDestinationEntity(218U);
    msg.control_src = 9856U;
    msg.control_ent = 222U;
    msg.timeout = 0.973923239058;
    msg.loiter_radius = 0.706446378391;
    msg.altitude_interval = 0.574396955079;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.267080254364);
    msg.setSource(52637U);
    msg.setSourceEntity(36U);
    msg.setDestination(11000U);
    msg.setDestinationEntity(64U);
    msg.control_src = 29507U;
    msg.control_ent = 16U;
    msg.timeout = 0.496953533225;
    msg.loiter_radius = 0.955426986513;
    msg.altitude_interval = 0.10603713968;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.898943763383);
    msg.setSource(29527U);
    msg.setSourceEntity(96U);
    msg.setDestination(12010U);
    msg.setDestinationEntity(20U);
    msg.control_src = 17137U;
    msg.control_ent = 51U;
    msg.timeout = 0.549732879496;
    msg.loiter_radius = 0.756349655368;
    msg.altitude_interval = 0.892638749896;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.129747357524);
    msg.setSource(21891U);
    msg.setSourceEntity(111U);
    msg.setDestination(19079U);
    msg.setDestinationEntity(56U);
    msg.flags = 172U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.226738381395;
    tmp_msg_0.speed_units = 196U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.416905890493;
    tmp_msg_1.z_units = 5U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.185564573766;
    msg.lon = 0.739324395904;
    msg.radius = 0.911241785824;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.739004348048);
    msg.setSource(46570U);
    msg.setSourceEntity(41U);
    msg.setDestination(43558U);
    msg.setDestinationEntity(86U);
    msg.flags = 213U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.396151244914;
    tmp_msg_0.speed_units = 190U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.62523000285;
    tmp_msg_1.z_units = 137U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.431819977607;
    msg.lon = 0.0566745425784;
    msg.radius = 0.220100724256;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.928044941398);
    msg.setSource(21626U);
    msg.setSourceEntity(179U);
    msg.setDestination(64219U);
    msg.setDestinationEntity(209U);
    msg.flags = 136U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.774193536626;
    tmp_msg_0.speed_units = 48U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.540662297988;
    tmp_msg_1.z_units = 195U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.996797368394;
    msg.lon = 0.0448908909671;
    msg.radius = 0.59854840724;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.707937207203);
    msg.setSource(49943U);
    msg.setSourceEntity(63U);
    msg.setDestination(60737U);
    msg.setDestinationEntity(154U);
    msg.control_src = 331U;
    msg.control_ent = 154U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 114U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.787909771213;
    tmp_tmp_msg_0_0.speed_units = 101U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.216306018946;
    tmp_tmp_msg_0_1.z_units = 179U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.163062961761;
    tmp_msg_0.lon = 0.204567964364;
    tmp_msg_0.radius = 0.968259568142;
    msg.reference.set(tmp_msg_0);
    msg.state = 102U;
    msg.proximity = 225U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.564841890674);
    msg.setSource(36007U);
    msg.setSourceEntity(31U);
    msg.setDestination(56794U);
    msg.setDestinationEntity(232U);
    msg.control_src = 15396U;
    msg.control_ent = 44U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 217U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.625033469469;
    tmp_tmp_msg_0_0.speed_units = 59U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.177070346881;
    tmp_tmp_msg_0_1.z_units = 226U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0364483537518;
    tmp_msg_0.lon = 0.802890479767;
    tmp_msg_0.radius = 0.206950898555;
    msg.reference.set(tmp_msg_0);
    msg.state = 128U;
    msg.proximity = 69U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.398994718782);
    msg.setSource(47806U);
    msg.setSourceEntity(126U);
    msg.setDestination(2426U);
    msg.setDestinationEntity(191U);
    msg.control_src = 48134U;
    msg.control_ent = 84U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 185U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.813157007001;
    tmp_tmp_msg_0_0.speed_units = 127U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0337042464484;
    tmp_tmp_msg_0_1.z_units = 219U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.978252667681;
    tmp_msg_0.lon = 0.740642099135;
    tmp_msg_0.radius = 0.443544133461;
    msg.reference.set(tmp_msg_0);
    msg.state = 106U;
    msg.proximity = 14U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.769125953464);
    msg.setSource(32220U);
    msg.setSourceEntity(114U);
    msg.setDestination(27870U);
    msg.setDestinationEntity(95U);
    msg.ax_cmd = 0.391212973538;
    msg.ay_cmd = 0.0903427096064;
    msg.az_cmd = 0.266721752621;
    msg.ax_des = 0.318807142657;
    msg.ay_des = 0.339564520861;
    msg.az_des = 0.109411824928;
    msg.virt_err_x = 0.647728906062;
    msg.virt_err_y = 0.998489264847;
    msg.virt_err_z = 0.57714467204;
    msg.surf_fdbk_x = 0.162859318574;
    msg.surf_fdbk_y = 0.764582463852;
    msg.surf_fdbk_z = 0.823963016284;
    msg.surf_unkn_x = 0.156033915248;
    msg.surf_unkn_y = 0.670704967129;
    msg.surf_unkn_z = 0.824576893406;
    msg.ss_x = 0.096296505415;
    msg.ss_y = 0.707336908072;
    msg.ss_z = 0.678521970709;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.79685395432);
    msg.setSource(3592U);
    msg.setSourceEntity(92U);
    msg.setDestination(39961U);
    msg.setDestinationEntity(193U);
    msg.ax_cmd = 0.0576344501607;
    msg.ay_cmd = 0.595651734901;
    msg.az_cmd = 0.208894387611;
    msg.ax_des = 0.272708881623;
    msg.ay_des = 0.149203379652;
    msg.az_des = 0.84841830727;
    msg.virt_err_x = 0.432310852449;
    msg.virt_err_y = 0.861242124061;
    msg.virt_err_z = 0.0276891640568;
    msg.surf_fdbk_x = 0.971437571877;
    msg.surf_fdbk_y = 0.893880399709;
    msg.surf_fdbk_z = 0.774170908708;
    msg.surf_unkn_x = 0.300090516675;
    msg.surf_unkn_y = 0.503789716683;
    msg.surf_unkn_z = 0.705375053983;
    msg.ss_x = 0.525642613432;
    msg.ss_y = 0.246222878468;
    msg.ss_z = 0.769784107295;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.443928876109);
    msg.setSource(1720U);
    msg.setSourceEntity(205U);
    msg.setDestination(54143U);
    msg.setDestinationEntity(250U);
    msg.ax_cmd = 0.898901087569;
    msg.ay_cmd = 0.840725794751;
    msg.az_cmd = 0.315026427216;
    msg.ax_des = 0.669998210404;
    msg.ay_des = 0.658653739649;
    msg.az_des = 0.596273433468;
    msg.virt_err_x = 0.923994137257;
    msg.virt_err_y = 0.891307990471;
    msg.virt_err_z = 0.645430680717;
    msg.surf_fdbk_x = 0.494395147357;
    msg.surf_fdbk_y = 0.737975883726;
    msg.surf_fdbk_z = 0.979662803448;
    msg.surf_unkn_x = 0.360080820193;
    msg.surf_unkn_y = 0.183261290284;
    msg.surf_unkn_z = 0.00861500788073;
    msg.ss_x = 0.279007467132;
    msg.ss_y = 0.117637594117;
    msg.ss_z = 0.939601232462;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("FMOKGKRVJUENGRWMFEUHMYITYCBZIHBCBVHLTHXLOUETZCAGSQKHNFTIRDGIFPEPCQHZOAAUCLSTQRWALNQNBOQSAKZBPUPSJZYJXLWXDTBLSIHDEVO");
    tmp_msg_0.dist = 0.0555788827171;
    tmp_msg_0.err = 0.567141964389;
    tmp_msg_0.ctrl_imp = 0.196090594246;
    tmp_msg_0.rel_dir_x = 0.574540080845;
    tmp_msg_0.rel_dir_y = 0.00740801257084;
    tmp_msg_0.rel_dir_z = 0.233607718654;
    tmp_msg_0.err_x = 0.61527967689;
    tmp_msg_0.err_y = 0.819089339906;
    tmp_msg_0.err_z = 0.15922897968;
    tmp_msg_0.rf_err_x = 0.999782370698;
    tmp_msg_0.rf_err_y = 0.0831615524693;
    tmp_msg_0.rf_err_z = 0.989908820357;
    tmp_msg_0.rf_err_vx = 0.703962119608;
    tmp_msg_0.rf_err_vy = 0.202180485353;
    tmp_msg_0.rf_err_vz = 0.24360388621;
    tmp_msg_0.ss_x = 0.128375367398;
    tmp_msg_0.ss_y = 0.560236555013;
    tmp_msg_0.ss_z = 0.77402635611;
    tmp_msg_0.virt_err_x = 0.685877687657;
    tmp_msg_0.virt_err_y = 0.973176170943;
    tmp_msg_0.virt_err_z = 0.248648491937;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.76124851939);
    msg.setSource(28705U);
    msg.setSourceEntity(14U);
    msg.setDestination(7462U);
    msg.setDestinationEntity(151U);
    msg.s_id.assign("YEWVPJIGQCVLYTVJZWRXUXSNESECFKLFOHHUPAAZRZGIAGSLXIANQDPKDV");
    msg.dist = 0.361399127579;
    msg.err = 0.222936528135;
    msg.ctrl_imp = 0.897267562121;
    msg.rel_dir_x = 0.185776869875;
    msg.rel_dir_y = 0.159943954925;
    msg.rel_dir_z = 0.424306211796;
    msg.err_x = 0.114613809426;
    msg.err_y = 0.629598626669;
    msg.err_z = 0.776154364078;
    msg.rf_err_x = 0.924287121581;
    msg.rf_err_y = 0.984595023034;
    msg.rf_err_z = 0.401626908192;
    msg.rf_err_vx = 0.0734929237586;
    msg.rf_err_vy = 0.479702000675;
    msg.rf_err_vz = 0.825478397108;
    msg.ss_x = 0.827645210441;
    msg.ss_y = 0.440306611428;
    msg.ss_z = 0.603409322295;
    msg.virt_err_x = 0.276539380995;
    msg.virt_err_y = 0.352751108945;
    msg.virt_err_z = 0.434811429113;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.923292522486);
    msg.setSource(56305U);
    msg.setSourceEntity(144U);
    msg.setDestination(18716U);
    msg.setDestinationEntity(224U);
    msg.s_id.assign("JHGMXPYAGVCFIFUHQYCYWEHQWHNDYZEVBLADFOBAPMTWKIMNWTEFRZBUCSQANBDROUVLPBYRUKIVSQNHHQMSUTZCWVALEJRTEDKIHXDZDKMUBUGFTNWYMLBEOJNLKXIZGBXOSSXWOPRLWNJSE");
    msg.dist = 0.684722137406;
    msg.err = 0.302888346167;
    msg.ctrl_imp = 0.411456278371;
    msg.rel_dir_x = 0.0903668789658;
    msg.rel_dir_y = 0.187088173807;
    msg.rel_dir_z = 0.414930975209;
    msg.err_x = 0.857789387924;
    msg.err_y = 0.78313304064;
    msg.err_z = 0.0435004867899;
    msg.rf_err_x = 0.785217008144;
    msg.rf_err_y = 0.153019247431;
    msg.rf_err_z = 0.129109944565;
    msg.rf_err_vx = 0.00689345077897;
    msg.rf_err_vy = 0.965467879261;
    msg.rf_err_vz = 0.137402545476;
    msg.ss_x = 0.962578508762;
    msg.ss_y = 0.00964614124369;
    msg.ss_z = 0.666208671677;
    msg.virt_err_x = 0.222306834309;
    msg.virt_err_y = 0.993908008883;
    msg.virt_err_z = 0.111615617144;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.857178756753);
    msg.setSource(56858U);
    msg.setSourceEntity(19U);
    msg.setDestination(63682U);
    msg.setDestinationEntity(22U);
    msg.s_id.assign("CQXKSOCXSFWUSLCMXVHNUHPLHJNEFIFTPWCAUWFFZAWLYBZDUNSVHMGUUAJLZKXOLJJRWQHQYPGBXOYEQSUGNNPTBIPFRODNWCCRYXJLAVWOKBJHVTZZTBHCMANODUBZCXILTQPBYGFREKYVUXPKKAFGENIRZDPYRPNROJIATMIJSQQSURBMV");
    msg.dist = 0.158208852028;
    msg.err = 0.377703635781;
    msg.ctrl_imp = 0.719171396336;
    msg.rel_dir_x = 0.19802903642;
    msg.rel_dir_y = 0.535945693985;
    msg.rel_dir_z = 0.394464865933;
    msg.err_x = 0.303541798747;
    msg.err_y = 0.944934949808;
    msg.err_z = 0.884410050769;
    msg.rf_err_x = 0.240843674227;
    msg.rf_err_y = 0.45785984873;
    msg.rf_err_z = 0.468385187447;
    msg.rf_err_vx = 0.852120306323;
    msg.rf_err_vy = 0.365995071473;
    msg.rf_err_vz = 0.764540380622;
    msg.ss_x = 0.510104310341;
    msg.ss_y = 0.871949294628;
    msg.ss_z = 0.925426676759;
    msg.virt_err_x = 0.857584807354;
    msg.virt_err_y = 0.785353897145;
    msg.virt_err_z = 0.34021545156;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.462879978465);
    msg.setSource(44453U);
    msg.setSourceEntity(148U);
    msg.setDestination(42345U);
    msg.setDestinationEntity(186U);
    msg.timeout = 82U;
    msg.rpm = 0.13614728571;
    msg.direction = 245U;
    msg.custom.assign("ZSIRAYJGXWUYTYSMBDYCSZOBVLWQLHLUNYSXLVCAFQMYRLZCESQZVMPJAPJPMGXGRJAGVFVLPICBIYNSQIUUVSSCKRDKJLWVODFROICTPNXOJKY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.188847742626);
    msg.setSource(6801U);
    msg.setSourceEntity(104U);
    msg.setDestination(2312U);
    msg.setDestinationEntity(176U);
    msg.timeout = 50117U;
    msg.rpm = 0.308404495002;
    msg.direction = 4U;
    msg.custom.assign("UDAIVTACQKMQUFJSDQFGOLVXVCVYROYOJLUWIYFWJUECW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.274910514806);
    msg.setSource(35491U);
    msg.setSourceEntity(54U);
    msg.setDestination(28382U);
    msg.setDestinationEntity(250U);
    msg.timeout = 60201U;
    msg.rpm = 0.466077634954;
    msg.direction = 34U;
    msg.custom.assign("HMMQVBGMCWMYBUKCIPSCJOQUNKUKLYLF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.816458293028);
    msg.setSource(24256U);
    msg.setSourceEntity(201U);
    msg.setDestination(58111U);
    msg.setDestinationEntity(190U);
    msg.formation_name.assign("PSUCHWIRDRPJWCPNYXDIVUPGNNCPJZHDNTXLWCFWRCAIDCEXCGKBVOXAAGNAUZAHRBSYGHTZBFQPATMKPZSEZMXL");
    msg.type = 233U;
    msg.op = 146U;
    msg.group_name.assign("SDKYTMWNCQLCIEVWKPKYALAQLOEMWBVJYTUSPHHWGQIVPPGAAYDYGICZBDKLSXKSYBEDUNDZDCFFTGXFONL");
    msg.plan_id.assign("FMWTZWEBZCTWYQTCLIKOGXKOXOECUVMCZFQESPQPRNHBNXCJQLIHHLURGVFNQZJRTF");
    msg.description.assign("YJTJLSZXSXCYSJBQANVMCNHRAUGUPWJIVOSAONOFUZNECFRKIEICBWANNDURDGAUQRZLPKILJFSLPPVQDEFOACDIMOIIJDMGQSCKYGFAREBXKHWZHTZRBHNWAXSWGQXHELIZ");
    msg.reference_frame = 240U;
    msg.leader_bank_lim = 0.895047076352;
    msg.leader_speed_min = 0.403384985499;
    msg.leader_speed_max = 0.530899552608;
    msg.leader_alt_min = 0.715303110741;
    msg.leader_alt_max = 0.425090730019;
    msg.pos_sim_err_lim = 0.383893910613;
    msg.pos_sim_err_wrn = 0.964734035222;
    msg.pos_sim_err_timeout = 64182U;
    msg.converg_max = 0.597078904186;
    msg.converg_timeout = 5409U;
    msg.comms_timeout = 39887U;
    msg.turb_lim = 0.115591743317;
    msg.custom.assign("DDEHMLECFKPQQMFBEFRCZAKFSQNZTJRRWJEUOPDEJQHJYGPLEJXBPZTYBLAXVEPLSQXBETWOEXFNKHWVAOLCBUNQSMNUMEDLYKBOGHDZSRKGGXMXSYCYMFBNDQTRTGJQBXLGYHHHUNSJAVRHXCU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.737831674173);
    msg.setSource(9246U);
    msg.setSourceEntity(224U);
    msg.setDestination(28109U);
    msg.setDestinationEntity(147U);
    msg.formation_name.assign("ZSCXURBTDPWRRZMHTNZXOVDLWPHCOEOXCENCJFHJGTOMOUBILYRWDMDYBIZESZLMBYKCGMDPLFEKGTLEWZYHBNHUOYIFTFAXEGOTXACHIBKUQFFUPHIJOFXVBAAGIHSUNLLWQGPBRFANEPCMHVGAFYXOAIRDYHCMQQNDNMXZYBMVJCCKSPOJQQNULQUETSNZSXVZUDSIQVWKS");
    msg.type = 231U;
    msg.op = 119U;
    msg.group_name.assign("UTJZOFLCRFRNAAJCSXGYUMOUYHNYCSRVHVWFMDMEQRFYWHABQCLKZQZIEZAGKOAZFRKBMVJQKDJVZKEPBRNIFMBDKXOZNRPTGPZMQHDBXJHFILHSSEJUJLPXTLVOMHBSJSDAYFKPNWBMLWQQLGYHGASVHFWCNYVXKBXCPITTURMXRCYOTXDINVCNUEGIAWDWRCNGGOEUTEIIPFPQSNGDOKEIUOSOWBIKEXWVXTZDPDZMLTL");
    msg.plan_id.assign("TBYDOPFFSLDVQSREWORDERBKNNDCHQELZJEPCLED");
    msg.description.assign("CXXZGPZPUJUTVEBMQYAQLUWPKZDPSZCSVLOTNYCHYWTJPRPQSWFLNDNSLNGRIXEYGUOGBIFQFKYTJBUGTSHZLDIMGZXERWDSMEQAWDQAVDPJTXYHUCPCATDEENRIQBMXJIFYIQ");
    msg.reference_frame = 201U;
    msg.leader_bank_lim = 0.435987622058;
    msg.leader_speed_min = 0.174821962396;
    msg.leader_speed_max = 0.323442879637;
    msg.leader_alt_min = 0.228458449355;
    msg.leader_alt_max = 0.947476395966;
    msg.pos_sim_err_lim = 0.206107545692;
    msg.pos_sim_err_wrn = 0.891731650751;
    msg.pos_sim_err_timeout = 33821U;
    msg.converg_max = 0.911571805532;
    msg.converg_timeout = 35843U;
    msg.comms_timeout = 20028U;
    msg.turb_lim = 0.750926831431;
    msg.custom.assign("BXDEHPFMERIJSTRUSCSALXBXAYWPYZNKACNDCILZJUCRWBBRGLPCBIFEFTNDDHNJMBSXILIOAQQJPRQEXVIOUPSLP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.714655322268);
    msg.setSource(61060U);
    msg.setSourceEntity(44U);
    msg.setDestination(56002U);
    msg.setDestinationEntity(244U);
    msg.formation_name.assign("APTXCQNHPSOZQAIHBEPLOYXAMPMRRJSDNZXVBMFANJWASREDCXJTKNVKMCJYVSSCJIBZIAYLIJGIRGPLFWQHNPOCEFOSGOZTFQ");
    msg.type = 222U;
    msg.op = 209U;
    msg.group_name.assign("AQJHCJKFVDFORZOLWTRAKDXGVPJGOSOLWNBXRLGEUKUQXQAVIMIRHBPYFLIYTNIXPHIHRVEGUABHWBEHLKGXOASERATDVUAXCWSXHQMYVFCQWMJLSDMJAIDWDGPSCLILWHVEMSPZUNNOYZPJZNMYUPUKYEHPCRUVMOFBFRYOPCONEJZSVUENDWZGCPKCZZTSJEKFUGNYAIJFHFTQTQTIGKRBYVSY");
    msg.plan_id.assign("XEMIZVNMTNQSZBNORGSFIRGSELQGQVGYWTUJHEMKPYPGDTLEJIRJXARCNYAYHCXSYYOLMUQUDKZDIAXTDRDUBDNBBEAZEMGHHDSTZMMHUBKCEPBUVBFKWIAAFJQLCKVRXSQCHZKTPLZGVTTQIOHNLXWIYPAQXLXRGOPUOEFEKKGYNOLVCMRPJJCFJOPZJDUPMTCQSIPAVBWNIUUKHJVKXGOSAVWJWFONRYAFZMHEQLRWFBWOLWSFHITBVFCZD");
    msg.description.assign("NOXQZBKZPNSQQYFBYVCIGWMPOHTPDQUXNJGVKJIFSTRIPHHDSNCWRBREHQXUZHFSMZTSVWCCOUMXIGMJCGSIGIXOCALTQZMDMLMMKBBWREUWSBPJPESHOAVDNYHXHZDNVQAOBAJZFMUURRKBIHALGKCWJEBPVDIWVSIN");
    msg.reference_frame = 131U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 40746U;
    tmp_msg_0.off_x = 0.781102110343;
    tmp_msg_0.off_y = 0.786799250058;
    tmp_msg_0.off_z = 0.281660281963;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.573531745802;
    msg.leader_speed_min = 0.888909095072;
    msg.leader_speed_max = 0.433174422867;
    msg.leader_alt_min = 0.241588908044;
    msg.leader_alt_max = 0.697366887255;
    msg.pos_sim_err_lim = 0.30917375344;
    msg.pos_sim_err_wrn = 0.0625953095855;
    msg.pos_sim_err_timeout = 10103U;
    msg.converg_max = 0.544351325107;
    msg.converg_timeout = 60250U;
    msg.comms_timeout = 36852U;
    msg.turb_lim = 0.204029925126;
    msg.custom.assign("OISIAAFUIFFDJQMIYXSUKIOVTUAJLDTDQPGZJEXEOCXRIWVMXEXHZYHCZGSDYRKEUHZGNQMRHNZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.203336893195);
    msg.setSource(16118U);
    msg.setSourceEntity(214U);
    msg.setDestination(17356U);
    msg.setDestinationEntity(133U);
    msg.timeout = 56701U;
    msg.lat = 0.694452869934;
    msg.lon = 0.704841474772;
    msg.z = 0.829074880476;
    msg.z_units = 182U;
    msg.speed = 0.210871200023;
    msg.speed_units = 23U;
    msg.custom.assign("GXJREJNLZMZJFKWOUKFFCQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.234794437321);
    msg.setSource(40751U);
    msg.setSourceEntity(48U);
    msg.setDestination(55299U);
    msg.setDestinationEntity(97U);
    msg.timeout = 43215U;
    msg.lat = 0.910165815569;
    msg.lon = 0.255360767036;
    msg.z = 0.738108665454;
    msg.z_units = 80U;
    msg.speed = 0.594581548077;
    msg.speed_units = 151U;
    msg.custom.assign("VVAOKRDPMSSPWQGVIFCAFMZZPQIPHEBYEEBUDEZPXMDKWOYKSNIPGSTGLFLNPUMAQKBPSJTGDROURJGUJVMUGDDALRBCQTRLHHLOLRHQLONNZBAFYMYHIHCUKJTFBZJGJSHWDMOICGQXNCZKQAVZJXMHJWXYYTXLSYNHKMKVWNRJBUABJCDKWAOQYTCXLIIKORPIBVZBTVOIWDTCTTSCEAHQENNEOYEWINURVFLDRPWAESXYVXUFF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.190457113369);
    msg.setSource(57704U);
    msg.setSourceEntity(239U);
    msg.setDestination(2203U);
    msg.setDestinationEntity(29U);
    msg.timeout = 3669U;
    msg.lat = 0.631277271861;
    msg.lon = 0.441882544007;
    msg.z = 0.502816528029;
    msg.z_units = 105U;
    msg.speed = 0.168624118881;
    msg.speed_units = 34U;
    msg.custom.assign("KNBBHUVVOUQVRR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.371940603668);
    msg.setSource(3430U);
    msg.setSourceEntity(99U);
    msg.setDestination(18314U);
    msg.setDestinationEntity(33U);
    msg.timeout = 58382U;
    msg.lat = 0.210909657879;
    msg.lon = 0.800555109331;
    msg.z = 0.290772020438;
    msg.z_units = 78U;
    msg.speed = 0.523560934824;
    msg.speed_units = 26U;
    msg.custom.assign("UZHTZXGFPWHNKZIWDALHFWTDPRVLIBRSESPODZEGDUTCOJVGNOAHMICZVVCTCDHTEFTMIBKQNSUEZAYJSEYYJLKHNKGBKTCANMBKRNJDYWJARPVLXRFPBTDSAJIPZGTTEQXLPOAGWCQWBV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.536712659255);
    msg.setSource(42161U);
    msg.setSourceEntity(79U);
    msg.setDestination(21405U);
    msg.setDestinationEntity(70U);
    msg.timeout = 1454U;
    msg.lat = 0.735926006095;
    msg.lon = 0.285671443838;
    msg.z = 0.356012412444;
    msg.z_units = 181U;
    msg.speed = 0.470295485188;
    msg.speed_units = 121U;
    msg.custom.assign("UVWGEYEHPWDDQXAITMHZCLUUMYUCXIIVRMRZJIBLBRRXFYUSVDTWFZKQRUMNDIFXMRQPNBYZXWRCWOMEMLTLJJINBEAUQDNTKHHONCMGNCGNZBDZSJJJDQZJSPMXOYFZFPPRVELJBAYLGHTHPYWJHZXKCPIHIAHVTKBSETWKXOKSVOOBUVGDTYFCNEHNNYGXXYKFPQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.976086993115);
    msg.setSource(44857U);
    msg.setSourceEntity(172U);
    msg.setDestination(59090U);
    msg.setDestinationEntity(185U);
    msg.timeout = 15727U;
    msg.lat = 0.143214731721;
    msg.lon = 0.14573615327;
    msg.z = 0.844227301295;
    msg.z_units = 114U;
    msg.speed = 0.478127750736;
    msg.speed_units = 29U;
    msg.custom.assign("YEUVWIMXTCZKNWELJORDLCGGCARUBVQMHMCEPYXBBDVDJOYEJKRWTRKCZYDWSYAIHJKMWWUSXKWAGDQFEZFAMERSDPQCKXRDQYUIBTLIFIXALUBVNJHNSHNAQTOXPMUZFOIGLSZGSODUOFAKSFYRKLCVPRENBZNPGIDBZPFSWSVBIGQEJLUVQPJYXQEQMRZBFNTXTHTXUNMOMJSHQZJDHILNGAJKOGTIYFWEAPVRFHCHUHMPKOVOAVYG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.610490346869);
    msg.setSource(11208U);
    msg.setSourceEntity(136U);
    msg.setDestination(35498U);
    msg.setDestinationEntity(114U);
    msg.arrival_time = 0.407952879321;
    msg.lat = 0.853707446343;
    msg.lon = 0.150518862117;
    msg.z = 0.0501229199783;
    msg.z_units = 161U;
    msg.travel_z = 0.401750140173;
    msg.travel_z_units = 249U;
    msg.delayed = 57U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.349887383037);
    msg.setSource(53222U);
    msg.setSourceEntity(61U);
    msg.setDestination(28585U);
    msg.setDestinationEntity(237U);
    msg.arrival_time = 0.54780980359;
    msg.lat = 0.919748040996;
    msg.lon = 0.249654118918;
    msg.z = 0.766469227476;
    msg.z_units = 204U;
    msg.travel_z = 0.505119836528;
    msg.travel_z_units = 80U;
    msg.delayed = 84U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.425653233735);
    msg.setSource(15579U);
    msg.setSourceEntity(156U);
    msg.setDestination(57564U);
    msg.setDestinationEntity(15U);
    msg.arrival_time = 0.281871912477;
    msg.lat = 0.932776129609;
    msg.lon = 0.480159921212;
    msg.z = 0.177530520394;
    msg.z_units = 22U;
    msg.travel_z = 0.0404268663681;
    msg.travel_z_units = 144U;
    msg.delayed = 236U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.393163836177);
    msg.setSource(63265U);
    msg.setSourceEntity(127U);
    msg.setDestination(30476U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.534457222958;
    msg.lon = 0.119433508349;
    msg.z = 0.151621493274;
    msg.z_units = 201U;
    msg.speed = 0.501056125872;
    msg.speed_units = 103U;
    msg.bearing = 0.224577789358;
    msg.cross_angle = 0.307564306572;
    msg.width = 0.554454829934;
    msg.length = 0.016853313332;
    msg.coff = 147U;
    msg.angaperture = 0.568296231517;
    msg.range = 26000U;
    msg.overlap = 105U;
    msg.flags = 227U;
    msg.custom.assign("TWUTCTHKZPIRNVBOVKOCCOUXNWRIGSWMEKNYFCFBNZAIOUQUMEDKELZPARDARSEMPPYFGXXQHXEIACQOBJMSTLSOVVKBNSFCOKWFMITGQCUWSJBCJRVMDCLJOWGYWGSASQWAMLYJZPAJDOITHPQLEFPIIUPHLVUDHYDGDDJXIYTBRZQQKVVUNGJZTTNHJQYREMYRVBVKNQPXGOFCFLZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.638887875525);
    msg.setSource(29049U);
    msg.setSourceEntity(67U);
    msg.setDestination(5437U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.798560311739;
    msg.lon = 0.882362715934;
    msg.z = 0.0964876672873;
    msg.z_units = 238U;
    msg.speed = 0.972505878401;
    msg.speed_units = 110U;
    msg.bearing = 0.626179791477;
    msg.cross_angle = 0.358695331839;
    msg.width = 0.27712540022;
    msg.length = 0.811244649103;
    msg.coff = 130U;
    msg.angaperture = 0.887231011475;
    msg.range = 64780U;
    msg.overlap = 211U;
    msg.flags = 54U;
    msg.custom.assign("YJWQSKFJZKZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.331551637168);
    msg.setSource(23612U);
    msg.setSourceEntity(50U);
    msg.setDestination(55167U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.288458177575;
    msg.lon = 0.541507439935;
    msg.z = 0.731036397096;
    msg.z_units = 121U;
    msg.speed = 0.14720278478;
    msg.speed_units = 57U;
    msg.bearing = 0.637096238122;
    msg.cross_angle = 0.298161339785;
    msg.width = 0.667936874317;
    msg.length = 0.609645007784;
    msg.coff = 28U;
    msg.angaperture = 0.0879293031811;
    msg.range = 24777U;
    msg.overlap = 240U;
    msg.flags = 64U;
    msg.custom.assign("TDTDUNYWDYWVQUSRIOAGMLHMHOWYKVEANTHZZZAQVRKLUPYCSVFBJCHKZRLRBIOYHSDWATGGCFMBPBVPPFUHEIZYJJCUCKKGIFXKDCENLYKPSIFZGLQQYXBTJORVILCSYXUTFEAKLGELA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExpandingSquare msg;
    msg.setTimeStamp(0.764080355932);
    msg.setSource(30938U);
    msg.setSourceEntity(214U);
    msg.setDestination(46880U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.155730248142;
    msg.lon = 0.190957935583;
    msg.z = 0.176501718918;
    msg.z_units = 215U;
    msg.speed = 0.0152233600606;
    msg.speed_units = 162U;
    msg.bearing = 0.772407781878;
    msg.width = 0.903860645522;
    msg.hstep = 0.615578470086;
    msg.first_curve_right = 140U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExpandingSquare #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExpandingSquare msg;
    msg.setTimeStamp(0.939457826162);
    msg.setSource(59851U);
    msg.setSourceEntity(207U);
    msg.setDestination(28765U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.537312689233;
    msg.lon = 0.81046291442;
    msg.z = 0.149811381225;
    msg.z_units = 168U;
    msg.speed = 0.77011716282;
    msg.speed_units = 222U;
    msg.bearing = 0.640613327565;
    msg.width = 0.653673197803;
    msg.hstep = 0.0728317632957;
    msg.first_curve_right = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExpandingSquare #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExpandingSquare msg;
    msg.setTimeStamp(0.3186290178);
    msg.setSource(47081U);
    msg.setSourceEntity(189U);
    msg.setDestination(20227U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.377033600331;
    msg.lon = 0.471500921589;
    msg.z = 0.280809407292;
    msg.z_units = 1U;
    msg.speed = 0.977270936221;
    msg.speed_units = 248U;
    msg.bearing = 0.0546410486601;
    msg.width = 0.269289889292;
    msg.hstep = 0.996152706934;
    msg.first_curve_right = 44U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExpandingSquare #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.577813680292);
    msg.setSource(44570U);
    msg.setSourceEntity(159U);
    msg.setDestination(35480U);
    msg.setDestinationEntity(179U);
    msg.timeout = 17727U;
    msg.lat = 0.753811224923;
    msg.lon = 0.567516888881;
    msg.z = 0.662670103447;
    msg.z_units = 99U;
    msg.speed = 0.235686171504;
    msg.speed_units = 87U;
    msg.syringe0 = 10U;
    msg.syringe1 = 17U;
    msg.syringe2 = 24U;
    msg.custom.assign("IVYJABBDNYLWXELOQCGQZRWTVVNCOORPHLIBIIFGMFAFZXXWLJWJGJSPAGWXNLSRPGZDASQTLWGZIBUOMPQKGHDRMEAEYXEEAJDZCXHVJDCCTOBQQNFOAKYECIUIFGUADTEDIMVASFFXWWZYJKNHCHVBUXUTEKMOVPZCZIRMYSPTRIBXGTPJRDLSKKQEUMKSHRNTVYONEMXKOPYNKTRFZBJHWLLUDOPYSZGLHMDPQHNFKQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.248489141934);
    msg.setSource(42476U);
    msg.setSourceEntity(220U);
    msg.setDestination(49524U);
    msg.setDestinationEntity(111U);
    msg.timeout = 31866U;
    msg.lat = 0.199922056053;
    msg.lon = 0.0193782801823;
    msg.z = 0.208443499907;
    msg.z_units = 74U;
    msg.speed = 0.99384900959;
    msg.speed_units = 122U;
    msg.syringe0 = 120U;
    msg.syringe1 = 132U;
    msg.syringe2 = 203U;
    msg.custom.assign("HIQDADUNYSXHARGYLNWYEXAPTBARILUCCMBNPGVBMDGXJURRZWNQIYTDOCZPFPHVQTFFMABIAKFAYTLFFSHKQOKKZMXGWHOTUUSKBYXJAEBVMPVZFIVNRHAUZOWZOQNKCRWDSYPYSMIEUWDKWPDUGOCSNLXPBSFNJQCERLIORJBJDMIEXQJBFGABTNCGJFEUGKLDKQWXSOECVYTTSNMCVHLMRLTJGQLLXHJOIH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.336252497899);
    msg.setSource(62296U);
    msg.setSourceEntity(151U);
    msg.setDestination(57651U);
    msg.setDestinationEntity(133U);
    msg.timeout = 30165U;
    msg.lat = 0.348235694064;
    msg.lon = 0.0951933001151;
    msg.z = 0.559656172063;
    msg.z_units = 53U;
    msg.speed = 0.515832152266;
    msg.speed_units = 43U;
    msg.syringe0 = 143U;
    msg.syringe1 = 167U;
    msg.syringe2 = 95U;
    msg.custom.assign("IZXDUGTPJTIBFPFESPIZYZVOLVQOCOQBUKACRMGFNIRVIZMJWWGHUZDXIZYQEJBSPAYWGEKXAWHBFKXMWWJEHFNBXVAOSJAVCTBKMAZFBJRDGLATYRYMECGKDJVKVWLLJTSIHUDYQGYDXPISLNLOQXONIKDENCQQDRXRWRWQQUHPARICBGWPTGBBHNGUTYHCNAKVFHEPMEHTXJNNORJE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.488029652931);
    msg.setSource(30979U);
    msg.setSourceEntity(38U);
    msg.setDestination(51045U);
    msg.setDestinationEntity(229U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.809272698396);
    msg.setSource(12536U);
    msg.setSourceEntity(0U);
    msg.setDestination(55097U);
    msg.setDestinationEntity(184U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.914778864627);
    msg.setSource(46399U);
    msg.setSourceEntity(186U);
    msg.setDestination(29524U);
    msg.setDestinationEntity(63U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.107281576478);
    msg.setSource(29175U);
    msg.setSourceEntity(73U);
    msg.setDestination(443U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.951243706299;
    msg.lon = 0.00934109286936;
    msg.z = 0.0952516858194;
    msg.z_units = 146U;
    msg.speed = 0.378700446805;
    msg.speed_units = 26U;
    msg.takeoff_pitch = 0.350153462856;
    msg.custom.assign("ISQTKLECOXXLYKZZFEATFLHDPSAPWTUNGCTRJHYHCSBGFYBJYZPGCNKISZSHRGDAMWILQEIKDFYJZZVMPUQKLHYAXGBVKEGJJZGKSSGVGXQYEPJBWKSSYDNACVOMIXNPEBRVQOTCJHXMAQQJOTJNHBRHTVIFWSOTTYPAWERVDQPPABKWN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.695308731001);
    msg.setSource(63328U);
    msg.setSourceEntity(170U);
    msg.setDestination(52657U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.484612778302;
    msg.lon = 0.955847179537;
    msg.z = 0.0565024332881;
    msg.z_units = 135U;
    msg.speed = 0.612798493255;
    msg.speed_units = 13U;
    msg.takeoff_pitch = 0.330162252761;
    msg.custom.assign("HBQTNXEQQBRTLCDWXRIDDRLAVQPRLRVUAFPZIKSIPJGAJAHSKOLMHKECIPZYPNSBKEYZADYNWTVEWEOIIXZWUCQIFJGTCBNZN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.22606005734);
    msg.setSource(45516U);
    msg.setSourceEntity(209U);
    msg.setDestination(63637U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.64173809867;
    msg.lon = 0.0368269508849;
    msg.z = 0.0289077838617;
    msg.z_units = 6U;
    msg.speed = 0.0340476887434;
    msg.speed_units = 188U;
    msg.takeoff_pitch = 0.777131187504;
    msg.custom.assign("LIVGVNHZLHBCMCRYISZWDWMSUYZTGKNINAXINNRLZXCJDVXJEMQPNDYTTGPTRTBJLGROCXOFYEAFZTSFYCPEJCAHWEJWEORDBGUSKQXRPDKWQEKWDBMYQSNUOIJJDYSONLSFRHOZNHIHPAPWACWJFMRFIHYKUZJSMBKLLDEEQCAM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.0553648654024);
    msg.setSource(39574U);
    msg.setSourceEntity(196U);
    msg.setDestination(45588U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.898941001196;
    msg.lon = 0.986329872773;
    msg.z = 0.858495250358;
    msg.z_units = 102U;
    msg.speed = 0.933230135352;
    msg.speed_units = 82U;
    msg.abort_z = 0.573135986024;
    msg.bearing = 0.523039973829;
    msg.glide_slope = 163U;
    msg.glide_slope_alt = 0.120972637667;
    msg.custom.assign("XBAGDYBDIMZNKRJWGQWEBGSIHNLHHTWITUOVIRBZBYKIHTRUTXSNOGLEJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.799399283652);
    msg.setSource(19617U);
    msg.setSourceEntity(108U);
    msg.setDestination(28393U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.481061818307;
    msg.lon = 0.717274030139;
    msg.z = 0.0812028706544;
    msg.z_units = 67U;
    msg.speed = 0.454003874059;
    msg.speed_units = 203U;
    msg.abort_z = 0.631030654776;
    msg.bearing = 0.557515262722;
    msg.glide_slope = 217U;
    msg.glide_slope_alt = 0.615429340319;
    msg.custom.assign("ACBSSGXMIHMPILSIHVXZWRLNUYYAWWVOIJFHXIJVWANDNTZUGRELKCJWXWKHYEEGBQOETFKFCTDOYDKJURRGXPPPKHVQGVNLKAOCTHWUNXIPVPJRBWMCYYRZSQYBPQDSSRZFRBLIQMYZZNTTNSAVCQQSHFBSODCUYUBUJKJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.343161686509);
    msg.setSource(15779U);
    msg.setSourceEntity(105U);
    msg.setDestination(1359U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.476043310116;
    msg.lon = 0.134157148771;
    msg.z = 0.600015613861;
    msg.z_units = 117U;
    msg.speed = 0.162034348848;
    msg.speed_units = 228U;
    msg.abort_z = 0.391557275144;
    msg.bearing = 0.924222895004;
    msg.glide_slope = 214U;
    msg.glide_slope_alt = 0.182454438484;
    msg.custom.assign("BXOUEXFLUXMCOFHYHTZJLSQRNYRIMCCCSJKXAKWPPZTDPFWQGNHDKHUGUQDEOZPCTGEIGMKAWIFURLLWAVUNDENFOJEXIHVNDECDBOLGFKSQXTJVSWEDVVIUMYOMVBGNEXH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.545767856295);
    msg.setSource(9559U);
    msg.setSourceEntity(111U);
    msg.setDestination(1424U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.821603982741;
    msg.lon = 0.759777359859;
    msg.speed = 0.862018127799;
    msg.speed_units = 245U;
    msg.limits = 18U;
    msg.max_depth = 0.552508473849;
    msg.min_alt = 0.269690789317;
    msg.time_limit = 0.636902859101;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 5.53174074042e-05;
    tmp_msg_0.lon = 0.13651975048;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("CECJNOUDWTVWIZBEBIOMSIPSGGOWQBPUSAZRVVXKFBHJNRVQYTLZQISXEALNJJEBLGTMUDDWOFCIIMTVXGUVQTZDEGHDADRYHTNQXWZOODAJQOFK");
    msg.custom.assign("JQAENMEGPJKQJPXGPQPNINSSJUIJAMCTSSOSZAIYFWGBOBMBWFHKHIIFTVCWDXGZTTPPDGWRYEZQKPXWROUMMGNQDBOHGWVCMYKYTDRYKLREPVVYDXWFBSHUOPDHUMUJHXUJOAXDXVQHCQAJGABFCIGRLCVILTRLRNJTZIKEKKZTWMKEERA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.790551226383);
    msg.setSource(42976U);
    msg.setSourceEntity(184U);
    msg.setDestination(14882U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.385176163954;
    msg.lon = 0.0860256158947;
    msg.speed = 0.877259369798;
    msg.speed_units = 177U;
    msg.limits = 15U;
    msg.max_depth = 0.0907630595501;
    msg.min_alt = 0.208248688956;
    msg.time_limit = 0.336127412629;
    msg.controller.assign("PCDQXZDCVVBTWIUJOHQNRVQHCCAECAMKLEHGIQLRULUDOPEYXSLIHZ");
    msg.custom.assign("SHWIMEHYFKKKPQDFLIFFHUTESCHCEHYACWXFQNXQIKMZLYMDIIORPERMIXHVACAAPAWTKCNAVTAJKRSWQLNLTVGLUTXJVWGMJEDURLBPUNQBCAVLOADPYBYBJJNSUNOYXRRCBHVUQRJDIGNFGQAEFUTDYWOGDGQXKWKPCSEMZMZCTBGWSQCRYZNEXOVNOBFQTLGLWPOPKZX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.123787042829);
    msg.setSource(46653U);
    msg.setSourceEntity(5U);
    msg.setDestination(27U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.0847440559114;
    msg.lon = 0.711900173401;
    msg.speed = 0.798905509901;
    msg.speed_units = 122U;
    msg.limits = 62U;
    msg.max_depth = 0.444875307873;
    msg.min_alt = 0.458045210962;
    msg.time_limit = 0.931493246938;
    msg.controller.assign("PNKLTMBVVSLRNHNQTEGQMZBVFGENKWTTRMBRUDEJPQHMNOFPXXLUZWVXIYXLXHMYQCUSKOIDEBJCVIXHBIUCCQQJTLBGFYIMCTVUSQHWAOFRKPVKGPQWGPRAFSYFQRZOPIDBCGPUSEEWWVASNOPXZOCSFCXXAANJZTDIKYTGJDEHZUAAWMTYRJHAMBHBGSJFODZ");
    msg.custom.assign("RHYTYJOQVNEISAIRVWSMXFZOMXHKRKFLPEOVABBSOOCGQSEPRNHYEJDLYTCWSYKDTFGXFMNFEBGQVMKRQHOGHJRTENZUADLXMCPGASLSFZZVGVNKMQDFXYSUBQUJIUMZECQAJITBICGEAPKWDHVYQW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.38716561837);
    msg.setSource(64363U);
    msg.setSourceEntity(22U);
    msg.setDestination(44239U);
    msg.setDestinationEntity(18U);
    msg.target.assign("ZLXKEVCBFEAIRLUJFRGGBMDKFGOULWLYWOOSLDIDRUPFBNTLYLTQWYAMOFQUDZEZIWHHTZOQSVELZEIACAPVUPOAYKDPGJWEJNJGOOXJPNYJIZRSHJLMBIVAIQXBZSRJSZCNAKAURHKHKWTKGHVCMBXECMZUNQ");
    msg.max_speed = 0.470382812451;
    msg.speed_units = 183U;
    msg.lat = 0.660083161497;
    msg.lon = 0.371303045812;
    msg.z = 0.314289673944;
    msg.z_units = 199U;
    msg.custom.assign("NIDWAHRAMWVBRC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.814489391138);
    msg.setSource(50280U);
    msg.setSourceEntity(87U);
    msg.setDestination(39621U);
    msg.setDestinationEntity(33U);
    msg.target.assign("IPRUEYBYOUYOLQEHMGXKJGSXJGDIVOXFCAPHEODYTYMXDJPGHHCLLSLRMVQUUFSBRKVFJQ");
    msg.max_speed = 0.537713662117;
    msg.speed_units = 43U;
    msg.lat = 0.787753123282;
    msg.lon = 0.454931319756;
    msg.z = 0.472357646842;
    msg.z_units = 228U;
    msg.custom.assign("JWCQNMBXZOGBANDMUNJFLFEVNTXHKQDRLOOHVDLAKAJOIDDQMGSUEIWLTCKCBPEWHWNBIQZSMVZCEANFTHYJHBFABMVOVIMPNJUPJRANCVKGELQUKYLTDZLPDTXWHXKSGTMFJFWAWOSREUEPYRWHQAPUWSCAITYYMXJVVQSXGFZSPNCLUYT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.211639395717);
    msg.setSource(60166U);
    msg.setSourceEntity(114U);
    msg.setDestination(19244U);
    msg.setDestinationEntity(9U);
    msg.target.assign("JZGYLVMHCBGLKWBJYBZWCPHGAFEGCADCFRUMENUNADSDFJRNCISVNFPFZJSHZAECFWYEMIDOKRRAGNAYCREPUSEDWTUXYHOJOTODVBPHSNQDQNLZLJIDXTZISPJYXHCFAECVXGMILQYWUO");
    msg.max_speed = 0.219898471859;
    msg.speed_units = 54U;
    msg.lat = 0.320707798095;
    msg.lon = 0.164127607484;
    msg.z = 0.778619954261;
    msg.z_units = 95U;
    msg.custom.assign("UZYOKIOKZJCANTKUXFUJRGYPSPIKZKFHWYNLSWIOBPYBOXTWLVQLGUJTOFQQXIRJZHJPVXMVROZKVNXYECDPSGEMLFEDHWDFJAUUAMWS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.124197193859);
    msg.setSource(40124U);
    msg.setSourceEntity(73U);
    msg.setDestination(64710U);
    msg.setDestinationEntity(19U);
    msg.timeout = 22092U;
    msg.lat = 0.236030628412;
    msg.lon = 0.368092507291;
    msg.speed = 0.856494471813;
    msg.speed_units = 121U;
    msg.custom.assign("FBLSCCGDJLTYZBECFMVQEEGSEIRQZWQOATEJRYMIMUDQDJKVFOKPEWUSKKZHNKBNGPZNMLOWJVSNPQRWQBMOTTDBBGDVUOYASVZZZUMUJMJSWJRCQJKIBKQIJG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.7201916212);
    msg.setSource(50113U);
    msg.setSourceEntity(131U);
    msg.setDestination(12072U);
    msg.setDestinationEntity(169U);
    msg.timeout = 20129U;
    msg.lat = 0.798467899446;
    msg.lon = 0.288225734087;
    msg.speed = 0.361597589927;
    msg.speed_units = 216U;
    msg.custom.assign("KSKJNEDUWSRWHMCROLXPGHMCYAKSVHTHIXSGMEMQIBRMOEWAFVWDQQIJXQVDMEDPKIXRAVVZOKJSOPZGMGEIHTYWQZSKGNNOUWKAWXYCTICECUBOTLNDKYYG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.969705404565);
    msg.setSource(17379U);
    msg.setSourceEntity(62U);
    msg.setDestination(61488U);
    msg.setDestinationEntity(171U);
    msg.timeout = 55431U;
    msg.lat = 0.169490653431;
    msg.lon = 0.51838308618;
    msg.speed = 0.669518689094;
    msg.speed_units = 238U;
    msg.custom.assign("IFYMWPWVUNAJOCHGVAIOJNUMHGVJYAIUIYIEVNTIUIFPWYNMQPRLHCEWVVBTDZKUSGAEDHFAXWSPHXRUDMQSMDEVCZBJSRKKDBMKUFP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.653638243347);
    msg.setSource(3535U);
    msg.setSourceEntity(151U);
    msg.setDestination(18611U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.559877093061;
    msg.lon = 0.272114125966;
    msg.z = 0.54765410181;
    msg.z_units = 129U;
    msg.radius = 0.78206148851;
    msg.duration = 9466U;
    msg.speed = 0.573728574561;
    msg.speed_units = 192U;
    msg.popup_period = 48865U;
    msg.popup_duration = 37673U;
    msg.flags = 140U;
    msg.custom.assign("JGYQFSNHCAWWGMEZJXKFIIABZXEBOLPLLMYYXBMMOASEJFSHHVHHGSWTKOVKMBCXIBDQCKJTNMISGKGHAICWKIGCNUDZNVMMRROADUBHJVPCDWRFSDZNFFIYBGMEYTTUZLRNHQZOQPSTEPCVSYFEDIXVBKTRRQUWIXUJRZRLPXNNQLVWEMNOPOCXHKGWYSVAAFDJUUYQZJEBHZVASVPPGUOTCDJUTTLYOYPRO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.601042523);
    msg.setSource(7403U);
    msg.setSourceEntity(7U);
    msg.setDestination(55490U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.104973411705;
    msg.lon = 0.503372670258;
    msg.z = 0.882685566333;
    msg.z_units = 118U;
    msg.radius = 0.669598504501;
    msg.duration = 29221U;
    msg.speed = 0.744956815997;
    msg.speed_units = 141U;
    msg.popup_period = 28478U;
    msg.popup_duration = 4212U;
    msg.flags = 6U;
    msg.custom.assign("VIQISXIEJIFUIFCKGHPBPFBTOAT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.286021303675);
    msg.setSource(8339U);
    msg.setSourceEntity(229U);
    msg.setDestination(14370U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.418387860309;
    msg.lon = 0.510158118139;
    msg.z = 0.163780231191;
    msg.z_units = 74U;
    msg.radius = 0.39579029388;
    msg.duration = 53471U;
    msg.speed = 0.788258512745;
    msg.speed_units = 4U;
    msg.popup_period = 299U;
    msg.popup_duration = 1379U;
    msg.flags = 169U;
    msg.custom.assign("EBMJUOHJIXXNVKWFHZHRDSIGSOKZTBQEMNQTDHSLDQSQAESGSUDYTJORDQJTZEAEDTXFAHUHWZCLYHUTGMEWXMHMCKSFGEQGMPAWKBCQVJUAXUVETNZVKGLBVVPZSBMDCXRPBEJMWYVDKCJPRVIYBZPUUELAVNWFTWLCLFCZRPGPLJIYSOGCNROYKOIDRURBTFNNIALXNYGOYKSFJOHXXMQWQPFKIQYALIDPJNBZXL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.589950699313);
    msg.setSource(23445U);
    msg.setSourceEntity(28U);
    msg.setDestination(9856U);
    msg.setDestinationEntity(50U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.154890338813);
    msg.setSource(5410U);
    msg.setSourceEntity(24U);
    msg.setDestination(16524U);
    msg.setDestinationEntity(124U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.490911681319);
    msg.setSource(60288U);
    msg.setSourceEntity(170U);
    msg.setDestination(64362U);
    msg.setDestinationEntity(105U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.334430276867);
    msg.setSource(34410U);
    msg.setSourceEntity(34U);
    msg.setDestination(54443U);
    msg.setDestinationEntity(66U);
    msg.timeout = 45394U;
    msg.lat = 0.849229150211;
    msg.lon = 0.588841300563;
    msg.z = 0.398761963054;
    msg.z_units = 30U;
    msg.speed = 0.92092200275;
    msg.speed_units = 146U;
    msg.bearing = 0.717156377147;
    msg.width = 0.0533226064946;
    msg.direction = 3U;
    msg.custom.assign("VWYZYIIGQUBRGAKTQOBANWQOZLSVVXLCUETOOVINMLXRAASTCFYVVVJSMMZJCCCEAMAUJIRHKSAEGGQYPJXPBDEFQSVATKSPPKBKCHXWNRBEFDKXTLPQDYMEIFHIKWSQWBYMUNNCHJXXAWSTZPONHZBTGCGRUPWLDWUUHIVELUDMJGLISQRKREGODFSFCOJXQVZZJORXQZYGMPMPDZHHTENFKBDDFCXNKJJLEYIOYTLIBGZYWFFAROHM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.339080043788);
    msg.setSource(26667U);
    msg.setSourceEntity(116U);
    msg.setDestination(10641U);
    msg.setDestinationEntity(207U);
    msg.timeout = 32621U;
    msg.lat = 0.82397845827;
    msg.lon = 0.643927784669;
    msg.z = 0.208655056265;
    msg.z_units = 72U;
    msg.speed = 0.72786779574;
    msg.speed_units = 4U;
    msg.bearing = 0.182903688646;
    msg.width = 0.388114032142;
    msg.direction = 13U;
    msg.custom.assign("LQLLEMXQBRUDJVGKITCAKOMNBSTWHLMQYUDQNGKPZFEZYNQYEFTYVPLVFAJQNTUPIAHKROGUIPVKKZKCMTBPIFPNDKPBCLSWJJUOAYHTTMFHUICCIDHHYSEGOACWZLNRHVEPTRXRBLJQJSURGMGQPOSSPFXZEOVXYAKHODJGSURXAVSJMCZAQZEWZEIXHNGBIAWNZCFMWWDVNXQOGKREYIMNT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.59755119444);
    msg.setSource(28994U);
    msg.setSourceEntity(235U);
    msg.setDestination(8362U);
    msg.setDestinationEntity(251U);
    msg.timeout = 13106U;
    msg.lat = 0.330803839694;
    msg.lon = 0.903865422422;
    msg.z = 0.068668781122;
    msg.z_units = 64U;
    msg.speed = 0.735037028983;
    msg.speed_units = 11U;
    msg.bearing = 0.0615622540205;
    msg.width = 0.204821691183;
    msg.direction = 254U;
    msg.custom.assign("KMJZLZEQWOFUMLQNHPDYRIXZJAEPKPIREJZGIPGDCDYUKMWMNGXWDCVTJCACINSVEPJBJNOWBHAIYVFSOEJUUZNKGOVXNDSQWYKDMVHJMLSIQMGLRZVIBZVVFNHXXMWUFUDRLTWCQTSQVCQAR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.171279529396);
    msg.setSource(33235U);
    msg.setSourceEntity(216U);
    msg.setDestination(19249U);
    msg.setDestinationEntity(70U);
    msg.op_mode = 113U;
    msg.error_count = 117U;
    msg.error_ents.assign("JZDXYBZBEJCOLGCGPJUHFSSHDVZFRBSULARBOTEPWHLDZNJZUFDLMSVYUHGQTYXEGZLUTRWCQYAEVSEJNHSEKUTF");
    msg.maneuver_type = 65294U;
    msg.maneuver_stime = 0.997075817242;
    msg.maneuver_eta = 62681U;
    msg.control_loops = 2532532410U;
    msg.flags = 188U;
    msg.last_error.assign("GCLKSSAWFZCAAIBMJBYCCLYLNGCZXVZBPZWINQLPUTALJILYJPYEZWDEPTQMRXDWBKZMQMGCFIHDXJKCVYZCBEGNLTETQD");
    msg.last_error_time = 0.31180753032;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.507574643135);
    msg.setSource(4341U);
    msg.setSourceEntity(29U);
    msg.setDestination(16789U);
    msg.setDestinationEntity(33U);
    msg.op_mode = 170U;
    msg.error_count = 209U;
    msg.error_ents.assign("BPQRYFOWRVODHFXWHQJBYUTUCQZCIOBDUZNHXGUZDEETDGQNMBRMZQHLRLJHGSLXYYCCXSLYNSPFEVJNTMHVCFVWKITWJPNTGYQXIFNBHAJFZDWHVKEDZIXGINCMLSAL");
    msg.maneuver_type = 55826U;
    msg.maneuver_stime = 0.295346060331;
    msg.maneuver_eta = 28612U;
    msg.control_loops = 3505817140U;
    msg.flags = 159U;
    msg.last_error.assign("ALYPTVHMTKSDEDSXOIVRTXEJQEECWYKVHAFKVPAAWPCZKFZDNHOOOXVQHXHFXMCIZKKSHQLPKRIAWYYNJWLDMZIDANLXROSPXWNDFJCSVRZGPBGUSBVTUUJZNLSBZBXRORRFTHNBSUQJBUIBG");
    msg.last_error_time = 0.562681900499;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.919347672434);
    msg.setSource(23201U);
    msg.setSourceEntity(231U);
    msg.setDestination(5858U);
    msg.setDestinationEntity(241U);
    msg.op_mode = 44U;
    msg.error_count = 129U;
    msg.error_ents.assign("QATOIASNNCZVPPXIGCWCYRUIFWJCFGDBHWLEEVWXYYEWLXEZTPPWRQBIRSCARMKHVSPTWSZKJURKGHBCPNMJGEHVYQSKEOJNMMBXMVPHUMXPANJZHGAOFOTQMUEBLIFNLVSYADKVUHNPLBNPZNIECDVJSCYOXFGTDSUHGUXAQBLZSGRIDLFB");
    msg.maneuver_type = 20143U;
    msg.maneuver_stime = 0.649801260723;
    msg.maneuver_eta = 42780U;
    msg.control_loops = 3705520108U;
    msg.flags = 193U;
    msg.last_error.assign("PNGRBNYJCXGMFPUUOBKQLETBCGDATQGGVZZEGHWVOWOCSIRONMHDOVJZRUAIQVTNJKZTYRYFEHWPKJASGIQUZYMBKSIYPMLEHYOAQVZYSUSURIMLUCKYCBQTNJFTPXKNJAFXZAYBGPVLO");
    msg.last_error_time = 0.368382638921;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.53895513703);
    msg.setSource(54603U);
    msg.setSourceEntity(43U);
    msg.setDestination(9494U);
    msg.setDestinationEntity(202U);
    msg.type = 15U;
    msg.request_id = 23440U;
    msg.command = 132U;
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 35806U;
    tmp_msg_0.lat = 0.413696281956;
    tmp_msg_0.lon = 0.796707487884;
    tmp_msg_0.z = 0.364904116949;
    tmp_msg_0.z_units = 38U;
    tmp_msg_0.speed = 0.470744967473;
    tmp_msg_0.speed_units = 245U;
    tmp_msg_0.bearing = 0.562740307478;
    tmp_msg_0.width = 0.630864505516;
    tmp_msg_0.direction = 89U;
    tmp_msg_0.custom.assign("JANBALVRKCPGEVVU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 22976U;
    msg.info.assign("URZAHDUPSHFXILLZTGLMAFQMZODOMHXMDLNIHNWUYKORVXEHZQANXJCOGNMCEXUDUYGTGYEYKPTGUQLJXOFAMBVSVRHXKEMULTRJZJNYWRSAFPHHAQKSYDJGLYRKAIDIWGHWYPWOSVNJRJXNPZBEJEADCOUNVPCGUYMFBFDDWVKBCWWISRVGBWEMDSVKJVPBLZSCOEPZCQEETHCNRQTIOBTYT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.361120207288);
    msg.setSource(22112U);
    msg.setSourceEntity(3U);
    msg.setDestination(61135U);
    msg.setDestinationEntity(60U);
    msg.type = 175U;
    msg.request_id = 63791U;
    msg.command = 61U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 3371U;
    tmp_msg_0.lat = 0.174652651834;
    tmp_msg_0.lon = 0.222107680548;
    tmp_msg_0.z = 0.274728806057;
    tmp_msg_0.z_units = 131U;
    tmp_msg_0.speed = 0.398171030868;
    tmp_msg_0.speed_units = 169U;
    tmp_msg_0.custom.assign("VDLZSRZOZPWMRNNHBEAQLRLKOVDHLRVSWZYNWXDZGPRAOJWTGJVACJMFIDQBPUHOHTGWOGXMTSYZUEAFUOHINHYDJEVQBUUQLFYDBRKBWSGPRQQOGFWLWFXUKZKTF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 201U;
    msg.info.assign("EADOMHUFTTYVHDGJFYTBFTZQHTWZVVMWBNLJQOCRCLWSSRHHZGQDEGMBKGMKZAKFBPSKSUJEYNLQWBPCAYJRSXTXXHHGUMEICCDFUXMDKKIPOIZNCUYIYRBWMZQFVSNOSNRJRYQFHYSZULNGNPISLKYDXQZCEOOOXHFKLIODPRBPURHUQPYAFTVDMGQUGXOLXGDZDNZGVXAQLCNBTJJCKEIRMSILKWMVOVTWFABEVIABLCPAWTVAPEEWNJXRJJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.490274056004);
    msg.setSource(14914U);
    msg.setSourceEntity(143U);
    msg.setDestination(58743U);
    msg.setDestinationEntity(237U);
    msg.type = 107U;
    msg.request_id = 61837U;
    msg.command = 246U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 17843U;
    tmp_msg_0.lat = 0.792560344789;
    tmp_msg_0.lon = 0.417356869594;
    tmp_msg_0.z = 0.434236169214;
    tmp_msg_0.z_units = 174U;
    tmp_msg_0.speed = 0.364366354415;
    tmp_msg_0.speed_units = 146U;
    tmp_msg_0.custom.assign("SNJJMHMZUCHYWOPEHPEKHFCUSXLIHSNMRODLXWEDELUWWPIGKRBQFADAGSNYJZAOLMDJMTFEKEKRAPIVHYWFPHGIEWLTGNPXRANDHZRLTXOFVTSCWQXTGYINOPDWCYMKZUCIRPMLVQDGHVPSURSIIQLVVCSLQGSGJXBBXUFOZKVDIBEFCAYCZVJCYVJFJJQYOKDADZRQUWBKJZTOZFEAQTQLCATKPNRBUHXMO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 17484U;
    msg.info.assign("CZKYGYBTXEWZKBASRJIAHIAIIGGAVZWZMNSAKVGQDYLJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.417300994261);
    msg.setSource(64789U);
    msg.setSourceEntity(26U);
    msg.setDestination(65165U);
    msg.setDestinationEntity(170U);
    msg.command = 146U;
    msg.entities.assign("EBSUDYXTQGNNIJTCQOUJLTDQCMBRFHBSTROGZOHGLGOXSHMRLMNMCVNOGKYXJKAXEYWQFGZPVPEMGYFKUYUUPZWHIIIDLAKZPIPULYWPNKPNZULZEKNXFTWCXUVTIHEPKAAAVVOFXWKNTBDLYQWUCVDAWNCAGYSDVBHDGDIEBFWZHJTVEAEIWXJMTL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.198257149525);
    msg.setSource(38215U);
    msg.setSourceEntity(225U);
    msg.setDestination(723U);
    msg.setDestinationEntity(172U);
    msg.command = 248U;
    msg.entities.assign("DTKVIYYRVATLPXOSTZYOBPUFHQCZMKJEZJNZBCPKRENKBITOSFARCMLTDIELOSWSSIVOVMRTBXEJBGWUMAYOXXVHTJNEXDYCBVKOYAAFJNUQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.763199294191);
    msg.setSource(65086U);
    msg.setSourceEntity(31U);
    msg.setDestination(50423U);
    msg.setDestinationEntity(165U);
    msg.command = 130U;
    msg.entities.assign("WXYGFCBMDOUUQBAYADEJXETNYGVQPNPOATXLEIBXUHELRBCJRCNMTRVZWLUHGAYLNOVYBLTLZHEBXCBQIXHNYPTOIJXIJZFZDIAHTMAMIDRYCJVCWAONJSMKCTOZBKFMDVHEQEQKULUAKAXBXOSOFTRYQMPPQZETIFDJSEPGUNSFQVZZURZRIWN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.53221105425);
    msg.setSource(30858U);
    msg.setSourceEntity(233U);
    msg.setDestination(1750U);
    msg.setDestinationEntity(88U);
    msg.mcount = 245U;
    msg.mnames.assign("BGEFRMAVXQMJLUYJEISCUMXORTBHDKAJLTETZGTOWINZNSSQZORAPNOSPQYVI");
    msg.ecount = 111U;
    msg.enames.assign("KFDQAQXGPRDIZWWVLAMUMNGVRQVOSZHMQIJDRUOEJUQS");
    msg.ccount = 46U;
    msg.cnames.assign("TIZMVGAKSBADCFFGKSMATAJVKOLTMPYZAIEHITHBXPEVYETMYDEZEEHCNDZJGXRNQMQWBRRDRLXSYKLJARCURJXCQFXJAXKCOQYKTNTNHMEKSSMQBACBHWDFUUPCRSKFWUVRDHQGVWLLPOXFPITIBUPIEKJNSDXPYIS");
    msg.last_error.assign("SCVDJBQHQKPKNHZHVVMFTIIAASOTQLMNWURVBADBKXSSPUIZTFRNIDVEOCYOPDTITIEEHENFLJSQCMJHHTTBXLQSHKYGQYDRWXBUWPGVNFOYCUGKPMNWHEONMUSADGYBACGZZNVRRZULZKSLHANWXYISORODEABUALMAKKERXQRXZXBMIWBQWUYJFTXFPPDLYKPVMXRDMMTHZYFLEFPIOYIOGC");
    msg.last_error_time = 0.276651458388;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.109827422323);
    msg.setSource(22081U);
    msg.setSourceEntity(178U);
    msg.setDestination(15968U);
    msg.setDestinationEntity(8U);
    msg.mcount = 49U;
    msg.mnames.assign("GGBTGMCGNYFUTKYMKCRIUBWRKTTHPDUSERYLRRZXJSVNGEJTFIJALOQRQWXRPXXDMDSKKLEZFDTKYNTFVVHXCDGIPIRVLQHDQJJCJXVBMB");
    msg.ecount = 97U;
    msg.enames.assign("TMCFNEHIOUEPMGGHCDNSXNFHJXJ");
    msg.ccount = 252U;
    msg.cnames.assign("LWZFYGQHDXYLNCEDUROGKZCAHYCPEXEAVAYCJMJFKOQXRJYMYNHHOHHOQJIZPZTTJKSMNAKKWPSSELFNBCRNBWLUTTLZKEVGMOQRMPLFQAMSEKVLOVHHUPPEFBGSQFWAIBYOHMKYCDWUUMRYGDZNLVLBCTUIRJSGVIXQDBUXZUPDANRRDUZKPFBDOGBOLXRCGXXQZPWXTSFJGJDHEWIVNYDBTVIIMIWAMVSIRTWJSE");
    msg.last_error.assign("HWUGGGQFLXQDVVAXJYIVECUJYVXVSIQBPTEJULOHMXMISXCZFWLVLWIYLNICXAREYBICBTETKPWMXDAGHVRFBJDGMCDUDXKPMYXHZSDSOKTAIZVXNZZERKQTYQIJIBYEJQORRMUWJAQDGASBYADHLJPCNFDTWPFVKHEQPPS");
    msg.last_error_time = 0.520419436224;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.434761513437);
    msg.setSource(18714U);
    msg.setSourceEntity(177U);
    msg.setDestination(11456U);
    msg.setDestinationEntity(200U);
    msg.mcount = 54U;
    msg.mnames.assign("JTAZXAYQXJOEZVNXJSGSMPPPLESPEDLURXWUUGUIOAXURHEVUNTMLZQPHHYBHZPUIXWGMQUICCWKKRALDIFVHUCIIMDGTHMQWYNPINMVJYNKODRLSWZKVJLDGDZVRBPMQKRLOGSKTCQHJFPNGRFAEDMHWEOWYBWFRASTZNTVEBQDCKYHGMEO");
    msg.ecount = 0U;
    msg.enames.assign("FGEWTOHWDVZGBQNHVJTGFMTBGZHNVNTKXRBRFEPSQHMVLCAEHMMAAHMYOJRRBPKVONJF");
    msg.ccount = 91U;
    msg.cnames.assign("MRQZADLMMJXVHWKTCLLWRRCKSPIFRB");
    msg.last_error.assign("FROJTEKNVOFGQBSTCZBWJDHYICOWUEBJXAEVXXHYTQXGOAEBKUCMMDCWRQOCMLNGQPRJLKWICRFZBHBEZQPIRSFLNMQNZDBNMTRYMHNPWAZQZNHYIUKBJSKJJJNRDDCSVSKEPTFWGTZWHASAUYDYPFGNYOXCUGKRVGMPVLKKFQYEEPWMIOOPASDPVAROVWXXPYGUXCIFJ");
    msg.last_error_time = 0.907391150645;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.246541569355);
    msg.setSource(13711U);
    msg.setSourceEntity(124U);
    msg.setDestination(34006U);
    msg.setDestinationEntity(50U);
    msg.mask = 210U;
    msg.max_depth = 0.816536837915;
    msg.min_altitude = 0.218497323203;
    msg.max_altitude = 0.990825798215;
    msg.min_speed = 0.174903708751;
    msg.max_speed = 0.736144122131;
    msg.max_vrate = 0.659733225561;
    msg.lat = 0.713216431454;
    msg.lon = 0.46933315545;
    msg.orientation = 0.0734052638993;
    msg.width = 0.423962138252;
    msg.length = 0.577164414452;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.579295781137);
    msg.setSource(40159U);
    msg.setSourceEntity(28U);
    msg.setDestination(19030U);
    msg.setDestinationEntity(126U);
    msg.mask = 228U;
    msg.max_depth = 0.983901882804;
    msg.min_altitude = 0.169546095695;
    msg.max_altitude = 0.620653555832;
    msg.min_speed = 0.68179058454;
    msg.max_speed = 0.510058931508;
    msg.max_vrate = 0.295429883776;
    msg.lat = 0.31001153178;
    msg.lon = 0.983633415901;
    msg.orientation = 0.545029712289;
    msg.width = 0.48246819693;
    msg.length = 0.440106987515;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.153194021928);
    msg.setSource(22147U);
    msg.setSourceEntity(241U);
    msg.setDestination(14738U);
    msg.setDestinationEntity(64U);
    msg.mask = 100U;
    msg.max_depth = 0.723140730986;
    msg.min_altitude = 0.955795978808;
    msg.max_altitude = 0.543020331989;
    msg.min_speed = 0.052402662335;
    msg.max_speed = 0.0448884571435;
    msg.max_vrate = 0.32307925916;
    msg.lat = 0.556067395217;
    msg.lon = 0.836971450007;
    msg.orientation = 0.227828564426;
    msg.width = 0.561566280327;
    msg.length = 0.190756787084;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.740627223324);
    msg.setSource(45982U);
    msg.setSourceEntity(136U);
    msg.setDestination(20289U);
    msg.setDestinationEntity(111U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.557492578837);
    msg.setSource(18600U);
    msg.setSourceEntity(245U);
    msg.setDestination(65141U);
    msg.setDestinationEntity(151U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.908948909061);
    msg.setSource(8584U);
    msg.setSourceEntity(131U);
    msg.setDestination(26029U);
    msg.setDestinationEntity(105U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.843999578529);
    msg.setSource(44831U);
    msg.setSourceEntity(75U);
    msg.setDestination(38820U);
    msg.setDestinationEntity(241U);
    msg.duration = 41422U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.998888683476);
    msg.setSource(27927U);
    msg.setSourceEntity(247U);
    msg.setDestination(7064U);
    msg.setDestinationEntity(19U);
    msg.duration = 22791U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.520922903319);
    msg.setSource(22018U);
    msg.setSourceEntity(120U);
    msg.setDestination(10324U);
    msg.setDestinationEntity(73U);
    msg.duration = 23970U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.384077619736);
    msg.setSource(12733U);
    msg.setSourceEntity(109U);
    msg.setDestination(1604U);
    msg.setDestinationEntity(168U);
    msg.enable = 242U;
    msg.mask = 937765995U;
    msg.scope_ref = 2767826001U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.212468357168);
    msg.setSource(27410U);
    msg.setSourceEntity(25U);
    msg.setDestination(13924U);
    msg.setDestinationEntity(56U);
    msg.enable = 134U;
    msg.mask = 282146823U;
    msg.scope_ref = 393391309U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.59070188998);
    msg.setSource(15607U);
    msg.setSourceEntity(170U);
    msg.setDestination(1557U);
    msg.setDestinationEntity(221U);
    msg.enable = 160U;
    msg.mask = 2409455867U;
    msg.scope_ref = 1574059648U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.151328634998);
    msg.setSource(19182U);
    msg.setSourceEntity(51U);
    msg.setDestination(4964U);
    msg.setDestinationEntity(224U);
    msg.medium = 248U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.0489675788876);
    msg.setSource(61204U);
    msg.setSourceEntity(189U);
    msg.setDestination(60570U);
    msg.setDestinationEntity(184U);
    msg.medium = 15U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.0590391499413);
    msg.setSource(6270U);
    msg.setSourceEntity(106U);
    msg.setDestination(29236U);
    msg.setDestinationEntity(17U);
    msg.medium = 209U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.508162347401);
    msg.setSource(30284U);
    msg.setSourceEntity(36U);
    msg.setDestination(53096U);
    msg.setDestinationEntity(155U);
    msg.value = 0.936480708661;
    msg.type = 6U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.26349493448);
    msg.setSource(38431U);
    msg.setSourceEntity(88U);
    msg.setDestination(14575U);
    msg.setDestinationEntity(230U);
    msg.value = 0.00117794794949;
    msg.type = 112U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.63547694303);
    msg.setSource(44524U);
    msg.setSourceEntity(2U);
    msg.setDestination(43612U);
    msg.setDestinationEntity(19U);
    msg.value = 0.305839398555;
    msg.type = 253U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.770995374245);
    msg.setSource(59743U);
    msg.setSourceEntity(248U);
    msg.setDestination(39097U);
    msg.setDestinationEntity(64U);
    msg.possimerr = 0.20731853154;
    msg.converg = 0.739948110097;
    msg.turbulence = 0.261262556063;
    msg.possimmon = 185U;
    msg.commmon = 98U;
    msg.convergmon = 214U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.7232868985);
    msg.setSource(59554U);
    msg.setSourceEntity(245U);
    msg.setDestination(35580U);
    msg.setDestinationEntity(60U);
    msg.possimerr = 0.879163521724;
    msg.converg = 0.00103971369588;
    msg.turbulence = 0.976696187551;
    msg.possimmon = 205U;
    msg.commmon = 105U;
    msg.convergmon = 97U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.0267233283336);
    msg.setSource(12202U);
    msg.setSourceEntity(189U);
    msg.setDestination(45879U);
    msg.setDestinationEntity(219U);
    msg.possimerr = 0.585326383669;
    msg.converg = 0.215162452798;
    msg.turbulence = 0.764950891257;
    msg.possimmon = 167U;
    msg.commmon = 205U;
    msg.convergmon = 167U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.48743401949);
    msg.setSource(57186U);
    msg.setSourceEntity(139U);
    msg.setDestination(44555U);
    msg.setDestinationEntity(159U);
    msg.autonomy = 24U;
    msg.mode.assign("AKWZKJMSLDZMLKGYWNXPIHUKNOOHWCOMBEHUQOECPAPWSIOYDPIMAEXGBTPMGUGRCKACHYKBBCBTZVDGLVETEUMVUACEHRFQZWKSMXQQW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.394800213073);
    msg.setSource(60476U);
    msg.setSourceEntity(38U);
    msg.setDestination(20607U);
    msg.setDestinationEntity(139U);
    msg.autonomy = 237U;
    msg.mode.assign("HARTDHAGYIRMLDHYOCUYVJRGKNSWELTBOKDCXAUEFMTPZVBJSBWKQLNSRHIIGJNIEFLVXJXYSYK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.727956270423);
    msg.setSource(22949U);
    msg.setSourceEntity(37U);
    msg.setDestination(557U);
    msg.setDestinationEntity(64U);
    msg.autonomy = 221U;
    msg.mode.assign("VOEGMWKHVEZFADHUNYHJPUGVGZOOZFAHXFZARTYDYKWWXDPCBGYURNZRXGLVTKOJLPLEMCNBUNGXQGDAOGMMVDAPMMBLNHCEELFJRXRYDSQWZSFAAJOCZIILHXA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.594067205279);
    msg.setSource(27671U);
    msg.setSourceEntity(252U);
    msg.setDestination(51034U);
    msg.setDestinationEntity(102U);
    msg.type = 75U;
    msg.op = 106U;
    msg.possimerr = 0.0585540082371;
    msg.converg = 0.0604941580804;
    msg.turbulence = 0.41630703385;
    msg.possimmon = 119U;
    msg.commmon = 100U;
    msg.convergmon = 68U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.587297402089);
    msg.setSource(3936U);
    msg.setSourceEntity(235U);
    msg.setDestination(37460U);
    msg.setDestinationEntity(97U);
    msg.type = 143U;
    msg.op = 65U;
    msg.possimerr = 0.32325128176;
    msg.converg = 0.585627596622;
    msg.turbulence = 0.333441369236;
    msg.possimmon = 240U;
    msg.commmon = 36U;
    msg.convergmon = 157U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.0676044487253);
    msg.setSource(41139U);
    msg.setSourceEntity(121U);
    msg.setDestination(12366U);
    msg.setDestinationEntity(116U);
    msg.type = 176U;
    msg.op = 231U;
    msg.possimerr = 0.97066688487;
    msg.converg = 0.762740737759;
    msg.turbulence = 0.256493536878;
    msg.possimmon = 243U;
    msg.commmon = 134U;
    msg.convergmon = 149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.605529351804);
    msg.setSource(65246U);
    msg.setSourceEntity(158U);
    msg.setDestination(64903U);
    msg.setDestinationEntity(187U);
    msg.op = 17U;
    msg.comm_interface = 78U;
    msg.period = 30677U;
    msg.sys_dst.assign("WDQPOPGPJQKHWFYNAGURTALMOAGVONIIRRAJJUCVTLMVYYTLRHWNKNQMLSLUDWNYRCQEACEFDZPHBKSZAAVSLLXNJIDFUWVGDOUBVQPFBNYPHZCVVGXPCEXBMKSNIRHIRCYIPJSOGVJAEGXKMFTRWRDBJBLUNXXQFUPJDSTFIJPGTMOUHVDABMSEECXYMSXYBMKTZZLHGXZZZOU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.468067922573);
    msg.setSource(48651U);
    msg.setSourceEntity(78U);
    msg.setDestination(15869U);
    msg.setDestinationEntity(48U);
    msg.op = 165U;
    msg.comm_interface = 140U;
    msg.period = 5876U;
    msg.sys_dst.assign("QRCBRYUAYYYHJEJWKNZRKDUDXAXNXLXKIFJWPWHMSMQUFTCAOQUFGQKYWBCMGNADVHFQBOUIEFTNFUTYQTRBBPMWRPIDWSCSGOENSOJQWBMOAVDULDVSYFBOXZTRBZJZIVMOTGWEZYCREQCMKIJPVEHELDDHDSGTQTXVFVHLGUIXEMLXNSGJAVKTNDLLRAHJM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.361856536843);
    msg.setSource(11293U);
    msg.setSourceEntity(234U);
    msg.setDestination(23202U);
    msg.setDestinationEntity(160U);
    msg.op = 246U;
    msg.comm_interface = 203U;
    msg.period = 47344U;
    msg.sys_dst.assign("LHZAMTNRSZFNHEJXASGORZYQFECEWHDKSNEIHNKRDQIFJFBOTBGUZORUBCQJWZCKWCDHMLCBWDONUYWEAVUJHPKKVGKESTOGZSNLLYKDYYVNGFBIAJPEZUYMUXOESGTOYOYUBGEGXVVLPWGSTATVLJTCPBRKJIHRARPIXMPMRCZSJQALMXYOGTRBWIJWXVNFAJKLQFPCSMXBFITHNODUQZCKNZXQMVWMIALUF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.136756786112);
    msg.setSource(46672U);
    msg.setSourceEntity(132U);
    msg.setDestination(18837U);
    msg.setDestinationEntity(92U);
    msg.stime = 1767537087U;
    msg.latitude = 0.56648020191;
    msg.longitude = 0.540080669405;
    msg.altitude = 5199U;
    msg.depth = 46028U;
    msg.heading = 56803U;
    msg.speed = 3146;
    msg.fuel = -8;
    msg.exec_state = -1;
    msg.plan_checksum = 59223U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.557430401658);
    msg.setSource(43435U);
    msg.setSourceEntity(39U);
    msg.setDestination(12118U);
    msg.setDestinationEntity(58U);
    msg.stime = 2125857017U;
    msg.latitude = 0.332705526452;
    msg.longitude = 0.628872806186;
    msg.altitude = 33564U;
    msg.depth = 43676U;
    msg.heading = 54639U;
    msg.speed = 18567;
    msg.fuel = 81;
    msg.exec_state = 101;
    msg.plan_checksum = 9378U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.0452197090285);
    msg.setSource(29760U);
    msg.setSourceEntity(111U);
    msg.setDestination(13045U);
    msg.setDestinationEntity(2U);
    msg.stime = 1117074697U;
    msg.latitude = 0.258973571598;
    msg.longitude = 0.403471708257;
    msg.altitude = 40758U;
    msg.depth = 32596U;
    msg.heading = 39830U;
    msg.speed = -30052;
    msg.fuel = 47;
    msg.exec_state = 92;
    msg.plan_checksum = 8902U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.809069464256);
    msg.setSource(3234U);
    msg.setSourceEntity(133U);
    msg.setDestination(34241U);
    msg.setDestinationEntity(199U);
    msg.req_id = 10479U;
    msg.comm_mean = 224U;
    msg.destination.assign("CDAUCEDEOFFMXISLMJHBCAHFMXSNCVDEZVMYWGYSTOOZUWVLCTELGGCKVZRJIRDUCNRJJRTQIBODOKLEWHKRASQWSLBNSCAVGMAPVEUUXIIWPKVUPJCCDKPESIYORPARLHKTFQNQWODSMVAYSZTTZFFWTBXEFLPABXHXTYUZUEDKYTIUQEVOWBVNNQPGIHXLBHKNKGFBXAWMLMYQGMJKRFJQPMJOFY");
    msg.deadline = 0.565955274743;
    msg.range = 0.417209263226;
    msg.data_mode = 186U;
    IMC::CommSystemsQuery tmp_msg_0;
    tmp_msg_0.type = 40U;
    tmp_msg_0.comm_interface = 48026U;
    tmp_msg_0.model = 14145U;
    tmp_msg_0.list.assign("JCRMHSTKXHGQIHVRCFGIUMKIONFVTFESFWEJBSNGJDKJRVHYCIUBVWZAJAHMFLITTNMAQGKQXJXCVQORTAFMXXDHDSDYYEYGVHYRUSOBFO");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("RWYILPVFVKOMRNNCHXRJZKICJSBSKQMTNPPRWOHAPAELEDMMQNXKQTHJDSGWIRYDJORNALXIPBEOGDIUWGFHULMXUXIALOJDUSOKNCUEPRYSZFYEUQHTZF");
    const char tmp_msg_1[] = {61, 107, 53, -45, 64, -56, 88, 9, -103, -26, -87, -23, 37, 119, 90, 37, -108, 84, -64, -14, 66, 27, 8, -69, -43, -60, 16, -104, 35, -112, -72, -66, -116, 101, 112, -35, -108, -88, -31, 19, 18, 124, 8, 57, -33, -116, -22, -32, -80, -60, 99, 10, 19, -43, 70, 116, 1, 9, 104, -121, -5, -19, 48, -64, -103, 126, 26, 117, 123, 122, 14, -58, -34, -83, 36, -118, -83, 26, 43, 121, -84, 99, -110, 17, -116, -8, 70, 24, -95, 70, 116, -94, -78, 89, -123, 119, -84, 88, -107, 85, -118, 12, -11, -42, -33, 108, 85, 23, 54, 58, -42, -94, 121, -50, -73, -16, -27, -105, -47, -44, -118, -47, 59, -57, -17, 9, 19, -114, 80, -79, 53, -46, -32, 11, 52, 98, 42, 126, -118, -101, -93, -90, -23, 103, 34, 88, 11, -16, 14, 70, -113, 31, 33, -24, 29, -54, -105, 57, 47, -66, 15, 76, 115, -6, -11, -88, -127, 79, -40, 74, -74, -101, -89, -61, 15, -103, 58, 35, -77, -81, -8, -74, -113, 119, 41, 49, -38, 71, 68, 44, -84, -119, -113, 89, 26, 48, -111, -73, 6, 119, 83, 15, 110, -111, -59, 73, 58, -128, -84, 42, -15, 56, -85, 97, -115, 59, -88, -28, -69, -30, -17, -121, 77, 92, -36};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.430068342111);
    msg.setSource(51772U);
    msg.setSourceEntity(105U);
    msg.setDestination(14626U);
    msg.setDestinationEntity(196U);
    msg.req_id = 61326U;
    msg.comm_mean = 237U;
    msg.destination.assign("FHEUDGKYWMQNEMATVGRXYNVMMAZOAYPSIEFSYBBQKLOYRJAWWZGHTWSHRDFPVQUJJEWUKDERBLFSIQCHAYIGTWPXKVISIVXHJXKBUPTLEIOKGLHLFJNHGFCAZPUNHSPMLZZVIZBRZDSEXNNTWOBVOMCPTFNJDRFCNQCXUWWSBKLBZCMDZJLKEYOTMXHJDMP");
    msg.deadline = 0.0215007901446;
    msg.range = 0.0619252679765;
    msg.data_mode = 112U;
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 98U;
    tmp_msg_0.frequency = 2110284341U;
    tmp_msg_0.min_range = 56961U;
    tmp_msg_0.max_range = 26218U;
    tmp_msg_0.bits_per_point = 200U;
    tmp_msg_0.scale_factor = 0.765126056267;
    IMC::BeamConfig tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beam_width = 0.295555360552;
    tmp_tmp_msg_0_0.beam_height = 0.681292418947;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_0);
    const char tmp_tmp_msg_0_1[] = {-23, 114, -128, 37, -39, 28, 100, -120, -65, -8, -56, -16, -95, 23, -88, 17, 25, 28, -103, 80, -103, 90, 113, -73, -111, -19, -61, 63, -107, 118, -104, 0, 41, 96, 10, 125, 48, 111, -5, 32, -56, -117, 10, 121, 18, 83, 25, -29, -43, -62, 15, 115, 7, -44, -89, -24, 68, 42, -75, -6, -40, -98, 98, 22, -10, 64, -13, 67, -84, 100, -105, 36, -126, -97, 23, 30, 126, -4, 44, -5, -22, -121, -2, 20, -92, 55, 0, -57, -93, -24, -44, 44, 99, 96, -44, 104, 74, -117, -112, 109, 14, 23, 31, -40, 93, -66, -51, -124, 37, -84, -60, 76, 40, -48, 93, -16, -88, 93, 60, -18, 70, -119, -45, -53, 84, 94, -39, 4, -97, 73, 120, -51, 66, 95, -15, -100, 36, -40, -127, -92, -79, -54, 87, 97, -127, -126, 107, -47, -30};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GHXRCZWPTOYQUJSYSKFVPQPCBCDMAZUFZSOZBBLQXVCIYTFOEBWXHEYUEVYMUAVCCRIFDNWBMDHRAAWEDEZFDJFMVFZOJOMHPLTYDAVXNXOZXERGCPVMJWRQMNWWPLLMQRDLISYEKLKLYVBQOYKGRATQAJHGPG");
    const char tmp_msg_1[] = {-28, -92, -93, -101, -21, 50, 16, 72, -70, 90, -100, -32, 102, 102, 31, 123, 32, 12, 104, -83, -76, 16, 37, 113, 120, -91, 122, -92, -7, 70, -93, 115, -98, 84, 93, 1, -19, -54, -111, -88, -54, -122, -88, -74, 44, 50, 70, 14, -70, 64, 86, -25, -8, 41, -57, 47, 38, 83, -124, -95, -90, -128, -29, 52, -63, -59, 104, 75, 59, -39, 8, 68, -25, -74, -86, 19, -127, -15, 94, 106, 57, 122, 97, -63, 17, 86, 76, -19, 109, -82, 4, -52, -28, -68, -23, -67, -41, 103, 106, 119, -7, 62, 39, 1, 1, 71, -76, -81, -102, 76, 30, -119, 55, -4, -27, -120, -118, 22, 22, 65, -58, 6, -60, -77, 97, 34, 123, -123, 26, -101, 40, -45, 19, 12, 83, -26, 29, 2, -107, 24, -112, -118, 69, -37, -91, -29, -57, -80, 47, 122, -95, 101, -9, -27, -107, 100, 119, -43, -57, 120, 0, 100, 8, 36, 49, 42, 62, -57, -65, 117, -17, 90, 84, -45, -107, -92, -61, 41, -62, 115, 125, 80, -22, 54, -111, 89, 76, -7, 81, 59, 66, 115, -18, 26, -38, 122, -90, -49, -9, 125, -66, 37, 49, -27, 46, -102, 117};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.606512364977);
    msg.setSource(38835U);
    msg.setSourceEntity(134U);
    msg.setDestination(49460U);
    msg.setDestinationEntity(190U);
    msg.req_id = 57914U;
    msg.comm_mean = 196U;
    msg.destination.assign("DEJIAHNQKMIAGPSYDAJAVITLIOBQIKFDVXZWKTENYNULNSVMJXUKJMPTNEU");
    msg.deadline = 0.257371433594;
    msg.range = 0.819232932381;
    msg.data_mode = 91U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 20548U;
    tmp_msg_0.name.assign("FHDULTTGEJSXWHEWUCNYVYSOEUOLZGLYVRDSRACMNZPOYRCEPWQGJFMDDBIATBHKTEELJJHMQBITPWKKGZYEZTVSMIJYOOMIWEXWHCBGUIYDIXJNXQYQOLTHQFUROFKGBDNSSBXUHIPZRQDAPFKBJUPWNAPTBAHMSXPONBCCKXNAAGFVZRSFXHAUXALBAQDROILLQNZOEUSWYJGSVZPGIFYKWZVKMGJCPMCUTV");
    tmp_msg_0.custom.assign("NBUCSLXPDIFGZCURHLDOAVVQXWFDBHEMASVOBKJWGEKVJUGEFZPWMRQVFJEOQWFO");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("KRWXKONYIHUHPWATHTJFZTFZNUOLARUXYEKFMVAFATWUYSUSVRFMZGMVBPQIZSOCSFNQMXZBRCXDXSGJMBF");
    const char tmp_msg_1[] = {38, -124, -45, -62, -93, 104, 30, -26, -49, 25, 73, -82, -100, -21, 58, -55, -41, -94, 37, -5, -103, 103, 112, -24};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.952533865425);
    msg.setSource(105U);
    msg.setSourceEntity(142U);
    msg.setDestination(6642U);
    msg.setDestinationEntity(132U);
    msg.req_id = 39797U;
    msg.status = 235U;
    msg.range = 0.20818980064;
    msg.info.assign("ZZDWOOCZIDZSPMGBLQFSQMRDVOTDAVRTHFEUOHUAWYAXNKJRWNZEEGMASSSLFQFCUINBPFRUKNJXBBHHHMQVODRJCKJBBNXRCBKEFRECTKVNLMAKAKIKGDIWCWHTBMMFGYMHYQQAZYGNGQYXGVDELYSATDIEOWYVTGWBBJGSLNTLLQSUJXXFJZJHATWFEURUAWPYHCTIOVOSPIINJVJMPPUZUCZLXXSFKWLZPVLIQDEGPUX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.393662959322);
    msg.setSource(14022U);
    msg.setSourceEntity(100U);
    msg.setDestination(4852U);
    msg.setDestinationEntity(5U);
    msg.req_id = 58976U;
    msg.status = 93U;
    msg.range = 0.419458268551;
    msg.info.assign("RIKZQNZLADTYDVGWIXYXOMHOMUTZBSUSLFGGFROSNWJFKKDJTQIUYCEREDVHNVCVJWNYXQYLGQAMOCDFZVVVRIFMFITGAPRKSAUOZWPUPACQKSJPWJODGYMWGBFISVDMGENWEUACCPNUFJBPDHWMECLFMJLCLFENALKTEEIRTOTOXHXQNGXPZYLOBNT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.250371040802);
    msg.setSource(30113U);
    msg.setSourceEntity(3U);
    msg.setDestination(45316U);
    msg.setDestinationEntity(46U);
    msg.req_id = 45818U;
    msg.status = 89U;
    msg.range = 0.20495676128;
    msg.info.assign("WYDZFEUXWVVFOMPDBEZJSVEUTNHERAGIRZJXQCOFHNCRXOMPQFJDGRLOANSJLDFBWWIUIKNUXBGNAYPDXTUAZBPRNNQBMZAHZFSCHYGGWYVXQMDTTMFOBKPCKJHMZYNACLWWTVXKBWVGIEDARVHVLCMISPOPHEFLLEGSLDOYIOSITGXKUWOHRDQXQCUVMCKHPLMSIAZQTRQGSWYNUKLJJYKVGUKRJPAJZDCBCXMPBRQFEUESZT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.639469381339);
    msg.setSource(6926U);
    msg.setSourceEntity(242U);
    msg.setDestination(55657U);
    msg.setDestinationEntity(166U);
    msg.req_id = 57281U;
    msg.destination.assign("XBXWFXLDLKPDDNIGDSFZZZYUCEVSLCNCSTKQCNMZNBVGTRJJAIQMKDTWABNVJVYDMPAMUBGXGZTNRHQVUEYUCWZUJBKLSFKOROILEYBKJGHGKMHRFQZRZUOLMTOVTROMCDHWCKYCEMIFSPWFZGXPSWVQYPQTUFAFYOYRSIRKXHLTXVECDPDSKXJBPGAXBNOYPOIBUOAATAVMHITLRUVNWNMDEGPHAZQFWJCJGIW");
    msg.timeout = 0.54242791018;
    msg.sms_text.assign("WQLFGAOCIDUPCAHJGVRQGLHKXQJCSNPGFXBOQSWHKCXNDOLVQRNECHCDXJACCLUAPOJPPHKGQJPSEUAMPZKVKBQVXEECFVMVYDRCOETPFWKZJAJZYZWYIOVKNRZTNWTMLNQGTDLUXIJSZESKVSEIBRFWMUBTEMLTTTSRAGFYWISIHAXGXBJQH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.405695213357);
    msg.setSource(37479U);
    msg.setSourceEntity(186U);
    msg.setDestination(31019U);
    msg.setDestinationEntity(144U);
    msg.req_id = 2498U;
    msg.destination.assign("NPRTXIBZYFEIIGGTELHBWOASAYHJLPETZIDPAOLDGWNVKPRWPRILOSIJDGNVKMICVOFRQNXDFZBNSUQAHHUSRIOPVXMWUUUWBQJZMSJSBZJCQBXCOSHPLBRUKXMFSJCGXLPWMTFLA");
    msg.timeout = 0.592819160675;
    msg.sms_text.assign("NAYOVXGBYGIPNNERUDYBRWQATHCSDBIBPXKAFZKRMAYCXUGPOHLLSMPZJOUZLTFYTHDLLSDUILVWFYZSNTRSDXKJUTQKTKFVTAWSVLMJHGRVFWCKTNSYSRMWQFMJXCPGQZOUUVFECIZYHTGINDAZPZORMVDUFSOPHQOOMXDMZXXIEEJPLQACWBTIVEQJIWKBFGPOIACBEWK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.146963775015);
    msg.setSource(5457U);
    msg.setSourceEntity(70U);
    msg.setDestination(40501U);
    msg.setDestinationEntity(133U);
    msg.req_id = 6574U;
    msg.destination.assign("PYQQHDXJMPTAETNUWNZONOQFGXVR");
    msg.timeout = 0.300280408281;
    msg.sms_text.assign("JWEBCYFBJIFEQWYXAQYKKVOHNRDNWXDXJVQGJGIDPBODSESSPRGXKRYWGAHRZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.70390125185);
    msg.setSource(26527U);
    msg.setSourceEntity(145U);
    msg.setDestination(13922U);
    msg.setDestinationEntity(83U);
    msg.req_id = 57697U;
    msg.status = 229U;
    msg.info.assign("ZALYTOVSMVOAEWVELHWRTQCBPNYQWNLNHEPAPYTSIUSEILZONGTZGDKGAPHKLLDZTPAXCSJHMERNACUBBYKUZYAQBXDKDOJWKCHJGPQUVAMCXMDVMDVLGFUFGCESIUIRDBOFZWUSMRDXCYJQQAEFCEFUTZJWJQMHGRXHNIFBIONNGFYBOBKZKWQMSHPKFSJTE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.9141610387);
    msg.setSource(6407U);
    msg.setSourceEntity(6U);
    msg.setDestination(23416U);
    msg.setDestinationEntity(5U);
    msg.req_id = 65298U;
    msg.status = 144U;
    msg.info.assign("XPVHTLLZRLGJBEWRQGFFJTXOTHQLUHCNZHADTCCKNYOFDYNSWDJTURPAVVXARLSKQBGLYKWIEEIHQCUPGCPMAYNPEMNODON");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.847833566955);
    msg.setSource(40955U);
    msg.setSourceEntity(205U);
    msg.setDestination(35334U);
    msg.setDestinationEntity(217U);
    msg.req_id = 48207U;
    msg.status = 129U;
    msg.info.assign("PUWEZKWGDMUXFVCFYVDVHWJXIAIWYNOPYEAYMOEDAINJDSTJZRCVUWYCTAKESQTRVEJMLCPBJWZOIDIFGSHGWMRQNUKQPAUMIXLNLKKZLTLRXOKJCUWEXFUOHBNSSJNVLBSDJGIGQDWOLYZYHNSUCSAOIECVZFTMXTPZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.94097261887);
    msg.setSource(46593U);
    msg.setSourceEntity(176U);
    msg.setDestination(37606U);
    msg.setDestinationEntity(185U);
    msg.state = 244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.955809923631);
    msg.setSource(45270U);
    msg.setSourceEntity(82U);
    msg.setDestination(50658U);
    msg.setDestinationEntity(58U);
    msg.state = 204U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.822156521649);
    msg.setSource(48343U);
    msg.setSourceEntity(3U);
    msg.setDestination(49636U);
    msg.setDestinationEntity(126U);
    msg.state = 204U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.115650954828);
    msg.setSource(3574U);
    msg.setSourceEntity(194U);
    msg.setDestination(51759U);
    msg.setDestinationEntity(85U);
    msg.state = 105U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.094450540143);
    msg.setSource(7365U);
    msg.setSourceEntity(88U);
    msg.setDestination(4294U);
    msg.setDestinationEntity(146U);
    msg.state = 170U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.396585015113);
    msg.setSource(23992U);
    msg.setSourceEntity(225U);
    msg.setDestination(63289U);
    msg.setDestinationEntity(211U);
    msg.state = 183U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.447333837602);
    msg.setSource(25032U);
    msg.setSourceEntity(253U);
    msg.setDestination(1750U);
    msg.setDestinationEntity(158U);
    msg.req_id = 43102U;
    msg.destination.assign("XIDFRVOHRKYPFUXUTGTBNPIROGTGUZTHRQAWPVELGMGEDOBNQKCVBBJYJOLNBHALACKKYPWWNTJDCQDQANIDM");
    msg.timeout = 0.0884742657089;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DNTBKNTEBSFJGFPGAFUCENZLZLDTNXXYHXPEUMMOJKUXBPPRFVIYXTUCUVJZDJJWACSG");
    tmp_msg_0.lat = 0.916503013355;
    tmp_msg_0.lon = 0.613753150029;
    tmp_msg_0.depth = 0.58037828989;
    tmp_msg_0.query_channel = 178U;
    tmp_msg_0.reply_channel = 141U;
    tmp_msg_0.transponder_delay = 135U;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.921711155226);
    msg.setSource(55056U);
    msg.setSourceEntity(173U);
    msg.setDestination(57831U);
    msg.setDestinationEntity(94U);
    msg.req_id = 37256U;
    msg.destination.assign("CXGPEXEOWHGGXIIGUXJYPTXTRSF");
    msg.timeout = 0.437014678131;
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.542596395236;
    tmp_msg_0.speed = 0.973094032222;
    tmp_msg_0.turbulence = 0.1551943353;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.98740862288);
    msg.setSource(37748U);
    msg.setSourceEntity(28U);
    msg.setDestination(47173U);
    msg.setDestinationEntity(41U);
    msg.req_id = 45548U;
    msg.destination.assign("BHABXZWSIJWLRINUPXKRIEKFODQXAKJMBJXUTNZLTKGJUZRBGSHDBUWUKPRPGQJNTQKXHXOHZMSTAXGUFBFKOQLDICUFCWNMMPDQKKDYWWPRB");
    msg.timeout = 0.875368506693;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.754311644317;
    tmp_msg_0.lon = 0.491640002011;
    tmp_msg_0.alt = 0.370574560908;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.371683089275);
    msg.setSource(14478U);
    msg.setSourceEntity(180U);
    msg.setDestination(59526U);
    msg.setDestinationEntity(58U);
    msg.req_id = 16689U;
    msg.status = 110U;
    msg.info.assign("PCLISSNIUADCEKNHDNPAUIKVFNHXALPJAOUTDFRKYNSIDIOZRWUXWBBZWGBYCQMKGZVSALEFSSQPEPBVVIJHVOXYRRHCGTJUZDXTGZAWHXPWZRKGMTMJQIQCQJIQTTHELYSRPTSYFJMGPKWDFHRZXMCOTLFBCR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.30844591962);
    msg.setSource(31105U);
    msg.setSourceEntity(47U);
    msg.setDestination(26876U);
    msg.setDestinationEntity(105U);
    msg.req_id = 35069U;
    msg.status = 238U;
    msg.info.assign("KUHPBVVQFBGTMYNMXUGDBAYLERWOEXSXFLWSQNWYREYNOTBZJSRNBGQXOSRAESQDKOHJRFCSPQGDLEFIKM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.620624270941);
    msg.setSource(46169U);
    msg.setSourceEntity(41U);
    msg.setDestination(22372U);
    msg.setDestinationEntity(250U);
    msg.req_id = 9367U;
    msg.status = 193U;
    msg.info.assign("KZPRYDGNMFCSOKAK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.338787917031);
    msg.setSource(22487U);
    msg.setSourceEntity(200U);
    msg.setDestination(53188U);
    msg.setDestinationEntity(180U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.309238859598);
    msg.setSource(19984U);
    msg.setSourceEntity(48U);
    msg.setDestination(64094U);
    msg.setDestinationEntity(131U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.220092569582);
    msg.setSource(49967U);
    msg.setSourceEntity(29U);
    msg.setDestination(63079U);
    msg.setDestinationEntity(124U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.263317663264);
    msg.setSource(61310U);
    msg.setSourceEntity(185U);
    msg.setDestination(45344U);
    msg.setDestinationEntity(54U);
    msg.plan_id.assign("HQVZQMPLQTGIAXENNSWRIAOXAJKJBPYCFTWMCVRPCYBTBRZJIDRYOYSGLFQVYCKWOTKZJSNZNGKYZGFFAUISMOUDKJW");
    msg.description.assign("OIHFIXOLOHGPPIEIIHFQGBTIKQEEXAVMSAMZFRPMFWPXXEHZUSZEQNHYHJBLMUXLBGOKMCPSTCZDRJCDWWSIURJGIPKBLWHYLQNVAUHYCGXUARTEUDWWYDVHBUWDNTGAEDNDBGYRLZSVTJZVNIDZACRCUWNQKLBFRXGTMYCABBYUUSCMPAJHOWJMGYGJQAXQFOIRKLNZVZWDYEFPF");
    msg.vnamespace.assign("XKWGNQGCGL");
    msg.start_man_id.assign("NGDJHDYXKVXGRJPJGENDJHYVPZSMJMKLYQSHYEVHTIXLMRLKRAILZUGAFPWKTAZPQUTRDOTZSBIJONUVPEPTKVJWRAMSFHLEQYZQBZLYUDDXWQOOHJCWCOCTMRRSEDVIIDBGBLGNABXCEWHBCCNOLZWAIFUWHWTMRZ");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("TBOQUEHJIUBIFSIJPFQKVBAKJFZUYNDDDKECDALAWCUXGDXVANNYSJIYSPRMWHWOGUHCNLEWTKQIDWJXXPZIBJXRS");
    tmp_msg_0.dest_man.assign("DELPJTSEZYBFPAGLFDVNPDYIUYWPAGFFRRJQBWWENXBXJWZLNOHCHCCLSWAIOXPFUDGYVBSHETTVXQGSLLRJVOIRKGMWBSIMZYISECDZAQLKQHIBWUVQUTCYQNNHEGXHOVXIOYSYIMZCRFQTALEQOMTTJRBMNEADGDBZCJPMEMZTUFMLPJZPTHHCAORKIRZNUXHCXDBSZKAKRDSJXQWXUCMHKKOTJMAKFJURKDUENGUVSGIOKQABWPGPLVN");
    tmp_msg_0.conditions.assign("JXVNUANQGYHQZVCQNBMNIBOLPNTUYLNQREIPKAIOEMWTWBVIPSAWMFULPXDAIPRUSUIOIDWANYTETMAEASWHDVGDCFYRMGVSWMLYKXENJ");
    IMC::UASimulation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 237U;
    tmp_tmp_msg_0_0.speed = 31690U;
    const char tmp_tmp_tmp_msg_0_0_0[] = {18, -86, 61, 75, -118, -46, -20, 31, -26, -3, -91, -72, 86, -109, 100, 38, 106, -57, -2, -37, -56, 97, 58, 125, 29, 82, -8, -126, 94, 10, -76, -36, 119, -64, 115, 83, 92, -6, -88, 74, 84, 37, 83, 67, 1, 108, 93, 14, 93, -16, 100, 7, 3, 89, 70, -83, -104, -27, -9, 111, -22, -120, -62, 41, 106, 67, -25, -117, -33, -4, -21, 40, 0, 30, 92, -67, -108, 50, -70, -59, -68, 87, 122, 26, -107, 114, -15, -7, -96, 31, 25, -127, -70, 41, 77, -77, 53, 102, 71, -52, 39, 33, -102, -90, -18, -127, 115, 62, 101, -75, -99, -92, -119, -115, -8, 21, -54, 22, 76, -55, -79, -113, 117, -43, 41, 94, 45, 37, -83, 78, 57, -124, -56, -38, 102, 125, 78, -92, 2, -99, -92, 28, 67, 33, -4, 7, 11, 4, -58, 39, 24, 42, -15, -114, -91, 16, -121, -89, 45, 86, 91, 65, 28, -102, 126, -64, -28, 35, 110, -11, -93, -92, 75, -46, 14, 96};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::UASimulation tmp_msg_1;
    tmp_msg_1.type = 182U;
    tmp_msg_1.speed = 47549U;
    const char tmp_tmp_msg_1_0[] = {33, -3, -29, 45, 67, -89, 108, 53, 109, -15, -98, 66, 20, 117, 11, 36, -88, -122, 73, -47, -57, 118, -26, -99, -8, -84, -88, 54, 85, 3, -17};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.168931170914);
    msg.setSource(41879U);
    msg.setSourceEntity(216U);
    msg.setDestination(28970U);
    msg.setDestinationEntity(243U);
    msg.plan_id.assign("JBLPOFTVTKBACFMMATBCWTON");
    msg.description.assign("ISJVMKVVCRVYVZSMJEVHBEEQPKFMRXDIOPNGWEMBUNDLCQYTXFMAXPHAEPCVTOJMDOABKWGUQFREGUPMLJZAYVRZEUIADHXKLZSZDDSQHNWGXWULLFYXFKWLJTDBSRAUAHXAOHKGYVBFBPSXOQNFDTYYRITKYFOWZUCZIZMNIGAITCEESJONCXNHLNHWMCJP");
    msg.vnamespace.assign("RRUIIEQJADAPWJQHJJCCORLWBQCGSXBSPUOPHLINLQOXBCGPBTZNUXONHNHDTMRLEKFQVFDAXYJGEVSCFXPYZQTJVNLAWGSFQEYNZEPAHSIROEDG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("NESWJYYFLXQHLFZLYCMIVRFQNPQRRPATNARHIOAIDVSFUKUTX");
    tmp_msg_0.value.assign("MGYEUPWOOTQWVBSUDNLYJRMVJYLULJDORCHTYMNH");
    tmp_msg_0.type = 71U;
    tmp_msg_0.access = 244U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JJAJRFSKXTZSZTPLLLTHGKAHZAGQYCUUIIGOLXEOVIFVZXVQEQWNBVIBKEHOEIGUKRVM");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("AUZWKUVKIRDSLJWAYYLFUJMRFVAKBRQJBFDNPLEPSNKGOVSMBYLMUHTAHLFMBHXTTCWJRCOFIJYYZTNIILXOOZYDPRXMXRGPUZMOASKXVHEBZBKOPWQAYQWIOGUSCZYNDGIHJASULGGRHFCESTEFUNWAKVBZRZVDPOVHTDCTHJIFEVNXNSQUQJSZLCQOGWMQTEPWHAJMELMWMKUQWRRFZG");
    IMC::StationKeepingExtended tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.0962670379947;
    tmp_tmp_msg_1_0.lon = 0.115929427011;
    tmp_tmp_msg_1_0.z = 0.356587898207;
    tmp_tmp_msg_1_0.z_units = 22U;
    tmp_tmp_msg_1_0.radius = 0.715148749029;
    tmp_tmp_msg_1_0.duration = 34552U;
    tmp_tmp_msg_1_0.speed = 0.608790668534;
    tmp_tmp_msg_1_0.speed_units = 105U;
    tmp_tmp_msg_1_0.popup_period = 8323U;
    tmp_tmp_msg_1_0.popup_duration = 56535U;
    tmp_tmp_msg_1_0.flags = 48U;
    tmp_tmp_msg_1_0.custom.assign("ZUQSUXALTUNORHIMBRKBGRZNDDNZIQUODJCFTJFZGFOMPIZVSUCYDCXGEEYEAOFNRIWTRSJUHAIXZKHHRPJCWAXDWETUGNIKVVQYOQPOBBGYFPWXYWDLLZBTGFEIASLKNXEAVIXQKJHLDXCAKTFKEDQZRMWTRZJGPBRAPQTELMLYGHVSAJYPMMPEQYGLMCXJSBNYNQCAVBEUHSPWDHVNUISOXSUHVZWOYCHPKOJIDL");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Dislodge tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.timeout = 27256U;
    tmp_tmp_msg_1_1.rpm = 0.00725050100459;
    tmp_tmp_msg_1_1.direction = 97U;
    tmp_tmp_msg_1_1.custom.assign("JNWGKFWLGFSNE");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::TransmissionRequest tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.req_id = 51593U;
    tmp_tmp_msg_1_2.comm_mean = 138U;
    tmp_tmp_msg_1_2.destination.assign("NILWGVOXCDLYOBXGVDSLJDQCSISYQXEDEPWMEHMJKTRODBCYYGUIFHCZHEUKUJCTTPTNNTN");
    tmp_tmp_msg_1_2.deadline = 0.234629202101;
    tmp_tmp_msg_1_2.range = 0.0436220968211;
    tmp_tmp_msg_1_2.data_mode = 194U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_1_2_0;
    tmp_tmp_tmp_msg_1_2_0.x = 0.454612584219;
    tmp_tmp_tmp_msg_1_2_0.y = 0.482299705767;
    tmp_tmp_tmp_msg_1_2_0.z = 0.845064109261;
    tmp_tmp_tmp_msg_1_2_0.t = 0.724159830652;
    tmp_tmp_msg_1_2.msg_data.set(tmp_tmp_tmp_msg_1_2_0);
    tmp_tmp_msg_1_2.txt_data.assign("HTZJUXAKTXYVOPJYISEZUDYRPKLMTFANRONGXMWZZPIDLONLYBGVOCQFMZBKU");
    const char tmp_tmp_tmp_msg_1_2_1[] = {-121, -31, -125, -98, 97, 26, 124, 55, -85, 18, -73, 107, -23, -125, -124, 19, -101, -41, -121, -85, -85, -109, 101, -64, 71, -117, -34, -99, -20, -52, -41, -53, 126, 119, 122, 61, -55, -65, 75, -37, 44, 105, -17, 95, -25, 98, -67, -72, -67, 79, -44, -79, 118, 36, -84, 67, 75, -21, 92, 98, -53, -77, 11, -95, -47, -38, 55, 90, -96, 51, 104, -92, -55, -36, 95, -105, 114, 35, -7, -47, 14, 102, 70, 46, -116, -110, 16, -13, 117, -119, -52, -49, 54, -71};
    tmp_tmp_msg_1_2.raw_data.assign(tmp_tmp_tmp_msg_1_2_1, tmp_tmp_tmp_msg_1_2_1 + sizeof(tmp_tmp_tmp_msg_1_2_1));
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("SUUSKQTPPCQIZTBUVMTPQKQOXLGUKYISTXDOLIZ");
    tmp_msg_2.dest_man.assign("FYVSIVZZUPUBSIKWPTOLLEHXMCGNUCXNTVYREHXZPSCWPDDQXVZTOJRDTXGFDXKNNMZFCMDGRVAEAEYVQTJBSSBUWWALQFGIVLKMYRAFHCZBPOJAXITNDWLESXWQDLTSEBNWRMRYOQVFAFPIYQHCRFSMGHEJNWRJRKDTBLIYNSQZKMGXHASZKOCUJIUQY");
    tmp_msg_2.conditions.assign("EBOIBNDANNXSDQZQMRMYOULETZZZAVPVPUMSMXJWARENBJPCRDMUKDRQVSTHHCIZVVJFLYWZYZDLUYYYMBYTFHFPLXTGJWRWRKIAXQMICBLKKTQFXIOLOJEAQPOEKSHJWNLJSICBEDCJLMVWJBVOFLEPXICGERZUHHTBUBYOMSZXYGCOPKKSHWVDAGEUIWSHGIPRGXZNTECAPNG");
    IMC::TrexToken tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.timeline.assign("CFNSMXQYQOLHNNUPCDFYXKSSIZOACEUXJSAPMURURFUGQILPZVWKIBCZFJJEABAKNJOOZXXMFHMIMGLPVDRVJHMIIIQHCBKNJBZHTYEYGNCBKLKZMEVBAIPKWSGLDDTURJERKEBJDXVGZRAPFQOMONOQBWFCTOEXHALSPKDJGTWTWCGQTQISODLIHDEVCTMVLVA");
    tmp_tmp_msg_2_0.predicate.assign("FIMWPEWNJAHWCBXGMGUXPCHWRHKQMRJOJMEUNWQFNGXLZSPNKXCTLHGIZQQUKMVXABQXUSVBTJDXEWJDIONFADSYWPJSNIEGHGKRYIOOAUYOVELVLKBOCPEVGZHLOAFMZRCSYNF");
    IMC::TrexAttribute tmp_tmp_tmp_msg_2_0_0;
    tmp_tmp_tmp_msg_2_0_0.name.assign("LFMVTURHXVBDBYLIBCOCDVKJSADNVVGOZTLSLUYFWLHNXTWAESLNZJJORNXNA");
    tmp_tmp_tmp_msg_2_0_0.attr_type = 24U;
    tmp_tmp_tmp_msg_2_0_0.min.assign("XGJASYZTHAOKRGKEPSMDRHOIQAYBKIQQEKLAGWLQCCGXBURXSVGXHUFACUJMODLABVCFNWZSJRHUSMDEVLOVPDCEMGOMFEYNHIQMCJUPKTTWBIHXSJFWZYLRPJHPKDNRRMAYTCOVTLVGBGKAQNZPEZEVKEDHZXBGDWWDENYPL");
    tmp_tmp_tmp_msg_2_0_0.max.assign("GAYCCNDDHFVDFHESPOTBVPGZQLKBERNJBMISBXGBDIRCKWTMSKSLFONDCXIXJWZVZRGRNMYMJWQFJXAUPUFZO");
    tmp_tmp_msg_2_0.attributes.push_back(tmp_tmp_tmp_msg_2_0_0);
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::FormCtrlParam tmp_msg_3;
    tmp_msg_3.action = 188U;
    tmp_msg_3.longain = 0.022236352492;
    tmp_msg_3.latgain = 0.453240653804;
    tmp_msg_3.bondthick = 1943470350U;
    tmp_msg_3.leadgain = 0.0611213173599;
    tmp_msg_3.deconflgain = 0.36322779695;
    msg.start_actions.push_back(tmp_msg_3);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.636243833591);
    msg.setSource(52007U);
    msg.setSourceEntity(129U);
    msg.setDestination(47515U);
    msg.setDestinationEntity(138U);
    msg.plan_id.assign("PIAQGBDTCASHGBJWMJHBSIWVWIXENWJNMFVGLFXSSXGPQQIMMRZLSETKYQOGTNKSDGHRLRYHTYCFNJ");
    msg.description.assign("UJWYMNXRYAYKPC");
    msg.vnamespace.assign("VCYIMGTEYLVHFIMCANQMOBIAREEGBPEFQILYHOWSAFXDRTTLFKKWGNXPATXSHPZYCJXCVDQXNPIJKLYHNNWGWKMUNKNIYWUDDRYQSQPCBZUUVJCPJWEMOAJVRCJZNOJZTZZOXPUJYZAGHMBZVBBDNVKUFKFEH");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CVSXBAGHQZWUQBQVXNNYSMFLSNXLPSIYVBMMHTPBYGVHNZBTDWJOTYBQZYZCBKFJVDI");
    tmp_msg_0.value.assign("GKVOZQSUNRAGDRZTNRVVILLMEMLZKBFYRQHNWIFOOZVPCUWFRPPMPHBSDMDHEUZRWQHQWIABZNCCSXOGAZCSGQKJJZIFDBBVCLYSDHLAQLNSYHPLUVVHBWKKWGQXXGEXIMMHCDKUAUMTXBAQLNPCDVFWNDCSPATAYMMIXBYKROXT");
    tmp_msg_0.type = 222U;
    tmp_msg_0.access = 89U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("YDZDCNJUQXIOZYMMMCWHOXZFPJQGHPLTTNEKQELIVKELRKDCCVFJBAWBKNPRGCEOIPRAKGNGBWNGVFTBDJKQIOLINQFFUCYJHJUAAVZSYKXORHRVQZZSXNOOFGQ");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("NWEAGNOJTVVKWSBHDBAZNQTFOYOQELCVYZMLGKIBSWBHRAIFWCYQMHLGSEPPCMINRGATUAMJIV");
    tmp_msg_1.dest_man.assign("OZSJACPFGVRWJZORJDXKHXZDDFPMVKVJUSUVKKWEWALTWYPAUQYOYOLCHDJQQWDIZLSUFMIOXAFKNHULIBCPSANKUQAKEBEUOSPLNJEFCPDYXZIFMFZTYSGMIYCH");
    tmp_msg_1.conditions.assign("PHCVYUBVOKSTOOPTTCAHCFCYEWXRBXZEDNOTFUISAOCWUALLMECGZADGHRJNQIVHGQTWELZBFAZFPRQYMVXBMJEDMRZHNXNJ");
    IMC::Pressure tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.286135084318;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.875330977462);
    msg.setSource(52933U);
    msg.setSourceEntity(180U);
    msg.setDestination(28320U);
    msg.setDestinationEntity(118U);
    msg.maneuver_id.assign("XKGCBSRDAZCKOTWHONUPDLGWFYALJWCIQWIDDZRROUFKNBOGKFUXRXFTGUKHVTPPUPQBXYTYJSRHVMHWSNJZJSIODCIULNKRLHXCJECOGAGXWQEASIAYRMYCWFRZQPTSPTEHFOURJDSCAOZYBTQUQPJMCVMMOJKYXBLDNGFCKZVPSNISYLLRJNQTQGTGZVUBWEBFZKLWKIIDDBZVMYAPI");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.727711085676;
    tmp_msg_0.lat = 0.00506519533314;
    tmp_msg_0.lon = 0.259103305344;
    tmp_msg_0.z = 0.272940968564;
    tmp_msg_0.z_units = 30U;
    tmp_msg_0.travel_z = 0.382484006679;
    tmp_msg_0.travel_z_units = 81U;
    tmp_msg_0.delayed = 57U;
    msg.data.set(tmp_msg_0);
    IMC::Dislodge tmp_msg_1;
    tmp_msg_1.timeout = 18786U;
    tmp_msg_1.rpm = 0.928555546165;
    tmp_msg_1.direction = 101U;
    tmp_msg_1.custom.assign("OFBDQHUCEWVKPQBUVRQNRIOWAJMHGVNRDHBGWFROZJIFTZIINSOGIXHVRKELZHXGXSJFQJDSMYATRKTYFPTYZLZVPGONAZDLDVXASKRPTJBYHNS");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::NavigationData tmp_msg_2;
    tmp_msg_2.bias_psi = 0.807614865081;
    tmp_msg_2.bias_r = 0.876574543778;
    tmp_msg_2.cog = 0.44818269722;
    tmp_msg_2.cyaw = 0.422567880879;
    tmp_msg_2.lbl_rej_level = 0.142109100443;
    tmp_msg_2.gps_rej_level = 0.20848860512;
    tmp_msg_2.custom_x = 0.528879720337;
    tmp_msg_2.custom_y = 0.628986936794;
    tmp_msg_2.custom_z = 0.839504678841;
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.170113135685);
    msg.setSource(2881U);
    msg.setSourceEntity(20U);
    msg.setDestination(5299U);
    msg.setDestinationEntity(36U);
    msg.maneuver_id.assign("OZLBRRJPQOERZEZHONRVRVVFDSFQTCEIWHFTBAIJELWXKHLLJLZVMPBYSXCOJSGPRDIWOFTPAQPFKLWJILXGDKZWWSHUTCCAUXOIKDUURPCTIIDQGECYMXEQYG");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 20413U;
    tmp_msg_0.lat = 0.29868588208;
    tmp_msg_0.lon = 0.604442763938;
    tmp_msg_0.z = 0.633934539942;
    tmp_msg_0.z_units = 113U;
    tmp_msg_0.speed = 0.508654294665;
    tmp_msg_0.speed_units = 187U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.802189194839;
    tmp_tmp_msg_0_0.y = 0.175707448895;
    tmp_tmp_msg_0_0.z = 0.959804744045;
    tmp_tmp_msg_0_0.t = 0.481331425863;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("AIAMFFNKACTZUVJHSIBNFQVSOGKXBEHRWYAHOMTDABXBPEKEK");
    msg.data.set(tmp_msg_0);
    IMC::ApmStatus tmp_msg_1;
    tmp_msg_1.severity = 171U;
    tmp_msg_1.text.assign("VHWUJNEFEKUSMPGMSCINUZAVZEMFSCEVTTVVXACTLSEUKOBTCPCZABRMOQABXKYUHFCGVPVIKHGDPLYLKIMBXKINDZOANZDLOBZXJXJMOPZJBYFPEBXKNRLDNCUIPRFZSNFUYAHTEETBXIHQGLQOMEACCVOLOFQRSMFTPJPGWTHXI");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::FollowPath tmp_msg_2;
    tmp_msg_2.timeout = 4507U;
    tmp_msg_2.lat = 0.601995599008;
    tmp_msg_2.lon = 0.458178498363;
    tmp_msg_2.z = 0.770222880058;
    tmp_msg_2.z_units = 94U;
    tmp_msg_2.speed = 0.672014173499;
    tmp_msg_2.speed_units = 61U;
    IMC::PathPoint tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.x = 0.989888594698;
    tmp_tmp_msg_2_0.y = 0.966114123647;
    tmp_tmp_msg_2_0.z = 0.701800407753;
    tmp_msg_2.points.push_back(tmp_tmp_msg_2_0);
    tmp_msg_2.custom.assign("GPIKYETLFEKOVOHAIHXHVWJNXUL");
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.348150395376);
    msg.setSource(46286U);
    msg.setSourceEntity(125U);
    msg.setDestination(48247U);
    msg.setDestinationEntity(251U);
    msg.maneuver_id.assign("ALUYNTOCWEAKXFDQIJNBVDEEOKSFPLVGCOAPTGOZOPDVSKAJUNCFQQIYRCTYMFIDACPQORKNUU");
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 21084U;
    tmp_msg_0.lat = 0.606072301802;
    tmp_msg_0.lon = 0.486507932089;
    tmp_msg_0.z = 0.164504260474;
    tmp_msg_0.z_units = 196U;
    tmp_msg_0.speed = 0.345663593403;
    tmp_msg_0.speed_units = 7U;
    tmp_msg_0.bearing = 0.496817472023;
    tmp_msg_0.width = 0.486709379546;
    tmp_msg_0.direction = 191U;
    tmp_msg_0.custom.assign("YJHEPEUKNEOBQIGCYIPWKLAXFHUHIDMCPQMKVEYRXGBHOVQCJGJWGHAJSUYVLWZVNXJLXCIONRQFOGCGRZIQZACNYODGPBTUFKBSFOLMMNUOCHAFRSMDIABWMKQSPZMQVSCZKXPDHJYIMFLYUVSQRHGBWWKODLUIVBTXBQ");
    msg.data.set(tmp_msg_0);
    IMC::TotalMagIntensity tmp_msg_1;
    tmp_msg_1.value = 0.830957372491;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::PlanGeneration tmp_msg_2;
    tmp_msg_2.cmd = 31U;
    tmp_msg_2.op = 100U;
    tmp_msg_2.plan_id.assign("JMRRVSRMUYMBSQFGFWLLWCSXEMANAXWVSUTALNEHGFYXHBZOZWKEVFMIHFQKYNESXJAZTXOXQWEICVWGSJDLAQYGJTIKXPQGSDFSDHUZOVVCDAIOFDPDPNRLTHKCKMJRYFURHJKMLJGRBGTOCTPUMXMMPIKJGNXABRPD");
    tmp_msg_2.params.assign("COGKODMCKSFYUJWTTIOPWQAJFHJQCJMHTABAHDZRMNXTJNXMLHVFBLPQURDRGSUVPVJCVBGDRHSINDOIHBBKJEVLCTMQINMYPZR");
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.546779622554);
    msg.setSource(36128U);
    msg.setSourceEntity(179U);
    msg.setDestination(35749U);
    msg.setDestinationEntity(48U);
    msg.source_man.assign("JUGUJWMVOIAIKKMWTVILWBZPLOWPTEAKCTTAGEQDJ");
    msg.dest_man.assign("OGTRLTVUDUBAOCFRMKVIQLATLXOOQJXRDVLGXMXNBSCFKBRMHOHHRBYOQEPEKQIDSAISFJFDKNWYJRTDKQODKYBNKUQWZBIGTZRYHPWSZYYYENZYVLCCVUGECDNZXWFCAUANMEHPIFBLSDLWEQQCSSPLNTUVIJPVZZVEBJGVIGZPRPAJFTFWJBUKXUXMMNWHSRCTGYLXHSWVWJYAMFQDXNUUIRBOAEADIIE");
    msg.conditions.assign("PJGYOCYQWEPKMNOVHCMUMOA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.864277791632);
    msg.setSource(46618U);
    msg.setSourceEntity(98U);
    msg.setDestination(39012U);
    msg.setDestinationEntity(130U);
    msg.source_man.assign("QAWHULCTAOKZQYJBIWUMPSHIADGYHDBORSDYITKHADXRVDTCKZVSTWRMEJQLOMKPSZUTCGWVOPTPZVQZBEJFCHAKVUUSMAFWXLAQFKRCEPNITXMUOVMFYPGPNLGFMUBDAIZMJEWLUGDTRNNYIQAQRKEZQVIXRLBT");
    msg.dest_man.assign("GYWQFBCOWKWFEAUWLRVCCTRACKJYPIYRENHUXSRDITXXZWHANSVZPRSWDYDECFHBJDFQHIKUSQJKCERKBHLTVVGPISFZFHITFUZGMXNFTQMIOPLCRUIGVLUVVDBTJPWEMRZSIOIGONTSXESGBAFJJMZUXCSPVPNTHBBGKQZUYAKLOZVOYWVLNXADOJPAYEI");
    msg.conditions.assign("QYZUMGVEVATSLKVYFWGPCAHHUKMRSFNYSOVNADZCDSGDFLWTCBGYNCGOPZYRRAKXPJIPQXSXEDUSTTSOYFFIONVJNLEMNJHRBIZDRLBOPJCKPEANMHQCATBRUXSSLQUDQHGWW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.300093051536);
    msg.setSource(60834U);
    msg.setSourceEntity(4U);
    msg.setDestination(55834U);
    msg.setDestinationEntity(59U);
    msg.source_man.assign("RKVPTRNBQHVWMIKRWRCJDRVWNKCJWAGHRUDLQWPSPCWBTNDYDOOZJMIFFLEUMB");
    msg.dest_man.assign("SRVPDOBRIYDJVSBBQTCBPRWHGGZCMWFZTXJQYSUXZZVWIWEODDJUWMUIDWOTICNYICDQMTAJLBYGFKMWAOCARUYXYTNXAKHWGEZKTQZULAMDHSXPGH");
    msg.conditions.assign("VKMHDJIWDCPSQPZKIQOWBRWOIUYSYZRFRBXONUXYPRARCBHVFRLFKMSHKBTXKZBUAGRTEHRVC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.0545437761137);
    msg.setSource(37439U);
    msg.setSourceEntity(158U);
    msg.setDestination(60755U);
    msg.setDestinationEntity(207U);
    msg.command = 179U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DOTZTDPMHBZJKYBCZVOBMTQWXQA");
    tmp_msg_0.description.assign("YZWNFDFOYWZCCNOOYDSJBTIRLQNQAUXSUWASBIXNGIBGPIMBJXPGFPVZRWMHAMGHMZKLRKGGILQBLKOSCCOEACFEFAYLVHBEATVKLMDVQZRDIBVQJYPGVRKAJNPMGOXYAOTYHVQKYCEKIUVKMHXVJXQJXHWZPODONUGRKWTWIECFDC");
    tmp_msg_0.vnamespace.assign("ORKNWXUWKLEDSUQNSTEXIXZMTTQDKOHIPGBJVNVEBHZRWXWWYVASOTIQZVLTXZSLIHWGLROVFPESCGMSBTCXIPNPMVZGAUNRBKLMARDE");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RYOJVEMEVSEXMTNPTCGGRTAZWJGLMYBUKGDGKAZELTCYCCXMUONMFPTWLURJHSDELWFSMWUYNFKGPFADNZLFCPCOPTKIJSUXAOMZSSWPLGJOXBAUNRGURIVNYBCTIBDMKQVPSMY");
    tmp_tmp_msg_0_0.value.assign("JJIPRNYSSHBANB");
    tmp_tmp_msg_0_0.type = 86U;
    tmp_tmp_msg_0_0.access = 149U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("PUNOTREHNAEWOGTRLPYFBZDCAJLYVZNQZTBQRHOBLOLIJHAAGIDHUMSSNCOVRPCKEEKVRXYPYAITDJMCWMCNNLGUUUKZFTKOWKYVDBSMSMJSLOKALQFCRGJGQKPWXUXZVVTWGEPYSSZRWIXIJMGMBUDHBZJZMPVXFEYXBNYXULEKVJCURCZTDSEPHDQYQNWYEBIFXWVIDWAPQFAAQEFILGTJRFVOWMSOHRPUJCTDNHGTKLXHHCQBMDFKXNO");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("VIDXXIYCVMCCGMNAXBMJROSLZPZLWWSISHGQYSCQFEDUUEJIXXRRLUPJZCRVFYUZEEADIUYFYOFVANZKFTHQIQLMMBWEOPXMPNFFJEUHBTDRZLNVUWVABASNGPZDTPOJXGHTXVCPNDWASWIPQXRMUMSYXKBSTNANGJBKCNKHQJDGOHLWOALGUPLHZJYTBBBTWGEVEFDWAEHKDKRRKK");
    IMC::Launch tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 8662U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.0657214618345;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.899466717389;
    tmp_tmp_tmp_msg_0_1_0.z = 0.0135207718365;
    tmp_tmp_tmp_msg_0_1_0.z_units = 10U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.180461994232;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 217U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("YJWCZWDYGMINZDUSBRNBVWOFLXSQPKIGYVGRMHKTLBBBOJIYCMRDBZEFPAQYDJMPVSTKKXKODBPHFFUYIUGEFTAIHSFEXEAGCHHHPJPXZHXGKAAGVLRRQRLNEWLAVCXSGUCQCLIJWMDZDXPDPQJMOZEGUFVMMIYJXEVKQ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.418973743623);
    msg.setSource(47900U);
    msg.setSourceEntity(156U);
    msg.setDestination(45453U);
    msg.setDestinationEntity(7U);
    msg.command = 68U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TAADVEHHAIVZPVJWYZSIQJMHRLDDSYFGZXPRMEOZIBFIMHSHLBXBGHHTBFOYDAFFMOKOKKSGNWXPLNCRPCMPIBWDSEKLFEPEEWVTRGUDJGWFAGTRWVBLOVVQYUJKQALL");
    tmp_msg_0.description.assign("MTJDZJUQVBRQNWKNOTHGTEXAPABFWMWSNRQOLIUABFUPZCRGIIAZDVZBIZKQYBJDLPFOVGSFEQXVBQLJITTDQKNFTHUWMGFSUYASKDNNWENDYGTWBVRMLLIAVIOWPZLPLCVCZXJPUDKKXHLBYINESVMSRMAXCRYAXOHUVKHORUQPCYUGLYJZZKMCEXQQCBIRVUXSWGWRGE");
    tmp_msg_0.vnamespace.assign("QRQEVKKJTVCIHQBDSAUWILQEFUYAOMKPRBTVROCAHUCTDVQEAQIDWBBXTYIZSSDHFRMAVGJKPOTYZCFESXDNNDITUYFOVMHGPLIMXEOBNHZOTHREGRXVZCFWDFUSKXGTONCUWOPFNKDLZYSFJJKBCESEMRJCKDXIYGJBWOMFQRMBNGHUYDMSBTHIUKZNEWFLVJLGQPNLLLWPXBVGSHGPZYPAYAJIOTAJRNPPCLZWSVIHMKEWXNZWGLC");
    tmp_msg_0.start_man_id.assign("KCUPRTBCVRSOTNJCDPTDSMZPEEVYTZQSAPJCXYYHHCXLMTRLENSQJKFDGGPQPKQWSPZFFGLCHWGFRWLLFOQASDKLIWQIBYEWIZYENMAOZNGSBEGBEMADVZDVIXMTBMQSJ");
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.6995267904);
    msg.setSource(45009U);
    msg.setSourceEntity(141U);
    msg.setDestination(39257U);
    msg.setDestinationEntity(73U);
    msg.command = 96U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RXTMPKDHIQQOQTBBGJYHHPJNUXCLDZHEWHNMNYKAVUGWRNDFOWPBHVJDTSSODZXKZJLANJRECBCWOIIIGWFTRQYQBVYYVFJLURFCOIHNXQUSEYFGASUMHPFFHWREWCEAAGNGLZKRJZZPNSWXQL");
    tmp_msg_0.description.assign("BQFYNMUEJTAJASETBWLNKBQALHPGQTHUSZDQFWIPQMBULPDVTAEMKLFKDYBAJRTSWYCFPMJJPCRBICDRGIOZWHLMJZWWSJAOYEHXUKPNCCDGMMLXBX");
    tmp_msg_0.vnamespace.assign("URAVAEUCLTGPTRLYJRMWOKMHGYFOJHSDYJJASEWRWTFQCQNWVBB");
    tmp_msg_0.start_man_id.assign("XSHQCKIHZYUWSWGKBPURDJIUKDFQXEBGNYLRGDMLGIQCYYVFTHWFFPKACZYPVOLADVXKJVFWELUXEWBNBFGZMJJTRTPNDHKXVTSAADBGDLMWYNKOLZXFENUIRIBBQJZAIJSJRSWJSDVBTILGTMRQNYMOECMOFTPK");
    IMC::MonitorEntityState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.command = 43U;
    tmp_tmp_msg_0_0.entities.assign("IYBYSKZBMFARUSZSWBLULXDLNJXEXTJCQZHOFRMVAETIBDGINZNZANBUOWATWVQVZURJDTGYIOMTQSBUUPZJDTPGCCQMUQMPTLFKKGLPJAKOHAYPGGNWDZXNFQKSGOXFLTXQIXVCEYVELOPLVMCFFCVQJBA");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    IMC::CompressedImage tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.frameid = 250U;
    const char tmp_tmp_tmp_msg_0_1_0[] = {-123, -9, -107, -117, -93, 92, 87, -58, 85, -103, 69, 81, 32, 45, -41, -36, 86, 116, 28, 80, 116, -90, -16, 57, -76, 4, 28, 19, 70, -112, 40, -94, -70, 58, 69, -89, -123, 125, 75, -66, 64, -34, -9, -116, 107, -96, -16, 8, -28, 56, -102, 3, -44, -32, -25, 11, 56, -42, 74, 12, 35, 52, -82, -19, 4, 47, 50, -66, 43, 118, 62, -82, -31, -81, 91, -96, 12, 48, 15, 47, 120, -104, -89, -1, -116, -44, -61, 10, -48, 3, 85, -107, -4, 36, 55, 59, -94, 46, -96, 95, 52, 94, -99, -93, -47, -22, -112, -103, 16, -56, 45, 73, 58, -57, -40, 81, 4, 82, -5, -63, 104, -4, 33, -67, -85, -33, -56, 92, 70, -85, -77, -8, -7, 92, 78, -45, -96, 29, -71, -27, -27, -82, 43, 66, 5, -101, 82, -123, -96, -57, -65, -8, -51, 100, -29, 125, 29, -82, 109, -96, -67, 100, 89, 19, 51, -37, -120, 17, -66, 18, -7, -32, -59, 46, -40, 8, 7, -21, 105, 95, 108, 60, 99, -66, -125, -122, -56, 22, -107, -45, -91, 66, 93, -70, 105, -81, 11, -1, 40, 90, 123, -102, -67, 92, 119, 70};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.773795114824);
    msg.setSource(50715U);
    msg.setSourceEntity(122U);
    msg.setDestination(31363U);
    msg.setDestinationEntity(218U);
    msg.state = 78U;
    msg.plan_id.assign("DTPZZJGCSVYXCVSHNBCSKFLCRKHDQQNPFBAHWQDGUZNRHTYIVNWSLNPDUFBOHLUHQXFBFIZEKOYYJSEBVGKZTGHMPAYXHTOFWEXJUMVRXJJQUCLONBJUW");
    msg.comm_level = 191U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.21224634303);
    msg.setSource(6881U);
    msg.setSourceEntity(178U);
    msg.setDestination(15300U);
    msg.setDestinationEntity(143U);
    msg.state = 141U;
    msg.plan_id.assign("APUQTTBRIAFXYQIVDSJZLCXOCPJKMSHPTRQRPRSSWEZTRLAAYLGUSNNJORLPCNBNQFLMYYGOQWHGIIHDVGJUIBRPFOSZQVBXTFRZSPEHFXEE");
    msg.comm_level = 96U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.853636377918);
    msg.setSource(33508U);
    msg.setSourceEntity(238U);
    msg.setDestination(64257U);
    msg.setDestinationEntity(121U);
    msg.state = 207U;
    msg.plan_id.assign("KFMFWNZSQISPQUNVRLRJFHTZPGOENXOEYXSLRADLLITBLCJGYOCZBTYZBHYCHYTIXQYJWWUVXMZMVIGQKYTBEVDNVGUZBXJPBOAIPJOGJSVYHETRBKQHKKOFCSMXPDUDPIKMEWGERHACQCPSVXAXGZRJVN");
    msg.comm_level = 21U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.0636666689112);
    msg.setSource(27673U);
    msg.setSourceEntity(217U);
    msg.setDestination(35354U);
    msg.setDestinationEntity(232U);
    msg.type = 78U;
    msg.op = 109U;
    msg.request_id = 5430U;
    msg.plan_id.assign("DHXDZFTKGFGXYDRIOOQBTRKUMOGQQHEBQTJUOFJJKTOEYYQXWOGSLCWERRYCOHWALQPDPSYYDUFLPKMVVYZBUBHBIZRSTDAILKVKOVMWKJEZWSZZJJUKIPMLBRVSTUWJWAO");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("KTWFTXUUJECMWHEHBLVBGXHSBFHSUFAPWQZBXVFYASCSVFRCKWKLCYKNCJMZYPNOHWITDVIDLRWKIBVIJDEMPQEFBFZUMSQYHEZIZGQQLGVDMHOVSUTGCTNBWDKMOKXLAGEYBRDLQWPZXGWNJZGHVSMLJRYCDYPMJLEAJVGEITXPJQCTQZAICDUUNPRROOX");
    IMC::FollowPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.target.assign("CPXDISYTHWDJSYFEWNCOXWSAGNCHVOEZWQERHRCMWTKPLFQAVJYYAKUGVKUBXLKOHDFDQRGDKUFOQVMIRNMBPISUZLJFUXZJMNNIVAFLSPICRMSRVBMJJUJZTFGRLQUSQXTYHSWYOESQAJY");
    tmp_tmp_msg_0_0.max_speed = 0.415322184348;
    tmp_tmp_msg_0_0.speed_units = 9U;
    tmp_tmp_msg_0_0.lat = 0.13675754535;
    tmp_tmp_msg_0_0.lon = 0.511071369303;
    tmp_tmp_msg_0_0.z = 0.182234414477;
    tmp_tmp_msg_0_0.z_units = 152U;
    tmp_tmp_msg_0_0.custom.assign("ZXGMVDQFNJLFHTSESNXKSKOESVRNAKYGEIFRQFPBYUZHMQWLDOOZQWTLPTRUZQYPKJWWGBAGQVAUDCNFPZKNMAXOLLHBOKUYHDVGRPZUOQTTBXTDICPVA");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::UsblPosition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.target = 37632U;
    tmp_tmp_msg_0_1.x = 0.00501348917067;
    tmp_tmp_msg_0_1.y = 0.114873898327;
    tmp_tmp_msg_0_1.z = 0.0811113880475;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::StopManeuver tmp_tmp_msg_0_2;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FFVHNMVORAIRUJCRHAGRDYLLGZIPSJRFHMGOPQZWESOWJPCNTURVNLDPIDUFBPALVEWEMHLCFDGWMLMLQHBVVOWSTWBDMCZSWSNCYDXNVSPZTCHGIUXQRTGKNJAOXRWABBUEIJOETQNMUPBGBCJHCIKYZSRJKEQAIWYYNTTDLPROFUBFHGLT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.562855426746);
    msg.setSource(45723U);
    msg.setSourceEntity(142U);
    msg.setDestination(7342U);
    msg.setDestinationEntity(209U);
    msg.type = 210U;
    msg.op = 154U;
    msg.request_id = 16782U;
    msg.plan_id.assign("IXNSTHNBYGTJOVEDATGSVFZMVRRWRQGXCWYVALHLEPBFCYLNKPFUVHHGBGIOOQAAJZNEZKYFYGOLCIJIQKPMCWUTPIW");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 32293U;
    tmp_msg_0.control_ent = 196U;
    tmp_msg_0.timeout = 0.365465749746;
    tmp_msg_0.loiter_radius = 0.850007136409;
    tmp_msg_0.altitude_interval = 0.464368111863;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JKVRNUSKUDEBIETQLWDYGTIEROUXSWHWAGLCGRASDRRPHWNLEHXRHUVFNAPK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.159251248024);
    msg.setSource(47074U);
    msg.setSourceEntity(58U);
    msg.setDestination(27402U);
    msg.setDestinationEntity(72U);
    msg.type = 201U;
    msg.op = 99U;
    msg.request_id = 33338U;
    msg.plan_id.assign("GEVIPLAYTRKTNNHNBWABMUFYRPXARSJESCQSHSSUDGFPJSJYRMQNZUOGLAKJIYROWXCVNABBUKMKEIOJAPIC");
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("XMLRUIQIUNDECRYXWLJNGCAEBLOOVFEKGKDXBTGJBFCVTHOCVDTTYAWFRCSMGUAWRVVURWRKVPSVCXYCZCRLQROKDNSDSPUMSWAEEUHEFFEHUZAOZPOIAGBVXKNIYNYUNXIBZIDLAPFMJQTQZNMZPTEMJBBHJQHLKSJAHISXEEGPGLYVNSBHKQPGUMQSJZOASYGOHQYHXOTMXDJWPFJTZZKBLRGLFLNA");
    const char tmp_tmp_msg_0_0[] = {76, 12, 88, -8, 86, 30, 60, -20, -66, 107, 71, 108, -116, -23, 112, 31, 63, 19, 100, 37, -6, -39, -74, -100, -62, -81, 22, 82, -91, -23, -30, 2, 42, -1, 95, 105, 1, 33, 81, 15, -121, -79, 5, -42, -45, -13, -26, 70, 94, 9, -94, -70, -120, -18, 74, -93, 15, -59, 1, -75, 70, 100, 47, 36, -115, -85, 91, 105, 107, -102, 2, 55, 93, 103, 113, -10, -60, -100, -29, -18, 36, -103, -119, -78, -72, 51, -38, -83, -80, 91, 72, -54, -16, -83, -51, 16, -35, -55, 123, 105, -73, 100, 39, -126, -4, -4, -49, 47, 82, 7, -120, -27, 99, -95, -56, 5, -44, 120, 109, 102, 29, 79, 115, -30, 24, -48, 57, -56, -30, 110, -94, 98, 82, 4, 63, 27, 42, 80, 60, 63, -27, -32, -107, -9, 79, 81, 23, -55, 78, -8, -54, 63, -106, -109, 58, 87, 66, -122, 62, 65, -120, -84, 75, 82, -89, -53, -7, 115, 18, 76, 48};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BQUXKACDYSVLSRJNZZKJBPCPDQFBOYTXRHIX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.531329754799);
    msg.setSource(10644U);
    msg.setSourceEntity(216U);
    msg.setDestination(24296U);
    msg.setDestinationEntity(166U);
    msg.plan_count = 34437U;
    msg.plan_size = 3115745852U;
    msg.change_time = 0.264278626108;
    msg.change_sid = 39218U;
    msg.change_sname.assign("DBLZZBQHHMHEUOUXFTXYUEXGJJGNGDXZUSAJTTFRCMCJAKKPGOVHPZADTWIIYPTMSWKVIFUNJBLOSRRYIGOKVYYSAVGVKDSPBQKZLJETRLCMSMIDQTGMBDUONZPQLEAJUPNNABCVWBZECYBVKFZKFLFBCRUASIRXQYJHLEGVKFQTOXQWWPX");
    const char tmp_msg_0[] = {-77, -107, -114, 126, 3, -84, -101, 62, -81, -13, -74, 122, -50, -84, 26, 66, -83, -127, -75, -122, 105, -53, 74, 90, 101, -25, -28, -92, 9, 33, 28, 107, 107, 120, 34, 65, -100, 109, 54, 55, 56, 89, -90, 30, 92, -93, 113, -81, -62, 67, -92, -80, 87, -90, 120, 107, 61, -40, -29, -20, 84, -60, 102, 124, 124, -3, -76, -81, -47, 109, 70, 107, -41, -41, 0, 32, -104, 82, -101, 97, 120, 124, 76, -12, 63, 41, 72, 126, -9, -32, -96, -3, -80, 87, 47, 77, -12, 19, -16, -49, 92, -17, 0, 6, -3, -60, 35, 118, 101, -47, -60, -118, -34, 14, -121, 91, -23, 119, -70, -51, 97, -92, -81, -32, -36, -87, 91, -104, 43, -124, -84, 46, 67, 125, -37, 72, -19, -92, 102, 60, -26, -65, 4, -4, 113, -34, -27, 92, 122, -108, 96, 105, -95, 23, 75, -70, -78, -5, 13, -99, 96, -56, -53, -2, 50, -80, 36};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("RMUZGCAWUHIYCJPFTYNXVRKTIGCNJBFUUKMIYJDQDNWSMUGAOOQEBPTPAHEXLZADMVCRBLSTMIXPOVEJIRDBPPLOQSNHESWPRUCXIYK");
    tmp_msg_1.plan_size = 49614U;
    tmp_msg_1.change_time = 0.0483014029171;
    tmp_msg_1.change_sid = 35442U;
    tmp_msg_1.change_sname.assign("RQEAOPPLYCVATUFORYCBJKTWONFPATFCVFHDDEDEFYPRIVZQOHUSGKHNWPA");
    const char tmp_tmp_msg_1_0[] = {17, 114, -25, 112, 65, -111, -10, -41, -22, -35, -119, -94, 52, -89, 110, -25, -72, 66, 74, 106, 65, -9, -82, -73, -71, -50, 94, 54, -85, 12, -79, 56, 51, 93, -105, -74, 28, -40, -40, -75, -89, 32, -127, 108, 109, -44, 7, 86, 89, 95, 18, -22, -87, 96, 125, -27, 97, 67, 85, 103, -21, -106, 64, -127, -55, 32, 115, 62, 30, -82, -50, 54, -94, -57, 37, 108, -101, 75, 48, -62, 89, -34, -31, -125, 40, 111, -25, -34, -64, 17, -115, -49, -88, 89, -110, 11, 121, -68, 40, -47, -102, -113, 4, 20, -41, 50, -53, -40, -13, 38, 1, 46, 59, 26, -56, -60, -49, 108, -88, 106, 76, -111};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.522429852541);
    msg.setSource(11492U);
    msg.setSourceEntity(33U);
    msg.setDestination(51154U);
    msg.setDestinationEntity(44U);
    msg.plan_count = 10961U;
    msg.plan_size = 1750490713U;
    msg.change_time = 0.430619382304;
    msg.change_sid = 4875U;
    msg.change_sname.assign("NINWUITYOBPYFBIGZAVXYMRDHPBLDJEOQMXUZLXLGKFJZLOZNRRMCVLASOVUREDSQRZEJZQVRCAFUSCPRYSZLMPWIKDJWCMASHQINHHDGLMUVLFBKUXTLQDTGCSBUBMZYOEAXOUIYNJGPCGDINNSGSENYFVPGRGRJPFKOCBWPNHSGKUQESTOBOECAVKNFDWLDHZVWABQYQMKEIXFVQETFIKWEDHX");
    const char tmp_msg_0[] = {58, 67, 96, -15, -67, 59, -56, 55, -24, 34, -37, -126, 35, 10, -65, -117, 99, 6, -77, -113, 123, 116, -76, 94, 69, 123, -53, -83, 34, -127, 33, -62, -25, 93, 107, -75, -68, -2, 6, 11, -100, -35, 48, -89, -56, 66, 82, -10};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.729211209188);
    msg.setSource(745U);
    msg.setSourceEntity(176U);
    msg.setDestination(13871U);
    msg.setDestinationEntity(107U);
    msg.plan_count = 30657U;
    msg.plan_size = 1427120066U;
    msg.change_time = 0.114445091422;
    msg.change_sid = 61776U;
    msg.change_sname.assign("DKYDZXWTKYCTLQEPDHKRAZZXIEBNTFOPEWFZAQYPMNAFRVEEQMZXEJSCQOYCUVJUSGVHBVRHNLLZGUHAMCCYMFBNNFSMRHSFOVLKXGGPJARMMPLTBQGVVUIDLIGWYAVEINHXZKLXXOWSCEHVJJXRWUIAWJZSIBYNTIWOQKKORQCYJBBFEZBKUTQIDBNWMN");
    const char tmp_msg_0[] = {111, 54, 81, -25, -48, -53, 53, 90, -87, -121, 2, -123, 112, -117, -23, 52, 35, 4, -53, 61, -21, 81, 88, 68, -23, -1, -105, 3, -16, -109, 0, 65, -3, 83, -31, 90, -45, 39, 17, 117, -112, 96, 83, 5, 123, 34, 7, -73, 52, -85, -88, 73, 46, 4, -15, 53, 58, -128, -22, -118, -100, -3, 62, 25, 54, -32, 16, 108, -3, 66, 58, 27, -15, -48, 91, -62, -65, 115, 40, -64, -96, 72, 41, -30, -24, 29, -88, 121, -31, -30, 19, 80, -86, 122, -119, 44, 112, -7, -115, 76, -68, 119, -11, -88, -23, 100, 57, 105, -36, -20, -55, -121, 112, 121, -119, -7, -116, 107, -20, 123, 123, 116};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("TDKBFSPTWZQIUQPSAJMHEEATVYLMOMYJVWNYBFRYDBEFKWJBTXDASYPUJWHVKMNNAIDZGXNIDACPVKWQUXLHYODMWOPRWMTHENQRHGCOSCXWOIVXEPIKCUJHDCSJFRRAGJPGHERKUQOKHNZBALAYKGWOJFRBWCGXU");
    tmp_msg_1.plan_size = 5439U;
    tmp_msg_1.change_time = 0.124858097947;
    tmp_msg_1.change_sid = 62446U;
    tmp_msg_1.change_sname.assign("JKEFBTIPZJEOHBWDCDQXUXYMYKPJEURMKLFOYAXPNGSEGHLRKHHHQKVOYNSQBUWCWLKMQWPDYETGORZADSCRCWERBXIBFXGGGNBSOEJIUXXSICVVWGDHOJDAFWGJCGFTTNACHZOJNUYTIJRTSCHYXBUHQU");
    const char tmp_tmp_msg_1_0[] = {86, 90, -42, -87, 83, 111, 120, -84, -8, 79, 26, -51, 115, -5, 102, 37, -78, -24, 17, -87, 60, -31, 2, -8, -59, 67, -68, 0, 7, 24, -27, -52, -66, -72, 105, -2, 111, -100, 126, 32, 48, -24, 6, 72, -5, -18, 46, -2, -40, -98, -83, 40, -17, -9, 110, 18, 62, 92, 68, -42, -66, -106, -68, -38, 82, 40, 90, -3, 86, 29, 47, 118, -60, 71, -69, 44, -56, -45, 68, 37, 86, 42, -1, -31, 18, -101, 121, -15, -17, -122, 10, 60, -101, -127, 38, -24, -108, 114, -28, 88, -120, -113, 54, -35, 111, 17, 91, -49, 44, -63, 24, -37, 90, 78, 70, 84};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.73916458813);
    msg.setSource(40394U);
    msg.setSourceEntity(0U);
    msg.setDestination(60811U);
    msg.setDestinationEntity(94U);
    msg.plan_id.assign("QFYHDYAZMEQIKKPCSOAYUNCUWEXXRNFUMVDGOZDSKALTARHYGOIQBSSQPQYAGZNJVXGZSCNIFSLPIYMVGMWGYFMCAFEH");
    msg.plan_size = 41125U;
    msg.change_time = 0.0652323959544;
    msg.change_sid = 8767U;
    msg.change_sname.assign("YIPDZINLFBUMKJNEPBOVAFMYRIYHEFIIGUMGDPYFUNBDQWZFRSMEKDPAFLVNNKRCFRAOWSQFOGOJSQTEUHWBSMBSYHVEMDQXYHVCVPIGRZGSZAAYXJZJLCPRIQTITAREVUHSMKLDDNKQMQGHCZKAZTFZXIOEBNAZCLJUTLYHRCHGXOOWXHYDXXCUVBPQLFJVTPQWKNGEXTKJVDRJACTUTBZNGALWWDVILPUMBLMROXXHCPKCJTWO");
    const char tmp_msg_0[] = {111, -92, -104, -46, 82, 104, 74, 7, 53, -8, -79, -20, 83, -3, -50, 88, -22, 77, 8, 35, 50, -50, -98, -117, -98, 68, -16, 24, -92, 105, 101, 115, 31, 90, -60};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.396548753914);
    msg.setSource(20794U);
    msg.setSourceEntity(206U);
    msg.setDestination(44423U);
    msg.setDestinationEntity(149U);
    msg.plan_id.assign("HSBXIFFCPJSNDPCHXGRCWIPYLXMCNYCLQBMTNVUEZLHKJKBWMDXAGGBLAYNQMGZMTQWAPDZFJYOESVLXWNIFOHGRSV");
    msg.plan_size = 53759U;
    msg.change_time = 0.659596913042;
    msg.change_sid = 27118U;
    msg.change_sname.assign("FSANKFIEBGYDVMNPPQMOLKOIOFMPKTBEEAQGDHHSEXMFTEJHRAAZJZZOOYWKFWRAOHIUBHZMCDYIJCUJMTKHTFLOPLUMZRAVMCQFCKGNRSHJUUVUOPDXXCTJTGEGWQWCZRLXWPWE");
    const char tmp_msg_0[] = {53, 112, 116, -46, -121, 79, 81, -26, -15, 44, 69, -61, 71, 124, 77, -74, 106, 82, -82, -119, -78, -108, 14, -108, 1, 69, 45, 35, 30, 2, 16, 30, -110, 72, 83, -78, -57, 82, -76, -83, -65, 98, -75, 58, -102, -30, -36, -99, 33, -110, -64, 99, -4, 39, 53, 103, -105, 17, -15, -78, -124, -45, 2, 49, 54, -91, -36, 64, 48, -2, 121, 90, 110, 113, 111, -112, 112, 57, 56, 0, 118, -127, -76, -2, -67, -39, 2, -78, 105, -19, -46, -60, 70, 113, -76, -70, 13, 31, -26, -58, -18, -57, 40, 63, -115, 21, 41, -110, 121, -43, 49, -23, 121, -38, 95, 22, -80, 125, 43, 75, -79, 46, -37, -60, 81, -52, -96, -76, 21, -7, 53, -108, -122, -56, -89, 21, -6, -101, 126, 6, 13, -93, 40, 100, 120, -11, -97, 6, 8, -40, 116, -64, -13, 116, 72, 9, -27};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.0222463504312);
    msg.setSource(1558U);
    msg.setSourceEntity(154U);
    msg.setDestination(40095U);
    msg.setDestinationEntity(132U);
    msg.plan_id.assign("VKEEOBCXMUJJFKVXCDMAUZKZMWASIJWGOWKVDRCDEHFPYHFUZIXLXHTESFNKTZARNKGCHTEAIPUYFRNVQEWELRXTEXTWAKDRYFNTMAZXGDCJWBIGRGGCIXBZLPPBUYZRYMDLHKEOHZDCUBTQEXLDASGLQCZBWHNGQRGFPBPPJOMPMTJFOIIQGLKIUOOUSKNTVVSJMPPRQHLJJYUIQOBHVSQNXMFYWYWASDJUNNSAVS");
    msg.plan_size = 42644U;
    msg.change_time = 0.605231568757;
    msg.change_sid = 37288U;
    msg.change_sname.assign("CZUFFFXICOEDTFSJXWYVKDMAXYBYKWVDIPNKRXRUEDJWRKFHUQMHEFHPONNEJADTOMWKGJISXIKBGNVCSDCBVBQQYACVRCUVXOLIAMZACRQUOYFQARFJUGHMAMTZNXDSIOHQPPYIGYSOOBMBQWPSARPTPUKGRHTAWODRETVNBZLECULJPBXSQGPEJYZJKZDTQHLMBLKTTJONINVTXJWLPHFMYEIWEZSGENNZBKMWFSGLURZXZHL");
    const char tmp_msg_0[] = {-86, -15, 17, 8, 125, -68, -7, 90, -122, -56, -49, 126, 20, -19, 34, 79, 115, 7, 123, -11, 45, 126, 46, -79, -32, 51, -121, -45, -64, 123, -47, -43, -123, 94, 67, -1, -75, 37, 90, 58, 28, 103, 77, 55, 63, 116, -38, -117, 27, 22, 47, 112, 40, -75, 33, 46, -103, 7, -105, -128, 100, -1, -49, -50, 31, -94, 1, 62, 98, 48, 38, 123, 29, -112, 9, -64, -12, -120, 90, -69, 57, -101, -104, 23, -72, 20, 29, 17, -65, -107, 94, -3, 67, 118, 113, 38, 125, 99, -20, 63, -32, -44, -31, 63, -91, -12, -49, -56, -46, 99, 25, 110, -65, -126, -45, 99, -51, -72, -2, -105, -36, -51, 106, -92, 120, -17, -102, -108, 65, 5, 1, -76, -17, -76, -24, -50, -103, -15, 106, 40, -119, -124, 55, 18, 74, 46, -115, -73, 40, 11, 125, 36, -118, -77, -52, 114, 102, -114, 59, 50, -34, -112, -85, 15, -120, -58, -118, -35, 38, -27, 40, -12, 108, 85, 18, 78, 67, 48, -108, 59, 37, 98, -107, 120, -7, -8, -90, -21, 116, -83, -36, 63, 98, -41, -53, 44, -31, 116, 74, -31, -11, -18, -127, 54, 55, 48, 56, 15, 119, -54, -29, -101, 57, -127, 14, 0, -24, 109, 84, 30, -122, 59, 85, -28, 126, -63, -69, -54};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.177935757167);
    msg.setSource(32752U);
    msg.setSourceEntity(254U);
    msg.setDestination(4849U);
    msg.setDestinationEntity(106U);
    msg.type = 253U;
    msg.op = 196U;
    msg.request_id = 63463U;
    msg.plan_id.assign("CMRWIUWYNQWADGBFNVSZEQNJHXKJWMCGKSFIGKMWMLIJMWDMOQIDPIKNABTBEYFCWTSIYSUNVQDAXZGDENSFWFOERGUXKXHNDYVXAHVTOUVOQGXOIRXLLYVPIMECSCLQRDAZJKFYQPFDFQN");
    msg.flags = 28547U;
    IMC::ExtendedRSSI tmp_msg_0;
    tmp_msg_0.value = 0.582371915281;
    tmp_msg_0.units = 56U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SNQJHXIRKNUWQEFXHDFPYHITCPBWYLEQUVVNVEHQBUFZYJTJEPMIIKEVTFRHERPPEBZAKWGMUZDCACAPLDWHOSBMPQWYVCXUJXFMUDRYOKJMHZGGTWKGDKEFSAWOZR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.601358525245);
    msg.setSource(34263U);
    msg.setSourceEntity(87U);
    msg.setDestination(58606U);
    msg.setDestinationEntity(129U);
    msg.type = 79U;
    msg.op = 117U;
    msg.request_id = 43860U;
    msg.plan_id.assign("SQBHAVZTDURGXOVGKENYXEBMYVCCYBSCBXBDHBIFDFXDKNSQUBOOSLOTQGJATWIJWOPVANZTQOOMNDTJMCDAHPRIYJNGSKVLHPSNCHWOSAPTRQAUFDTGIYWBULHYMIBTMWHMIVGKRFZDYPLKWWSVUCXYFGXBKLLHWQTFAJNMQXUK");
    msg.flags = 10633U;
    IMC::StopManeuver tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZUWVGFTWLVVKKLWKSTTDDHSIGGNJBSUEQFEXKEVXYYUHEMONDGGTVHKFTDNACBSPBCBNWUQSFCYQUXPLPU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.0645740240294);
    msg.setSource(53209U);
    msg.setSourceEntity(87U);
    msg.setDestination(25182U);
    msg.setDestinationEntity(236U);
    msg.type = 110U;
    msg.op = 80U;
    msg.request_id = 60677U;
    msg.plan_id.assign("GZPNAZNASAWRPAFLWCJRIQSHUATUQEMXSZHJCDJTNYCVKWJHMDGMFJGORPDADOEEYNTSKUKFFBMEOCSXHKCPWVWQYAEGTHLDIDHZCJLMVIWNHAORJISSBMXOIEYVAUALKVQQVEXXGFMUZQWBHYPYB");
    msg.flags = 65287U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("RETUTQDKVMFVRXSKWLUWXVJJDBQPADZRLVCPNKXSRAGCGEQLGPNSNDHKHHNJENXDYZXFKWWMZ");
    tmp_msg_0.formation_name.assign("KQBGRQMMIEDGZTHCRTPWRTOKPLPRTLZQSCHTUYHNFIVCZWHJDCSJZJZBWAVLYIUMHGIPOPNYGWJZLBMHXUUQBJKILVACPKFWVHDNXZUNUFJXAVBVXJSJRGWXLAMUSFQBTEGXDETKPUCOKZSLTKFRMDRQHWRPNOHLHYYIVOCIVYFBENKOGXJZSMEEDNDTBFFUEDWCVMAPYGLXOYAFSEWRMKAOVFPNIDSQGBDYXCZMO");
    tmp_msg_0.plan_id.assign("KYMKZXODDTHKXQHNNVBDKTXAEGACPKGSXDXVIOUNKTPVFFWRLIWIFVQWJNGRRVGBLCZCETWQPMXJQTO");
    tmp_msg_0.description.assign("JRHIPQYNQGKMFJTYTSOQBJXWTPXHDLMMCBCWNLUSFRSLHFATLKZQKXRSAPDWEFWVPUALTBBISZIDGRXIOKGWJIDOUWRUMWCGHSVOFOOAVQYUUOZAKTCJUNCKKARNVIZFGFGRM");
    tmp_msg_0.leader_speed = 0.614688731425;
    tmp_msg_0.leader_bank_lim = 0.782018162229;
    tmp_msg_0.pos_sim_err_lim = 0.0734331503461;
    tmp_msg_0.pos_sim_err_wrn = 0.0364883523247;
    tmp_msg_0.pos_sim_err_timeout = 543U;
    tmp_msg_0.converg_max = 0.357104679528;
    tmp_msg_0.converg_timeout = 18917U;
    tmp_msg_0.comms_timeout = 64642U;
    tmp_msg_0.turb_lim = 0.401898775582;
    tmp_msg_0.custom.assign("BKHLSUTKYCCTPBJYESAFBJCCYAZYHKPXEIUAJWCOTFDS");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IREGMBXJCEZJWRLHEMRSSBXTAHGZGEJIITFVUMXBNYPYJLIQSAODOHCKCICJLVFIBHEZXQUQNFMQQNNTAPBXYMWHRLQLPQTASLFKXOQSPRVKZEWRAWYBKZFJWPQHKTKNSGJLWVRGFODSNPTL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.406961688404);
    msg.setSource(40981U);
    msg.setSourceEntity(108U);
    msg.setDestination(27577U);
    msg.setDestinationEntity(80U);
    msg.state = 212U;
    msg.plan_id.assign("ARPWHYCRFKOFJPHEKPNFLSVJKGYDJCEYTVPWPOGWTQBZZGVMLJCRWQQMOSWEYRLOCNCWXTZNLTMIOOOIQBSPFXMAZEJAGHBCTAVRMEUTWSOTDFGJYYHXHXXQIEDHQXPDAKUNDPWBLHPVVAKMDUABRELXNUGBLTMOSFSLVZNIIVHIGBXGSYCJCZGKFSNZ");
    msg.plan_eta = -2072726253;
    msg.plan_progress = 0.452754029168;
    msg.man_id.assign("XQSKTJTTARVIGLRMPUZXOXYUMWVJWETHDNBMYFADEKETIZ");
    msg.man_type = 13909U;
    msg.man_eta = 435761615;
    msg.last_outcome = 10U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.664877275508);
    msg.setSource(53998U);
    msg.setSourceEntity(105U);
    msg.setDestination(43049U);
    msg.setDestinationEntity(187U);
    msg.state = 113U;
    msg.plan_id.assign("TECFWAXSLCSJJOXVMROAUMVSIEIEREGQQHTFBDYAYWLNPZIBFFTZISRDKEJGWCQPACFNXIHBPNNJZOPRZKLWVUEUDXODTETTNIRFRXVMUYZPJKQ");
    msg.plan_eta = -951048617;
    msg.plan_progress = 0.00586420027999;
    msg.man_id.assign("FQEDPHFHELRIPVLPPKQMFIWKHLDSIFMBRTMMLSLCUGVTSGOIU");
    msg.man_type = 32174U;
    msg.man_eta = -1590342859;
    msg.last_outcome = 127U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.235284962298);
    msg.setSource(52748U);
    msg.setSourceEntity(169U);
    msg.setDestination(55338U);
    msg.setDestinationEntity(156U);
    msg.state = 215U;
    msg.plan_id.assign("RYJRZEUHVRZJLNBKGSIOJWCXUVNDLPIDTUGSHWLKYMEYWJKUVEHBKWLTFVVILPFYDAURRQRCGACNMFTNJQKTFSJTYZMHRYSSCWHHUPGKJMQQYDTCEGVHVBNULINBDRDPATITICIUZCSAYYXXSMMWEAIXOZSGFQOIPAEBNMOPCWBMPAWAKOJZFDTVGBSFKDXLAQBPMZQAVPXCYGPJILEMZ");
    msg.plan_eta = -756610976;
    msg.plan_progress = 0.79345644651;
    msg.man_id.assign("ZETDMWLTHKQXYDXCCVPVMNXBQXWULDMH");
    msg.man_type = 3285U;
    msg.man_eta = 764562217;
    msg.last_outcome = 143U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.387779159297);
    msg.setSource(60432U);
    msg.setSourceEntity(116U);
    msg.setDestination(54517U);
    msg.setDestinationEntity(240U);
    msg.name.assign("MKAPMVSPIMCUSZBOQXXQTFQHDVGGHBMPLXYECEHRQZGFFBJLJRXPNVWDLYKGCWKGQZRIIBCYYBPYHLQVHSNPDNVNETDBKEXFNVRRLFZNIWWAQSDYFDLWUKAGGSRKAWNOLOUUAXULYJKVTEVUJZPROEJBRAVGLYEVHJKQAZEWZGDHXAOMOCCTOJZITOTHWFRFEIFMTUZICMOQSFCJTEXUPGDHDIJ");
    msg.value.assign("XGPXNIEZCYHORTPJSYTRQPMAHXUNTNSUXXNYAAHNGMPFFIXQLKINGKBQLCJDPWCVREYWBTGMYMSVAQHOQWWICPDIUR");
    msg.type = 146U;
    msg.access = 50U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.247875559309);
    msg.setSource(34769U);
    msg.setSourceEntity(136U);
    msg.setDestination(31694U);
    msg.setDestinationEntity(136U);
    msg.name.assign("EZDGKCVDFCYLOLFDZAHKKKUFTJQJAWUWYEILVOHAURJXAZUUGTIVGGFSXUCCTPBIGRSFSNHYNEMWYGSMYOVDPKRLBRQYSGXSVMEIQHCGCVKGWWXFMRNEVAZICPMLWZLQJDXMETCAQAODPQ");
    msg.value.assign("UVYHUDEZVKLKNBTZEQENDLRYHOCTZQDIBHTAHWNPRVBFMEIIGCEFUNGZYCSUGCQLFLBSTFJAWTFVXXHCTJBEWNLQWAURFRWMMKYCXB");
    msg.type = 217U;
    msg.access = 136U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.0805305115444);
    msg.setSource(28288U);
    msg.setSourceEntity(214U);
    msg.setDestination(7210U);
    msg.setDestinationEntity(17U);
    msg.name.assign("TDRYIIJDGVXFXKBMAWRSOXVRWSTERRBCIRBUWIPCKWSHXVBLKWZJBVTJYMPNHXGVTDWHBSALZNBPMUZAOCXQQLYNZMENEPUQZQFNAXVMUCAGPKTKVFTUMSCYMKIOKQBOZUHOHINCUYEJYGFMIL");
    msg.value.assign("WBEVEYMSHPXZRQMXQNYSOGSDBUDIAJGMRKZJMPBJWBJPTDKVNCRKXYWYOJIZTTVACEJJLIFPWGHQXHAWTFQSIOEECUUNJWBIVAHUNMLDIPTNHTQILHXUQMCUDVZPCEKFXAPOUCESHKCZDMR");
    msg.type = 16U;
    msg.access = 63U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.604213598836);
    msg.setSource(61969U);
    msg.setSourceEntity(141U);
    msg.setDestination(20550U);
    msg.setDestinationEntity(19U);
    msg.cmd = 100U;
    msg.op = 131U;
    msg.plan_id.assign("SWDXYPNHBKEXNTXVTPUEBDIJOYLYNYGHEPDQZTZZZKTVPDUKDUAMABUDWMG");
    msg.params.assign("PDOVHBMCLCBHQQQWTEKAAFEGPSNSYPOIEVXYRYGRMXETRCNMULUKNROEPKBXBMQLLCVFXZVDAVKXTRQEIEOBTY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.676480525387);
    msg.setSource(7199U);
    msg.setSourceEntity(64U);
    msg.setDestination(25690U);
    msg.setDestinationEntity(189U);
    msg.cmd = 228U;
    msg.op = 14U;
    msg.plan_id.assign("SIVNPGEVBCNJHYZUUURXFZDLJRKVBIETFWYDQFLXKSWQRBNOGLYFZDRYUWHULARANNPZEXAHYAKKJPDTKCIUYMVLKULIYMCLATCMSHIQQGZGOQJDZBCEYXZKACBEUVBOXUZGWTFPPSEGATVNFEDNHQMMOMHRSBPSJOPBSGWVDBMDBQVIMOLQNFYWCWOXIKDDT");
    msg.params.assign("VFKYYASGHBPLEUTQUQRKESJOIVWCEPYWMZJXATOIBWKOBFNZDPZNJAYPJTBWAUNKTMKPHDOONLWGEGZLRBQHBJVBQFLGXBSAKSFGHZTNKUTHKSIFWEWICOCXRSDYVVURFRRIZRQUECDVXPMMCTGIEDAEOANQDQKFSLGXLCHDCVHIHIJUTDZWFZPJPNVJZM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.124659323573);
    msg.setSource(13113U);
    msg.setSourceEntity(198U);
    msg.setDestination(57761U);
    msg.setDestinationEntity(88U);
    msg.cmd = 29U;
    msg.op = 6U;
    msg.plan_id.assign("HGYZBXUBAKDPUENUNZGPUIKNCEMLRYHJNTOXSQHNRYPJBGYYSIPUNLUQVLGIZXLMYOTYQXMWVUVQQHXZOAIWUOLFKOWAKRDXPSCMVWAKVJES");
    msg.params.assign("VSSPWGBHMWLKIMXVWTSLUTDBIIYUTAQLKKGAVGNVPAZZXUMKUHRYDYAWCXVBSQKJRZHKYEMHDHJACNNDQZBEZINCYXOOVUQCTFGWNGJNIPPQLNVYSRBTRJHRDTFWJJLIIHSEFZUAIKPZJODASMFOBLKRFNKNRQEJEXRBMAZLQCGSIXFCEU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.159828006555);
    msg.setSource(60634U);
    msg.setSourceEntity(44U);
    msg.setDestination(5870U);
    msg.setDestinationEntity(152U);
    msg.group_name.assign("ZPFKCGMGIGKKEGDARSKIZDSFNIMWUROEYUEKBNXJBLUGWKGINTUKKAMODUVRPQPALTENHYLSGHIIXDRRXFBDAIZCDJWCSQ");
    msg.op = 51U;
    msg.lat = 0.0833497832227;
    msg.lon = 0.243188734111;
    msg.height = 0.890303734737;
    msg.x = 0.821387887429;
    msg.y = 0.310931205737;
    msg.z = 0.467399040132;
    msg.phi = 0.545714331083;
    msg.theta = 0.67051357528;
    msg.psi = 0.64113394393;
    msg.vx = 0.545848815867;
    msg.vy = 0.28227790131;
    msg.vz = 0.250727913781;
    msg.p = 0.288608299989;
    msg.q = 0.840569547476;
    msg.r = 0.721775407285;
    msg.svx = 0.960633018674;
    msg.svy = 0.358811669517;
    msg.svz = 0.508873585757;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.365071874532);
    msg.setSource(9071U);
    msg.setSourceEntity(97U);
    msg.setDestination(35544U);
    msg.setDestinationEntity(220U);
    msg.group_name.assign("TTDEJVFCDSJMCXBTYDIGNOQZJXHJFJSOFQXSAWEAQBYRTNNMHEHIZRWEKZGIXFABRMJNIJCFPMCRXPUDZPKXOONALZBTEDIEXTUFWGPKYJXURTOKZAPGOSQVXNKIWGWVXGDYFICQVOYBRSNRIAJSVBGNWQGRAVHULLNAWKIJUC");
    msg.op = 177U;
    msg.lat = 0.396453292761;
    msg.lon = 0.588108241022;
    msg.height = 0.803728419319;
    msg.x = 0.971177469677;
    msg.y = 0.767819080521;
    msg.z = 0.131707585706;
    msg.phi = 0.472407539443;
    msg.theta = 0.764356276553;
    msg.psi = 0.908369514532;
    msg.vx = 0.543671125982;
    msg.vy = 0.564108110103;
    msg.vz = 0.661677619607;
    msg.p = 0.576775236346;
    msg.q = 0.350449183247;
    msg.r = 0.0592937150283;
    msg.svx = 0.475463366345;
    msg.svy = 0.916191201752;
    msg.svz = 0.505567832694;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.459503544367);
    msg.setSource(17070U);
    msg.setSourceEntity(71U);
    msg.setDestination(44778U);
    msg.setDestinationEntity(152U);
    msg.group_name.assign("NGESIXERKIEMYHTIOXUTKKQPHJOWXXVUOFRGZSJCEPLGQHQDBOGRJRATCSILROKHMZGDBMVRSGEEONASXBIDNFOLMCUPZWMTKOYFPBSHRZDLHLUVXGQCPVZKBTJGDD");
    msg.op = 86U;
    msg.lat = 0.320407350963;
    msg.lon = 0.232064538131;
    msg.height = 0.208812543401;
    msg.x = 0.800647525181;
    msg.y = 0.610169080603;
    msg.z = 0.601240031439;
    msg.phi = 0.59668911237;
    msg.theta = 0.0743767661845;
    msg.psi = 0.928478219463;
    msg.vx = 0.946621282983;
    msg.vy = 0.404558856097;
    msg.vz = 0.528182409749;
    msg.p = 0.888666903739;
    msg.q = 0.690714172484;
    msg.r = 0.800106117963;
    msg.svx = 0.809342073086;
    msg.svy = 0.536443011581;
    msg.svz = 0.325245390636;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.0544710254784);
    msg.setSource(57785U);
    msg.setSourceEntity(16U);
    msg.setDestination(39214U);
    msg.setDestinationEntity(228U);
    msg.plan_id.assign("CGFANXEKORIKDMCLFESWLEELTSOUQOTAINWVZXMFVOJZKCUUPBMDHOIVICBTVOJHWPJNRRFFRHMFETSSOAIGPPNPGSFHFBCKDAQXSQBEKRERVZUYVTMDXBTHAKCSNDFCMLXRYWMILDYQGWVVCTAEOHHJPKZJBMQNAJPIBJYZWNGXQUCAQGTSNOVKIBUUNPANCRLHIYBAGPJXOEUYPRRJDLKTYZZJXDIWQDZX");
    msg.type = 12U;
    msg.properties = 8U;
    msg.durations.assign("WTHZFZXKJRZERRCUDALHWDZKXPKDOAEXMPVLCUSEAGISBOZTBGLHAEZDKSBFTJJSMGJLBNPSRXKDYHALCPDRYFAQNNYTHRTCGEHYQOXLTGWUIGEFDTXQAQVVQUYCUCPNJIAMCYGEAEGHUVOBPMHINXPVKS");
    msg.distances.assign("TNXSKNOJDNROJFPJSORRPWFULPCZMRLBKJBSIYAHICNGSYNRBEFOMZD");
    msg.actions.assign("ZKCYIHQFPIYQTTIRFTWJSRWVLMAIBEBUSVWMDDDWPPPVXMTYDEBUBTEAGTGUHLMYHVHGUQJCUESZXCKDHTAQZBMBWRZOBCSSAKQUPILZKLNYAQJKGUIEXLJZEXDMSRJGCMNVHZNCSVSPLJXKNGJMVGMUYEOWYAZKEXQCOGOUQJIFKIQXNCILF");
    msg.fuel.assign("DRINYRGGEVGMFEFFYVFZBRVKUSWUFQLXQVXBKUNHXAYBQAQQOCLOYTPRAADJEUGOVGZFGLOIPTWZKMPBUSIEIJMCLQIXFOTDZKDPCRYZLXOBHZXCMVDZFMTLDDSEGJCAANUSDJSKONHYDJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.89921120489);
    msg.setSource(16045U);
    msg.setSourceEntity(76U);
    msg.setDestination(30892U);
    msg.setDestinationEntity(250U);
    msg.plan_id.assign("NAUOAELDPXPDBJDYAEXNSEVMMPIYUJHCPUYMG");
    msg.type = 117U;
    msg.properties = 171U;
    msg.durations.assign("NIIDTHTBSDDSPLAZXOCWFDTQVCREFSCIVSRZNMGA");
    msg.distances.assign("KUWEMVDBSXQIWICTJWHYDNQROWVENUDAMVLFIXYFSWH");
    msg.actions.assign("OQWYNQPHQDYJYDEAYECUYFRWJHOCTSFTDJPRGAXTCBJWGVAZOXXOQMNIEUHAXIMCVPPMBLXQLHWPEVUKOXLPTBGYVUVNSVPUBMCDFVAGSOLEYXYHJSKZTGPWKQPBLZRRFFKUHULMIC");
    msg.fuel.assign("ITEZLWMWRXYMKHHWXINAVHCDFOZBLSKQCRCOEHCCMWKZPMEYTTQXITYUGQQUZOVHFOPLBZYOYTQVYIWLNUDMGHUJCNNGJFIUNPVKBECIJVEKUFTSVJLMRLHDXPXFAXOFAGJUSMRKSLTKHWUKPVYMFJJRWGCUZPSDEYZFPDBOFAILRANOBDBDUPGEGTAZGYNVZQVSSECNNWBQGPBIDJJWEARGZLLCKB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.721297372924);
    msg.setSource(29623U);
    msg.setSourceEntity(140U);
    msg.setDestination(36412U);
    msg.setDestinationEntity(74U);
    msg.plan_id.assign("NOGJLUQQCVPGLZVDVZYMPBGYEAEJDLUWXWXBWMXHBFHKJCSCWFYLINGMSECLSWUJPIPZCOIGRZELYSVREIBTTSMRHQAGPNBKUKAQDCXWTZDTVMPTOIMRDAYVKQOYAXFXCGSSLHHJWAIMJEMXCHIQKSUXPWUJFYZNFQGWPAHBZOYDYVLIRBUENKM");
    msg.type = 248U;
    msg.properties = 156U;
    msg.durations.assign("LBVGERYSUWFJHWSZKAXMYJCUYYQPVGH");
    msg.distances.assign("WKJKIQFVGFRDMJZAHLZUUBIHHSCVWMYKQTZVPOWHLEPATLPTZJKLMFIEVPLUFMHSGHJBD");
    msg.actions.assign("VWKJVDYGFBKHFZRAZWWSXXBLYSZCAVGLUEJLVUJTZDWHCKDMXRDYKDJLYZOQNJTGEBWOCGAYPRKMTOFGJXLUAAKFMWBKMCESSJBFIVDTITKMDEYXZYOGIPQNPPMCCFVDEAUBWSRAURWERXTVLQZLMRPS");
    msg.fuel.assign("MLDWIFRQKSDBOLHXOYOIBZZETAIMSUUAEQDEZNXJTDCBOZUGXSJSPQFRJRWIGJDVNWHZYBLKNPLNVQZVIECHGYQKRNNKLTRCHNCQIMFEGTITKJIAJKFGDEADVQUYBSEQSN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.795203706961);
    msg.setSource(38693U);
    msg.setSourceEntity(32U);
    msg.setDestination(44722U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.902567303228;
    msg.lon = 0.967036440825;
    msg.depth = 0.555926076153;
    msg.roll = 0.419597790267;
    msg.pitch = 0.274784210487;
    msg.yaw = 0.793085344605;
    msg.rcp_time = 0.104007818527;
    msg.sid.assign("ZMPTHWRYZBMWTXYBKUHTHWPQRBOFLNFKLUTOEEUOPSCSJWXMRIGLNFIEPVTQSGORFVHURULJKNEZUSVFQDIDXUKTVGCMJRQTNAFVBMBFPTSJGYAOFRGNWG");
    msg.s_type = 53U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.111545649855);
    msg.setSource(41188U);
    msg.setSourceEntity(140U);
    msg.setDestination(59452U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.945499198607;
    msg.lon = 0.385887783674;
    msg.depth = 0.0892178679523;
    msg.roll = 0.0302194528877;
    msg.pitch = 0.853066811888;
    msg.yaw = 0.570907983047;
    msg.rcp_time = 0.593453309109;
    msg.sid.assign("WNIUCXQYHEFVIJNTSLMPDSRQJOPGQGGXFYYURABOCATKXATZMIGMKERKDUFKLRNJSNNPCHHLXAFYFLEVCCTKLUMPMSITDWGNJGGOAHNCWBUABDVRXXSTWVFEHIIAXPGXYJZOJKXDEBKFHIEOEDRYKGJRAWBGDXVDZAZYYDMFMLSVFHDBBWPSLPOMZBOBOIQUWHETURTJQZZAZOCINWMEBQQVUYCZV");
    msg.s_type = 240U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.794969456342);
    msg.setSource(45571U);
    msg.setSourceEntity(110U);
    msg.setDestination(48511U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.521034815605;
    msg.lon = 0.935753806434;
    msg.depth = 0.341066444268;
    msg.roll = 0.0882386083161;
    msg.pitch = 0.987259821137;
    msg.yaw = 0.317031399471;
    msg.rcp_time = 0.135987914323;
    msg.sid.assign("ORWBWZHRGYKIIFSGOAYXKPEKSG");
    msg.s_type = 70U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.403233879294);
    msg.setSource(65416U);
    msg.setSourceEntity(175U);
    msg.setDestination(28039U);
    msg.setDestinationEntity(190U);
    msg.id.assign("JUWESIFFUQDNPAHUCZLKMXQPEDZHPONBGOMFOOCXZIASVFYGHPLYWHSGKEPBNVMEXAJBYZETAACUFVGFYEZXWZCPVIAYRHULRNBWUAPFOQYRKUITUCRUJDWTROLYXMOFLHBTSSVJCWKBSZEZVKJBBKITHGGPVXBGQHCTSWIDRFIWNKRIVNSIMWYPACWEJMCLRNSRDOQLKBQLDJZNJZOUTRQQYG");
    msg.sensor_class.assign("MPELLLYZLRZVLRXUHAXNNKWRRPTFIOIHUVWFUKYWSDGVC");
    msg.lat = 0.53857433417;
    msg.lon = 0.760674769924;
    msg.alt = 0.2417266087;
    msg.heading = 0.442097530854;
    msg.data.assign("DQYWHSLSUHBVBKXLDHEIHGZXYEVMKPRXTNFIKOTXJCWAAHFCOVSBYWPIYBMCZUYLBPDANJTEAYBOSIUHSWMGRWIQOKELTQKDQSFLWIGHERCMNAHSEFYWICECVZYJIJMSDORJUHDMDVXSJUQMBAGQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.344541889386);
    msg.setSource(61918U);
    msg.setSourceEntity(12U);
    msg.setDestination(27634U);
    msg.setDestinationEntity(15U);
    msg.id.assign("BOCVYZRUUXSOMLIMYVYGNQTZLCZGEMTSUJLLBIJHNAPIPHYSOFUDAEKWKGLYGJGWZEVOANEQTHTTDDIVZRMFKWCCXWPZSNIACRTNOOPDSITXBCKAEHQUJKRHNCMJFWBS");
    msg.sensor_class.assign("QGGMPDJCKMNLPBDAHMEYMPPHJNMJCJKBUZXSRKQNMLFBSZELNWXLNYYXLCYLHJHBA");
    msg.lat = 0.164428103866;
    msg.lon = 0.541651414129;
    msg.alt = 0.0457832056944;
    msg.heading = 0.762795598146;
    msg.data.assign("GAWOUZCBYDGGFWLARJVKWHXKIMPLDAZJSOMROIYXXXBARZGPHXBFKRVNZWYCPCCXGTENJYHRUNJZOXHOYIBVDNQBGMLFSPPGQSNBGOEQAUOHOQVATLUMSRWGJJWJDNWCTQTNYXBRKBKKLHHAIUWLZSFCVPEMLMTFM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.828918157365);
    msg.setSource(38693U);
    msg.setSourceEntity(135U);
    msg.setDestination(46402U);
    msg.setDestinationEntity(230U);
    msg.id.assign("SIXRWWEJFYNLEVWGBTPLVXCCATIXBRHRXOPGJSUOUGQRD");
    msg.sensor_class.assign("PEQVLGOORCWXZXENYMEMECHEDARLRMZEWHIKCHPKLSXJSTJOZYRBLPQCTYLGGAQOJKMZFPTZZCRHQBMSLKQUZYSCWNDDDVEUIIKAFFIFQMJBPDVBFVBXFMDAUQSARENKNJADIFSWOFETCITOBPVGLXCJCFBSZLHYTDRIFCVDNNKZYOXHYNNDJGPEYIVATAUBSUVWP");
    msg.lat = 0.837499374588;
    msg.lon = 0.321584051902;
    msg.alt = 0.0038908930719;
    msg.heading = 0.749098492101;
    msg.data.assign("EGCLRGPJSONXULETEAWYSZMRZFAKGKQMDQCXKRVQZKIIEFFWZULTANVTCOWBGISHQCLTNQGRVUOPOXXNFNHJJGKTJMYLJSEKOIBOGECKVRLHNKBZYVQCHRDXNAPYND");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.986932812933);
    msg.setSource(26359U);
    msg.setSourceEntity(173U);
    msg.setDestination(63817U);
    msg.setDestinationEntity(207U);
    msg.id.assign("KRPAXVJROLMESVMTCFPGYQUCHGNMWWQCZDUJNIXRVBIGZHLSGDWFTLKDKVRUOZEAHKNFBZJFAHQRNQLHZBCWNYSKWWBEYLSAJRVGUEOUMEWDKUMGNMYXALMUGLNGIOSEFPTQIIPHPOJDYHCZWCJWYOJFATXQZYENIAIQQMZTKQYNU");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SFFVYDALPKAUTDDLILATHORQLZJBJCUKJDDNBQBATRAPEZMHCQSJUSGQPPICKFWUJTUIYDFMUIRLBBNCUQZEFUPMVEDSECWANBMUJYRYQOZRVZHCMOJGLCTBWSSEMYLXDGTVWDZEXLQYPHWPXJZOAMPRHTYZKMVGWOTRFJVHKFZQCPHQNCTIXMXBKSCVQNXRWHIGWAOELOJBBVMEXRAKGPSGINAVSFEV");
    tmp_msg_0.feature_type = 97U;
    tmp_msg_0.rgb_red = 86U;
    tmp_msg_0.rgb_green = 30U;
    tmp_msg_0.rgb_blue = 42U;
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.358685935528);
    msg.setSource(20754U);
    msg.setSourceEntity(106U);
    msg.setDestination(48094U);
    msg.setDestinationEntity(171U);
    msg.id.assign("OZWBPVJRXNFWIAJWKFXPMHUMONCW");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("LEBDUXIDTWBYCNRRZVTLQNUOKOQAPKCMGJJRCGDBXDPCJJYAVHOPPMMMRUOODKFHFFNYDMIIQNFWHDABQPENWFCKHFUYNSUBJYOCIAVAPVUCPGTGHZKQKSGGZIUSXNXCTJNLSYLEWVUPSYBJTMTQMJQROHEQSPXAAKIWCGWHNVOZQMCWIUYRLEESVEZZSQVLBXXPYNRTTZFEVW");
    tmp_msg_0.feature_type = 239U;
    tmp_msg_0.rgb_red = 126U;
    tmp_msg_0.rgb_green = 153U;
    tmp_msg_0.rgb_blue = 137U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.29110601503;
    tmp_tmp_msg_0_0.lon = 0.00877460848954;
    tmp_tmp_msg_0_0.alt = 0.494662050623;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.634353645446);
    msg.setSource(32337U);
    msg.setSourceEntity(118U);
    msg.setDestination(9477U);
    msg.setDestinationEntity(123U);
    msg.id.assign("YEWKAJMIRZLWNZSLSESDQCBHCWGRPJNXFXMLZNEPCJFSBOZTJVJCHFIXWMQETWSBCOVPNXKGJRSNHRVCHUGFQTKSPMDYQZHNFRETYXVKBDUVOINQADLDUBYQSJBLEUOHQJYMSMXAITCVWXUEZBDWPGRMKHAHKTDZTOODWBAMINYXGOVFKTCAQFRPKPLPVLXI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.646185069153);
    msg.setSource(15774U);
    msg.setSourceEntity(136U);
    msg.setDestination(36130U);
    msg.setDestinationEntity(122U);
    msg.id.assign("CQXAHSDWNDQKQQRLVIYSIRKJOCDKPOKMFGPYZWDUBTXUWXYARHETMBBPUWDSPFHRONOEYISMANIXBTFYFVCNOETAJOJYJPFSSGHWGUIXBXRGGUPEBCNLCCMFJJUEIGNPXQTZAJGPBVWEQZYPHYRYZIHCUGSVXFHNTFLOAMIJLZAHLKKVVKQVLZFURNTIZQEZMADCHBLDWSMXOARU");
    msg.feature_type = 27U;
    msg.rgb_red = 215U;
    msg.rgb_green = 222U;
    msg.rgb_blue = 191U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.362124509997);
    msg.setSource(1906U);
    msg.setSourceEntity(201U);
    msg.setDestination(42933U);
    msg.setDestinationEntity(162U);
    msg.id.assign("OCTCLAMFQIULTSEYNVANQBZGEOLYURPVXT");
    msg.feature_type = 252U;
    msg.rgb_red = 167U;
    msg.rgb_green = 162U;
    msg.rgb_blue = 162U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.502939142006;
    tmp_msg_0.lon = 0.642906863603;
    tmp_msg_0.alt = 0.117515761791;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.558303233287);
    msg.setSource(36355U);
    msg.setSourceEntity(75U);
    msg.setDestination(31624U);
    msg.setDestinationEntity(3U);
    msg.id.assign("UAJJOYVRDVZHXOPRQHSJYYKYOUDXKJSKQCWJNSBBZGBFIOUGRAQKJZPAARHTIXSNPHIPHMCCWVTZBRLX");
    msg.feature_type = 237U;
    msg.rgb_red = 20U;
    msg.rgb_green = 29U;
    msg.rgb_blue = 199U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.0634824446974;
    tmp_msg_0.lon = 0.403255439909;
    tmp_msg_0.alt = 0.639230550511;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.192017766315);
    msg.setSource(58219U);
    msg.setSourceEntity(98U);
    msg.setDestination(48254U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.49137348879;
    msg.lon = 0.597641796865;
    msg.alt = 0.700336504332;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.896066844273);
    msg.setSource(11794U);
    msg.setSourceEntity(206U);
    msg.setDestination(10794U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.193573074989;
    msg.lon = 0.48566960273;
    msg.alt = 0.29609389186;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.810372384413);
    msg.setSource(9373U);
    msg.setSourceEntity(4U);
    msg.setDestination(57312U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.123352673223;
    msg.lon = 0.158570101324;
    msg.alt = 0.643358104444;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.592524996922);
    msg.setSource(16776U);
    msg.setSourceEntity(242U);
    msg.setDestination(54911U);
    msg.setDestinationEntity(52U);
    msg.type = 110U;
    msg.id.assign("GJWRMPBIUYLBLSNSKTQIJNDDQZNHFMUNJWEQTTNLMVFWHVQVGAETJIOYGIFSYKOFFCPJUOPXKHLNKOJZCAWGYYZGHCLBLFRBKRXKTUSGFXWPZRYKDQTZACLJIWXFSMWPCEUIYEXUGVLQXDJAFUVZSKQGNDIMRDCSDPXVYTQZIEVCOCDNEDRGZNOOAXMYRBJSBHRPUOVBUHWLBFEMMAEHCRYEKXLMZMWEUTKBZCQTHPPRABSTAPVWHJH");
    IMC::TeleoperationDone tmp_msg_0;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.0741234007338);
    msg.setSource(54091U);
    msg.setSourceEntity(16U);
    msg.setDestination(31903U);
    msg.setDestinationEntity(98U);
    msg.type = 111U;
    msg.id.assign("JDTNXVULBQEVRSOXIJKYXJQOLHDNMKBEYOTVIHSOGPTFXLHVSCQIA");
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("NUUJHNLMORXUUKSWHNQQEBCJUDPGZZOZJTRGYPYVTXCIGAKOHPNSECJAQVDPZFIMKBLQCFGWLAHXXFBUBGOWEVQJDKHEYDZIVLNCYLENCDWWXRMSWESGDQSTRJATUKGCVFSMDKKPHDEKAA");
    tmp_msg_0.type = 79U;
    tmp_msg_0.op = 81U;
    tmp_msg_0.group_name.assign("DYGQBGJZBOROKRTBWMNXGFJZMYEKQQHSNCUCMGZENPOERIULWOYUATBTQHWZXKMGTONRSDFPATOAVOLDVLHGZPWLCECBXDQBLDJSLKRRAPZHPWUSKHMAJZNKVPVQSFEQFZ");
    tmp_msg_0.plan_id.assign("HNKSRIPPSCLOQVZFPYOSYDWBJYRKDYEEDEJNJKDFVJOQZOGQEIHKZLGTAMVFVKVGQMWOZVSQBADBGUJSKYHRPGIBDIXYXOVOPLHMBPZLZSIERCUIJZDCCHHCVVPARMAWTXKVBTFYUICEHUMLMMXWSCPRHDANUCBUKTAQHDNFQHWWKLDQTXOMSYRNWUNONTQNBTTFCXJSXJEZSOFNGTMJIBAUYXAPKEBFRZLEGPJLURXGUILEGYTWQFL");
    tmp_msg_0.description.assign("BFHZDZOBWGJEVNJFQTRLGKATSQQFUPLRWOGKPFARPZFBGCTTNVHPAYEAEUPNCWJNNTOEKJUKUFYOQIOMDXDYADKCETXJMAVZLEVXGCQJLPMGOIXRKHHZNMACVMDPMHGFEVQYEVBRKQCALHBZQHOXOWBJWSUZISRDCMIFUQPSIITNILYKSGDWYEPOXXXWDFSZ");
    tmp_msg_0.reference_frame = 148U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 20357U;
    tmp_tmp_msg_0_0.off_x = 0.789142501431;
    tmp_tmp_msg_0_0.off_y = 0.859823897404;
    tmp_tmp_msg_0_0.off_z = 0.949540438143;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.leader_bank_lim = 0.712236641178;
    tmp_msg_0.leader_speed_min = 0.347732112422;
    tmp_msg_0.leader_speed_max = 0.531899284248;
    tmp_msg_0.leader_alt_min = 0.334588118649;
    tmp_msg_0.leader_alt_max = 0.880758979875;
    tmp_msg_0.pos_sim_err_lim = 0.950728271914;
    tmp_msg_0.pos_sim_err_wrn = 0.199934157299;
    tmp_msg_0.pos_sim_err_timeout = 22834U;
    tmp_msg_0.converg_max = 0.353561979812;
    tmp_msg_0.converg_timeout = 52480U;
    tmp_msg_0.comms_timeout = 5413U;
    tmp_msg_0.turb_lim = 0.286734590073;
    tmp_msg_0.custom.assign("WAARUUDTSDOYHUOBNQWQOBEECRSUDAXJMVGVJTEGKKYTPNLVQPVZJJDKUZGTSMHUBECELHQZZQKCQLOLAMIITPRCTUFCVXPSHSXNXDFMHMBRXPCVJOMEWBGNFDUWDJEZIOXSZMMVVFCAGJ");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.651129447413);
    msg.setSource(25918U);
    msg.setSourceEntity(78U);
    msg.setDestination(12561U);
    msg.setDestinationEntity(24U);
    msg.type = 248U;
    msg.id.assign("RRNWJMGVQZXLRQPLKBZGVSOFARLLWBTIWQGBCFQHJGDJZLFTBRUDPCEINFUQSJZMCLOCHEBBPOPMHTHKUZTAHUFAAWPYGEZUWOMOKPDMEHKFWUMSVVOSNDDQXEIZAVNOKYLQDJIHCBJJDGMRPBJYWFIYHXAYPDKVYCOLICFYGNTCCGIMVEHTQGSCRPUVUWXSNHSXTAXKKRAESTXQ");
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 226U;
    tmp_msg_0.x = 0.256257508197;
    tmp_msg_0.y = 0.760020497323;
    tmp_msg_0.z = 0.00627732993285;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.199163200753);
    msg.setSource(39146U);
    msg.setSourceEntity(179U);
    msg.setDestination(16726U);
    msg.setDestinationEntity(251U);
    msg.localname.assign("PINKQINQGCEIHFEFSAQPODQQSSVWVTDUQYRPFMTPZSBSBNARFAGWYCTCCQXBTZJMCTUIUMMYCDLVHNRYSNZCVRYCALLOMXPIMPDRWK");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("TOTVJWHYQJINAULXNEJTFULOORVDQEELNKLIPVVDYSTTNCNCYKGYZOFDAYAQWGQKYXGOCABJOHEQIRHRBCRKDMZKCLSSZQJRBXWSPUMOKWISJXLKR");
    tmp_msg_0.sys_type = 189U;
    tmp_msg_0.owner = 56602U;
    tmp_msg_0.lat = 0.678327917557;
    tmp_msg_0.lon = 0.0809016515614;
    tmp_msg_0.height = 0.326240144448;
    tmp_msg_0.services.assign("QOPBGHCHJZIRMACBPYJNIVSMQKWPPKYNVBJIFACDNGXMHXLQMCFWYFIJUYOKUFBOHALZMFLTTOXCLSELLBHTNPSTWPOHGOKWSMDMIVFKDFJCPPQGJXGEODRQNETCVBTUUFYAESLYWRUG");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.948355459644);
    msg.setSource(38505U);
    msg.setSourceEntity(40U);
    msg.setDestination(54310U);
    msg.setDestinationEntity(172U);
    msg.localname.assign("YGGBHYOZNUOJHMXYQUAMAOBWCQCBOTFQKXHTTPNFHXQQDANKVIEVYZPGAGHOPVWXCDRNURGFWWSYJNBZECDXIBCS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.885298827459);
    msg.setSource(59824U);
    msg.setSourceEntity(124U);
    msg.setDestination(39479U);
    msg.setDestinationEntity(77U);
    msg.localname.assign("ODBIYUXDHKYLYWEQTWBOQLMJKUGURFYHQPXFSCRFFBJTTUNRBSPRBAZVQIVSF");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("THPJINXJNKYZSFEKNADVQRQLIBYPVOPQYTNGXCAMTLMETLKXAMYKHSVOQBEQBRYPVKNFAUITGICOMXFTFBSNORZCVKICWLGPJTNESQQDSHUUIAEFOGHNUYFFHZMGJFGWBCVSDZXRLDGPQODCDBJVCWDPWSBLIUIOUWGCJRZJHOMWXRKEAZNUYKMYFHXTDJQVEDHREWOXBIAAAGLPJBQWODPAKNCT");
    tmp_msg_0.sys_type = 205U;
    tmp_msg_0.owner = 58758U;
    tmp_msg_0.lat = 0.279438379677;
    tmp_msg_0.lon = 0.838436938908;
    tmp_msg_0.height = 0.242225695183;
    tmp_msg_0.services.assign("HOPISWMDOGZGDUXWTGPHNUWORCEQVSCRFSKNRTRMDXNYUSFCKUIIHLDVALBFECOYZQIXXVBTUUVYQWGLOTEVYQHEMYIBDYDBJYCJPPOPQPIERYIQARZCOPSKSLXXZHINGCMFQKZKMOKAMXULDBHWMRYIQJMZGTJAEDFWQRFEJVNJFBKAUTRLDXPZXL");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.0538137542496);
    msg.setSource(39051U);
    msg.setSourceEntity(45U);
    msg.setDestination(18790U);
    msg.setDestinationEntity(140U);
    msg.timeline.assign("HHMBTTCYYUAXPOYGMZQXCCUHNZOGGJXTGQLMFCSUBKDQBOMKSVYNCYPNYGYTTFFPYCVUANUBGHHYLQPWPLHIUMBORGXZFRIWLZJMXBFSKWVQARQEKREFEXUSMXCGZJQLKEXGKBDILCWZTLUOHRNGPIWBSJAIOWIDRJVOCAWSFLANZAEDOEAPUPXAZQMBEZVMIKCSVXSDJNODOKRTDPTNBJZJLFSITEMRWHTFWRHPJKENRDFIIJQEU");
    msg.predicate.assign("DOBPNAQCEBMCJOWFVKGLRDKTV");
    msg.attributes.assign("KXRXQOOMZVQATINGVIBSJPFJBGICAWYRJWOLFSRNWWLDBROQTWAJWAZPZCXENDUWCCTUXSLEAYIJKLJOMUBCREXSBVRORDSUNIKQSQBOZLFPZZFZCUUTJEGPGVPEPALKHTMIXHWVDQYMRRGVZKQJKUMXVTESMHHOLUEDFEBHHKS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.00458612078991);
    msg.setSource(14577U);
    msg.setSourceEntity(88U);
    msg.setDestination(50245U);
    msg.setDestinationEntity(118U);
    msg.timeline.assign("PCYNCXQWOEBZZARLDUMKWOXMIZULJYOUPHFSMFCJVRAADCSRTNEMPVBYDHMBVADPRIXLNCHXPBOWEDVRMVHWBTVJNSRBUFEEMYPRTPYFEVZRLAEJNGPHFVWOCXTDJBALWXGJNWYNLOTJKDIYPSIDQTFMGUUXHFWLZZKHHTDFIQLIXQAHYKGFCMGUQVCJJSCQQZKVWBTSA");
    msg.predicate.assign("YWZOMJFSCGAMVSTOYNZOCAHS");
    msg.attributes.assign("TFILIWDUHOY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.399008833516);
    msg.setSource(25105U);
    msg.setSourceEntity(48U);
    msg.setDestination(57452U);
    msg.setDestinationEntity(181U);
    msg.timeline.assign("QWYOEZNBBNGNDZVVWBLTMDTNWKXHEGUXAXQOKEAWPTJSAWABASFMFMFYGINDDKHQQJXUH");
    msg.predicate.assign("SDFAFWJJFRXXTSLBUGPVAAUYTURICUKXPIGZQGVDLHGYQIOLTLLTAQGSHDZLTKMGJMVZZMBHGADEWHNTAWERHVJWZVGRCFEDFJHEDVXKMKRBPUNSWBODUBZTWQASWXBBIFHQPIIPZYP");
    msg.attributes.assign("WBFZTVZTCFZJXUMFCSVBNOPCXHAKJGGHMUKQMBALPRAWJFUYUHPNVDOHKJECNIFNWBRYLOYLAQMASXFTPGIAAIVSYTQOKNZCJEQBIUWTUYHDSWPNYCDEKZPEVULIAFHOGXRGSQXLPDZJKVCOIKHCXHSGMGJZRBGNYPQEQLXNSZYXYMUEGVEOVLIDX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.42626928028);
    msg.setSource(54414U);
    msg.setSourceEntity(63U);
    msg.setDestination(40477U);
    msg.setDestinationEntity(112U);
    msg.command = 105U;
    msg.goal_id.assign("ZBQZSGXTAWGMHCMADFKJIIPLGEAHUWSXXKRUXPYBRHUPJERWWFRBOQHAJAOCRRNWCYOWIPZQBYFBRGZXEHZDDQDSMLMNJYNFXDZLMFTXVIEULECTVGKCSQBJSCLGAIPGTGWXPWHMJNZYIOSDYIWSDVEFWKYUUFVIBXOVT");
    msg.goal_xml.assign("ZJCLMSJVKMYPSPEOWOKIGAFHLINHCSQDAXLTVFCIKVZQGWDNRDDYGZODJMSNTHEXCDBIHHPNJHDRBQTOFWCZNQPYBBTRXERGOKPAPGHFYJWUESRVIDOWYYGLTBXTWMGMBSSXNKJUKFPUMPIAIGMRJXBNCHVAQGLDRDUUCYNEVYQWTYUJIQCXGQYPUVZEQMUNKLQEMOXVMOLFXL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.334790192236);
    msg.setSource(17109U);
    msg.setSourceEntity(207U);
    msg.setDestination(6276U);
    msg.setDestinationEntity(40U);
    msg.command = 36U;
    msg.goal_id.assign("ENMAFRMHQAKEZDOUHLJNFJHINFCWHTSKBPDJTLQAJGYGQVVSUUVOQFSWOQZKCEILZURXOBCXYFMXJSMWCHCVYVEGSSOCKHTXOMHPPUYHGZIWWFDPSYIPLRQUXGKJVUDIFXEZOKYEOPWBMAJSMNZFDLRKBNEFHNULXCEHKKRBNZBORBJBDTWYXALDCADIQANUYRQJJGCKZRTTDTGMBPWITTVPILESBMMDE");
    msg.goal_xml.assign("BGPDQPIAUKQTYUVUKTVRPSMXIIKDYOTEDOLRSZGGTAKLBJBCTZHRFWMAIKQDRELOMGLMTAENPDPSZABWFCQFCPMETSFFZFHXMEIRUELVCOPHNIMOHZSJYULHMWGHREDRDOYFJGEVBPGBRXDKNPJXWSYUXGYV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.645936561448);
    msg.setSource(49880U);
    msg.setSourceEntity(126U);
    msg.setDestination(3288U);
    msg.setDestinationEntity(55U);
    msg.command = 62U;
    msg.goal_id.assign("PYWNGGFWHOWQDNDJJSKACDRZXFNQWPPBEVZCZSGLML");
    msg.goal_xml.assign("FVWPKUOQCNHBYWDRYQSTFOMXNFQLJBOEHERYDVZRZZN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.709318161703);
    msg.setSource(64263U);
    msg.setSourceEntity(28U);
    msg.setDestination(42118U);
    msg.setDestinationEntity(84U);
    msg.op = 250U;
    msg.goal_id.assign("TURVAUYUKVWTUXAXUBAIMPWXVGSVYQHLBBEVIGGYJWAKYXPCODRSYBELJVFTUJYXLTXJZPCEBUVSQCDJNEDWKMEFJNQATZHBJMKQDZINCGDGCXFIRSMPKAREFPILOZFICYTRDYQGKOQSPQIJXCDLBKALRMSFMDQCJXSEVNHFW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YTWCZTDYBTHVSVIJNSHAZJVPBUMALXMCROWXDLJXVZBGIAHRLZBUUVEADOWDFQDZLITSJFQVHYW");
    tmp_msg_0.predicate.assign("TGYAIELEZTYKHECBMOVPXEGDBBYYOLTUWNYREDVGWMEFVKBIAGCIIOZLCPEXXSZSGDDFTQQTBRAAHKXXNUFOOJEKRUJQLOBKOALKDTUQSXWWHCYQRQSHGCMGGBQNDRYZIZPSHSZIJHVMYHEMNCAUSVOZTLJVNVUPNPMCPCXFVVRFQREDFNIQZFXWNOLMJPLCJMBTLYHBHDFSCAPHFRZLRIPAUUQXU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WLDOFLORKYPWHULAHVEWMWKVKWSGJXHUCZSBZGLAPVBYMAOZTCLOAIYYWIFOLODJEFEDTOWQYOXNSQNXLWSFLFFJZIHDKARBUXGBNXHDRQQUQERTVWJATQRMTGHEGXUEKDKDBVYSTUSHKBVAFALJUBRKXYFINZQHXQVEIYXJDGZINBMCDIGJSHNVFNSJRRZLUPCPDMPIEOYMAKNWCBSURCIEZPMMPOKCMFCVGQZPNG");
    tmp_tmp_msg_0_0.attr_type = 148U;
    tmp_tmp_msg_0_0.min.assign("YTWBHYGSEGMWOGADZVVFPQZPNYDUKIJCIWHAHIRKSKZZKCCMVYSNJSVYR");
    tmp_tmp_msg_0_0.max.assign("AUANUCIACHCHMFROWGVTWKGHRRDFFXUPQNALXUDOBCMKPQEELBGIARAHIQIZMZWKSKGTDBIKUYYYWUZJADXMEEMRVEFVNQJZJMQBYQWFVVNSCQNSHHQODNTLIKMLYTAPTGDSXLWYLQJNFVITJL");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.000364971517229);
    msg.setSource(19887U);
    msg.setSourceEntity(54U);
    msg.setDestination(47715U);
    msg.setDestinationEntity(218U);
    msg.op = 74U;
    msg.goal_id.assign("VHDFUQYHSNXSKJSYTZVTXZKEGNUGDDMAHSBRDQWOSQPIBUJMCIUDFJTLTRVAHGTJHHFOAXMZKTIVQQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LNQABYEHADWHLKONVXZEGXIAIMOZCBZYBJVVKFPAKPTZBNGMZSIUZTQQHGYXAMOGKJSWDCFAAWWSOPECAKQPIWJBDCKTPOELVNRDZXJTKZRMNJIBMWRJBXGIVFSXCREPVGHMYWDDFYAJRRWDUOMVNTWHFPYCLVQGCIFEIIUKTTGLQSSUBTPULEHCPG");
    tmp_msg_0.predicate.assign("EBFUDFXNYRUIBDCKATNCRMKTELEQOCYBJSRSXRODKMAGVJNBPCRQPYHOLKWHUCFOCKMAUHSJLPIDFZKWKLSRSVRAJTYUGOH");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.355724680437);
    msg.setSource(9916U);
    msg.setSourceEntity(187U);
    msg.setDestination(41709U);
    msg.setDestinationEntity(85U);
    msg.op = 119U;
    msg.goal_id.assign("PCDAYOXFZVEECIVGMRTTMFFDWIHKSNLTVUQJKAGLTHHNSCIFKJBLLJNQD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TPQCWCMRGFPVQONFCBKXMHVHYIUFGSEYPADQGBUHVOKBLNSLFEZKDSGJ");
    tmp_msg_0.predicate.assign("YFYUECJVFQOAXWHLZSWYHWAERDILPYDBMJKBLWJOYLVKBHQSUFZKVWAQDTHGMTEZWIGZBHWIVSRMCSWYKLRDTRJJOPSJOUSPHGOCCMXAZQKLU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LPRMAIZLLAYCPBUMYUKCLFVLDLRATGKVBUUFXQJQDVKTJNJBZYAFWKRVZWKNNTIGZEXOBRGOSQKFMBKKPEQAQRRIXHFCHUYKBVAUSWPHCRFWYDTUMETUTXVAXMRDEOVVZPS");
    tmp_tmp_msg_0_0.attr_type = 54U;
    tmp_tmp_msg_0_0.min.assign("RICQPNYLYMPVTCYHBZZHSOTRRPUWOSRHZZSMGTEVRTLFMJCREZTLPJVDEMSBUHUHDWKVWSQPJQCNFFLKHYBOJNJWVFBGVOCKRAEWZRGXOKUXHITTAADYBICBOYEGIXFTSDFVYIMFHWNRQJWBPWZGOGQBBEYMNTEFKOAUJMSGLAKAQIVUKQFMIXULQWXAQEDXJACDSNJBAYMIGKKEZUUWEPJLGPMRHVDPICHINZODSDLLAXSYN");
    tmp_tmp_msg_0_0.max.assign("OWQRNKTLNDPJUTSUPMSNXUXECSLMFYXEMJSTMDWCFWPCMWXAATLIGHDALZNLCALUTBKYHPVVIIQSRAYKOMROBYWJZPLTFDGOFNTYKQSIAPREGIYDXECZCTCZVBZGBKKYJBMJBKIUOGWLYRBCWFPTGSENVQZHHAOY");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.14662049504);
    msg.setSource(1888U);
    msg.setSourceEntity(146U);
    msg.setDestination(49486U);
    msg.setDestinationEntity(18U);
    msg.name.assign("KYWRHZOCEGENOJQDJLWHLFZLPHYQCVOTJBLJMWLXIEDTFDONXCIHOTRPRVQHKBPYWXOCMXVWFUNAKKKSETHZZDFTTIQHXAKIZMLOMRAVMPIEQBLQVSKODFUNPZESGFACKSGEAYUYYENFAPTZJNUWPBMTGYIWJFYSSLGJBPQUIUZUCXJEUHIGXQDDOGIDTZLCAZJGRWMVMNESRM");
    msg.attr_type = 37U;
    msg.min.assign("OEXVNLHXUAFOZXBEOGTHTZCVSVF");
    msg.max.assign("LQFLVAFXTRBOXUOEZYFUHTXGMLKURQSBJZYSIMJTJCADRQVQSZCVWATXQKEAOQMRPCDJWZGUYXIVEGWCENCDNVKQJAAWEOWTDOSGJCHGCMBK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.0481013744687);
    msg.setSource(21593U);
    msg.setSourceEntity(176U);
    msg.setDestination(50795U);
    msg.setDestinationEntity(63U);
    msg.name.assign("QNKZSPWUZBJPNACILQSLNDRQZCVZSXDFDYAUKXQUKVRSBWGLMFYTRHBGZEFMAONYPUOLYDJXMLXAUAHQNTVWKKZPXFOJKRYSIRGCMEKLNOQHNVLVDFFOIOXHX");
    msg.attr_type = 163U;
    msg.min.assign("EGXUKNYASFLPMPQLBTHLEWYHVAHHRNFOWCJPABTUCXOASWYMDEPMYYURIEEONEFMCUVJNZNWKRCMSSIOXBOYDBCQQULXKRCVWKXRKFJWMUMXDWQLTXHHWGQDRYIYPTTFATPARAMVPYZOSIJDVULLFJEVIDKUPWCSFBVBPLJXQRAH");
    msg.max.assign("YKVVVSCXTFQHPMYOOLCHFIYTHCRSFNLGKJTURPVCGOUQJUNSBAQTBEEADPXRDDLRSSEUNUDZCSRVLDNDTZBIACLJMTZIIFXMSJJNHELJPRPLOJXOQOZUXKFFLZKJDEMCXBPZEBDHTJIQAFKAWWXABUMDYZAIRG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.779590181658);
    msg.setSource(9871U);
    msg.setSourceEntity(109U);
    msg.setDestination(10640U);
    msg.setDestinationEntity(1U);
    msg.name.assign("WBYEJAHPNLHUIVDSSFULKDJBCBMKJJDOLSIIULXTCAEHEHBEAHINQDRSOEASGDLMYVCTWHCOUZTRCXXWFXWBVDSKOTNNKRJTZQNNAJIEGEPADXPJLYOEGBZMBOPWRAYWQZOXVNTTCRQHMIKURSIPXVMRFKMRCFLQUGFGZOMAJIFWXLJREQMCPTFYZAGDMIHGITYN");
    msg.attr_type = 236U;
    msg.min.assign("XMPYMBZDDKXDVSHQFNQHAGPFWUYXDWUNBLZHBSNFTUNMKVISDFAWNFYMCTOVRBAKKYNHDSJWUGTNQEADCIRUEWZPCVZAFLPOXEQWKSAQTSRXHPMKHMTEOBHQGQDLUGYRILBIJEPUGNPVAULVABNGGGVBCHTPZKIPZCYKDWGXXIASFJVMRTCHZAEIFRIDHE");
    msg.max.assign("ASIMLUCBDVDDENBCHJNVKOGNUGPRLRRFHMUKKWBOVRPXGO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.714427739016);
    msg.setSource(27391U);
    msg.setSourceEntity(122U);
    msg.setDestination(4210U);
    msg.setDestinationEntity(22U);
    msg.timeline.assign("IVEFXCRXXNSHZETEJSLDGEGYDIBVEBZJVFJLNUDEOKVKHXCWGUTPSVNPQEPUJRYHMLDAQUUAPRAMXBVATMQICWGKHHADIYPWRISBGZBSEEQJXGKCMQDHTWXDHFGZAFKKHZNIJWNOQPULLCVAGLQFJOWSCQLRFRRBOPKOXSOYFFZGMCRIWOYWCVYBHZBLKDDY");
    msg.predicate.assign("YKTNSMMYABPBFXVZUDXDKXESOYLGLWUZQFVUUQDCCTHEZNALPTYTUICNJXAWRRRLPQHPWNKQX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.664650564092);
    msg.setSource(31907U);
    msg.setSourceEntity(102U);
    msg.setDestination(35114U);
    msg.setDestinationEntity(70U);
    msg.timeline.assign("RFWKXMADXWJLRNKNGTDMCYYVLBKFYFTVOQEUXVVWMOGOJJYCHWKESJANEDDLJRGSIRPKUBKLXBCLZRFPNHUKJMEGQNGVHCQPXGJSHMTFLMPNROYZXYMTOIDIYEYHJRRIGCVGZQGACAWOQPUECTWHUTSZI");
    msg.predicate.assign("MGQPKFCDRVOTHXPZQYJRBQJHOCG");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("EOMWMHQWAGFVZXMKPSLHQYOAYQNGWGLT");
    tmp_msg_0.attr_type = 23U;
    tmp_msg_0.min.assign("HTEBOLMFXJGDOLT");
    tmp_msg_0.max.assign("CKTZXWPNWKSIXNHTFDKMKLYUIGAGDDNTOTEABJOAQMSYNKRFQBDBNEENYGXESQWMUPAFIBCUANHYXJLORBNYZZYLCQAMARXPCSUWMUVPWCHJKEIWDBGVORLJJEAXWUWCJISEHYEQSZTKVCHFQDGDSSZNXRDGIPXJFIMRIZVCROLEJMYBUPBVTKTVHVUAKSJMHGQKFCUTVAVOPT");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.16745461108);
    msg.setSource(47466U);
    msg.setSourceEntity(99U);
    msg.setDestination(56053U);
    msg.setDestinationEntity(183U);
    msg.timeline.assign("VBNCSGMXNCQYPTSSJGHTYNGXIKHUSAZWHFGAKZDQLJQGAJFOPJELILXETWZNGFYIKKKMPEDYCYIDVOGLEIMXVTQWUCCTRCEOPCQCUFEEHMRRWWWBRJZAROHTNAQOOBXWDBWLJZXIMEBHYBCGGMNVUDKILDYAYVHJPUUKDZAZBKQNWLMFFXRJYRBLIJQEPEMMDYZVWNZZPAPBGHMRUSBSFKNSXSJLKUQISRVTVHO");
    msg.predicate.assign("JDGMIJQMLOSZBQGOLTEQAPKLRSYUJZVQVRTZOIODWTNVAGUYLCQBABWXWVVRKCYXLRFHKLFDAVXMBYYFNEMCCRAHBZMHPIJUUZOBUTKYIZDIWKQNGDDGKRMNKVCUFLRHCNNBUWKTWYAGWHXNT");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("TCDXUATHEPIOYEWNIWOOLURDGRQJGQBHNJHGWDLKUFIFVOWUJZLYAWJHRPSYPUEYJXBPAWWEEUNMCSIMFFKANCXXMQQZLIHCNZOKKRDEVDBWKCCVSHTZRREPCOSZFZVDAJKMYBRVYTTMJCSOLAXINZEKDRFIAMUUENTKBZSGKEVTSQHJXLGVNQXOMMNLVGKBSQFXPLFVGDPQZTLCIZMOCYBQIAJVYBPWDOXHUMIRJXSBGYTTP");
    tmp_msg_0.attr_type = 146U;
    tmp_msg_0.min.assign("QTJQDKDQAVLHUXHJSNWOVGZLIXINAYDWGJJBDOOXCRZCACKLFWPURBYWMSIAPKKJNNZLCIDUYFCKVZHUWSEOSMSXELZVHBMWPYLCEKZQHT");
    tmp_msg_0.max.assign("IIZIROSQLWQKKVCCZDYJWWQOSBFCPAPODAWRXCTZZRHSYNAEADEMQWGIJMMWJCPFBZCOVHRTSGYVPTQYXEIFCKNUTLJBRNICBPCBGQDHYNRMORXNXZANRPQEJOSYUNUAVKWUPPUMIHSUFMNUUEEBAKNJVCOXHZRANWFGKFB");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.252743117001);
    msg.setSource(33148U);
    msg.setSourceEntity(196U);
    msg.setDestination(41945U);
    msg.setDestinationEntity(125U);
    msg.reactor.assign("PDDWRITTPK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QTXTJSOIKIOVBVRVTFLBVOYAGKGNZZGRLJDJKDSRSZUJEBZQAWVESETTTRXTAUIGBQNVEAYMQOCWJQOJWRKSAXVEKXHEKFOMEQIKWEUPXPXOTQQQHRWZJYOXBUDVCMUZLARHNXBWVBERZAXPCSTGLUHIYFCGZWFMSLYHMHJHNIWFNYPECDFYPSKYGNCJNPDLMCOHFUUWILKSPDMCTPNRDFIBZDGNKLODJNHDVFPUYACMBUQGHSRMCMWLZPLI");
    tmp_msg_0.predicate.assign("HYFJCLCRFLGODGGBZVVHMJKDCYFFEDKTRXSXVMSJQHHKSAWQTTJUYVKTBDEZRSNAIFQXPGWZWDDLREMQMUKQCCCAHLQSWTCTIENIRIOOLFHOELDEIWMNURGXPOPOODBPISTCPPMJQXISNUXXEYYSAUVFEAKJIYVQUVFBPIPBASRPEVJKTZWWBYXVQNNXYWJLWQKBUDMJTLNZLANZTLYRMUDUHKI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZPWTCNOTWDLSYNEKFDXCKAQQMGQZDJHPMZUYWSEAILRSSJIFTWMMZOXOCUAPDBNXBYQWVMXOIEENDHCYRUHGZVFJODGTLYOLQKGALEVGTLHLLVAQOHBQFIYM");
    tmp_tmp_msg_0_0.attr_type = 254U;
    tmp_tmp_msg_0_0.min.assign("UEHNUJFQYVEUCZKHEDXVRMQJGTGUOSZJZRAKZEXFSPFGLPXIGDISGFJWKVMBPJHHSNQYUHYILLSZYNCYDZRVDWXXSZQCNVSMCDAWNAMOHTYUOBGOXDNBONGDUYPFRRCRWWXLFTYQBXLMEGGTQDOVHNKXIROFRZPQHZBAHJBFWNJYMATIECPOKKAUSWTE");
    tmp_tmp_msg_0_0.max.assign("LIJGIMPMIAWKHTKZEVXIAVBROXHDKLEYMSCQFUVYYGEXOJEUTEVUVHYZGBQIWCZXPPQHWEOASVZXNFTFCAYRSDLZMVZNZTGTXIDGHQABYECCWMRSQGOATUDAWRDSHEQXTGRBSNJF");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.894556378512);
    msg.setSource(4168U);
    msg.setSourceEntity(86U);
    msg.setDestination(49008U);
    msg.setDestinationEntity(77U);
    msg.reactor.assign("BUYLRNDFGNEKWIRQMJYUACHKLXEZKDXBJWWDHBOKPJRFOUYWTLAFRKLBXUHZIKSFNEXKSBHTGCQVBUEFENRMPGDWTANTCGKKEYHANSCHPXWUSJWOAFVLEJSQVQYTXDAPZEBXBUVCOSVSNNDMBDVDQZMOPPMGIZVUMMOMYMYQPJTHILNGSCGFLUHFDOCQCHQLKZRWAYZXI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.00908145491431);
    msg.setSource(4161U);
    msg.setSourceEntity(175U);
    msg.setDestination(51534U);
    msg.setDestinationEntity(12U);
    msg.reactor.assign("RUNELBCAMIKUUDVGYJGPVVTXYEHPTXCPCUXIGFVRLSPPZSPMOLFJMZTSIUCOANOVBMHCTUFRGWLKWDEYNQIANJZJXSWZKDVNDHONYTABMQCSLEXWTJGANJOATIQNYQKQNIVFTYLODHMIOMHBGDSYEGWQMAXIVWTKCZLSIJQXEBFBQRPEFAS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RALNGFZQLUSJOVMSLKULPIUTRUDBBHXMCXCBEGQVKYPCIWWFTPZSEZMADIHSTXLROJHAPHHAUEAWGQNFOUTCVJXNVBSNSTZQNYOWDUIYNREKORVNRSDEZGVKKLPTMUBYUAFLOHRYGYFRYCMGZGVQXIQWXPEMNFJIZLOKIQOKWAHKDYXIXNRQJGSZYDHEBGESNRUAFJIWVBJTJBCDPDTJMMSTBLEMOIMFG");
    tmp_msg_0.predicate.assign("XWUICNTZGGIOPIHTFJDDFCGEGWIPWNXFAVZFKJTSMMDSORAULOXVQKHKBMKKINQCRUWAJKMHQSFOQOIVJBVTAFPRPHULCYZAFXVONJYMZSVLNBGUWYESUEYMNDQVYCTZEZWYDLDMEEJLBXDQBCYSRDBRIGKORUNNOXPIVZQJAPGXVWWXBDHSFFNRNHLAAUPMVCAGWXETDKTSJIRTZCRYJQCLITXPAOGEPBLLEBYQUQSKOKSCTMUP");
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.0567041826779);
    msg.setSource(60191U);
    msg.setSourceEntity(38U);
    msg.setDestination(3825U);
    msg.setDestinationEntity(224U);
    msg.topic.assign("YDWEFJPSULIVTXMXYDSBLUKFOUDYTRSOHLXTHSHGOTKZOVNWEEVJKAIHOOHMINLQEWIZUUNPMIRYSXOYJANUFZADIJPZPVTLZZVKIFCDUPGPBRSVABCXGOURKCSOQQCFNKCQBAVBWEUXJFBSBJSQMHVZMWIPNEOYXWBHEJNMWKCFTRKIQDQXLCXGUAMBCL");
    msg.data.assign("GGQSPGMZZGBFPSZWJQMXLJOWFEQGCLSXNRBBMXJNDZPEXQUIIIRWCXDCRCPUVQAZAOQRWOHYNY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.616441974903);
    msg.setSource(29289U);
    msg.setSourceEntity(65U);
    msg.setDestination(25123U);
    msg.setDestinationEntity(109U);
    msg.topic.assign("SYSDLPUGIGLOAJYVSEKMVDUBNYNGWDROXEYXGJEEFXPQBDTWKMRNGZLROEFIMYAAYAUUUWSPFWDRCVZHEJOCSVKIJTOAKRXVNDHBJMVVCZWGISSFHZQSWKPSTFBTWHPUQKWOEDXKZCZBFIUUOCAACBNYGJIUPHIBNRTLPHFNHKCMVMNAFRXBSORETHZELPPJJZDXXQJGMLYLHFQTGROBLT");
    msg.data.assign("MKWBPPKFVYGUTPJGFMUPDDSICNXYOBJLGCGOUQQRTZLXCSFAPROXIBFRFTDTCTNUVZRDPSNOMQKBIOODRGWRHHUDOJQEAXIZEKSFHVAMQVEEMLKJYACWSYRJAIPCYKWFCOELEECRNJBQFJAIYMVOQIHWTGKFHKAZYSXZTTAVEXEMVZPMNYLXUZWCOZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.333292988311);
    msg.setSource(32237U);
    msg.setSourceEntity(142U);
    msg.setDestination(35650U);
    msg.setDestinationEntity(49U);
    msg.topic.assign("DDYRLBMBZAFGEDOKAIQENJSPSPIUSKZIERWLJTOFOWEASDVOVEJTFPANMTRHRRUWTIGTAZXBVCK");
    msg.data.assign("KPAKYUQVKOEWJXHGMLWUZHDWJJTVBYEWCYSULNSGOFRMVLLYGMKIOBRHBLBMTVPAECTHNSTKSAPTYZHAOTJVXMVPGMBMYDCOBXFXNJZFQLQHKINGIYZQYEEIALCFYSJMRUSWUKNCQDBHNRRTPRWZYOIPAQUPSTIPNNZBDGRCH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.981643571044);
    msg.setSource(22280U);
    msg.setSourceEntity(15U);
    msg.setDestination(4836U);
    msg.setDestinationEntity(245U);
    msg.frameid = 16U;
    const char tmp_msg_0[] = {57, 70, -76, -96, 110, -30, 45, 118, 6, 103, 35, 38, -50, 108, 20, 24, -100, -67, 92, 103, 17, -17, -11, -126, -33, -107, 28, -18, -117, 19, -115, 55, -16, 20, 54, -6, 104, 67, -91, 69, 63, -4, -14, 99, 63, 39, -90, 101, 21, -34, 93, 8, 118, -81, -49, 43, 42, -1, 120, 120, -90, 29, -46, 65, 99, 12, 0, -88, 20, 112, 8, 1, 64, -76, -92, -112, 25, 25, 76, 76, 36, 54, -54, -57, 2};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.965275766575);
    msg.setSource(55588U);
    msg.setSourceEntity(138U);
    msg.setDestination(43910U);
    msg.setDestinationEntity(131U);
    msg.frameid = 242U;
    const char tmp_msg_0[] = {16, -22, -110, -107, -52, 11, 67, 89, 109, -109, 119, 22, -8, -27, 108, 55, 32, 28, 109, 119, -95, -69, -31, -46, 4, -84, 124, 6, 97, 50, -126, -91, 55, -121, 57, -81, -75, -75, 80, -67, 123, 45, -83, -64, -6, -121, -10, -90, 70, -116, 12, 57, 97, -88, 101, -32, -86, -21, -75};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.571693862212);
    msg.setSource(35715U);
    msg.setSourceEntity(31U);
    msg.setDestination(36625U);
    msg.setDestinationEntity(252U);
    msg.frameid = 186U;
    const char tmp_msg_0[] = {-45, -44, -28, 37, 107, 116, -114, 79, 68, -78, -111, -16, 62, 87, 27, -28, -95, -101, 124, -32, -98, -49, -24, -115, -73, 58, -43, -51, 32, -73, -63, -52, 5, -121, -28, -33, -34, -128, 96, -28, -97, 52, 9, 43, -105, 95, 116, -47, -78, -8, -54, 37, 97, 67, -5, -82, -103, 113, 101, 78, 30, -114, -68, 105, -61, 78, -36, -74, 73, 107, 120, -40, -9, 104, 121, -104, 92, -14, -96, -97, 117, 60, -104, 115, 4, 0, 27, 20};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.585068513943);
    msg.setSource(9285U);
    msg.setSourceEntity(154U);
    msg.setDestination(8461U);
    msg.setDestinationEntity(229U);
    msg.fps = 39U;
    msg.quality = 210U;
    msg.reps = 195U;
    msg.tsize = 52U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.145952737046);
    msg.setSource(52192U);
    msg.setSourceEntity(145U);
    msg.setDestination(61301U);
    msg.setDestinationEntity(210U);
    msg.fps = 48U;
    msg.quality = 74U;
    msg.reps = 122U;
    msg.tsize = 203U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.911265551202);
    msg.setSource(65352U);
    msg.setSourceEntity(1U);
    msg.setDestination(37498U);
    msg.setDestinationEntity(50U);
    msg.fps = 97U;
    msg.quality = 242U;
    msg.reps = 121U;
    msg.tsize = 17U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.0131524111148);
    msg.setSource(14548U);
    msg.setSourceEntity(206U);
    msg.setDestination(10625U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.0302124340025;
    msg.lon = 0.0918392637575;
    msg.depth = 96U;
    msg.speed = 0.662407329784;
    msg.psi = 0.449148429086;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.405347185179);
    msg.setSource(5472U);
    msg.setSourceEntity(208U);
    msg.setDestination(62546U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.550181191433;
    msg.lon = 0.38982474247;
    msg.depth = 86U;
    msg.speed = 0.766848281449;
    msg.psi = 0.125108028227;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.181318078173);
    msg.setSource(13243U);
    msg.setSourceEntity(0U);
    msg.setDestination(9221U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.718315401262;
    msg.lon = 0.847084314783;
    msg.depth = 195U;
    msg.speed = 0.915681306664;
    msg.psi = 0.483526971708;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.417386400992);
    msg.setSource(56952U);
    msg.setSourceEntity(25U);
    msg.setDestination(48707U);
    msg.setDestinationEntity(193U);
    msg.label.assign("TCEBVEHUOLRNORZZ");
    msg.lat = 0.929385881937;
    msg.lon = 0.735965276396;
    msg.z = 0.91977651678;
    msg.z_units = 124U;
    msg.cog = 0.0764918844247;
    msg.sog = 0.426439885946;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.737071210403);
    msg.setSource(52664U);
    msg.setSourceEntity(199U);
    msg.setDestination(4904U);
    msg.setDestinationEntity(32U);
    msg.label.assign("THMCUQHNZYAYVFZHCLMEXTNVHZEWIJABEABWFVYGMTRJPQTIYNMFZBOONCICIGQVECMLXVYGJUNIKDPCNDITPQSQOLJJPJNLXXUSKKFXUIEFRZBFDBWXGRNKUDFCXHGZLTKNKJFEQASMQZMNSKHEOYBXUDRHVBZGTWSHXLWKVFDLUDASWHAAYCRJIMAPDJXTOSBEVQKRFPTOJAGTLUDUGY");
    msg.lat = 0.95845270776;
    msg.lon = 0.120040253071;
    msg.z = 0.637306051302;
    msg.z_units = 112U;
    msg.cog = 0.075414324634;
    msg.sog = 0.947477844675;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.774193820172);
    msg.setSource(31328U);
    msg.setSourceEntity(175U);
    msg.setDestination(35325U);
    msg.setDestinationEntity(120U);
    msg.label.assign("LYTUWFGGSORWDIHZDOEBPGRQBLHQRSQWBGIXDQKYVLLAENJWUPCAQHEFTEKUELFBFNOAVAPNDVBEVNYMNMFXXPMSGCLVQZGIXZRKHOYEIPGZVLCETWVXHTHSMVSROXCTNBIWCDWSQGJIFZSYEVUQTQKZAWAAMHCKBDJTKKDHAIPUJOBLZBJCMFQMLPGSRSARYXIJKHGFZODUXUXWDSCJNNKYTDMYZIHREJMTLYOUPRF");
    msg.lat = 0.272791398048;
    msg.lon = 0.992158797786;
    msg.z = 0.726659064759;
    msg.z_units = 152U;
    msg.cog = 0.654629361472;
    msg.sog = 0.641293526154;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.788407006037);
    msg.setSource(33966U);
    msg.setSourceEntity(205U);
    msg.setDestination(22795U);
    msg.setDestinationEntity(157U);
    msg.name.assign("DNYKRXFSHHZTLBQCRQKEHZSWZPDVXEUMMCAZQBKVHDHVXNMFSWXXPVXIMWWTUPCHZDKDBYPAWTRIGIRNIPOCPKGNBTCDUAVWNNBYECGGSYNMVZEEQGXAPQBRXQAQAWTZOWQUOOPKLRFSWRYEEQNJKGFYMOLLIR");
    msg.value.assign("LZDKKPSTTVLQRSZPTKYJXEZTOWVMRPKIAXXVADPRUQXTWBXNUXBNVEBRGCEUUOPMMQHMBVCGJGOSOMXHBGBZRWSVJSYIILKFLOXFFICOKAEHHUUATOAEJYCJIZIMQBEHDPXZNNGPWATUEAZFHJHGVDPKDLHGNQQUCPIQFDWXJYRVDLWWRDFE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.396421998351);
    msg.setSource(17769U);
    msg.setSourceEntity(40U);
    msg.setDestination(9749U);
    msg.setDestinationEntity(96U);
    msg.name.assign("SNRIHANUVSCDWEHZLFATPOKIKEMOYBOIDYHVTYRHVPEMFXKLGQPLJDTTVCJEIEGSOXNVSGIGKVNXNNPQ");
    msg.value.assign("EGSZINTYBROLMIHRDYBPVZYXDAXEQEOMBHJCPKTBUGNBFPCYEIZKDETMZTCKZXFMYBAWRRWAXPJCGTWAVNNCVLKZHOQTXDNJAIGKRUFODQHNSWSPVJNXHJEIGFPKUKFQDBTRGFPQQPUDCIWGVSYOJOMMYAUQLEHHACVMVABFGDTPUEUQMVXYIFPSRXBCJFGVJNNDE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.0575587893491);
    msg.setSource(23808U);
    msg.setSourceEntity(213U);
    msg.setDestination(12934U);
    msg.setDestinationEntity(84U);
    msg.name.assign("OYZXPAACKQRPOXERJVXUJLATTTGNRAPKNQZLHHWUZIEYFKXHIZDCTDQHLYQNYLBLMTRXRLTYQJNIBGOCGYSZYUSMPAGDKUFYFDHHGPFIUQAWAOTGHEVVMZBABTPTKBBKWUWLRFVIIWVFWYLDPXWWEGVZFSOFXNZRQEVJVMXQTOJSAMHNEKCQSJUJNVOCNIKUUHECJYAJSXDEOFZDMMISFKPWRGMBLDJOOSPZMWCDLXPGGBNUDI");
    msg.value.assign("TZOJCIBNVCLRPVFRFHJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.739716972749);
    msg.setSource(1798U);
    msg.setSourceEntity(86U);
    msg.setDestination(23449U);
    msg.setDestinationEntity(71U);
    msg.name.assign("SRATMMRJLGQJPEXUFVJBKSPHLLSHOCFAMMDUYQFIINMIWTQHOFCOYMAKLPEIXCJZTQNJKNXWZGEGRPZRUCRRCGZSETZBIHNBGKDZDCEWF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NAAXYXHEGYRGQEMYNDDPQECTGIJIPULLGQIAOUQSVONZXEMAMWNAUKGHYLDCVPWTVQSPPQSZHCOCBRTCQXPHRNWSUMIFBEIPVPYUKSBHLVLALYRKKHOZNXJXWDUFETKRWXNSFFMSUOWNMRCCCVOYBJVIRPZVJFTCXWLSJMRLOFJYQKHMYOYXEZBWCFMDAZIQRGKKGJNBZTILTWDAZDEKRTHVSQF");
    tmp_msg_0.value.assign("GYROTSBNSHPBNKVKUJBIQBVLWYFODBCJQLQTQWCHVHBCTVOGZZKKPFADONVPCGEXDZIAFWLBTWNKYYGZWMNNCFYLUFIDZZJEXAUXSSSGVXTYLUEDGPCYUGNERLDHNDMPSNOLYPXRHOQXZFWVFSUUXOUVBFTEIGEFCXXTHFASWPHKQISWJDOEAKJGWMR");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.382595768777);
    msg.setSource(21956U);
    msg.setSourceEntity(167U);
    msg.setDestination(19475U);
    msg.setDestinationEntity(92U);
    msg.name.assign("MSMUYQHFFWAOCBBBXCYQXSLYVNDNQTLOXADBPADIVLHTEEZJVGGCWTDPMKAR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZFCPOXVFAFMLHAWRRONNVBNDWEXGUXHTZUNIMHOZRDCHSCJYESVLNUNRQPTSWYSFXGTF");
    tmp_msg_0.value.assign("BYXVDAFTHNCGDKOHWBLELEKTOTKJJAWWBBNIZUXAGGBMUFHQIVXPTFPMLBYXNKZZFRTEUXHHJGRMLRKNXPOLSTFRMPHEGBYXQSPPXAGHEJKQQFUOMGBSUZUDSOSVDOZNLQCICVGWILPHZJDIWAYCVARSG");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.53005588451);
    msg.setSource(31865U);
    msg.setSourceEntity(213U);
    msg.setDestination(9226U);
    msg.setDestinationEntity(67U);
    msg.name.assign("OEBQTQYZCPZXJUFWTRFANVLOJQSWEEVNBYEVSWRHDKUUBLAQIVVZUUSFXK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.439852886655);
    msg.setSource(23076U);
    msg.setSourceEntity(174U);
    msg.setDestination(5128U);
    msg.setDestinationEntity(103U);
    msg.name.assign("TUBTBKZJTPCBASFXCULBRVKTMLEBPLTWIIFJWOPGDADSOAVJJCWLDBWNYDMROJNIVKAOLGKGQNVNYGZPVAYSWEYUVTHAJMFKHNWCSQGMIXGBUHVQPJKMRUSMLAFXZYQKYHXHEUVGXCORTZYHRDLSXQHMCOZLYUFBIPJDSEMSOOJOA");
    msg.visibility.assign("LIJOLHSOLEDTLOYIFZRJXTSGLYORTPXKTEKVUDIUDRQPKCPWUBNBFDHFVVNAWCMSOCPFFXBMEUAVXCZHUJUEKYEEBIGBNBUALCLNRDNQIGGVCMQWRQECMNTPKQZXDCZZDAZHIFUXSHGAZXCLFTODYMIVSFGPZJNBWLOBRIJBVTJVJDMOGKWMPFQFNHOGITSMRRITNGEYCQRXJTPSAPJAZXPA");
    msg.scope.assign("OQCWBSATMNBJRDBTFEPXEMTGOCLPVRIVJLDGDXGUFGFVHRKMZVVIPRMHKCIROENMRXUQUACOIHQWEYABAYWNRZTSWJNKIXDVGHPSZGFEZLJKQLPQVQDSYIJCPPNSXKDWAECYHQPAEEUKLMAPRVBMOYBXRZNSQOWENDKLTVUSJIZHLCJTIHOZYHUUBZWWHQCCICTBGNZDF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.459703547774);
    msg.setSource(8046U);
    msg.setSourceEntity(35U);
    msg.setDestination(45947U);
    msg.setDestinationEntity(90U);
    msg.name.assign("IVYNOZGNEUKURQCLPGLZJXNFQMGUTTEUETZDVRLYZCIAFLDVRLNAXTWBGFHTSYUFPBTJHBYYGCKIQJJSBUANVPDMFGAVJTZUMERMIOUOZWZXQWWHQNWYZYSYBMBMVHJSRSMMPHXWYOYBERCCKLSAPACPFXSKEDGQRDHGNQXDUSTIXAXJJQIPMWCIGNPHGVTNDJCSEFIOVKHODBRUVWORDOHBFSKOAEIEXNQZJLLM");
    msg.visibility.assign("JLWTOFNYLCWGXGQCLXAGCSTXNYVRGZUDBBLUVZZIGLPFIIJCHBWNFMCMAOLWEVXRDCTLQZBOJUKIAFQJKPEWZANUVPSHAWBQRBHPLKXSQCLUTKSMHDRRSKSYDUOTSAPEVMFPMBVWNBODPYKXRBUAOJIYYPMKFIHAITBHYNZEGNJCMQUYMZMTGNQD");
    msg.scope.assign("ISXCXZFMKVIPQCGSPAMZIWBPAYQZJJECQKQWOBCTRORJXPEAKTGSLEUMVKGZOGNPOPFMOLHNNSJVVXYYLDW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.880770879297);
    msg.setSource(23675U);
    msg.setSourceEntity(165U);
    msg.setDestination(21690U);
    msg.setDestinationEntity(151U);
    msg.name.assign("BEHBYSYEMXYFXKQGUULSVUMQHJONLDTKOMJQMXCOBXFNYBBLJAFLOYMVHEWQLKCUIKWHKIRKZUSDZRIOHCPZKKISGPVGAJENJWFAQPEMUWACAHTFXXBDYIRQZRHFLCCPTDNBDQPYFWAVENSSTAIZBLONUTPOMCTWSECGNUGIQFBZFMZMAYAQBPJQRNDZGKVEGMKVJEORIZSVURHPGCDWAIPDHJORXCNRLVOWVGHJYSLNXTXGZFWST");
    msg.visibility.assign("MIJVXGOERYBWHVGXUXNTPRMSGUQTAQKPFSXVZPTKZGVPAURKUZ");
    msg.scope.assign("HGLOAEVUNNZIVHUFDPCCPSSXHTOFVRQWQXBLTEJVIFTFBQAOHDQUSALVHTWKGQDSYUMZJARJGTIBGYIHRMPRZMTUCWGRVUYLRYXLJBXUTRZHFSPCSZDYZTARXNXWXNKMOPTWHQFNLAMVDWHPMDISZONIKVFC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.518582928746);
    msg.setSource(6826U);
    msg.setSourceEntity(165U);
    msg.setDestination(54173U);
    msg.setDestinationEntity(245U);
    msg.name.assign("TRFOFYRPXVJWIVLIGNVGFRKGBMSXEDQULOYTPFYGTADCURQOQSNCZVVRLZAXBRVWNUDSCEOJJWMJQLTYXDAICRDEYCCEYPNFLQMMP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LLICTENPLPZDQNUIVYIEWHCWWDJSQBDDNCUUAQ");
    tmp_msg_0.value.assign("IOFIRPMHRCOBNGOERFYRYBONWCMLWMWAECDSAOVQPUKLIYXXLYYPQPJELQHBZZHGLZLPSTMVLTHIIKZTPUSKXZIEDEHWFCJKZJMEWQT");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.904698202776);
    msg.setSource(44560U);
    msg.setSourceEntity(113U);
    msg.setDestination(14184U);
    msg.setDestinationEntity(246U);
    msg.name.assign("BMRHEYPIWFOSQYIJUUNAYGNEMSEBTCTWMEZZJHQUXQYETRJFZVAZDACIQSVKVNUZWOVBANUICREKFOJSDAGAROFNLXSXDB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.505610774944);
    msg.setSource(44789U);
    msg.setSourceEntity(127U);
    msg.setDestination(18214U);
    msg.setDestinationEntity(253U);
    msg.name.assign("LNGEFIFFIKPUZJTFUNUVCQNDSGEMPYZACTOGIOMWSSDCSBHPLJZORQCPLVQWJASUAMOYKZOXBBVVFLUPBLNWYVUWRAHKZVATHHBGHOCYKIJGIWRQBFFTJIYPVBQLGLMATENWEDNYTAIDRKMMADUZIDSJKQXRLKSWREDEBGXFWPOEVHCYTRJSGDPOEHGIOZXXR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KHNDGMRSNMXKKUAJEWCBBEXQQODTTIPDWMSEDRIYCVMENHGUGOKWEPCWRNNGOSBCUXRVFPKXGXRSUIKVRZEKDCJVJSGAEFAAUZVSHQSRQFMYIPDKLWLKYOESLFWTYHQNCXOHDSVILOACBKUOAPMZGFGBHBQHJYYYZXJUPTAJUDMIFN");
    tmp_msg_0.value.assign("CNCWZYMRHXWSJHQUPCYLEPRSMVVAIXKEQPXYEOLHZADABXNHQHJQIZEWAFNLQFCSFTWKJBZSVDMKJEHGDNFPVAHBZKOTGKIBRNGMGRGEYMKIVSLWFCQKQAZODUNDGREGVORLMDHJSLBNYJSTREBRCRPOANIJQABDTFIMARZUBXJLJIOHODUYLDEVXVPZKMXMIWZCACLWZUFQCVUUTVSITNUGCMQPWBGYYBUWXOTPFKDHXPTSEKYPFIGUOFWT");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.274512616155);
    msg.setSource(56926U);
    msg.setSourceEntity(91U);
    msg.setDestination(61300U);
    msg.setDestinationEntity(26U);
    msg.name.assign("QZSZRBKQYAUAMBYAKAZGPJQPKESHFTJPWKPYSSNITTBIMMOINVOEJFVLINZZCWXTJRCGFEUBDCEOJOQDNGXMOFDRMPHUHUREFVTLTJAJZAKNVCXIRWLWUMBJYLPASNHUGQHIIALLTCAIWQCQNGPXMDYUEVRLWEQNYCYTUOFBSXSUKBDDTKESHIOMPZDHOYLCVRVXZSDZS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.321852278623);
    msg.setSource(19436U);
    msg.setSourceEntity(140U);
    msg.setDestination(15119U);
    msg.setDestinationEntity(77U);
    msg.name.assign("TKNXGJZLSMSMEUOHYYWVGKSNSXTN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.190990962549);
    msg.setSource(10568U);
    msg.setSourceEntity(157U);
    msg.setDestination(23257U);
    msg.setDestinationEntity(170U);
    msg.name.assign("NMNSTGZJIFFUWKOQDSLKZFFPYGVRQDRLVAWHFXCRJIRNWQPOYZMGHLWFLSQGOBYSEAGGPIVDYDQUHFCRXIXLHLASAMNRVVYUJACPDEIGM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.195373106282);
    msg.setSource(23226U);
    msg.setSourceEntity(91U);
    msg.setDestination(50697U);
    msg.setDestinationEntity(156U);
    msg.timeout = 2610797044U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.56402998095);
    msg.setSource(40263U);
    msg.setSourceEntity(141U);
    msg.setDestination(51763U);
    msg.setDestinationEntity(45U);
    msg.timeout = 2629224060U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.198683406714);
    msg.setSource(31843U);
    msg.setSourceEntity(96U);
    msg.setDestination(18821U);
    msg.setDestinationEntity(208U);
    msg.timeout = 764669784U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.390265956579);
    msg.setSource(53586U);
    msg.setSourceEntity(251U);
    msg.setDestination(54169U);
    msg.setDestinationEntity(229U);
    msg.sessid = 4230113794U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.321062198721);
    msg.setSource(42467U);
    msg.setSourceEntity(120U);
    msg.setDestination(62315U);
    msg.setDestinationEntity(188U);
    msg.sessid = 1451075071U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.618040827786);
    msg.setSource(11354U);
    msg.setSourceEntity(223U);
    msg.setDestination(38559U);
    msg.setDestinationEntity(143U);
    msg.sessid = 3900284669U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.38201232873);
    msg.setSource(31637U);
    msg.setSourceEntity(4U);
    msg.setDestination(23548U);
    msg.setDestinationEntity(245U);
    msg.sessid = 4175446578U;
    msg.messages.assign("KUPCVLEHSVLGDFLW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.138925240535);
    msg.setSource(8743U);
    msg.setSourceEntity(38U);
    msg.setDestination(56702U);
    msg.setDestinationEntity(51U);
    msg.sessid = 3646268885U;
    msg.messages.assign("VSSNEIJUYKLQAAKUJHCXLRZOIKWTDRHEAWBXYPOPMFCBIMWBBSJIWBLPQDUZCDQJBJFPFFYOGMHCBSOBBWNMTAPOMDODMIUJUTOGARZEXWDNJXHDSXAZRERRVTVQZXZSHVLGVLFFGNETWCKACSTUXZAIMFONHXUGJSQVRWGLIUXONFYGIDZFCVYAXKYHCNHRC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.0719195668851);
    msg.setSource(25284U);
    msg.setSourceEntity(62U);
    msg.setDestination(35265U);
    msg.setDestinationEntity(181U);
    msg.sessid = 280474895U;
    msg.messages.assign("SRTUHIOJRAVNJZYOKKADKRGGYDHLXQXWSKRLTQWNGIXGDVOTWISWMTYICHBJZPGZKRAQFTULCZESCSMWCGFPITXSIBTPMVXLOHDEFJNHLBHBOJJDJUSYFRLFEMUMIZPAZCMWOCLWWHVEEXOGBBNANRCGPAPDMWOTZFZJRYXQYJOXNFNVAZODAQUWKHCYHUGUQBVMFKIYLPEASEPCLUDQXSMKAHKNNJPTEBYEMUBDQQFVGPNBVFIVUXDKYZC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.863031791472);
    msg.setSource(56539U);
    msg.setSourceEntity(100U);
    msg.setDestination(33034U);
    msg.setDestinationEntity(35U);
    msg.sessid = 2570526039U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.59802539831);
    msg.setSource(3132U);
    msg.setSourceEntity(169U);
    msg.setDestination(33478U);
    msg.setDestinationEntity(99U);
    msg.sessid = 2495762801U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.677775313523);
    msg.setSource(51795U);
    msg.setSourceEntity(130U);
    msg.setDestination(65430U);
    msg.setDestinationEntity(85U);
    msg.sessid = 3012166916U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.589561718005);
    msg.setSource(21132U);
    msg.setSourceEntity(238U);
    msg.setDestination(43376U);
    msg.setDestinationEntity(130U);
    msg.sessid = 8985019U;
    msg.status = 195U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.438646567629);
    msg.setSource(30323U);
    msg.setSourceEntity(172U);
    msg.setDestination(39467U);
    msg.setDestinationEntity(88U);
    msg.sessid = 1388052509U;
    msg.status = 121U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.614047052749);
    msg.setSource(52515U);
    msg.setSourceEntity(99U);
    msg.setDestination(61102U);
    msg.setDestinationEntity(59U);
    msg.sessid = 3334451922U;
    msg.status = 234U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.452385271341);
    msg.setSource(56489U);
    msg.setSourceEntity(80U);
    msg.setDestination(639U);
    msg.setDestinationEntity(210U);
    msg.name.assign("XFWZEKYACVIBNADGYBKSHTZRVDTQGQRYCPZITDEPERSJUNNR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.486091195317);
    msg.setSource(25287U);
    msg.setSourceEntity(37U);
    msg.setDestination(62048U);
    msg.setDestinationEntity(253U);
    msg.name.assign("EXTXINEURYKBKZNTYWYMKRJEUFXUZAONUUVFLMKZQHHLJZRSIFBMCRTHWVGMDRZREBVHOXPSVTRJIYLWNPBMKQGYNCOHYDFDJXGHLXZZDZAXSIWAHJABFYUEHKJWORAISTNSNPBYYCJVJGHGQJDWGELKUEBZQJDSTQPAXPUDOSAMHAXBSWOCIKEMLWDRLUDLQRKYCVNKICNSUMTEQQAMFOLMPPEVCCBFAFGPIFC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.238889589071);
    msg.setSource(20508U);
    msg.setSourceEntity(243U);
    msg.setDestination(40771U);
    msg.setDestinationEntity(20U);
    msg.name.assign("OAKSZSILWEZMDTHXGZZVONFUVJMXUGTZIZNKAWGNUZXEQUDRQETBDUVRPRCAQDVSOYMSBQXIREHTGTWQDWDJHJYJKEPULBUADRYCOCBPRCEYNKGXVWJVHJCHPJWGR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.844104211896);
    msg.setSource(4459U);
    msg.setSourceEntity(216U);
    msg.setDestination(10839U);
    msg.setDestinationEntity(127U);
    msg.name.assign("XHYJKMGPVYLQSIXADIYYBWXDZRXBYZVZHTOHROKKMOACEUMWWALIMLJMIONRFUEGPJBEVAAWUJUYBBSVCFOEDVGIDCCMSDEKAXZBNXKBCEYNYFALLWSJZDMXDPZSANSVABPMUQPXNWIKQWCNNEUINSFDGBZRGHGOHRTFCHGPXKUWFMTSQTJTRTCHVVPJHLWKOZGYERFOAVOITLGDQJLKDW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.844557939883);
    msg.setSource(23590U);
    msg.setSourceEntity(186U);
    msg.setDestination(47323U);
    msg.setDestinationEntity(183U);
    msg.name.assign("SDFERRLBGJUNLINKIAXUZHFQKMXJSCFUHWO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.0738346838152);
    msg.setSource(12720U);
    msg.setSourceEntity(19U);
    msg.setDestination(20712U);
    msg.setDestinationEntity(177U);
    msg.name.assign("TISEUXYGEAIPFEBDIUNCZTXRBUYALVFQYHLBIWLPWKMYDJXEZYOXELOAWGZOAMKMHUDBPFQISVSTUHMCRLJGXH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.669881848137);
    msg.setSource(28206U);
    msg.setSourceEntity(237U);
    msg.setDestination(15979U);
    msg.setDestinationEntity(226U);
    msg.type = 39U;
    msg.error.assign("EWJWMGEDTLZGTDOHULAZQDLTRENIVNYQNSRUQELNXVOGCQCSMXTNBYJBEFPTNZIJSPJIQXQIGAKJTJRBHKLKJPMWEKSHZOHVYGQYKHMEDOALDHJBXYKCHFVDZFSUUBKWFACWWBFXWFUBGEDSXAVZOXLFUJCCLQVEMBDWWXPLTAMVTUQJYUYNEOFGGZHDI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.462097467332);
    msg.setSource(28136U);
    msg.setSourceEntity(176U);
    msg.setDestination(18898U);
    msg.setDestinationEntity(206U);
    msg.type = 146U;
    msg.error.assign("YSVWEZTRVBOSMARQWCOIJKIVHBWTMWCPWBJBZRPBTJLJIQMQVTWRECXAAEXKUJUGYCUHKPGLMDYGWQDZLWIMSGXLVNXVPCJPBOQKVELKEFGEVDUFTAMBSOZYUARFOSNCKHGRACMDNHFGMSFYKFTKNDXMHQIUHUTNHIOQJCOLHLYYUQLRNXXDCDFEFSTZSNGTVULURPRZBWAYVEOBADZHBQSNOAIFJOSR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.0742540984031);
    msg.setSource(37410U);
    msg.setSourceEntity(145U);
    msg.setDestination(54921U);
    msg.setDestinationEntity(104U);
    msg.type = 47U;
    msg.error.assign("KFNFEOVCPPQUTSSXKLWSGLOYEKMZGYSOKLZHWQIOENFUADNVYYLCOFXEJB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.831536151374);
    msg.setSource(61355U);
    msg.setSourceEntity(184U);
    msg.setDestination(33606U);
    msg.setDestinationEntity(217U);
    msg.seq = 56080U;
    msg.sys_dst.assign("EXPYRWOGKIMUWCHQRPHQVJSUSAWNNBYRWAHIISORORCZRLWKCQGEJRHFEBBZTPO");
    msg.flags = 31U;
    const char tmp_msg_0[] = {-41, 31, 69, 18, 48, -92, 86, 80, -54, -71, -58, 48, -85, -77, 112, -123, -34, -23, -126, -49, -116, -70, -99, 13, -82, -79, 35, 71};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.359329777087);
    msg.setSource(50017U);
    msg.setSourceEntity(194U);
    msg.setDestination(5243U);
    msg.setDestinationEntity(58U);
    msg.seq = 12933U;
    msg.sys_dst.assign("GMVOEDNXJOYYGHJVXBHQCFRDWLRULSKZPZUGIHEEWCEJMSPXLIKLVILZXWPLMZFRKSZIGDQWFBKIBVTAFRUMOOHHUFBWTYNVJPRYSACWPDDNGXEMCHQTJKSAQFOTAMDYTZKWNYDDWGBBASXEJSLSKPCD");
    msg.flags = 71U;
    const char tmp_msg_0[] = {22, 56, 120, 57, -47, -67, -88, -85, -121, -74, 7, 2, 14, 30, -17, 65, 31, -59, 91, -80, -52, 9, 69, 120, 12, 57, -100, -40, -22, -31, -35, 96, 8, 38, 96, 24, 69, -101, -23, 71, -120, 93, 19, 9, -106, 104, -78, -99, 65, -124, -38, 4, -72, 82, 77, 88, -55, -102, 24, -100, -123, 50, 19, 93, 89, 64, 34, -73, -95, -101, -110, 82, 72, 65, -40, 47, -98, -13, -101, -96, 8, -2, 51, 22, -7, -31, 125, -53, 111, 79, 3, -97, -123, -117, -116, -11, -116, 77, -20, -16, 97, -101, 89, 63, 43, 77, 36, 28, 15, 49, 28, -109, 15, 24, -49, -23, 20, -69, -9, -66, 119, -23, 49, -121, -82, -107, -26, -10, 6, -20, -23, 118, 34, 32, 116, -26, -32, 89, 71, -71, -104, 77, -33, -50, -100, 19, -77, 119, -107, 81, -116, -64, 84, -47, -57, -16, 70, -41, -12, 74, 69, -61, -60, 63, 46, -77, -78, 44, -126, 90, -26, 84, -38, -101, -17, 102, 48, -125, 122, 75, 34, 57, -33, -38, -38, -48, -62, 26, -109, -113, 64, 51, -46, -63, 82, 115, 112, -9, -70, -108, -34, 103, -113, 59, 18, 110, -81, -123, -40, 69, 86, -124, -26, 5, 109, -88, -78, 41, 94, 78, 54, 60, -115, -118, -111, -13, 113, 111, -77, 33, -45, 65, 3, -68, 104, 85, 26, -120, -121, 24, -108, 106, -40, 8, -50, 1, -76, 72, 64, 53};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.861029578537);
    msg.setSource(39323U);
    msg.setSourceEntity(232U);
    msg.setDestination(13825U);
    msg.setDestinationEntity(98U);
    msg.seq = 14930U;
    msg.sys_dst.assign("QQZMHCLSGFPGQRZDKABOAFANMYYXDNBGXEKSSYTRTVKZRPTZDQTCR");
    msg.flags = 74U;
    const char tmp_msg_0[] = {-109, -64, -115, -29, 21, -102, 46, -68, -105, -123, 3, -99, -45, 0, 10, -126, 71, 111, -87, -67, -38, -45, -117, 39, 97, 59, -40, -26, -9, 92, 36, 1, -18, 8, 53, 8, -8, 32, -106, -76, -60, 10, -11, -63, 88, 52, 63, -7, -76, 93, -47, 48, 73, 74, -94, 87, 51, 13, 78, 31, 49, 67, -11, -16};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.209133045492);
    msg.setSource(27385U);
    msg.setSourceEntity(116U);
    msg.setDestination(60745U);
    msg.setDestinationEntity(90U);
    msg.sys_src.assign("ZNRDKDSMBCYSTUNYUZCEGFUAHOERCULYVGJZXVRQXBWDHIUJLCNDBFKRJLHWTARTYHPXHWJIRUGVBFSSOJTOZMESDXBKCVFNKNKMFHNWVOJADWETMALSVSQPNMWMGVOLDZAZKMUGNTXSBGKGREEZFTFZAIIQJFPPAYGIIIXXBYCPOCDSHOTXWGIUQJWUPMYKACPVBARFNYEQXKY");
    msg.sys_dst.assign("HQRMVUCJQZEWTEEAGAMECSSKLELASUJRBCPWHRZHTMOIRCAXBBKPHHAPTNSDPUNKTIFSNIRFYNNGWIXWLOWZDOZADRQGCOXVZCYWWGRQFFASSJOAGDJFLZLM");
    msg.flags = 19U;
    const char tmp_msg_0[] = {56, 57, -20, -117, -100, -57, -37, 58, -106, -122, -113, 99, 59, 49, -51, 58, 65, -51, 31, -53, 113, -111, -116, 71, -123, 31, -103, -20, -3, 16, -71, -69, 64, 4, 38, -112, 36, -55, -40, -106, 124, 38, -128, -116, 115, 78, -4, -66, -59, -89, -31, 94, -122, 39, -26, -29, -17, 31, 80, 59, 80, -85, -54, 57, 121, -107, -23, -124, -31, 78, -64, 3, 58, 61, -40, 81, 102, -76, -13, -127, -106, 88, -8, 68, -49, -98, -82, -55, 45, 6, -83, -103, -78, 111, -25, -95, 17, 75, 113, -65, -92, -46, -94, -102, 121, 31, -30, 48, -10, 83, 9, -37, 84, -27, 90, -104};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.544052055074);
    msg.setSource(41166U);
    msg.setSourceEntity(235U);
    msg.setDestination(7200U);
    msg.setDestinationEntity(143U);
    msg.sys_src.assign("ETJGFBQCAEZXOWVPSTZKINWSAECACEYGGHTFKXGMPHBBVHVWNKBFORCRVABIAQDLQUZRRLTEDOZHDMVBYRTHFKUBRVIUVQFNVMQVSOZQPKXJVMQSJYRFMMXLFUG");
    msg.sys_dst.assign("UZPAEGDPYNCSFKDRWRLDZHKVQYJABJXYODCPVSCHPZCIEMOMDLREUEBTNVYSWBMEJQNGPYWXASSILHYVJNAKXRNCOFGBNTVUUWMZMEYRPMNXQLZSMIVGFRKOFTXIZWXIPWHLPZUKHMDTQEOJQODBECGCADKLMTUCYCGNDRKBYMKHODOAQEYBPCVSUGSLZAWILQWLZITRFJS");
    msg.flags = 119U;
    const char tmp_msg_0[] = {120, 11, -15, -118, 50, 74, -14, -103, -126, -56, -57, -64, 58, -28, 26, 87, 25, -92, 10, 120, 91, -118, 89, 98, -54, -71, 60, -57, 45, 118, 100, -93, -14, 75, 92, 34, -96, -59, 49, 126, 120, -70, -113, -52, -79, 114, 101, -76, 90, 111, 67, 47, -116, -9, 107, -94, -102, -51, 9, 65, -52, 35, 30, -45, 79, -9};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.344708451429);
    msg.setSource(2815U);
    msg.setSourceEntity(155U);
    msg.setDestination(38389U);
    msg.setDestinationEntity(82U);
    msg.sys_src.assign("XNKNMHWPQSJYSELIKVMAEDFJVQBBZVFJTCLIQWINSJQZPDYGXEDQSBCHHKDGWWOFWBDRRAPESTDNZNPRXSJQBOIQOBNIELHKYRVXORHASKFUQXVPCPRPIOYUJCCLMGLXHMUNQBW");
    msg.sys_dst.assign("OTHAHSHPHGFCKUARDZQWVDLGNDGSDPMPKCXUTWZYVMIGZSYSJFFLXMJEKTIXQLDKZGSYQEYFCPHZSJZNELMRUZXJOGPYOUKRPBRRBSPQEBBUEWVENFMBBQCKONSAASTIOVAVNDWHYLHMALUNJVTDRCQXLFHCEOGXZYOUQDMMRLTJHFMBEJOCNVVFLXY");
    msg.flags = 77U;
    const char tmp_msg_0[] = {3, -28, -93, 99, 107, -115, -47, 72, -37, -87, -116, 42, -49, -4, -76, -88, 73, -72, 38, -78, 51, -27, 104, -84, 108, -62, -81, 62, 114, -110, -41, 58, 94, -46, 15, 48, -62, 44, -56, 95, -122, -3, 54, 90, 57, 18, -106, -35, 44, 106, -113, 98, 81, 60, -16, -39, -17, 88, 126, 85, -60, -84, -36, -14, -1, -110, -36, 23, 125, -55, -102, 44, -84, 22, 33, 42, 97, -45, 61, -55, -78, 4, 110, 103, 62, 32, -96, 126, -33, -115, -110, 74, 24, 83, 9, 126, -3, -93, -73};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.322528424966);
    msg.setSource(3923U);
    msg.setSourceEntity(2U);
    msg.setDestination(4270U);
    msg.setDestinationEntity(92U);
    msg.seq = 616U;
    msg.value = 30U;
    msg.error.assign("UWRLCCYOLZHUSVKYNBKELTMRXXBNDPANRSRBZPVWNPBKWSLTQNIJIKKXPOIDQKCWSFYKBGSVWSURGRAESMPUMUXHFQGSNKECJXSIATQZCF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.525739708242);
    msg.setSource(3919U);
    msg.setSourceEntity(248U);
    msg.setDestination(64975U);
    msg.setDestinationEntity(64U);
    msg.seq = 34977U;
    msg.value = 251U;
    msg.error.assign("BTAMSXXRVJMFBPEPYLDPKSJKKCOJQYLDYZMVEDIHBXOVIWHFNYSXJRHKTNVDTKGECRENCZYAUCOQSTJOGXCHIAQXCKVSQZMXRXZFRAETENOSDPILUSDLZSPVDCRYOZANHTKEIUHKVGMJGDIYWQHLWYDFWAWPAPBILNTSRQUJIMZWFFJMOWQIWCHKULGGQUNSQEPOBOBWEJNTUTZUARRGUWGXJBLBMDB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.394501142526);
    msg.setSource(11848U);
    msg.setSourceEntity(163U);
    msg.setDestination(43745U);
    msg.setDestinationEntity(50U);
    msg.seq = 8591U;
    msg.value = 94U;
    msg.error.assign("GKFVVFSQWHXRUROESXYJNNAWHBYFTAWBHOFEEREPZMYKWUYGDSNZBSJYCYZOGUJQIVEPSUQJMBQVACDSWCLPTPNOULYNLPAZXSUIKGBXFIKDFUPVTYMDALETWCJDQVTDBWUWCTHVCLYSEBVKMDKLROXJJNJQNMRLKUMFWOCZCKSHADAIDXMROZRVDGTRTIFNXUEEMFTOYGLOZHZKFRGAQAAOIMEXGQCWPHXMZRBILKP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.0674251212776);
    msg.setSource(4460U);
    msg.setSourceEntity(233U);
    msg.setDestination(24933U);
    msg.setDestinationEntity(116U);
    msg.seq = 51621U;
    msg.sys.assign("XXSMPNQDNBYCFAFOQCNWSJAZWHZJVGASWQRGDCYASCKZUHZHIEQAUNWPGFLVLFSJQJILOIRPZSCLDIVQUUIZCQJLHNAIHPSFYPHTXHVMUBYBDWDOEUMMOAGKEQPRYOKSTOKTBRTYHRTLJINYNEDPXTICEZFKXLXOMEWCPMFEQHONWVNZTPYKNTKKO");
    msg.value = 0.677508661844;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.216694692704);
    msg.setSource(21229U);
    msg.setSourceEntity(114U);
    msg.setDestination(9036U);
    msg.setDestinationEntity(199U);
    msg.seq = 31854U;
    msg.sys.assign("JBFGIBNWVYRRJSJITWLTLDNFKFZPDGJVRWJXAYLHCQSPJRZQXOGGTXVFCSCFLAKYKTOVYNYCIYVXZYWMPNGEWZCQHUITATACEADPQKUUYMAREDDAOWGSQMQVZSOTSTHPNGPBDYDKVHGUBGXULGCFBWWCJECIXKNTVQUKMKIQEBUHQLRANFDZPQHIMULFEZLASBDAXOPLMWWBOHCHFORNZMSIBMJJZVOEYNXKRIXKBOHVPSORETRLUPIUFH");
    msg.value = 0.799357295997;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.691638568482);
    msg.setSource(34336U);
    msg.setSourceEntity(63U);
    msg.setDestination(15191U);
    msg.setDestinationEntity(102U);
    msg.seq = 35623U;
    msg.sys.assign("JNQESKYJBAXQRKTSZLONBBOEXZCKDQYKINVRWTPLHSSKMGDQHNPRLLGZHGZTXTFRFLYBVUUWXHHBWMAIRVNGBHLYTHND");
    msg.value = 0.206130421235;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.00488876647094);
    msg.setSource(21517U);
    msg.setSourceEntity(24U);
    msg.setDestination(21846U);
    msg.setDestinationEntity(156U);
    msg.seq = 43866U;
    msg.sys_dst.assign("JVIFCVJFPKHIZHLPJGWXVFUAHMZOUAFSJNRFPKLDXBIXAWYZZSOMUUOVCJIXOEYMEOEHSAENCNOHPPMHBKRTKANVXSWLTDEDFGYHBUQIKWWDXGTLKQGRRBSBCIWRWOAQMOHTEKPQUYAGXZNWLGYGTCRJMTSEF");
    msg.timeout = 0.667280541654;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.896005733718);
    msg.setSource(11691U);
    msg.setSourceEntity(145U);
    msg.setDestination(514U);
    msg.setDestinationEntity(8U);
    msg.seq = 11914U;
    msg.sys_dst.assign("NNHRHPEWPYLZCPFUHXTAFWSIFBIAWZKASKSQJRHXQZIBYAPKVYPZGHYJEOFUBLDATXSGDLOOEFUFTBUGAKWRDCRCQCSBBKUUXKGXPQVKJLVBLUMMKHNXJMCWZWEVZUSQRNTCSJEKUSFMEEQLIVNZGEONJDOWFVFBJOGPIRIWLHTOQYI");
    msg.timeout = 0.949627578804;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.915079396339);
    msg.setSource(64870U);
    msg.setSourceEntity(189U);
    msg.setDestination(60566U);
    msg.setDestinationEntity(196U);
    msg.seq = 34200U;
    msg.sys_dst.assign("PVSFLOGRKCJOCIHEVEBEMKJTVUZKPDAUOXQGDHFPBVIADNYNXNXULZPJGJIGPDGBBBTCRSUTPISKRWJJMNWHLZUTAYAKDMYLAPQPSZLOXAUWHYXSZWZHPFEAODJILCIQFZTWMBSUDJLHIVZYXSHCOAKZLXSDRCGUQNQEFWHQFHMSTEQIFRVTKCD");
    msg.timeout = 0.540800808434;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.503178958457);
    msg.setSource(54997U);
    msg.setSourceEntity(34U);
    msg.setDestination(64013U);
    msg.setDestinationEntity(12U);
    msg.action = 248U;
    msg.longain = 0.973722897423;
    msg.latgain = 0.207518368576;
    msg.bondthick = 2891219746U;
    msg.leadgain = 0.670271409509;
    msg.deconflgain = 0.10794477123;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.736154066047);
    msg.setSource(1704U);
    msg.setSourceEntity(89U);
    msg.setDestination(34158U);
    msg.setDestinationEntity(64U);
    msg.action = 177U;
    msg.longain = 0.939574146063;
    msg.latgain = 0.296295157207;
    msg.bondthick = 4014026004U;
    msg.leadgain = 0.257391080773;
    msg.deconflgain = 0.628780656325;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.402506821307);
    msg.setSource(60694U);
    msg.setSourceEntity(156U);
    msg.setDestination(23977U);
    msg.setDestinationEntity(113U);
    msg.action = 113U;
    msg.longain = 0.623593567974;
    msg.latgain = 0.808184111092;
    msg.bondthick = 1842559484U;
    msg.leadgain = 0.513808703731;
    msg.deconflgain = 0.840830324324;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.527802693515);
    msg.setSource(52958U);
    msg.setSourceEntity(13U);
    msg.setDestination(15523U);
    msg.setDestinationEntity(70U);
    msg.err_mean = 0.480712881247;
    msg.dist_min_abs = 0.403119857997;
    msg.dist_min_mean = 0.330403995772;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.022784720718);
    msg.setSource(31303U);
    msg.setSourceEntity(144U);
    msg.setDestination(21161U);
    msg.setDestinationEntity(10U);
    msg.err_mean = 0.874353836603;
    msg.dist_min_abs = 0.0664568478947;
    msg.dist_min_mean = 0.587094376023;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.129242049778);
    msg.setSource(18877U);
    msg.setSourceEntity(81U);
    msg.setDestination(30274U);
    msg.setDestinationEntity(50U);
    msg.err_mean = 0.348085765462;
    msg.dist_min_abs = 0.664496444577;
    msg.dist_min_mean = 0.41653821;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.9881655688);
    msg.setSource(44948U);
    msg.setSourceEntity(183U);
    msg.setDestination(57945U);
    msg.setDestinationEntity(70U);
    msg.action = 152U;
    msg.lon_gain = 0.200712120175;
    msg.lat_gain = 0.474178189252;
    msg.bond_thick = 0.779655055083;
    msg.lead_gain = 0.156911206778;
    msg.deconfl_gain = 0.805736063009;
    msg.accel_switch_gain = 0.618162628937;
    msg.safe_dist = 0.538360301159;
    msg.deconflict_offset = 0.782153077412;
    msg.accel_safe_margin = 0.604037836092;
    msg.accel_lim_x = 0.705140807412;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.13912901804);
    msg.setSource(48993U);
    msg.setSourceEntity(70U);
    msg.setDestination(34206U);
    msg.setDestinationEntity(238U);
    msg.action = 89U;
    msg.lon_gain = 0.750177601297;
    msg.lat_gain = 0.45493342231;
    msg.bond_thick = 0.333242307025;
    msg.lead_gain = 0.754401092164;
    msg.deconfl_gain = 0.805656558759;
    msg.accel_switch_gain = 0.876931130581;
    msg.safe_dist = 0.96912933185;
    msg.deconflict_offset = 0.0600466360909;
    msg.accel_safe_margin = 0.644230984834;
    msg.accel_lim_x = 0.251088783493;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.273543592301);
    msg.setSource(30188U);
    msg.setSourceEntity(251U);
    msg.setDestination(17205U);
    msg.setDestinationEntity(200U);
    msg.action = 54U;
    msg.lon_gain = 0.491066900847;
    msg.lat_gain = 0.9036369611;
    msg.bond_thick = 0.293013052267;
    msg.lead_gain = 0.643579550649;
    msg.deconfl_gain = 0.078639234299;
    msg.accel_switch_gain = 0.0610629012758;
    msg.safe_dist = 0.698753768361;
    msg.deconflict_offset = 0.3044666788;
    msg.accel_safe_margin = 0.646702835708;
    msg.accel_lim_x = 0.757406340282;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.540625768207);
    msg.setSource(13165U);
    msg.setSourceEntity(151U);
    msg.setDestination(18436U);
    msg.setDestinationEntity(163U);
    msg.type = 57U;
    msg.op = 140U;
    msg.err_mean = 0.524127901556;
    msg.dist_min_abs = 0.0884118366223;
    msg.dist_min_mean = 0.782145199597;
    msg.roll_rate_mean = 0.750670802154;
    msg.time = 0.604648169162;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 246U;
    tmp_msg_0.lon_gain = 0.535802186259;
    tmp_msg_0.lat_gain = 0.494913209777;
    tmp_msg_0.bond_thick = 0.219187596616;
    tmp_msg_0.lead_gain = 0.290697192166;
    tmp_msg_0.deconfl_gain = 0.197199127507;
    tmp_msg_0.accel_switch_gain = 0.309414128992;
    tmp_msg_0.safe_dist = 0.984573458311;
    tmp_msg_0.deconflict_offset = 0.682627990355;
    tmp_msg_0.accel_safe_margin = 0.872223110109;
    tmp_msg_0.accel_lim_x = 0.135729174563;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.84309855815);
    msg.setSource(24942U);
    msg.setSourceEntity(128U);
    msg.setDestination(19575U);
    msg.setDestinationEntity(189U);
    msg.type = 0U;
    msg.op = 49U;
    msg.err_mean = 0.128193038845;
    msg.dist_min_abs = 0.368828838886;
    msg.dist_min_mean = 0.0855867213716;
    msg.roll_rate_mean = 0.962329046167;
    msg.time = 0.0748155927114;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 17U;
    tmp_msg_0.lon_gain = 0.427637929923;
    tmp_msg_0.lat_gain = 0.929186460864;
    tmp_msg_0.bond_thick = 0.43266999178;
    tmp_msg_0.lead_gain = 0.608407987513;
    tmp_msg_0.deconfl_gain = 0.0887034921469;
    tmp_msg_0.accel_switch_gain = 0.0687960341102;
    tmp_msg_0.safe_dist = 0.154219834004;
    tmp_msg_0.deconflict_offset = 0.488888329719;
    tmp_msg_0.accel_safe_margin = 0.407534914237;
    tmp_msg_0.accel_lim_x = 0.225725893406;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.181511110352);
    msg.setSource(48996U);
    msg.setSourceEntity(235U);
    msg.setDestination(98U);
    msg.setDestinationEntity(74U);
    msg.type = 66U;
    msg.op = 76U;
    msg.err_mean = 0.288996943011;
    msg.dist_min_abs = 0.899918243152;
    msg.dist_min_mean = 0.403196666068;
    msg.roll_rate_mean = 0.169846057999;
    msg.time = 0.10806626952;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 188U;
    tmp_msg_0.lon_gain = 0.418613228843;
    tmp_msg_0.lat_gain = 0.161664044876;
    tmp_msg_0.bond_thick = 0.269527000779;
    tmp_msg_0.lead_gain = 0.958635123724;
    tmp_msg_0.deconfl_gain = 0.201114804841;
    tmp_msg_0.accel_switch_gain = 0.864795967937;
    tmp_msg_0.safe_dist = 0.334208571904;
    tmp_msg_0.deconflict_offset = 0.871584106129;
    tmp_msg_0.accel_safe_margin = 0.739629772414;
    tmp_msg_0.accel_lim_x = 0.867814886026;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.322584667632);
    msg.setSource(32361U);
    msg.setSourceEntity(195U);
    msg.setDestination(30839U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.39756921901;
    msg.lon = 0.691101919999;
    msg.eta = 4237784400U;
    msg.duration = 8923U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.887283635337);
    msg.setSource(21725U);
    msg.setSourceEntity(82U);
    msg.setDestination(23400U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.462374740356;
    msg.lon = 0.651305426219;
    msg.eta = 424021235U;
    msg.duration = 28330U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.712977394578);
    msg.setSource(47218U);
    msg.setSourceEntity(239U);
    msg.setDestination(63809U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.0352711529504;
    msg.lon = 0.309401249193;
    msg.eta = 3658777701U;
    msg.duration = 36723U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.0309771915367);
    msg.setSource(43997U);
    msg.setSourceEntity(87U);
    msg.setDestination(18113U);
    msg.setDestinationEntity(205U);
    msg.plan_id = 49125U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.148225172496;
    tmp_msg_0.lon = 0.540269948283;
    tmp_msg_0.eta = 207556549U;
    tmp_msg_0.duration = 53611U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.915597281509);
    msg.setSource(10875U);
    msg.setSourceEntity(77U);
    msg.setDestination(35079U);
    msg.setDestinationEntity(168U);
    msg.plan_id = 26118U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.953877337101);
    msg.setSource(38423U);
    msg.setSourceEntity(173U);
    msg.setDestination(44818U);
    msg.setDestinationEntity(218U);
    msg.plan_id = 18727U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.769633843723;
    tmp_msg_0.lon = 0.136651986865;
    tmp_msg_0.eta = 2147285513U;
    tmp_msg_0.duration = 12019U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.61454455236);
    msg.setSource(44410U);
    msg.setSourceEntity(244U);
    msg.setDestination(24277U);
    msg.setDestinationEntity(138U);
    msg.type = 90U;
    msg.command = 85U;
    msg.settings.assign("WWPTSZRKCLYTPHQEOSZFNKOQLHCUBAPOEPQILTYFJFWSCARGIEEBBUHLBCCMXRMVWGRYNDQSDPVUNDGEABSVTHRJVAIUKKQHNLODDXXCSAKOLIEOJZFWOLQKALFZRGFGMJZJDD");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 57735U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("MRKHUEWZTARXBHIWDEHSGNTXXDAKHFRQVQMWMKTXZROLLJUSRLNSBZOEGQZBNMIHOYXEIBZJMFQAKYPISJVSEFDFRGBRDFCHQXAPWXDILMAZFCLTMCKVWLPADNRZPBHYQSTEVHJOVWGDYKJTBCUEGLPUMQKYYGCECLTJNOVGIHNAAKTBDCJCDFNWEUYWUJFVZMYKAGJSFVUGOOHUTNISYVUW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.426904500546);
    msg.setSource(23632U);
    msg.setSourceEntity(68U);
    msg.setDestination(54664U);
    msg.setDestinationEntity(172U);
    msg.type = 214U;
    msg.command = 236U;
    msg.settings.assign("OBGBDBXMBWQHRPIXAXYMTIBXRLKIEXGSRFHAQDNUOFPOFFRNFFUIHVPEAPRWOLFT");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 31015U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("IWKMWQQHQAICEJKTHSTYFWZPLKGYZNADWXBCDGUQHSBRYBUHUXANZELPXACKJGGBDUAETVOQKWVHLMNGRPZSNMELAYQXJPJNRASTGMEI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.638126489514);
    msg.setSource(41877U);
    msg.setSourceEntity(190U);
    msg.setDestination(24184U);
    msg.setDestinationEntity(195U);
    msg.type = 13U;
    msg.command = 80U;
    msg.settings.assign("ODPBFNILCAJFLOGAJKQFGLAIMNGXWYSZXGRZPXHCYCZUVQGIMFSHTPUX");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 40221U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("YELZQWGOHVXZWCBRAQEADDOETXPWBZOUPOBIXYWIDZKSWCHKXYWWNZJIRXAABCMAPIGNNTOOWCKMGGKALILYVUTZXJREGSVPOSGDSSVKPFDUDMJAULVJJTNMBVMQVKQGKPBFQCEINKLXHLYDYRLZBGEYJTELAHAJXIBJNKNWIDNSQEFFLSVVBWOFZSZJQUTGHZNQMUTQMNP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.271556239061);
    msg.setSource(20524U);
    msg.setSourceEntity(8U);
    msg.setDestination(57408U);
    msg.setDestinationEntity(131U);
    msg.state = 76U;
    msg.plan_id = 32358U;
    msg.wpt_id = 53U;
    msg.settings_chk = 14886U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.646763355048);
    msg.setSource(13666U);
    msg.setSourceEntity(53U);
    msg.setDestination(58583U);
    msg.setDestinationEntity(142U);
    msg.state = 197U;
    msg.plan_id = 55053U;
    msg.wpt_id = 124U;
    msg.settings_chk = 29769U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.789239939761);
    msg.setSource(60936U);
    msg.setSourceEntity(162U);
    msg.setDestination(11974U);
    msg.setDestinationEntity(58U);
    msg.state = 56U;
    msg.plan_id = 26401U;
    msg.wpt_id = 76U;
    msg.settings_chk = 16918U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.670387428321);
    msg.setSource(37543U);
    msg.setSourceEntity(196U);
    msg.setDestination(44312U);
    msg.setDestinationEntity(57U);
    msg.uid = 144U;
    msg.frag_number = 107U;
    msg.num_frags = 117U;
    const char tmp_msg_0[] = {-45, 3, -81, 20, -126, 50, -46, -119, 80, 113, 117, -107, 50, 28, -108, -7, 19, -104, -2, -77, 70, 119, 76, -94, 46, -23, 52, 85, -16, 38, -99, 11, 83, 54, 44, 23, -77, 109, -80, 102, 74, 42, 67, -64, 46, -11, 122, 71, -109, -58, 54, -38, 90, 103, 8, -123, 84, -44, -40, 65, -35, 76, 83, -54, 106, 120, -40, 97, 93, -31, 89, -109, 61, -82, 87, -55, 57, -110, 15, 38, 47, -1, -102, 83, -68, -87, -125, 71, -50, 114, -83, 43, 18, -4, 13, 126, 29, 126, -128, 106, 93, 44, -126, 125, 39, 84, -58, 41, 70, 72, 120, 15, 103, -30, 101, 78, -97, 59, -126, 52, 25, 114, -62, 78, -127, -105, -94, 79, -16, 60, -37, 12, 24, 25, 20, 100, 19, 21, -103, 70, -13, 105, 92, -104, -31, -71, -12, 25, -128, -20, -13, 29, -77, -119, -71, -69, -48, -28, -34, 105, 76};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.0672560017972);
    msg.setSource(24728U);
    msg.setSourceEntity(35U);
    msg.setDestination(16813U);
    msg.setDestinationEntity(70U);
    msg.uid = 188U;
    msg.frag_number = 66U;
    msg.num_frags = 231U;
    const char tmp_msg_0[] = {91, 95, 111, 68, -9, -114, -51, -97, 96, -49, 116, -48, -43, 38, 103, 10, 122, -79, 34, 19, -75, 108, -2, 29, -82, 115, 126, 74, 31, -30, 105, 77, -37, 83, -73, 44, -123, -34, 120, -51, 15, -37, 108, -93, -128, 109, 5, 100, 76, -107, 59, 69, -44, 67, -5, 88, -20, 4, 94, 2, -61, -2, 8, -14, -122, -3, -103, -77, 29, 98, -3, 66, -79, -77, -16, -88, -18, 98, 20, 107, -42, 12, 112};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.263964118685);
    msg.setSource(11038U);
    msg.setSourceEntity(5U);
    msg.setDestination(41186U);
    msg.setDestinationEntity(108U);
    msg.uid = 233U;
    msg.frag_number = 187U;
    msg.num_frags = 185U;
    const char tmp_msg_0[] = {109, 125, -12, -89, 34, -76, -40, 24, -26, 41, 13, 47, -58, 92, 8, 121, -20, -69, 73, -68, 21, 21, 43, -71, -23, -15, -36, -102, 95, -72, 94, 49, -15, -99, 112, -15, 74, 49, -13, 8, -62, 59, 77, 33, 30, 81, 104, -120, -65, 60};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.465566584398);
    msg.setSource(14166U);
    msg.setSourceEntity(134U);
    msg.setDestination(339U);
    msg.setDestinationEntity(249U);
    msg.content_type.assign("UJHPUOWKXAUZETKOKHFCCDEIYUKRKNBXOELABZPYNRXVIUJPIGTTAVBDLUTQMDLMYBBMGCVWOMZWCZNOFSSWRGAWHMLAUJRFHUYPHJQDNGIIIBPXPSAYAQUXQYGREXSFBRRIDWNBTQPVJNJWNKNCFYPELSGMTVVTGJODPROVRLSQIEEHMQOIGNF");
    const char tmp_msg_0[] = {2, 3, -52, 24, 55, 21, 98, -123, -101, -88, 121, -51, -67, 28, 32, -92, 28, 81, -47, 72, 81, -75, 31, 38, -110, 53, 66, 117, 89, -20, 68, -116, 108, -5, 10, 58, 125, -127, 17, -79, -95, -16, -116, 123, -16, -97, 31, -6, -28, -88, -114, 125, 95, -42, 70, 117, -87, -85, 101, 73, -9, -104, 89, -93, 83, -61, 5, -106, 24, 39, 117, -117, -83, -97, -20, 27, 119, 41, 85, 68, -111, 97, -1, -16, -113, 98, 63, 81, -81, 115, -117, 45, -2, 62, -43, -50, 10, -22, -3, 104, 31, 70, -37, 116, -31, 87, 61, -119, -126};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.18372571583);
    msg.setSource(60604U);
    msg.setSourceEntity(187U);
    msg.setDestination(21342U);
    msg.setDestinationEntity(181U);
    msg.content_type.assign("HMCBDSMSOAVZKEWUNLLFZGYBGTXHZQBQFRQLAYPJYCXTLKZFGDVYHSTEWLURLWGJWIIGQ");
    const char tmp_msg_0[] = {-27, -107, 7, -60, 30, 103, 70, 70, 98, 83, 87, -19, 25, 117, -115, -128, -2, -44, 84, -24, 43, -121, 46, 64, -100, 33, -51, -106, 79, -116, -13, 71, 59, 92, -23, -60, 31, 66, -53, 63, 106, -104, -108, -96, -28, 29, 84, 48, -80, 103, -70, -85, -86, 77, -95, 15, 102, 45, -28, -46, 106, -126, 102, -111, 52, 6, -123, -121, 48, -72, 54, 27, -65, -89, -34, -64, 95, -27, 69, 7, 103, -84, -128, 71, 99, 5, -90, 0, -17, -26, 54, 74, -104, 25, 91, -48, -48, 93, -128, 66, -62, -86, -4, 31, -15, 12, 88, -72, -55, -117, 37, -56, -67, 10, 121, 70, -28, -33, -4, -1, 79, -127, -112, 7, 60, 8, -109, 24, 108, 110, -42, -59, -41, -70, -2, 0, -118, 89, 105, 103, 91, 41, 54, 122, 49, 21, 7, -17, 79, -113, -44, -68, -3, 33, -64, -36, -66, 69, 12, -108, -53, 6, -116, -80, 29, 92, 122, -85, 98, -93, -11, 25, 13, 69, 60, 92, -107, -19, 2, 109, -54, -39, 99, -27, -64, -68};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.293441282668);
    msg.setSource(21100U);
    msg.setSourceEntity(65U);
    msg.setDestination(15596U);
    msg.setDestinationEntity(252U);
    msg.content_type.assign("LEIZLDZJJGKFXLKIRVQLICJFWPVPZZMHHURGOMCCBTOASOBWYJLSH");
    const char tmp_msg_0[] = {-100, 126, -78, -64, -105, 126, 11, -78, -50, -109, 45, -45, 40, 65, -27, -42, 44, 41, -18, 87, -124, 51, -46, -109};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.676358517643);
    msg.setSource(60159U);
    msg.setSourceEntity(8U);
    msg.setDestination(4473U);
    msg.setDestinationEntity(173U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.428238307449);
    msg.setSource(39401U);
    msg.setSourceEntity(204U);
    msg.setDestination(40131U);
    msg.setDestinationEntity(47U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.858136010757);
    msg.setSource(22139U);
    msg.setSourceEntity(181U);
    msg.setDestination(23877U);
    msg.setDestinationEntity(110U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.761214553165);
    msg.setSource(14536U);
    msg.setSourceEntity(222U);
    msg.setDestination(10291U);
    msg.setDestinationEntity(132U);
    msg.target = 62175U;
    msg.bearing = 0.583222193275;
    msg.elevation = 0.548232285955;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.238490473838);
    msg.setSource(10899U);
    msg.setSourceEntity(6U);
    msg.setDestination(43471U);
    msg.setDestinationEntity(226U);
    msg.target = 16393U;
    msg.bearing = 0.678219575109;
    msg.elevation = 0.91402009117;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.440191281959);
    msg.setSource(49553U);
    msg.setSourceEntity(82U);
    msg.setDestination(40787U);
    msg.setDestinationEntity(50U);
    msg.target = 64799U;
    msg.bearing = 0.0365927397371;
    msg.elevation = 0.833905269772;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.545828085548);
    msg.setSource(1489U);
    msg.setSourceEntity(46U);
    msg.setDestination(43824U);
    msg.setDestinationEntity(158U);
    msg.target = 19814U;
    msg.x = 0.263187797529;
    msg.y = 0.830882132607;
    msg.z = 0.122022102165;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.0457288386614);
    msg.setSource(23252U);
    msg.setSourceEntity(210U);
    msg.setDestination(33461U);
    msg.setDestinationEntity(106U);
    msg.target = 63603U;
    msg.x = 0.122070835456;
    msg.y = 0.72460064105;
    msg.z = 0.682335388565;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.769733961007);
    msg.setSource(41526U);
    msg.setSourceEntity(186U);
    msg.setDestination(59414U);
    msg.setDestinationEntity(37U);
    msg.target = 5984U;
    msg.x = 0.369782307524;
    msg.y = 0.686509229466;
    msg.z = 0.530359791419;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.650109933601);
    msg.setSource(27902U);
    msg.setSourceEntity(134U);
    msg.setDestination(18159U);
    msg.setDestinationEntity(175U);
    msg.target = 46597U;
    msg.lat = 0.184536304838;
    msg.lon = 0.00321535467375;
    msg.z_units = 248U;
    msg.z = 0.191113843557;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.470051308431);
    msg.setSource(6851U);
    msg.setSourceEntity(64U);
    msg.setDestination(40748U);
    msg.setDestinationEntity(7U);
    msg.target = 7333U;
    msg.lat = 0.259323765742;
    msg.lon = 0.131430775621;
    msg.z_units = 6U;
    msg.z = 0.596792595664;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.873897809625);
    msg.setSource(55568U);
    msg.setSourceEntity(217U);
    msg.setDestination(33780U);
    msg.setDestinationEntity(205U);
    msg.target = 37982U;
    msg.lat = 0.256273694153;
    msg.lon = 0.675421265456;
    msg.z_units = 32U;
    msg.z = 0.0564981264395;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.884453475227);
    msg.setSource(27581U);
    msg.setSourceEntity(140U);
    msg.setDestination(43698U);
    msg.setDestinationEntity(66U);
    msg.locale.assign("UAHXAMZVVIBRFSCYMMUOEZJPRZTLQDWKLXHTJBUYATTQSYDQOLPIVRVPFFGATPSOGOHUBILUBKRJEFJCUKCQSQOEDDAGSQHMSVPWMDCNUBIARWLKBF");
    const char tmp_msg_0[] = {-82, -42, 5, -7, -15, 62, -57, 43, -11, 45, -98, 7, 126, 3, 1, 125, -23, 97, -124, 116, -84, 25, -56, -59, -63, 40, 72, -79, -29, -40, 3, 36, 95, -67, -58, -58, -71, 4, 109, 27, -119, 61, -5, -106, -68, 123, -68, 65, 36, 79, 108, 69, -89, -110, 15, -12, 112, 101, 23, -30, 83, -51, 98, 30, 92, 117, -96, 99, 67, 94, 22, -114, -30, -66, 60, 88, 123};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.321375993743);
    msg.setSource(31442U);
    msg.setSourceEntity(150U);
    msg.setDestination(18951U);
    msg.setDestinationEntity(182U);
    msg.locale.assign("CPOZNAGQMICQUGRVZPWOLRPDJEXLRJIPKKWOEDLGIBTPJYYJCKIBGEM");
    const char tmp_msg_0[] = {-8, 24, -76, -50, -34, -75, -40, -48, -110, 23, 28, 0, 37, -92, -128, -1, 29, -82, -52, -96, -126, -42, -8, -72, 34, -90, -106, 105, 37, 23, -15, -107, -10, -40, -108, 110, 17, 70, -89, 37, -117, 77, 10, -3, 59, -126, 63, -119, -16, -99, 39, 39, -123, -121, -98, 5, 119, -8, 78, -117, -33, -40, -82, -32, 27, -37, 54, 52, 79, -23, -32, 52, -87, -95, 40, 79, -51, -111, -89, -40, -44, -68, -98, -92, 20, 23, -71, -30, 114, -62, -1, 19, 102, -98, 95, -37, -115, 6, -5, 32, 98, -83, 89, -4, -38, -113, -67, -23, -4, 92, 121, 67, -61, 101, 114, -82, 98, 94, -76, -87, 122, 71, -62, -64, 42, 44, -107, 106, -126, 110, 68, -83, -49, 62, -45, 8, -112, -54, 124, 125, -128, -120, 78, 109, -97, -6, 49, 111, 53, -74, -30, 54, -80, 50, 11, -110, 109, 95, 50, -4, 93, 60, -36, 38, -121, 104, -17, -99, -76, 31, 77, -2, 44, 91, 32, 69, 107, -96, -6, 75, -30, 107, -97, -63, -85, -97, 80, 100, 18, 100, -88, -40, 58, -116, 125, 75, -48, -99, -40, -30, 45, 37, 116, 87, -71, 30, 25, -73, -120, 67, 31, 109, -83, 98, 116, 96, 78, -83, 105, -24, 14, 81, 48, -80, -20, -33};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.599258413695);
    msg.setSource(22403U);
    msg.setSourceEntity(222U);
    msg.setDestination(34641U);
    msg.setDestinationEntity(186U);
    msg.locale.assign("CSZXHKHIGHGKOBCUVXKNBZYDMQDRIKBPXQILIUEZBQUIRXEROLADTLGSMLXGJAMNGUOWJHNWPGENJJAVHVYVVYIQSWLAKWRVHJJLLYDNQUWEEHDTHQCLFALTYCDOFGXZPJPMBGIRJKXTWR");
    const char tmp_msg_0[] = {-123, -92, -94, -103, 61, -84, -3, -55, -70, 105, -58, -2, -99, -83, 47, -108, -29, -92, -27, 36, 119, -65, 13, -81, 9, -70, 45, -115, 95, -31, -22, -110, -125, -25, 55, -21, 86, 4, 26, -52, -101, -21, 62, -8, -128, 64, -77, -71, 104, 103, -66, -97, 27, 49, -16, -83, 21, -23, -15, -45, -103, -68, -108, 90, -100, 90, 106, -33, -2, -125, 54, 71, 89, 78, 59, -128, 71, -58, 33, -91, 100, -50, 9, -58, -30, -73, -26, 49, -56, 1, 19, 32, -116, 55, -13, -80, -85, 50, -99, -14, -19, 123, -55, -66, 123, 92, 16, 39, 78, -70, -10, -104, 114, 56};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.937929956862);
    msg.setSource(14957U);
    msg.setSourceEntity(234U);
    msg.setDestination(64862U);
    msg.setDestinationEntity(147U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.44313149864);
    msg.setSource(23722U);
    msg.setSourceEntity(241U);
    msg.setDestination(60591U);
    msg.setDestinationEntity(2U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.793854081183);
    msg.setSource(27476U);
    msg.setSourceEntity(53U);
    msg.setDestination(51720U);
    msg.setDestinationEntity(89U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.328880063253);
    msg.setSource(9007U);
    msg.setSourceEntity(198U);
    msg.setDestination(51446U);
    msg.setDestinationEntity(153U);
    msg.camid = 32U;
    msg.x = 41184U;
    msg.y = 6361U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.973546967914);
    msg.setSource(9346U);
    msg.setSourceEntity(41U);
    msg.setDestination(51810U);
    msg.setDestinationEntity(93U);
    msg.camid = 179U;
    msg.x = 39778U;
    msg.y = 9126U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.478612746214);
    msg.setSource(16912U);
    msg.setSourceEntity(87U);
    msg.setDestination(49952U);
    msg.setDestinationEntity(253U);
    msg.camid = 167U;
    msg.x = 58301U;
    msg.y = 46420U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.0865337028189);
    msg.setSource(52958U);
    msg.setSourceEntity(10U);
    msg.setDestination(32980U);
    msg.setDestinationEntity(187U);
    msg.camid = 152U;
    msg.x = 58715U;
    msg.y = 56387U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.875703624255);
    msg.setSource(34344U);
    msg.setSourceEntity(244U);
    msg.setDestination(10292U);
    msg.setDestinationEntity(98U);
    msg.camid = 48U;
    msg.x = 15145U;
    msg.y = 5759U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.545641528674);
    msg.setSource(14533U);
    msg.setSourceEntity(238U);
    msg.setDestination(42828U);
    msg.setDestinationEntity(147U);
    msg.camid = 13U;
    msg.x = 24427U;
    msg.y = 2296U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.0877423207358);
    msg.setSource(39132U);
    msg.setSourceEntity(38U);
    msg.setDestination(26848U);
    msg.setDestinationEntity(27U);
    msg.tracking = 251U;
    msg.lat = 0.42470769742;
    msg.lon = 0.0958794125891;
    msg.x = 0.534244856745;
    msg.y = 0.457932502411;
    msg.z = 0.847832980642;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.290616962408);
    msg.setSource(22679U);
    msg.setSourceEntity(248U);
    msg.setDestination(48983U);
    msg.setDestinationEntity(157U);
    msg.tracking = 193U;
    msg.lat = 0.0770953053783;
    msg.lon = 0.360453267931;
    msg.x = 0.0473502555792;
    msg.y = 0.418758988089;
    msg.z = 0.679363918339;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.768166480342);
    msg.setSource(47876U);
    msg.setSourceEntity(32U);
    msg.setDestination(15195U);
    msg.setDestinationEntity(125U);
    msg.tracking = 136U;
    msg.lat = 0.132093104268;
    msg.lon = 0.585617631866;
    msg.x = 0.427855171498;
    msg.y = 0.747790363231;
    msg.z = 0.410029731959;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.153300110414);
    msg.setSource(54537U);
    msg.setSourceEntity(142U);
    msg.setDestination(59428U);
    msg.setDestinationEntity(53U);
    msg.target.assign("SLLCRQBQZBKGFIPRLQCFITBWANXOQYCTSEGCZXDVOQMTDMAEOEMKETPNDXPHSXWRGJCXLFIDPODNTXZSABWVNQDYYSFRBHEJJEYAZGSUXXCLGZHRFAILVFVNVHKJILGPFRXOVNUSMWGWJMHPIDUUDTWZYQXHCEIMUMKLZHYNGWEZODTOVRFIWJEUBMJZC");
    msg.lbearing = 0.841278173823;
    msg.lelevation = 0.212544715785;
    msg.bearing = 0.288374801907;
    msg.elevation = 0.250325438596;
    msg.phi = 0.919471105488;
    msg.theta = 0.0373993981596;
    msg.psi = 0.3824138183;
    msg.accuracy = 0.940275462211;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.667379333996);
    msg.setSource(4775U);
    msg.setSourceEntity(232U);
    msg.setDestination(63262U);
    msg.setDestinationEntity(15U);
    msg.target.assign("OWLOHLSBMJTFNKRPYXDICGSA");
    msg.lbearing = 0.349802754333;
    msg.lelevation = 0.109765866557;
    msg.bearing = 0.858380549543;
    msg.elevation = 0.680958044116;
    msg.phi = 0.0676229147767;
    msg.theta = 0.50096910081;
    msg.psi = 0.481324957253;
    msg.accuracy = 0.801715725913;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.899720892792);
    msg.setSource(28355U);
    msg.setSourceEntity(83U);
    msg.setDestination(44258U);
    msg.setDestinationEntity(54U);
    msg.target.assign("CDKBDKUTEWYJLTJDUXRUIGCPPTUPYGYRKLQCFYIZELQ");
    msg.lbearing = 0.517489210426;
    msg.lelevation = 0.136831724963;
    msg.bearing = 0.812124689951;
    msg.elevation = 0.520576870167;
    msg.phi = 0.177253628055;
    msg.theta = 0.369960879693;
    msg.psi = 0.607968022774;
    msg.accuracy = 0.0988223567382;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.737369161379);
    msg.setSource(35320U);
    msg.setSourceEntity(82U);
    msg.setDestination(10827U);
    msg.setDestinationEntity(211U);
    msg.target.assign("YUGCZLLVNVXGVSWKLFOWQHMEITVXMXRGQUCXFIBABZTATFBSGHXKTHPONXWOGSFGULOCHTYUURKADEKTLYCTGTWPYHUTDBNBAISZSPEZMYM");
    msg.x = 0.0267566498437;
    msg.y = 0.695569158416;
    msg.z = 0.306634459771;
    msg.n = 0.794065752893;
    msg.e = 0.407187267218;
    msg.d = 0.854532959206;
    msg.phi = 0.544102425037;
    msg.theta = 0.179722832043;
    msg.psi = 0.0427619752659;
    msg.accuracy = 0.802697664251;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.910348817321);
    msg.setSource(23477U);
    msg.setSourceEntity(106U);
    msg.setDestination(57058U);
    msg.setDestinationEntity(180U);
    msg.target.assign("YBNYDCYRBKZPHKAZMMPIRBAIHAHJNETAIQLKAVFFJBYSKTCMGEBLZELYQPOEPNVOUSXOLFPCGWQDSIKNTRWMFFYXHRKUKPQCICSGGVMEMLDOZHFCWNEHGICRTOAPLDRAEUSMKYWZZHGUNMTPZRCNZGFTGNJV");
    msg.x = 0.0830020516732;
    msg.y = 0.209715825679;
    msg.z = 0.0247265199441;
    msg.n = 0.545006943335;
    msg.e = 0.440844330075;
    msg.d = 0.407747834686;
    msg.phi = 0.116940941004;
    msg.theta = 0.152995436843;
    msg.psi = 0.0447582593129;
    msg.accuracy = 0.855223166731;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.223602844142);
    msg.setSource(10454U);
    msg.setSourceEntity(85U);
    msg.setDestination(737U);
    msg.setDestinationEntity(213U);
    msg.target.assign("HRNTNESANCTWDUIYVJFFA");
    msg.x = 0.234683728126;
    msg.y = 0.893917779308;
    msg.z = 0.56845620615;
    msg.n = 0.374358874859;
    msg.e = 0.821639107474;
    msg.d = 0.845683246305;
    msg.phi = 0.733236915272;
    msg.theta = 0.773962824325;
    msg.psi = 0.346255713703;
    msg.accuracy = 0.203932188352;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.537062465795);
    msg.setSource(7635U);
    msg.setSourceEntity(242U);
    msg.setDestination(14183U);
    msg.setDestinationEntity(254U);
    msg.target.assign("YEAVKIJCTBVFOFPEC");
    msg.lat = 0.25596549587;
    msg.lon = 0.643896883688;
    msg.z_units = 87U;
    msg.z = 0.877720205376;
    msg.accuracy = 0.100561734882;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.780058722271);
    msg.setSource(25286U);
    msg.setSourceEntity(149U);
    msg.setDestination(17834U);
    msg.setDestinationEntity(183U);
    msg.target.assign("YSHCUGDJGOGIEFHILXQCRNDSPNIFYBZKOZZCAXOOLXFSTFZOEJSSPZZMKIZVBMTRWUGFMBPJCQOFQSRIYUGLPJJECYDSISVHREKLJRWQHJCASXTEHNRPHWRDLBVCUXUMAXDWJFFAQITPGPTSFFLYTBKMBOEKOYADNWATRGMYBIRANOELACXXDXYCZTEVVWBUDQGJOEYKAL");
    msg.lat = 0.0132965144428;
    msg.lon = 0.405411975139;
    msg.z_units = 218U;
    msg.z = 0.199294988304;
    msg.accuracy = 0.183479752479;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.783352675711);
    msg.setSource(1672U);
    msg.setSourceEntity(13U);
    msg.setDestination(33289U);
    msg.setDestinationEntity(56U);
    msg.target.assign("EZWDTYPFURVYNLXRRMROHTVVPWYFZAIQHPAHOOTPEGXDWMJWKWYPONYGENLNMCPKQXGLSWVGFKFORYJBQDMLYFKXJBYFJSVQCKJCAHNZPAKWCGCDAVRWIAWDH");
    msg.lat = 0.419656412932;
    msg.lon = 0.555686855567;
    msg.z_units = 226U;
    msg.z = 0.325936508351;
    msg.accuracy = 0.133866164165;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.0656713067792);
    msg.setSource(59851U);
    msg.setSourceEntity(240U);
    msg.setDestination(54931U);
    msg.setDestinationEntity(162U);
    msg.name.assign("ZKKIXTFUYMYMEWAKUUADUSIJEIRCC");
    msg.lat = 0.238701562458;
    msg.lon = 0.159206313323;
    msg.z = 0.604073492858;
    msg.z_units = 173U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.907330449528);
    msg.setSource(17603U);
    msg.setSourceEntity(60U);
    msg.setDestination(10616U);
    msg.setDestinationEntity(69U);
    msg.name.assign("HINFOTFMQLYMORGBWILPUPNSSTIJXPETJPMLOXQEUNMPNLXRBXDTAWFZVBRBRBRDDPUIJLGUTSDOQHZCJQRLUMMXOQEKCFCSKMWDEEJCGPNTYHCWKWWXHFKSLNV");
    msg.lat = 0.657052772324;
    msg.lon = 0.531459186022;
    msg.z = 0.14112062149;
    msg.z_units = 149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.624643164396);
    msg.setSource(42255U);
    msg.setSourceEntity(193U);
    msg.setDestination(17084U);
    msg.setDestinationEntity(115U);
    msg.name.assign("SQFQYNAFZETSHSGFOTDDIRHUZEPGMEDNPMNDKPVDQBJRBHXJADYCKRIPXJVUBYBLRNLQKTIOUKCAPNCYZALOKYKSHOZRYV");
    msg.lat = 0.274387545073;
    msg.lon = 0.0164470235468;
    msg.z = 0.953203823224;
    msg.z_units = 60U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.100693095072);
    msg.setSource(47527U);
    msg.setSourceEntity(247U);
    msg.setDestination(25241U);
    msg.setDestinationEntity(234U);
    msg.op = 175U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("UFPMRZHSKRJBQFAWTFJJBOESCODXYVESZKYQDFMDZDFDAIRTFZNMWUXEENUIAJHNDUVPCRLVMURPQCIVYHAYILMZUFGZKNWUTOKVWAUAHHKHNPCI");
    tmp_msg_0.lat = 0.999138830663;
    tmp_msg_0.lon = 0.14940353024;
    tmp_msg_0.z = 0.858990986478;
    tmp_msg_0.z_units = 87U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.635139473712);
    msg.setSource(63807U);
    msg.setSourceEntity(113U);
    msg.setDestination(51645U);
    msg.setDestinationEntity(69U);
    msg.op = 0U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.796971393223);
    msg.setSource(56239U);
    msg.setSourceEntity(154U);
    msg.setDestination(34324U);
    msg.setDestinationEntity(166U);
    msg.op = 157U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.976595181818);
    msg.setSource(598U);
    msg.setSourceEntity(229U);
    msg.setDestination(2966U);
    msg.setDestinationEntity(224U);
    msg.value = 0.236389524861;
    msg.type = 110U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.0814779158739);
    msg.setSource(62406U);
    msg.setSourceEntity(71U);
    msg.setDestination(28542U);
    msg.setDestinationEntity(90U);
    msg.value = 0.810120971685;
    msg.type = 10U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.82837569826);
    msg.setSource(1922U);
    msg.setSourceEntity(102U);
    msg.setDestination(64846U);
    msg.setDestinationEntity(59U);
    msg.value = 0.881094925369;
    msg.type = 154U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.586381478424);
    msg.setSource(2012U);
    msg.setSourceEntity(79U);
    msg.setDestination(57673U);
    msg.setDestinationEntity(54U);
    msg.value = 0.249378280662;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.982242549274);
    msg.setSource(57206U);
    msg.setSourceEntity(202U);
    msg.setDestination(61838U);
    msg.setDestinationEntity(11U);
    msg.value = 0.706153452884;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.573351561199);
    msg.setSource(42352U);
    msg.setSourceEntity(168U);
    msg.setDestination(57254U);
    msg.setDestinationEntity(136U);
    msg.value = 0.295904844051;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.65637276506);
    msg.setSource(55566U);
    msg.setSourceEntity(189U);
    msg.setDestination(19920U);
    msg.setDestinationEntity(234U);
    msg.timestamp_last_service = 0.702694409188;
    msg.time_next_service = 0.898495716984;
    msg.time_motor_next_service = 0.940196880478;
    msg.time_idle_ground = 0.0892564390092;
    msg.time_idle_air = 0.41844009761;
    msg.time_idle_water = 0.206900705792;
    msg.time_idle_underwater = 0.835705839295;
    msg.time_idle_unknown = 0.446307819406;
    msg.time_motor_ground = 0.633006287597;
    msg.time_motor_air = 0.509586378223;
    msg.time_motor_water = 0.707393377499;
    msg.time_motor_underwater = 0.0719104475465;
    msg.time_motor_unknown = 0.262403676758;
    msg.rpm_min = 8630;
    msg.rpm_max = -17082;
    msg.depth_max = 0.981358518721;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.216953781197);
    msg.setSource(23798U);
    msg.setSourceEntity(113U);
    msg.setDestination(25555U);
    msg.setDestinationEntity(65U);
    msg.timestamp_last_service = 0.820174479211;
    msg.time_next_service = 0.13901006671;
    msg.time_motor_next_service = 0.508613763181;
    msg.time_idle_ground = 0.0195423475471;
    msg.time_idle_air = 0.13342221665;
    msg.time_idle_water = 0.231186298463;
    msg.time_idle_underwater = 0.570118355275;
    msg.time_idle_unknown = 0.57129954582;
    msg.time_motor_ground = 0.353407134326;
    msg.time_motor_air = 0.13654685124;
    msg.time_motor_water = 0.735861561691;
    msg.time_motor_underwater = 0.905599853939;
    msg.time_motor_unknown = 0.417546013005;
    msg.rpm_min = -9137;
    msg.rpm_max = -23932;
    msg.depth_max = 0.886667990866;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.339333516352);
    msg.setSource(15574U);
    msg.setSourceEntity(162U);
    msg.setDestination(38357U);
    msg.setDestinationEntity(33U);
    msg.timestamp_last_service = 0.870524822741;
    msg.time_next_service = 0.18776613279;
    msg.time_motor_next_service = 0.759787208174;
    msg.time_idle_ground = 0.368128184128;
    msg.time_idle_air = 0.529682215518;
    msg.time_idle_water = 0.0423712388079;
    msg.time_idle_underwater = 0.890255114041;
    msg.time_idle_unknown = 0.389835232538;
    msg.time_motor_ground = 0.257797245553;
    msg.time_motor_air = 0.0330267078322;
    msg.time_motor_water = 0.384788687364;
    msg.time_motor_underwater = 0.410122739115;
    msg.time_motor_unknown = 0.803379261717;
    msg.rpm_min = 23788;
    msg.rpm_max = -13264;
    msg.depth_max = 0.947267075694;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.859117820249);
    msg.setSource(62687U);
    msg.setSourceEntity(8U);
    msg.setDestination(61801U);
    msg.setDestinationEntity(11U);
    msg.severity = 16U;
    msg.text.assign("RPPLZPGBXHFWZORWJZROPYZSEXWKFGBYXVHQRDAZUGTDRZCYLBTRKQQZNJOVDHMCKWJNAMAHFMANVUSWJJKLMWNEQOGOQSRAISTYJZCEFVTNRKPLDSPLMUPRPOSTPIWCUNSIIYXVDLGABCBFUNAFUSDIEAZGLNEFDYIQVXJUB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.0919121691372);
    msg.setSource(61921U);
    msg.setSourceEntity(25U);
    msg.setDestination(11732U);
    msg.setDestinationEntity(155U);
    msg.severity = 176U;
    msg.text.assign("ATCWIPCOTAUFMMVIKSPBIXLTVZNEIRXSOQXSURTYVBPUVLUHGSDPGGUKAPTEDKBPFMJBQUHXJMYXTOKHQCRZMHFNQCANUTCNMAXAWRLDWHBIEEEDZXAYWNJLXFLYOSZSOSYLLLDQJAUETJGPFIDJROJSYGPFCGYBGEOHPAZAVBISCFCHKWOEKMNOQTUBGVBHRCPYNDYQWHGTEVCZNIGLFBJWZHIJJMDRKEUFVWLVXQDMSINQKOXZR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.686313929312);
    msg.setSource(18982U);
    msg.setSourceEntity(226U);
    msg.setDestination(47655U);
    msg.setDestinationEntity(151U);
    msg.severity = 246U;
    msg.text.assign("RPDFCHLZDHYDMICZUMVLXDWQXHVXIB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.726835887252);
    msg.setSource(28699U);
    msg.setSourceEntity(14U);
    msg.setDestination(58627U);
    msg.setDestinationEntity(203U);
    msg.channel = 110;
    msg.value = 1803288911;
    msg.gain = 136U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.885103094627);
    msg.setSource(51221U);
    msg.setSourceEntity(254U);
    msg.setDestination(12873U);
    msg.setDestinationEntity(38U);
    msg.channel = -57;
    msg.value = -716662525;
    msg.gain = 125U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.312741116852);
    msg.setSource(25714U);
    msg.setSourceEntity(228U);
    msg.setDestination(1008U);
    msg.setDestinationEntity(179U);
    msg.channel = 55;
    msg.value = 1814473302;
    msg.gain = 215U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.891293413883);
    msg.setSource(2973U);
    msg.setSourceEntity(153U);
    msg.setDestination(26719U);
    msg.setDestinationEntity(86U);
    msg.ch01 = 0.120750815367;
    msg.ch02 = 0.756554493304;
    msg.ch03 = 0.99666839542;
    msg.ch04 = 0.102587826673;
    msg.ch05 = 0.958740768639;
    msg.ch06 = 0.124855993986;
    msg.ch07 = 0.707622244976;
    msg.ch08 = 0.144762383254;
    msg.ch09 = 0.918918004745;
    msg.ch10 = 0.936568067534;
    msg.ch11 = 0.786633180402;
    msg.ch12 = 0.158542243174;
    msg.ch13 = 0.503157656359;
    msg.ch14 = 0.578205818663;
    msg.ch15 = 0.296394264536;
    msg.ch16 = 0.751479777616;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.267470868959);
    msg.setSource(61604U);
    msg.setSourceEntity(247U);
    msg.setDestination(13483U);
    msg.setDestinationEntity(135U);
    msg.ch01 = 0.943208961673;
    msg.ch02 = 0.805336830934;
    msg.ch03 = 0.884762080414;
    msg.ch04 = 0.721742425626;
    msg.ch05 = 0.856639103868;
    msg.ch06 = 0.107566196837;
    msg.ch07 = 0.376623456834;
    msg.ch08 = 0.807975704845;
    msg.ch09 = 0.213660070973;
    msg.ch10 = 0.819180713571;
    msg.ch11 = 0.27392281937;
    msg.ch12 = 0.584307730063;
    msg.ch13 = 0.0569735647199;
    msg.ch14 = 0.926698626216;
    msg.ch15 = 0.322964360145;
    msg.ch16 = 0.240405114296;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.360109823992);
    msg.setSource(9511U);
    msg.setSourceEntity(158U);
    msg.setDestination(8233U);
    msg.setDestinationEntity(218U);
    msg.ch01 = 0.933899513848;
    msg.ch02 = 0.806910384967;
    msg.ch03 = 0.00189654644168;
    msg.ch04 = 0.513419540466;
    msg.ch05 = 0.78308286;
    msg.ch06 = 0.306816188874;
    msg.ch07 = 0.234460354469;
    msg.ch08 = 0.398530137667;
    msg.ch09 = 0.966228203128;
    msg.ch10 = 0.0918145428926;
    msg.ch11 = 0.119530545;
    msg.ch12 = 0.365394526108;
    msg.ch13 = 0.0940505551266;
    msg.ch14 = 0.557294373396;
    msg.ch15 = 0.779412632493;
    msg.ch16 = 0.763702937495;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.387492518399);
    msg.setSource(94U);
    msg.setSourceEntity(242U);
    msg.setDestination(32115U);
    msg.setDestinationEntity(127U);
    msg.value = 0.959706131814;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.666653842324);
    msg.setSource(8429U);
    msg.setSourceEntity(38U);
    msg.setDestination(5150U);
    msg.setDestinationEntity(188U);
    msg.value = 0.34535628617;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.290418984069);
    msg.setSource(25739U);
    msg.setSourceEntity(107U);
    msg.setDestination(21885U);
    msg.setDestinationEntity(11U);
    msg.value = 0.119756639259;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.724873368554);
    msg.setSource(51469U);
    msg.setSourceEntity(40U);
    msg.setDestination(50315U);
    msg.setDestinationEntity(69U);
    msg.op = 13U;
    msg.lat = 0.799389398672;
    msg.lon = 0.261143703187;
    msg.height = 0.61957925857;
    msg.depth = 0.504323002663;
    msg.alt = 0.493306127332;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.756834235237);
    msg.setSource(50632U);
    msg.setSourceEntity(87U);
    msg.setDestination(22511U);
    msg.setDestinationEntity(155U);
    msg.op = 202U;
    msg.lat = 0.307224587961;
    msg.lon = 0.66920097682;
    msg.height = 0.00730785597366;
    msg.depth = 0.813587619223;
    msg.alt = 0.184085631343;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.76062174028);
    msg.setSource(57915U);
    msg.setSourceEntity(71U);
    msg.setDestination(48045U);
    msg.setDestinationEntity(36U);
    msg.op = 131U;
    msg.lat = 0.521668392571;
    msg.lon = 0.372146347038;
    msg.height = 0.327990827603;
    msg.depth = 0.402287862564;
    msg.alt = 0.369790391982;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
