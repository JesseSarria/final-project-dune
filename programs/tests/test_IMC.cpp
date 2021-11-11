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
// IMC XML MD5: f887a927f1b2d4d8f13d9a48e889acc4                            *
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
    msg.setTimeStamp(0.0830153220783);
    msg.setSource(62984U);
    msg.setSourceEntity(66U);
    msg.setDestination(23410U);
    msg.setDestinationEntity(57U);
    msg.state = 67U;
    msg.flags = 213U;
    msg.description.assign("VJHXLILBARQZYUCPDTCBGSWWZNSYKYUQIYEUGDIETNUVAEXVOEOSEFNPEGGFBOZIPRBPKVQLVCHMADUNZVBTOIGCLSZVAWAPPHFIJMYRDIAIRRKYTKOZWSEHZEKNMPKHLJBUKHFJLSSUTXHFQTCFQCXZODPNAJPDNCUWMDFTFJRYWVKJRCPQRVWSJMQTCBEXWZXSNKIBQRGATXVGHFYLJNOIGQYEBYAWXWDHOCRGBMJXLQGLMOMK");

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
    msg.setTimeStamp(0.836252373196);
    msg.setSource(44285U);
    msg.setSourceEntity(191U);
    msg.setDestination(36169U);
    msg.setDestinationEntity(148U);
    msg.state = 46U;
    msg.flags = 96U;
    msg.description.assign("RMYBASKVAZCIIGTQTWOUDVSSEGTJDZAAJJVLURIVMWLCHLYELBBJKCFBADBZOPHIZPEWLXROXWTYRTCMHEAJWCTMNLSXFZZBPEYVZIXSITPGTHYSLDOPXUYCORYGWNUNQGXACIAQKRVY");

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
    msg.setTimeStamp(0.764964834097);
    msg.setSource(22704U);
    msg.setSourceEntity(216U);
    msg.setDestination(31561U);
    msg.setDestinationEntity(201U);
    msg.state = 187U;
    msg.flags = 45U;
    msg.description.assign("BPQZCSAGANPLTNVCSIUCKWMGMSIRSNAGAOTKVFQJSHSFZTBMYNOMXRBVBXYEFJEDIJWJUDQZOPHENFALKXSPPRDMIEMMWNVBGYUHTWNOXTUYYECUPKGQTREUDTRADOVJZFFEKHCLLWXPYDVUZDUMJGYZBFBEFJARFHHBIDXJZAVOBYLQGITLQJRKQOXLYBPEEWIOGCUCLSOFLRKYCCTVXMCIWHNDNKOJSNQAVPIXZWQHDQ");

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
    msg.setTimeStamp(0.911705969897);
    msg.setSource(25870U);
    msg.setSourceEntity(107U);
    msg.setDestination(25911U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.00871437148657);
    msg.setSource(6054U);
    msg.setSourceEntity(8U);
    msg.setDestination(12187U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.443593456105);
    msg.setSource(50033U);
    msg.setSourceEntity(54U);
    msg.setDestination(30858U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.843170088305);
    msg.setSource(14642U);
    msg.setSourceEntity(72U);
    msg.setDestination(7757U);
    msg.setDestinationEntity(67U);
    msg.id = 232U;
    msg.label.assign("ITDOYUXYYYR");
    msg.component.assign("ZRNTSNCSYIQXVPHSDHPCZEMBJHXULKUWMLTGZDGDXIAZOGRCTXILAOPJBGAYKQUYQUWSBVROWXLRNBEJYQEOKAFXRPRJKVUAIOYZHEDMIYYB");
    msg.act_time = 58930U;
    msg.deact_time = 39147U;

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
    msg.setTimeStamp(0.595487972822);
    msg.setSource(13740U);
    msg.setSourceEntity(139U);
    msg.setDestination(45134U);
    msg.setDestinationEntity(57U);
    msg.id = 245U;
    msg.label.assign("SLJKDOPDRWVQUGOKUXINFHFIUZVHGOVMOCORNBPVYFSHZAWKIPTXEJMNJVZCELXGUHCRBZLSKVGPEXLYMADOTGJRWCIVDMSIARBBTFMRGNWJKQVRAAYQAKYZLQZGORNALCLBIFATQHEJFDLQBPBHHEKPSONNTNJPRCFYWWXTYZLSVHNMXSAIETPGPQIBEFRDOHOJYUBKWCUZDMWJTPWQDSYYWBEHKFMXMLCVCGZYUDQUNCXJA");
    msg.component.assign("LIKFFVEUBICEHOEHJLHUAATIATFEQDXIJCFUZTTWVYYTKOHCZNQGHQIMNZSJDFMPDLJMBEVUNVSWYRRTRZQZIDJXZPGUGKMOWERLDRXHMYFRFWJACTBQNOSEUQHLCRJNNSCLXDXHJIPVAVKHASVWANXNOWLZGQSC");
    msg.act_time = 50282U;
    msg.deact_time = 33240U;

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
    msg.setTimeStamp(0.949664651212);
    msg.setSource(15643U);
    msg.setSourceEntity(185U);
    msg.setDestination(31923U);
    msg.setDestinationEntity(67U);
    msg.id = 142U;
    msg.label.assign("MKQHCWSUNLQXLINBJLCNWJCQYPTHOWBEWYGSRRWPTOESDOZHOFNVMLNGUFTZXTTMHPJTFJZRUJJATDDCCEKMUVUWAYVNVPGDPQGXYKAXIYOKAMBAQZJYNQRCAVBDIIVRIUSXWMFKHFIQWROPQXNQESERIDBSWHELGLIXJDEFKHEKPZOVDGRETDFJFHVBTVLJGUWBNMMIORGNGZLATCUXZFXKDYYR");
    msg.component.assign("FDRFJKMUESIHPHPEVXYNOCBAJYNSJUWKYCKQWFEERVZJOTIISDMLLQFUUTKQYCRMMRTSODXQGPWOJJGMIBOUSZZHOHCACTTAYWXTEPOPRCRPIVNUKHPWVRZLLJBXSLEYBBRSDAQOAICTZDIKLRXFSFAZZVNDZXQSYLYQPNBGLHXELVNUJZBMIOMSCE");
    msg.act_time = 61477U;
    msg.deact_time = 13461U;

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
    msg.setTimeStamp(0.781306575388);
    msg.setSource(4844U);
    msg.setSourceEntity(161U);
    msg.setDestination(60966U);
    msg.setDestinationEntity(111U);
    msg.id = 183U;

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
    msg.setTimeStamp(0.0866390482728);
    msg.setSource(23081U);
    msg.setSourceEntity(3U);
    msg.setDestination(7133U);
    msg.setDestinationEntity(213U);
    msg.id = 216U;

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
    msg.setTimeStamp(0.403120819058);
    msg.setSource(39113U);
    msg.setSourceEntity(2U);
    msg.setDestination(30183U);
    msg.setDestinationEntity(157U);
    msg.id = 23U;

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
    msg.setTimeStamp(0.107735202105);
    msg.setSource(29623U);
    msg.setSourceEntity(243U);
    msg.setDestination(44332U);
    msg.setDestinationEntity(170U);
    msg.op = 92U;
    msg.list.assign("SMRJKQBILPHQKEYKVDXHTMDQMDCLEKIGBQCEOVFIXYUXMOCVVIMBBSQRDWNSAPTATFRHPXQMFNZJGLUVNSMLNMOPJYDSOKGGXWEGHDHAFASDFOCYWESZNORBQZCEN");

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
    msg.setTimeStamp(0.335891062123);
    msg.setSource(55338U);
    msg.setSourceEntity(63U);
    msg.setDestination(41929U);
    msg.setDestinationEntity(81U);
    msg.op = 48U;
    msg.list.assign("HOVMNRCZQKTBURVGV");

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
    msg.setTimeStamp(0.851380370223);
    msg.setSource(40348U);
    msg.setSourceEntity(204U);
    msg.setDestination(8359U);
    msg.setDestinationEntity(210U);
    msg.op = 161U;
    msg.list.assign("LKPYXXBSKZCZUAWKZBAAIHSRIQPNYFCDSSVRHZDRBGUCPVBMLJFXQYKXRQYDFCSKTSAFQFAOQXYRGJSVSLOIWCUWDOIVTSMUHJMYMFAZNMHULDYECTJGHLWPRNOTPRVOLJKIVVCQROUIEEAAJGXTEPNRHBVZYMNWBZPHGLFQMADJ");

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
    msg.setTimeStamp(0.0270398460079);
    msg.setSource(59710U);
    msg.setSourceEntity(164U);
    msg.setDestination(62855U);
    msg.setDestinationEntity(19U);
    msg.value = 231U;

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
    msg.setTimeStamp(0.66581528861);
    msg.setSource(23248U);
    msg.setSourceEntity(41U);
    msg.setDestination(31576U);
    msg.setDestinationEntity(12U);
    msg.value = 222U;

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
    msg.setTimeStamp(0.164539596493);
    msg.setSource(4359U);
    msg.setSourceEntity(178U);
    msg.setDestination(6896U);
    msg.setDestinationEntity(246U);
    msg.value = 53U;

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
    msg.setTimeStamp(0.632727399162);
    msg.setSource(15692U);
    msg.setSourceEntity(10U);
    msg.setDestination(45863U);
    msg.setDestinationEntity(190U);
    msg.consumer.assign("DFNIYQDPQTSCVBIKJZOEMJLBORCDSAWENETFTNYHACUIKEXFKWERSJIDZOLEHNXUMHQVRXXUMH");
    msg.message_id = 53776U;

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
    msg.setTimeStamp(0.984888465252);
    msg.setSource(65196U);
    msg.setSourceEntity(81U);
    msg.setDestination(38233U);
    msg.setDestinationEntity(108U);
    msg.consumer.assign("SNZJSHECMGYMSSIWHGVRQVBNFWZXWRUFPWODZTCIAWQYFLBGNPIQBOEOXKOOJUZMTKFCEDVEDVZVOEPKOERQVFEXEAYPHYCSQIIBOHOPBAZQLZKUDIGCHLHGKQCYPINYRXG");
    msg.message_id = 40857U;

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
    msg.setTimeStamp(0.387107253778);
    msg.setSource(36656U);
    msg.setSourceEntity(0U);
    msg.setDestination(32329U);
    msg.setDestinationEntity(130U);
    msg.consumer.assign("WZZORETXADXWKFQJYFVNLSURRKUVLCURFRLABSGJPBCCKPYKUWVBBCFDNVHBGWMMLMHOWWPKOJJEGTQFIEBDXVHTLBVGVUENOCCXZADEWTNMUCZQDAKXHN");
    msg.message_id = 25295U;

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
    msg.setTimeStamp(0.325276405998);
    msg.setSource(29984U);
    msg.setSourceEntity(233U);
    msg.setDestination(65317U);
    msg.setDestinationEntity(52U);
    msg.type = 142U;

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
    msg.setTimeStamp(0.470878154254);
    msg.setSource(31573U);
    msg.setSourceEntity(31U);
    msg.setDestination(22491U);
    msg.setDestinationEntity(7U);
    msg.type = 181U;

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
    msg.setTimeStamp(0.142228272644);
    msg.setSource(44793U);
    msg.setSourceEntity(135U);
    msg.setDestination(20931U);
    msg.setDestinationEntity(155U);
    msg.type = 178U;

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
    msg.setTimeStamp(0.514657216409);
    msg.setSource(28194U);
    msg.setSourceEntity(253U);
    msg.setDestination(27085U);
    msg.setDestinationEntity(232U);
    msg.op = 67U;

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
    msg.setTimeStamp(0.44633903654);
    msg.setSource(26518U);
    msg.setSourceEntity(154U);
    msg.setDestination(63698U);
    msg.setDestinationEntity(204U);
    msg.op = 51U;

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
    msg.setTimeStamp(0.0162384692152);
    msg.setSource(29842U);
    msg.setSourceEntity(66U);
    msg.setDestination(32038U);
    msg.setDestinationEntity(190U);
    msg.op = 195U;

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
    msg.setTimeStamp(0.802583295174);
    msg.setSource(62095U);
    msg.setSourceEntity(61U);
    msg.setDestination(8431U);
    msg.setDestinationEntity(108U);
    msg.total_steps = 224U;
    msg.step_number = 106U;
    msg.step.assign("DGCJFUIGLSNCPEHIGVFTYEIHXXUBIQMJEBZMDMYDPKKIUTZSLRBKROOOXNKUHFMDJAETRGNQBPNXBJWITTZLARBAESFVFOWSYOGQUCKPXCITAFSLQWNKQALQJWAPYEWZJUHVVEWZFHNJLC");
    msg.flags = 229U;

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
    msg.setTimeStamp(0.926310210398);
    msg.setSource(42987U);
    msg.setSourceEntity(184U);
    msg.setDestination(59940U);
    msg.setDestinationEntity(179U);
    msg.total_steps = 183U;
    msg.step_number = 66U;
    msg.step.assign("EXEWUQVMIPRKFVFPVNWHJUIBIARJBUBCFMUNNAVDTVCXZVKHSCSMAJDHBFOCZTPZCECYQVJGDDPLCBSJZLFNKEEHWGLWDVOMOSYYXSTTARSA");
    msg.flags = 157U;

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
    msg.setTimeStamp(0.480550680068);
    msg.setSource(37607U);
    msg.setSourceEntity(181U);
    msg.setDestination(49085U);
    msg.setDestinationEntity(34U);
    msg.total_steps = 51U;
    msg.step_number = 128U;
    msg.step.assign("QHFZZBNWNAXDPKJZKAOVUCZDVHROUVBVIMXMMGNDWDWOXCTNUYDRJBNYTUSPENUAJEKEFHRXDLZFBFPQNXVTKROYIWJHCCRPDZJOIQTJAIVUEQKMXOETUUSANIZBKDORQJZOFRWXZEPARYGGFWMYZAGJXUILVTEHHHNLDMHCGBKIPGWLYLHSLBGYKQECQYKAMJPRLRGKDNSOWVFCSFBSPPSMUTGOWTIMX");
    msg.flags = 171U;

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
    msg.setTimeStamp(0.185784336531);
    msg.setSource(42675U);
    msg.setSourceEntity(184U);
    msg.setDestination(36291U);
    msg.setDestinationEntity(159U);
    msg.state = 41U;
    msg.error.assign("RTXNUKKDJXSRZKFFLGJLUYFHGNENQHQBYTONZJOOIVLKHARPMBGKRUDOIIHXSUOLFVFWOSCBGWGNTCY");

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
    msg.setTimeStamp(0.465852109635);
    msg.setSource(40173U);
    msg.setSourceEntity(71U);
    msg.setDestination(34175U);
    msg.setDestinationEntity(160U);
    msg.state = 243U;
    msg.error.assign("SUFETSJBSULGUDJKJIVIETKZOZFQBNBVZUPKIBXKCDKOPYIVFGWPMGQTHDKOTCDTMQPVNLLGEAWRIRWNMXJKFEVYBUIBDXXMWQSAIWHEVYHYVAFMML");

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
    msg.setTimeStamp(0.254798401226);
    msg.setSource(18275U);
    msg.setSourceEntity(69U);
    msg.setDestination(18971U);
    msg.setDestinationEntity(254U);
    msg.state = 20U;
    msg.error.assign("FFNLJTHQIAKUXOCKUKOLMYBXBSKAHXZMZDINKFPTGPLVGNOZAFEDRNCZPPNZVBUOWACBTGSGQFSAATXCNDMHAGWYBTRUILRVJSCVOXRFYPLWKZRTWQJYYREWTBJHLQUDAGKBOGIQFXVDPNUBYSZRVGLNFSWZHPXQTJTMEMYDZMWWNYHEROWJMAGXGIDMJUDJCZKOVPHFQPYOESVEUSFUBHEPIRSCEQNLWDKIVMEXYJIAHIMVDIUCKTOHJLQX");

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
    msg.setTimeStamp(0.566422655061);
    msg.setSource(54928U);
    msg.setSourceEntity(78U);
    msg.setDestination(13408U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.129654415668);
    msg.setSource(63187U);
    msg.setSourceEntity(88U);
    msg.setDestination(43311U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.466159445428);
    msg.setSource(36108U);
    msg.setSourceEntity(42U);
    msg.setDestination(59773U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.0217038214231);
    msg.setSource(23376U);
    msg.setSourceEntity(212U);
    msg.setDestination(33409U);
    msg.setDestinationEntity(144U);
    msg.op = 80U;
    msg.speed_min = 0.305395962487;
    msg.speed_max = 0.102516263487;
    msg.long_accel = 0.502785581539;
    msg.alt_max_msl = 0.404637286056;
    msg.dive_fraction_max = 0.931014078436;
    msg.climb_fraction_max = 0.842584434245;
    msg.bank_max = 0.954667035501;
    msg.p_max = 0.0433091507654;
    msg.pitch_min = 0.211617570847;
    msg.pitch_max = 0.487606054721;
    msg.q_max = 0.818655109531;
    msg.g_min = 0.742153204087;
    msg.g_max = 0.149354733695;
    msg.g_lat_max = 0.0624764188401;
    msg.rpm_min = 0.918876888027;
    msg.rpm_max = 0.728339787734;
    msg.rpm_rate_max = 0.0985098590332;

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
    msg.setTimeStamp(0.458261818152);
    msg.setSource(22152U);
    msg.setSourceEntity(101U);
    msg.setDestination(51087U);
    msg.setDestinationEntity(31U);
    msg.op = 102U;
    msg.speed_min = 0.59350220313;
    msg.speed_max = 0.55297799811;
    msg.long_accel = 0.466937319414;
    msg.alt_max_msl = 0.612820717675;
    msg.dive_fraction_max = 0.408616453983;
    msg.climb_fraction_max = 0.541706423013;
    msg.bank_max = 0.690779063774;
    msg.p_max = 0.237684985028;
    msg.pitch_min = 0.529798589091;
    msg.pitch_max = 0.667074699078;
    msg.q_max = 0.780706193829;
    msg.g_min = 0.124725657147;
    msg.g_max = 0.328019829081;
    msg.g_lat_max = 0.698176115319;
    msg.rpm_min = 0.343603111031;
    msg.rpm_max = 0.373041989125;
    msg.rpm_rate_max = 0.883434454101;

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
    msg.setTimeStamp(0.0163275057405);
    msg.setSource(55126U);
    msg.setSourceEntity(127U);
    msg.setDestination(62868U);
    msg.setDestinationEntity(119U);
    msg.op = 128U;
    msg.speed_min = 0.75589473827;
    msg.speed_max = 0.340627494625;
    msg.long_accel = 0.240039905717;
    msg.alt_max_msl = 0.758499983126;
    msg.dive_fraction_max = 0.989701004096;
    msg.climb_fraction_max = 0.935725444827;
    msg.bank_max = 0.472533810936;
    msg.p_max = 0.161584997965;
    msg.pitch_min = 0.850070281762;
    msg.pitch_max = 0.847377156372;
    msg.q_max = 0.882194669389;
    msg.g_min = 0.53560764777;
    msg.g_max = 0.107038508492;
    msg.g_lat_max = 0.342322055019;
    msg.rpm_min = 0.608603302927;
    msg.rpm_max = 0.124640382769;
    msg.rpm_rate_max = 0.873212553369;

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
    msg.setTimeStamp(0.456008734198);
    msg.setSource(3779U);
    msg.setSourceEntity(61U);
    msg.setDestination(58727U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.950376576694);
    msg.setSource(319U);
    msg.setSourceEntity(113U);
    msg.setDestination(43446U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.716906239106);
    msg.setSource(3804U);
    msg.setSourceEntity(4U);
    msg.setDestination(29417U);
    msg.setDestinationEntity(221U);
    IMC::MsgList tmp_msg_0;
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
    msg.setTimeStamp(0.780110008273);
    msg.setSource(10231U);
    msg.setSourceEntity(198U);
    msg.setDestination(38469U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.720847529214;
    msg.lon = 0.668990578844;
    msg.height = 0.199895669747;
    msg.x = 0.366303327499;
    msg.y = 0.0313283748173;
    msg.z = 0.806201787028;
    msg.phi = 0.787214003772;
    msg.theta = 0.310924138548;
    msg.psi = 0.58000714616;
    msg.u = 0.434470914864;
    msg.v = 0.90045204301;
    msg.w = 0.244075990927;
    msg.p = 0.144169816507;
    msg.q = 0.631640319703;
    msg.r = 0.965383121405;
    msg.svx = 0.599295247435;
    msg.svy = 0.141050192702;
    msg.svz = 0.439127151092;

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
    msg.setTimeStamp(0.632300434297);
    msg.setSource(42389U);
    msg.setSourceEntity(180U);
    msg.setDestination(31248U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.123607722305;
    msg.lon = 0.866536223317;
    msg.height = 0.163187554344;
    msg.x = 0.647203088;
    msg.y = 0.570530755926;
    msg.z = 0.68517303494;
    msg.phi = 0.362563912875;
    msg.theta = 0.652936542808;
    msg.psi = 0.519148263143;
    msg.u = 0.312648352096;
    msg.v = 0.576306872288;
    msg.w = 0.122586108277;
    msg.p = 0.261859804847;
    msg.q = 0.1610126218;
    msg.r = 0.525320347068;
    msg.svx = 0.760490573549;
    msg.svy = 0.907059760605;
    msg.svz = 0.600445938193;

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
    msg.setTimeStamp(0.334546074894);
    msg.setSource(13002U);
    msg.setSourceEntity(248U);
    msg.setDestination(18029U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.985050003101;
    msg.lon = 0.964514243053;
    msg.height = 0.957306248353;
    msg.x = 0.755060182638;
    msg.y = 0.524254773399;
    msg.z = 0.241785001184;
    msg.phi = 0.107092096433;
    msg.theta = 0.17303565742;
    msg.psi = 0.315895981884;
    msg.u = 0.301869307453;
    msg.v = 0.452755094829;
    msg.w = 0.204466441087;
    msg.p = 0.766775616308;
    msg.q = 0.53998742824;
    msg.r = 0.312531279536;
    msg.svx = 0.558060834189;
    msg.svy = 0.868202677005;
    msg.svz = 0.26813074723;

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
    msg.setTimeStamp(0.231564333154);
    msg.setSource(64448U);
    msg.setSourceEntity(12U);
    msg.setDestination(52368U);
    msg.setDestinationEntity(99U);
    msg.op = 154U;
    msg.entities.assign("AIKVKSNHRHZCOZLQIGYGFTBYVQPZLGJYRJKVEEOICCMIGPLWZNIXSKWIZYTRDNLOXLBUFJKLXMUARVSAKNCAQAFOMKOSSRWJIBIPGFTPHXQGVBTVOJFYZDCXGJAHSOEHYVUWDNMEWREMMFSBHLWMIFHPAQZGNXXSVWQUQNFFBVLGPMUVDPTJCBQBLTUYOKXQBPTY");

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
    msg.setTimeStamp(0.609947508632);
    msg.setSource(30720U);
    msg.setSourceEntity(109U);
    msg.setDestination(8245U);
    msg.setDestinationEntity(36U);
    msg.op = 147U;
    msg.entities.assign("CKLVYVWLENKDCMAXKTWCOBJAMZCFWLYIISQHCVJWXZAIURALODXQXHFYSUR");

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
    msg.setTimeStamp(0.669058479496);
    msg.setSource(25837U);
    msg.setSourceEntity(141U);
    msg.setDestination(9275U);
    msg.setDestinationEntity(228U);
    msg.op = 134U;
    msg.entities.assign("DNWYLMPQCDCEYQGQLWBUUMSWUNSZJNGOOHUZTJCABLCZRXVDLEZWOKAQUQKYNVYEHSTAPFZHJIXHECENEJCCJVFIRPNFMKASHWJMVIIDVFSOOEYBRHKFGFSAALIIAKFXBSYKZJZJKLSITLOPXTYHTTGRPWMDLSDFQRWWHEBQPCEOPKDXNVVGRPTQCHYZVTVGDXALNCBZHGWMRDOQSNEBXKNQFUBPYOMMRTUYFGRUTD");

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
    msg.setTimeStamp(0.72073119052);
    msg.setSource(33444U);
    msg.setSourceEntity(117U);
    msg.setDestination(18269U);
    msg.setDestinationEntity(122U);
    msg.type = 192U;
    msg.speed = 45909U;
    const char tmp_msg_0[] = {-6, -68, -118, 31, 103, -2, -104, -34, 42, 91, -95, 77, -39, -113, 26, -72, 23, -8, -88, 43, 117, -90, 29, 34, 35, -9, 26, 93, -117, 41, 41, -68, 87, -64, 108, 24, -60, -101, -100, -20, 72, -23, 31, -67, 108, -58, -66, -33, -10, -4, 27, -117, -35, -113, 93, -12, -68, -111, 68, -63, 77, 33, -73, 113, -35, -42, -26, 60, -83, -73, 104, 79, 45, -62, 56, 35, -11, 103, 126, 26, 88, 101, -50, -125, 64, 54, -9, -44, -121, -112, -34, -123, -43, 13, -108, -46, 100, 37, 66, -9, 106, -51, -87, -44, 66, -72, -121, 87, 73, 14, 83, 102, 42, 74, 97, -39, -89, 55, 105, -67, -43, 107, 2, -19, 49, -29, 12, -32, 66, -64, 41, -109, -12, -65, 112, 50, -13, -97, 30, 23, -17, 40, -65, -97, -15, -128, -92, 2, 100, -67, -18, -75, -91, 95, 60, -68, 35, -28, -9, 122, -39, -2, -106, 93, -58, -62, -121, 114, 97, 97, 0, -15, 121, 124, 116, -73, -11, -103, -5, -80, -115, 41, 60, -88, 117, -57, 124, -70, 64, -54, -94, -9, -92, 28, -53, 11, 101, -117, -14, 119, 90, 13, -13, -61, -57, 75, 111, -123, -75, 64, -114, -113, -28, -92, -1, 106, 22, -47, 125, -83, -8, -91, 57, -109, -48, 34, 19, -46, 109, -50, -12, -97, 36, -120, -10, -26, -101, -10, -21, -109};
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
    msg.setTimeStamp(0.126746401534);
    msg.setSource(37817U);
    msg.setSourceEntity(244U);
    msg.setDestination(20619U);
    msg.setDestinationEntity(125U);
    msg.type = 206U;
    msg.speed = 56680U;
    const char tmp_msg_0[] = {32, -102, 26, 2, 79, 16, -74, -66, -114, -102, -14, 19, 47, -116, -117, 79, -45, -25, -88};
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
    msg.setTimeStamp(0.880114966716);
    msg.setSource(51472U);
    msg.setSourceEntity(232U);
    msg.setDestination(28744U);
    msg.setDestinationEntity(176U);
    msg.type = 103U;
    msg.speed = 51172U;
    const char tmp_msg_0[] = {-121, 33, -115, 98, 117, 12, -61, -106, -108, 102, 94, -124, 31, 61, 68, 81, -37, -110, -51, -62, -56, -122, -119, -50, 1, 32, 110, -65, -79, -30, 33, 43, 99, 20, 94, -35, 110, -102, 15, 121, -107, 125, 50, 14, -65, 96, 79, -66, -58, -60, -49, -19, 91, 105, 30, 94, 94, -110, 48, 14, -121, 28, 82, 43, 10, 8, -18, -54, 54, 112, -2, -58, 81, 58, 105, -88, -58, 111, -39, -88, 10, -30, 114, 67, 108, -81, 124, -72, 30, -21, 62, 43, -120, 78, -7, -47, 25, -93, 4, -128, 123, -69, 58, 86, 1, 97, 22, -108, -54, -105, -14, 42, 72, 40, 106};
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
    msg.setTimeStamp(0.0662486212902);
    msg.setSource(56447U);
    msg.setSourceEntity(203U);
    msg.setDestination(55028U);
    msg.setDestinationEntity(50U);
    msg.op = 195U;
    msg.tas2acc_pgain = 0.430278585686;
    msg.bank2p_pgain = 0.363004236331;

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
    msg.setTimeStamp(0.69740986032);
    msg.setSource(11364U);
    msg.setSourceEntity(228U);
    msg.setDestination(39534U);
    msg.setDestinationEntity(167U);
    msg.op = 233U;
    msg.tas2acc_pgain = 0.9265948543;
    msg.bank2p_pgain = 0.402590206005;

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
    msg.setTimeStamp(0.73250723061);
    msg.setSource(4102U);
    msg.setSourceEntity(90U);
    msg.setDestination(54834U);
    msg.setDestinationEntity(83U);
    msg.op = 131U;
    msg.tas2acc_pgain = 0.820287085566;
    msg.bank2p_pgain = 0.601519319183;

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
    msg.setTimeStamp(0.176478347271);
    msg.setSource(59237U);
    msg.setSourceEntity(189U);
    msg.setDestination(15842U);
    msg.setDestinationEntity(162U);
    msg.available = 2894955385U;
    msg.value = 91U;

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
    msg.setTimeStamp(0.331760241073);
    msg.setSource(1389U);
    msg.setSourceEntity(209U);
    msg.setDestination(4366U);
    msg.setDestinationEntity(223U);
    msg.available = 3932752650U;
    msg.value = 30U;

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
    msg.setTimeStamp(0.553246107933);
    msg.setSource(23311U);
    msg.setSourceEntity(219U);
    msg.setDestination(22077U);
    msg.setDestinationEntity(116U);
    msg.available = 1468546745U;
    msg.value = 99U;

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
    msg.setTimeStamp(0.594790038293);
    msg.setSource(39878U);
    msg.setSourceEntity(141U);
    msg.setDestination(6746U);
    msg.setDestinationEntity(206U);
    msg.op = 4U;
    msg.snapshot.assign("ACBIPDQGPUSPJVOGZGUMGIZCFHOKAYBOLTDVINEOQHBIGFULARFSFBLTZDHBTRRIQSBJQOZXINNHLRYYJEAGNMCEIAMRUNBMNWCFKRAVHSSMLXDWZFOWFZNRPAEWYDPVJLOYXWDUYUKQCXELCZYOJHHIXLUX");
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 224U;
    tmp_msg_0.range = 0.181188944964;
    tmp_msg_0.acceptance = 150U;
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
    msg.setTimeStamp(0.363572003124);
    msg.setSource(6918U);
    msg.setSourceEntity(107U);
    msg.setDestination(48007U);
    msg.setDestinationEntity(200U);
    msg.op = 172U;
    msg.snapshot.assign("WCUZUDAESTJGVAYBXRIXZTQAUFKEBFGMLTMMEZMFGIXGUTCOYJOOSACTLFTRYLWHOETICFUUZAQHRPUIZJQRYMITQCPNYPOMBUXENRZXDDGQGPEJMXXTJHDQZKDGQLSNPJKFANMSJGKBNVYKGERUHAOPSYASDKWILXBNZOVXDVFQHYDHWRBXWNYCCNFLWCPJPRKIJEHKVUELQBZHCPSVAJVFWAGSWDVOLHHWFMLMBRZ");
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.463978808573;
    tmp_msg_0.beam_height = 0.99324369102;
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
    msg.setTimeStamp(0.162827620665);
    msg.setSource(19558U);
    msg.setSourceEntity(162U);
    msg.setDestination(11487U);
    msg.setDestinationEntity(7U);
    msg.op = 164U;
    msg.snapshot.assign("GOUMZRGHFDEQVIAVBSPNOVYTQJQXDMXSZYTTBQCPCTLIBUNPSWXPZTPIOWZIBIWAGPCLIFBYAROHRIVDGECOQZWNE");
    IMC::Force tmp_msg_0;
    tmp_msg_0.value = 0.857379157979;
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
    msg.setTimeStamp(0.451036885449);
    msg.setSource(57183U);
    msg.setSourceEntity(100U);
    msg.setDestination(60350U);
    msg.setDestinationEntity(100U);
    msg.op = 206U;
    msg.name.assign("HKASJNNOJJMLQRBGRYLOPMDDVTLBKVHZSGCKVOPBDZGK");

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
    msg.setTimeStamp(0.0624010685808);
    msg.setSource(21105U);
    msg.setSourceEntity(169U);
    msg.setDestination(41134U);
    msg.setDestinationEntity(54U);
    msg.op = 38U;
    msg.name.assign("VINTAJVHTNQRXORUXTQNWSWPCYJNWBBPLQZXKGBTJAGKIRAECHZLCBVFAMEYWOBKUOVMYQQKFDKMBHHEHLHHGJTVUXORSGXPPSKNYLKBZLHWLADLQWGFKTFAIOERXSDJYSPNGLQJSPXXOACIOYUVMYGQVRPRLMUYFUCAF");

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
    msg.setTimeStamp(0.462933749331);
    msg.setSource(38772U);
    msg.setSourceEntity(62U);
    msg.setDestination(32543U);
    msg.setDestinationEntity(148U);
    msg.op = 40U;
    msg.name.assign("GPZWFDFBCKDGDTMRYRJCWOEKBLDRAUMXYMSWVIRXCYETSYCKRGMCNHEYULHUKLGNBXERYYMCEAJUFXPKHIWATIAWBGGSXLQNIDPJBAPWDTCRJEZDQCOOBTHBPFMJOTOGXLQQFBUUSSPZHKMFZOYQJNFWQTCYOQOIQVHGND");

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
    msg.setTimeStamp(0.252623108112);
    msg.setSource(45445U);
    msg.setSourceEntity(130U);
    msg.setDestination(61898U);
    msg.setDestinationEntity(90U);
    msg.type = 218U;
    msg.htime = 0.771324027154;
    msg.context.assign("PQZPQWBWFM");
    msg.text.assign("IVIDCQIKOYCVORZHGRJCFFAIYPFAAPYLTCONSITKMNPTGXTSBEYACZXXQQDTIRPSUPUUVNYOGMGMLTGAVULMOONSWHXJDCHOXPPOKNVGKEQJHZNHXCQLUWDDEWBBYWJWFLSUJZZJXBASFWKXQGUBMISDAQGRSHELFZVJTLRGRIBOFMTBUZINUXZWGUAKSMLEAQYMNYLE");

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
    msg.setTimeStamp(0.241896139416);
    msg.setSource(55085U);
    msg.setSourceEntity(60U);
    msg.setDestination(13359U);
    msg.setDestinationEntity(52U);
    msg.type = 247U;
    msg.htime = 0.525986753472;
    msg.context.assign("IXQZBOZFGKFLWPTLIYEOWNWMXEKBPAPZKAASEFLJEXPQOTHRSNKESZHDAAFPJMQRLIIXYEZOSUAKERK");
    msg.text.assign("GAJFLUSHXLISDKKRPSKVYRRJOVGBBUUHULFQQMDWREQGOHEYFIRQIDCZ");

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
    msg.setTimeStamp(0.859074006243);
    msg.setSource(65136U);
    msg.setSourceEntity(81U);
    msg.setDestination(47112U);
    msg.setDestinationEntity(152U);
    msg.type = 96U;
    msg.htime = 0.714824824384;
    msg.context.assign("CDEIMEBHSWECZSVPHQ");
    msg.text.assign("BLIWXDFJKKGCAZZJMETRYQWHVWJRWRVRYFYLURULHOVXHLLSVLEBWRHMZTOZRZPAWXGNBOIDVGIUQNSFTWASPKMATLSFQOQXYPPLVUUDRYSRALCNUXUTFHDBXWSZVEBVXUOEJCTPKPJTRDJEOASGBNCCHTZEMUGZHKKACZOSPJDYJJVYINPIMIOWQ");

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
    msg.setTimeStamp(0.187272014593);
    msg.setSource(52794U);
    msg.setSourceEntity(254U);
    msg.setDestination(1574U);
    msg.setDestinationEntity(224U);
    msg.command = 226U;
    msg.htime = 0.728614999002;

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
    msg.setTimeStamp(0.575090678464);
    msg.setSource(15981U);
    msg.setSourceEntity(31U);
    msg.setDestination(41896U);
    msg.setDestinationEntity(187U);
    msg.command = 227U;
    msg.htime = 0.230002356534;

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
    msg.setTimeStamp(0.506601058345);
    msg.setSource(16290U);
    msg.setSourceEntity(21U);
    msg.setDestination(48626U);
    msg.setDestinationEntity(207U);
    msg.command = 63U;
    msg.htime = 0.932959025569;

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
    msg.setTimeStamp(0.108070026928);
    msg.setSource(49064U);
    msg.setSourceEntity(218U);
    msg.setDestination(64214U);
    msg.setDestinationEntity(86U);
    msg.op = 188U;
    msg.file.assign("OLBTJEGWUBTODNBNWXPKMIHDZWGUFZGQLOUMSYRWONOZWCLVVXBRUEYDSKT");

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
    msg.setTimeStamp(0.111892680211);
    msg.setSource(9623U);
    msg.setSourceEntity(125U);
    msg.setDestination(49230U);
    msg.setDestinationEntity(241U);
    msg.op = 83U;
    msg.file.assign("TLCOFCLOSRSWDZPIRDEARPSIFAYBCOZMLJZMZGSBFNFVMLHNJIOKTVPWWGUQQSTNLCUVYDNFLUYTDHMEJTJRIQCFNTAXNPAWQOIMBYYWY");

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
    msg.setTimeStamp(0.853382357797);
    msg.setSource(64277U);
    msg.setSourceEntity(154U);
    msg.setDestination(6091U);
    msg.setDestinationEntity(213U);
    msg.op = 91U;
    msg.file.assign("ZDUMNFMNRUNIFNHOBUENZYLPDWCOVHYDHPJQPNXJQGWENEOYIIJNARSHJAKKZVLXWZLDXSINFTQDWKHCO");

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
    msg.setTimeStamp(0.253809290812);
    msg.setSource(9458U);
    msg.setSourceEntity(239U);
    msg.setDestination(63549U);
    msg.setDestinationEntity(193U);
    msg.op = 225U;
    msg.clock = 0.994207260357;
    msg.tz = 38;

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
    msg.setTimeStamp(0.367797278684);
    msg.setSource(52881U);
    msg.setSourceEntity(172U);
    msg.setDestination(6692U);
    msg.setDestinationEntity(111U);
    msg.op = 121U;
    msg.clock = 0.767145252166;
    msg.tz = -72;

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
    msg.setTimeStamp(0.103883826937);
    msg.setSource(54814U);
    msg.setSourceEntity(67U);
    msg.setDestination(50240U);
    msg.setDestinationEntity(45U);
    msg.op = 246U;
    msg.clock = 0.537948772455;
    msg.tz = 93;

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
    msg.setTimeStamp(0.147014093051);
    msg.setSource(4869U);
    msg.setSourceEntity(232U);
    msg.setDestination(55589U);
    msg.setDestinationEntity(58U);
    msg.conductivity = 0.715273629276;
    msg.temperature = 0.387379373579;
    msg.depth = 0.931004345302;

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
    msg.setTimeStamp(0.344604553971);
    msg.setSource(46771U);
    msg.setSourceEntity(15U);
    msg.setDestination(53868U);
    msg.setDestinationEntity(45U);
    msg.conductivity = 0.723288634581;
    msg.temperature = 0.686999805606;
    msg.depth = 0.317935038213;

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
    msg.setTimeStamp(0.244797206498);
    msg.setSource(65022U);
    msg.setSourceEntity(214U);
    msg.setDestination(61413U);
    msg.setDestinationEntity(203U);
    msg.conductivity = 0.799233861235;
    msg.temperature = 0.520095450482;
    msg.depth = 0.986357780221;

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
    msg.setTimeStamp(0.669297709455);
    msg.setSource(38848U);
    msg.setSourceEntity(27U);
    msg.setDestination(58665U);
    msg.setDestinationEntity(231U);
    msg.altitude = 0.729563613008;
    msg.roll = 25295U;
    msg.pitch = 13782U;
    msg.yaw = 844U;
    msg.speed = 31227;

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
    msg.setTimeStamp(0.841180204741);
    msg.setSource(28062U);
    msg.setSourceEntity(237U);
    msg.setDestination(44574U);
    msg.setDestinationEntity(207U);
    msg.altitude = 0.567272919313;
    msg.roll = 60247U;
    msg.pitch = 24253U;
    msg.yaw = 59043U;
    msg.speed = 31530;

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
    msg.setTimeStamp(0.660057543196);
    msg.setSource(64959U);
    msg.setSourceEntity(245U);
    msg.setDestination(2530U);
    msg.setDestinationEntity(119U);
    msg.altitude = 0.582797597737;
    msg.roll = 36775U;
    msg.pitch = 4710U;
    msg.yaw = 48739U;
    msg.speed = 16875;

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
    msg.setTimeStamp(0.47025463094);
    msg.setSource(17912U);
    msg.setSourceEntity(198U);
    msg.setDestination(34483U);
    msg.setDestinationEntity(56U);
    msg.altitude = 0.516092694771;
    msg.width = 0.568140604225;
    msg.length = 0.183399303102;
    msg.bearing = 0.871678926578;
    msg.pxl = -832;
    msg.encoding = 38U;
    const char tmp_msg_0[] = {-111, -10, -40, -71, 57, -22, -128, -90, 87, -34, 66, 126, -44, 65, 12, -107, -65, 110, 111, -37, -52, -63, -26, 109, -57, 14, 106, 97, -20, 51, 90, 82, -47, 49, 63, -65, 97, -60, -94, -125, -116, 6, -72, 76, 70, -87, 104, -39, 26, -28, 32, 62, -30, -73, 92, -32, 59, -24, 103, 115, 113, 26, 46, -29, 24, 28, -30, -92, -13, 9, -24, 7, -10, -9, -80, 93, 34, 51, -46, -41, 60, 92, 60, 55, -37, -82, 68, 69, 32, 42, -86, 33, -56, 24, -8, 12, 27, -14, -118, -109, 103, -123, 62, -16};
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
    msg.setTimeStamp(0.788242890253);
    msg.setSource(22364U);
    msg.setSourceEntity(105U);
    msg.setDestination(35093U);
    msg.setDestinationEntity(196U);
    msg.altitude = 0.835117478249;
    msg.width = 0.716428303428;
    msg.length = 0.0888071432718;
    msg.bearing = 0.664422862142;
    msg.pxl = -20901;
    msg.encoding = 135U;
    const char tmp_msg_0[] = {-85, 88, -11, 41, -51, 96, 67, -120, -120, 31, -110, -25, 89, 35, -99, -39, 116, -52, -63, -74, 68, 32, -110, 34, 27, 100, 39, -95, -48, -16, 70, 3, -18, -7, 112, 67, 69, -95, 28, 124, -25, -51, 92, -104, 120, 35, 96, -113, 125, -43, -44, -92, 24, 2, 118, -66, 92, 104, -37, -73, 112};
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
    msg.setTimeStamp(0.630856804525);
    msg.setSource(13521U);
    msg.setSourceEntity(7U);
    msg.setDestination(50394U);
    msg.setDestinationEntity(205U);
    msg.altitude = 0.585818245745;
    msg.width = 0.111451775295;
    msg.length = 0.409236416852;
    msg.bearing = 0.173117705496;
    msg.pxl = -28662;
    msg.encoding = 30U;
    const char tmp_msg_0[] = {-120, -44, -67, -6, 98, 44, -95, -59, -5, 63, 13, -119, -68, -76, -52, 73, -65, 50, 38, -23, -37, 97, -109, 2, 83, 61, -122, 0, -54, -33, -127, -125, -33, 3, 39, 58, -33, 41, -68, -33, 103, 53, 28, -111, 64, 94, 97, 11, -87, -52, 63, 91, -128, 42, -4, 121, 115, 116, 46, 78, -18, 24, -124, -19, 62, 38, -38, -7, -112, 20, 123, -9, -99, 126, 100, 14, 111, -46, 12, -14, 107, 126, -92, 25, -122, 62, 110, 72, 107, -79, -70, -10, 83, 65, -43, 49, 115, -111, -36, -125, -101, -128, 13, -17, 104, -70, 24, 45, -69, 43, -57, -13, -26, 52, 37, 17, -15, -5, -54, -125, -63, -6, 51, 122, -123, 73, 82, 19, -80, 102, -124};
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
    msg.setTimeStamp(0.206855220731);
    msg.setSource(23059U);
    msg.setSourceEntity(199U);
    msg.setDestination(46688U);
    msg.setDestinationEntity(100U);
    msg.text.assign("KMOQUJAEEHPORFDEXYQROWZECPADBKQGABFKYJAVMMDJLCLNORGRJLUWCLUHXJXPNMAUUOKVMBPMKNKYDSSMVDBCSAZASWHBTLRQVDZWOIUJTROWRYASBETGRECDHFIFGXQNJZDYZDMXGVCKTVSWYYBWILCSSRXWEVWUUWKHIBDYTZEHTSEBPSNZATPYICINJYLMVK");
    msg.type = 34U;

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
    msg.setTimeStamp(0.891291590701);
    msg.setSource(59742U);
    msg.setSourceEntity(19U);
    msg.setDestination(55671U);
    msg.setDestinationEntity(199U);
    msg.text.assign("HLVVFPGDHPQOXLGVCUAEZYEYKUNMJJIPSJMKHMNYBMDHAVJIELWKASWNZVFXYWHYJHUQSTQRKCBLECTTPIPELLZJHWLWTCQMXTZDUSBPSGBWCZWJOQIVUPXHIV");
    msg.type = 106U;

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
    msg.setTimeStamp(0.764541004646);
    msg.setSource(41656U);
    msg.setSourceEntity(149U);
    msg.setDestination(61545U);
    msg.setDestinationEntity(209U);
    msg.text.assign("AAMHOCFPDGXTQICFGPSWXCLIEYUJQIEMUMIJQZWFCSRCDSHNCSZKFGM");
    msg.type = 27U;

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
    msg.setTimeStamp(0.749142103658);
    msg.setSource(48130U);
    msg.setSourceEntity(175U);
    msg.setDestination(44164U);
    msg.setDestinationEntity(177U);
    msg.parameter = 161U;
    msg.numsamples = 104U;
    msg.lat = 0.0346394346282;
    msg.lon = 0.219413392489;

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
    msg.setTimeStamp(0.436131273228);
    msg.setSource(54713U);
    msg.setSourceEntity(81U);
    msg.setDestination(49684U);
    msg.setDestinationEntity(130U);
    msg.parameter = 200U;
    msg.numsamples = 56U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 23297U;
    tmp_msg_0.avg = 0.941552517885;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.834215011706;
    msg.lon = 0.47450831793;

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
    msg.setTimeStamp(0.118102516764);
    msg.setSource(57173U);
    msg.setSourceEntity(28U);
    msg.setDestination(28135U);
    msg.setDestinationEntity(222U);
    msg.parameter = 121U;
    msg.numsamples = 40U;
    msg.lat = 0.162485285473;
    msg.lon = 0.368373331342;

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
    msg.setTimeStamp(0.432587061205);
    msg.setSource(19026U);
    msg.setSourceEntity(114U);
    msg.setDestination(7847U);
    msg.setDestinationEntity(29U);
    msg.depth = 7612U;
    msg.avg = 0.843103175875;

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
    msg.setTimeStamp(0.141489748959);
    msg.setSource(27668U);
    msg.setSourceEntity(215U);
    msg.setDestination(4633U);
    msg.setDestinationEntity(5U);
    msg.depth = 26748U;
    msg.avg = 0.667879770512;

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
    msg.setTimeStamp(0.0513033616913);
    msg.setSource(24180U);
    msg.setSourceEntity(125U);
    msg.setDestination(37930U);
    msg.setDestinationEntity(93U);
    msg.depth = 32016U;
    msg.avg = 0.00624259235294;

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
    msg.setTimeStamp(0.284707381069);
    msg.setSource(18675U);
    msg.setSourceEntity(137U);
    msg.setDestination(1141U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.278115631265);
    msg.setSource(31661U);
    msg.setSourceEntity(87U);
    msg.setDestination(39018U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.0570420138778);
    msg.setSource(108U);
    msg.setSourceEntity(239U);
    msg.setDestination(27195U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.840451556956);
    msg.setSource(55718U);
    msg.setSourceEntity(151U);
    msg.setDestination(35289U);
    msg.setDestinationEntity(166U);
    msg.sys_name.assign("NLMAZHZBAEULVOZCMCMOWPYMHFTFSMJFVHPHTBUJYARBXHNZRYLPMLWSGWRKVXSIJCCZESOQSFGMSOGDJPXEMQCHEHKBWJGWJXXRCTDSYBBUZUIQPVWOGQIBOLYDDVVCPWEFFOODQKDUADBLPFSRNNGLUUGNXICFSAYJALEIUTAYZNLKYHPQIBNTYIADPOBPKRRM");
    msg.sys_type = 61U;
    msg.owner = 32451U;
    msg.lat = 0.222620008763;
    msg.lon = 0.563312169065;
    msg.height = 0.0385174938749;
    msg.services.assign("SETYBGOVNKRIABAANMSUCYOCGQNEZSNIZUFQMSTIMDFPPJGOHDUICAYKSVSGDVORPOGNSWSDHXOHAQMNVOEVWWQJVWRHFZDGRXRKRWVJXYEWYQUVULCHEBCTFYYFLXHGPEPWZNDJGZUVNHPCDXZPLHTDKJLPKUONLQTMRRPZYUBWVZWSBDRZIKIJFPRLFEALDOLMXQFJTAJXQHGKYXXMBUYJTKQAMBUBMFZI");

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
    msg.setTimeStamp(0.650765385746);
    msg.setSource(1541U);
    msg.setSourceEntity(49U);
    msg.setDestination(45111U);
    msg.setDestinationEntity(45U);
    msg.sys_name.assign("GSUEYNHBPEERNUGVZITWJIYQPZDIJPYJBXEDPFJMSAVVTDCESRWYSLRDSNKWALPCWJBAAKKOTTERDBLYWQJOIXKTONJQTNKIHKKKXMGILSLMMLUB");
    msg.sys_type = 184U;
    msg.owner = 13826U;
    msg.lat = 0.346559210036;
    msg.lon = 0.30689158401;
    msg.height = 0.673381377855;
    msg.services.assign("MBXPYVZQELFAJXGIQRKTPEESNZQTTHCUHPTZVLKRDNJSHTWSXAPOHKLKLRYSVKMTJTUJXQJMWDWZAMYVFTLKBTYPDOGBGUYDJHINRZIOGIBANSEMGEP");

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
    msg.setTimeStamp(0.375302456562);
    msg.setSource(61711U);
    msg.setSourceEntity(227U);
    msg.setDestination(57792U);
    msg.setDestinationEntity(64U);
    msg.sys_name.assign("AEZVRAKQNJITZSONAHTHVPZ");
    msg.sys_type = 2U;
    msg.owner = 15889U;
    msg.lat = 0.6522566163;
    msg.lon = 0.652462943162;
    msg.height = 0.00364050524961;
    msg.services.assign("AHOMDKDHDKIMKGVAWZUQRGJIQPJOQZYKXDHBSQURLNRSKGXFROXCGNBWJJGUTRFDZXYQKJIQSIHDCZFMQEWBOOWTTSHVTPLYLOLKSVEEMZFBVBTFWVETXBISXBYQNCXSEMFIMCAYTSYZIYDAGLTVNUXREFOWFAYJEOMPBFHVLRWZPUCDXNPVRZITCPBZWJCLCKRWNCNQLIGGAHHNUDGXTYDLVEUJNEWASNKAGJMUPKALSIFEJMUBPQCYP");

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
    msg.setTimeStamp(0.160057215617);
    msg.setSource(30406U);
    msg.setSourceEntity(151U);
    msg.setDestination(4205U);
    msg.setDestinationEntity(40U);
    msg.service.assign("SHJNTKAOVFKQNBUFKCHQDCQJYJRHNFRMDGTTJTNQYWUZCVMWSTGFCILNGWYQDMTMTGUUBABXKKRGIHYFHYXYPJCEGWXYSJSKSXCHVLLACSLWYTUROBOPWITLZPOFVMSDJKQPDMANQCMVCLFZAQEZLIZFIRIZVSDBEEAFKLBXIXZJEBQREYEPALXRNEWSHXUGSNFGDDPIUDUPXEVRMVNCGWPUBLVOVAWOWPZKZERIPN");
    msg.service_type = 81U;

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
    msg.setTimeStamp(0.0934399234081);
    msg.setSource(62924U);
    msg.setSourceEntity(97U);
    msg.setDestination(23067U);
    msg.setDestinationEntity(194U);
    msg.service.assign("EVYNDKXXZWCFPLHQVJAJBNEAXDIS");
    msg.service_type = 246U;

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
    msg.setTimeStamp(0.514975964816);
    msg.setSource(30162U);
    msg.setSourceEntity(131U);
    msg.setDestination(23448U);
    msg.setDestinationEntity(208U);
    msg.service.assign("PGJRZKFNFIYNVTVMVTQXRTDOFIRBMBYZJPCEKNAICIHJWXEJHBSQYHZSQRDNSEAMZYNBHUSAVWIWFEXCFISSPTOLWQCVBYWOEZGAVXLHGGLJEOLLMKAWFPXDMUOPXQRZHQZFKGKVBLVHDYUCHMIMITGQPCNWOFKLNRAUGRLZYMCPJNW");
    msg.service_type = 234U;

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
    msg.setTimeStamp(0.229287847631);
    msg.setSource(38134U);
    msg.setSourceEntity(224U);
    msg.setDestination(23339U);
    msg.setDestinationEntity(93U);
    msg.value = 0.271483414051;

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
    msg.setTimeStamp(0.730182523351);
    msg.setSource(52593U);
    msg.setSourceEntity(183U);
    msg.setDestination(42778U);
    msg.setDestinationEntity(45U);
    msg.value = 0.523282163446;

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
    msg.setTimeStamp(0.768199233595);
    msg.setSource(60424U);
    msg.setSourceEntity(211U);
    msg.setDestination(64224U);
    msg.setDestinationEntity(91U);
    msg.value = 0.196235596878;

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
    msg.setTimeStamp(0.0668228736892);
    msg.setSource(8538U);
    msg.setSourceEntity(34U);
    msg.setDestination(32844U);
    msg.setDestinationEntity(216U);
    msg.value = 0.0222454326554;

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
    msg.setTimeStamp(0.118357757553);
    msg.setSource(16377U);
    msg.setSourceEntity(250U);
    msg.setDestination(8313U);
    msg.setDestinationEntity(123U);
    msg.value = 0.208688711202;

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
    msg.setTimeStamp(0.142013037478);
    msg.setSource(7939U);
    msg.setSourceEntity(78U);
    msg.setDestination(13065U);
    msg.setDestinationEntity(202U);
    msg.value = 0.999432941082;

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
    msg.setTimeStamp(0.889366869713);
    msg.setSource(33877U);
    msg.setSourceEntity(127U);
    msg.setDestination(52858U);
    msg.setDestinationEntity(30U);
    msg.value = 0.84386321824;

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
    msg.setTimeStamp(0.87026290601);
    msg.setSource(33090U);
    msg.setSourceEntity(229U);
    msg.setDestination(3551U);
    msg.setDestinationEntity(112U);
    msg.value = 0.301052579662;

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
    msg.setTimeStamp(0.0694270336218);
    msg.setSource(17662U);
    msg.setSourceEntity(231U);
    msg.setDestination(53226U);
    msg.setDestinationEntity(213U);
    msg.value = 0.0798719953899;

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
    msg.setTimeStamp(0.957109145148);
    msg.setSource(410U);
    msg.setSourceEntity(150U);
    msg.setDestination(27315U);
    msg.setDestinationEntity(213U);
    msg.number.assign("JACNPZSAFRKIBHTESCPPHHWREHTISUBUGKPSIWZCDGQDESGGLQUOAWVXZOZQJLUYLJTEYEXVOKAFWDPYOITJDCWUJCKYFJOPWIQNMUMXMHEWBWCMHOKAUSZAWYLGUOFPFQHKTIQTBXXLVZRLFGDTVNUFJWEVRREYFILZRRMAVBYNRYPJPXYVZNMGXHKVKSBGJYOXVQOIGNXTINUAMLMBSNTMHCLEMDT");
    msg.timeout = 10711U;
    msg.contents.assign("DTYUPCSQMCWOJXDHAAWVVFHBSNVYLMIBZVVGMJEDNIOECNKKHQDXJCLRPZEDUXWQLGASEBQRNMVIZWRZNURFDLMXVIRUUFBHKGBZAHKRBOLNURHYBGEQPXSLJIYRZZUSXUJWACEYGQYXVZVYFPJMTCRJSNXDLXOTHAAKFIA");

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
    msg.setTimeStamp(0.310745717655);
    msg.setSource(50897U);
    msg.setSourceEntity(153U);
    msg.setDestination(55541U);
    msg.setDestinationEntity(114U);
    msg.number.assign("OCALZHSIBVPJBHMNLODHPGFLNLPLNWGCQPKFMPTWSMVCQTEMHKQVUDKRSAAWSZSKUOYPFZIKFBDSHCXBMGQWXEQTLNRTIAGFDYHGVFTZXYEIOWBUYYRXZHXDSQGRLNZTJCJXCAPDRMOZULSYFPOARJJMXMHNAVFCTWZEOQBZLNHTQUUXEBEVNKBEUYPVO");
    msg.timeout = 43938U;
    msg.contents.assign("ZAAXNMPUBNSFUEMTHAOCJDZRHHFEJWRZWNXNIVYJWXIDHPLDQPYHVNOKOGCUFAKNEYMWSROPKRQGKOEZUOBGGHYAQYTPDSDINHZRWBXIPQWDWACNVYUBVKJUJLXUVEJTCGHAZRNGMTRJJNMFRXJCKBPLZLIKDSQGYGETSEBWTREEVMDCQQYJCMSTPSXFQXFLPVCTVHSKYSBORUWZMDQOFFTXSKICGLBFLODAAPYZVLUGAZQIICUBL");

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
    msg.setTimeStamp(0.453291890294);
    msg.setSource(56946U);
    msg.setSourceEntity(226U);
    msg.setDestination(20128U);
    msg.setDestinationEntity(109U);
    msg.number.assign("VDHSUXMSSTNYJQYTQRZR");
    msg.timeout = 10762U;
    msg.contents.assign("BYHXPDULMSQFTLMGKQQKOTBDVUBAHWTUVFQWSVYZARRIQSWFWJEEBRVWLHMIMOSMFNYDDIAEOUJCUCZGUBVFNENBDAZGQYMIDRZMNKSEELZPHPGOZYKGHCSLBUDCRXODGPJNZWYLRIUNOPXNPGQFVCJKNFKETJKCCAQBKWQETTNHXXOAFYCIPLOYIYGJAXPCMIHIHWRWOPVOESSUBRTHXRUFDIVVTGNFB");

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
    msg.setTimeStamp(0.499106950321);
    msg.setSource(36012U);
    msg.setSourceEntity(185U);
    msg.setDestination(57158U);
    msg.setDestinationEntity(32U);
    msg.seq = 321181170U;
    msg.destination.assign("TUFSEPIDJUKYBCODHHBJVZVCNLCGSEPOAANQEXNVNVBYFREXVWZPUMYIECCHYKAGXJJETWXYEUPMNVXZWALTUILMRBUNTRKBLPOCWZQIGDCSUPSBYEQWHSOSKEXAIMRDCTHVOQNLDGSYKKXLDJXZPKNWFW");
    msg.timeout = 34242U;
    const char tmp_msg_0[] = {-35, -6, -29, 41, 50, 56, -70, -43, -116, -18, 95, -116, -28, -114, 51, 53, 23, -55, -43, -2, 118, 63, 86, -59, 10, -26, 106, -116, 39, 83, -47, -1, -107, -62, -2, -52, 65, 114, -84, 118, 18};
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
    msg.setTimeStamp(0.572807595327);
    msg.setSource(13815U);
    msg.setSourceEntity(179U);
    msg.setDestination(59442U);
    msg.setDestinationEntity(178U);
    msg.seq = 3726285039U;
    msg.destination.assign("GXSFQJFXRRUEHFUBZSGJZIUHCQQYTTXSDESRGXKAYDJKJ");
    msg.timeout = 60121U;
    const char tmp_msg_0[] = {29, 37, 72, -57, -3, 103, -111, 89, -65, -103, 73, -33, -45, 52, -87, 32, 63, 60, 48, 126, 120, 54, 93, -42, -116, 17, 117, 52, -72, 30, 4, 49, 67, 14, 91, -84, 100, -85, 48, 58, 96, 96, 24, -18, -67, 64, -2, 100, -7, 61, 81};
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
    msg.setTimeStamp(0.790486451714);
    msg.setSource(54673U);
    msg.setSourceEntity(55U);
    msg.setDestination(30458U);
    msg.setDestinationEntity(116U);
    msg.seq = 3765971217U;
    msg.destination.assign("SNKFJAPNYHLAEOZQMONRMYBCXJQOBMXDKJZWPBLVFOJDAGRR");
    msg.timeout = 22581U;
    const char tmp_msg_0[] = {-110, -15, -80, 89, 55, 12, 125, 42, 66, 94, -98, -123, 87, -38, 87, 107, 103, 95, 56, -2, -28, -31, 19, -34, 67, -8, -42};
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
    msg.setTimeStamp(0.387957963822);
    msg.setSource(15767U);
    msg.setSourceEntity(172U);
    msg.setDestination(34925U);
    msg.setDestinationEntity(225U);
    msg.source.assign("SISLIGUXNSMJJLDESZLZSSGTPZQXCYEYKPGAWOWJKCPQPFQNYOZIMEDLLXUZULOSVJPOBYUHVUEUMUTGZFDNVRQDOMXVMUQJACRITHUVGQXECTRJPVDHRWLZFMIAUSDNNWFHBCKQRWDCWTZYKVDSEFGTBRMIYQCTHWOXWFYQJNPRNHKADTPHWXBVRZKAHX");
    const char tmp_msg_0[] = {21, 54, 79, 40, 7, 78, 11, 34, 84, -1, -28, 121, -41, -2, -59, -114, -32, 20, -4, -100, -85, -46, -26, -90, 17, -85, -88, -108, 43, -123, -68, -123, -89, -90, -82, 39, -20, 95, 45, -101, -29, 63, -105, -40, -82, 92, 106, -52, -95, -2, -69, 43, 86, 95, -76, -115, -43, 61, 114, 37, 74, 121, -107, -33, -85, -6, -19, -59, 67, 121, 103, -31, 66, 99, 97, -86, -50, -90, -38, -34, -69, -124, -9, -83, -102, -24, -14, 111, -110, -89, -12, 104, 73, -122, -76, 108, 74, 73, -105, -61, 22, -85, 102, -62, 95, 60, 63, 50, -65, -83, -88, 71, 41, -64, -107, -14, 64, -69, 0, -87, -49};
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
    msg.setTimeStamp(0.468145592741);
    msg.setSource(27567U);
    msg.setSourceEntity(145U);
    msg.setDestination(65021U);
    msg.setDestinationEntity(137U);
    msg.source.assign("GROPEQZLMTICXXVHNIIMWBZJRHBFNMNWOPDUTQVQPNUHOXJABGWPUCYKSUNTNMJXHFKRQJ");
    const char tmp_msg_0[] = {-12, 54, 55, 66, 78, -43, 79, -13, 34, 118, 61, 18, -9, 102, -114, 17, 86, -89, -13, -50, -102, 95, 80, -6, 84, -104, -11, -89, 66, -87, -56, 29, 124, 53, 34, 36, 121, 52, -65, -37, 42, 34, 74, -69, -127, 75, -16, 29, -5, 12, 80, 78, 108, 70, -40, 115, 55, 6, -119, 92, -127, -7, -7, 118, 41, -69, -108, -127, -67, -85, -114, 3, 65, 25, -71, 36, 29, 87, -124, 36, -19, -126, -88, 36, 100, 119};
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
    msg.setTimeStamp(0.574490368872);
    msg.setSource(23319U);
    msg.setSourceEntity(222U);
    msg.setDestination(51341U);
    msg.setDestinationEntity(209U);
    msg.source.assign("RVMXFBOJWWLRUALRSMLWOYFIBKEKHVDKCJMNBBWRLYSRWCNZSZJDEDFJFLDFRNHUPXYHQBOZONVYUTPOXMEQCEOZSMXZWOGSBSHTVALCVICYCWNIXFHNAYWNEMHRGIMZHXEKPUJJUADKNZQKSLDRSUACVDTTPEFCBOVDIGJYATNOIQHPCAMKJGUKXUKOTSWHYQLQPGABP");
    const char tmp_msg_0[] = {112, 19, -77, 126, 9, 34, 40, -104, -46, -6, -112, 111, -124, 49, -53, 107, 124, -82, -110, -7, -113, -2, 91, -25, -23, 108, -23, 31, 34, -8, 69, 54, 0, 30, -63, 48, -75, 3, 117, 96, -71, 88, 75, -76, 42, 26, -28, 119, -61, -1, 107, -101, -99, -33, -55, 89, 18, -87, 23, 118, -14, 64, 61, -20, -127, -64, 29, 76, 36, -44, -75, 21, 47, -80, 60, 126, 43, -44, 83, -7, 101, 32, -118, 40, 109, -85, 43, 38, 30, -75, -13, -6, 48, -70, -56, 37, -22, -52, 25, 123, 69, -2, -61, -64, -28, -112, 99, 110, -56, -7, -7, -48, 58, 83, -59, 20, -76, 1, -2, -69, 76, -109, -89, -25, 57, 103, -123, 1, -42, -111, 10, 64, 67, -7, -29, -77, 92, 17, -90, -122, 25, -68, -90, -25, -37, 29, 20, 21, -23, -53, -55, -19, 34, 39, 101, -114, -116, -75, 21, -123, 38, 78, -94, 102, -27, -125, 25, -127, -73, 39, 122, 81, 49, -124, 25, -124, 22};
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
    msg.setTimeStamp(0.917318899268);
    msg.setSource(14539U);
    msg.setSourceEntity(50U);
    msg.setDestination(3427U);
    msg.setDestinationEntity(10U);
    msg.seq = 4095262343U;
    msg.state = 114U;
    msg.error.assign("INPRFPBWRDTQSLMSJBCULPCIYSGPNATNKDQMYRDEOTZZDYOULGWRMLCDLBZHIGVMBYNXKNUNJVQWZSRCBNNDOOZJUJAIXHFYPXZDWLUAKVZAQQJCASQRMGUFFEOOKKHBYKXBCEG");

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
    msg.setTimeStamp(0.736169452254);
    msg.setSource(45023U);
    msg.setSourceEntity(64U);
    msg.setDestination(20727U);
    msg.setDestinationEntity(32U);
    msg.seq = 1761032182U;
    msg.state = 18U;
    msg.error.assign("QMWPXYMLDBWYZGARXAUYCWEJIANAWLSIBXRVFENMJWBRNTOBJDMRVLPDDQMPMVAKZASQXAKKRGFIZZTVJWUOBVDHCQGEXQBCINJVUJDXFKXJVICVYLFSKGXOHFRKKPCUYYLEUPEHPSKBFLYQXHTAZIFYCCHTDIUKVNTTTWUOYLFPHWUHGLTOSDOTGLEPNDOGGIZSTWREMAJZFHQRMDNEO");

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
    msg.setTimeStamp(0.374116921666);
    msg.setSource(3209U);
    msg.setSourceEntity(217U);
    msg.setDestination(8103U);
    msg.setDestinationEntity(236U);
    msg.seq = 3012812039U;
    msg.state = 0U;
    msg.error.assign("ZWJQGDGUGRRHLOBMEULNFWYTIWOOBSAMYNUCCMWPQORSQXYIKADBSDXUOAMPIEJXTZDLKSJQLAGQSFVKICXVBKNWK");

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
    msg.setTimeStamp(0.0941341881387);
    msg.setSource(32883U);
    msg.setSourceEntity(53U);
    msg.setDestination(30125U);
    msg.setDestinationEntity(73U);
    msg.origin.assign("YGKXUEBENYZDTEWMAUKUZEJZRCIDWNQGQOOIOAJCUTDHCOIREBEAFACDIAEZBRLGPNOFLVVBGGVYHCWWPMJHYXKJXBFNMVPCSAPOXFLMSVHFNDGCSQOIXXHSFMSWPQLVCFLIKXLQHKIKXPJJTHKRRDNQDFWTHWOMWVUFNANMLYAPNHRSRBMTEWDRKYUSCGBTCPVGUJZOGTILXAQYIBFTIZW");
    msg.text.assign("FGJUFDUSQGVIICFLUYJWABUWGECNUBBSLGTOUGJBCQAOOAPCLJCTRCTPKFJKIFHJZLIUIBRTBJYXQZWDYISKZRSAHKZMJKFZSVGZLXOHQOHAVMESESOMVDBNANHLSYFZKDLAQRXXTETQMOUVNYMJONTWRHVURQNECNOEMZWWYXFQQFTWRJNGXLPXPBWKUEAZCEH");

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
    msg.setTimeStamp(0.349276475433);
    msg.setSource(7744U);
    msg.setSourceEntity(10U);
    msg.setDestination(43161U);
    msg.setDestinationEntity(233U);
    msg.origin.assign("YGEBDDOVMFBMAQPXRRZBWIIFODQVQXGKTQIJLDCKTNSOTFSZRLJHTZKUQVTGKFOOKQEYFARBSCWLBXKWYTYDIAWLTIIANXIKQWCGWXOXURXLZXHUJHWZMJVYEAJQRLNPSPSOARWEONFPLBCFOHPHJUMCFJGPGVZUFUDLYPCZYEIWLSZACMHSFYJMRGMMUCKBAITZKY");
    msg.text.assign("DMVOFDIQLOKJTZYYXYAPPSQEGGDMZNVGYFAKIOTIWHLRZTELJKOZLOUZYUDGTOMLNQMBTGOUBMWPBKPDLQVFUWJGYXKEQRGLGVWNANFOUDXFWQRSDEICBQAWRJRFNMJOMEUUJGVSPZDDDFQHBLRWFLISSXVCGJCBVKUKSBAWSWSRVSQVBCESYYLAXJKMUAMJCECTRPPIXC");

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
    msg.setTimeStamp(0.734744634249);
    msg.setSource(36839U);
    msg.setSourceEntity(236U);
    msg.setDestination(45256U);
    msg.setDestinationEntity(51U);
    msg.origin.assign("YDXVNGDAYSZGQIKSZJQLKXPSNIAFHOCVCICETBCLKKUFIWZOFYVNPNTHROJTOAQDCJEAZCQQITXMWAOFNPLCJEUJQFPPDXNIPBEPVUPYUUWERLHVMRGFADBGLJMZFEZLVHKMHOJBMWWVXYEZYRJRHMYZIRPWXYTCLMHWMBFYGRNQQWKNGGMIINGTBECXKZDSRDSJNKSHQUBJFQIAUEKHBVBXOBLROSULCFUTW");
    msg.text.assign("RQKDRPMCYIENOFIQAZF");

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
    msg.setTimeStamp(0.474920968634);
    msg.setSource(52098U);
    msg.setSourceEntity(199U);
    msg.setDestination(25816U);
    msg.setDestinationEntity(202U);
    msg.origin.assign("WUTIBCTDARSYEPAWOPMACXZGGKMKYTBLIGHITGEVAXIYDZZXNOXGLYFCCQWJOTRXYRUWLJINAQGHXUHPIMYFKVZWRKLFPTBWHHALGYKDBYWVWTEKGHHUFSFFZSNSPGQMUEOQFJJCZQFINPOVFDCQJBMMNBYTGENXVQIONEVDRCUEQDJVZPCNLPXLNPOVMCKVSUILRTQUDMXUEMFAOEDBWSOKDRSSHLEHKV");
    msg.htime = 0.587724646421;
    msg.lat = 0.972905460949;
    msg.lon = 0.530484922181;
    const char tmp_msg_0[] = {-36, 81, -72, 35, 113, 33, 8, 63, -106, -104, -38, 16, -111, -94, -106, 125, -124, -61, -84, 56, 104, 12, -7, 21, -102, 36, 54, 124, -128, -101, -63, -80, -26, 114, -24, 49, 118, -61, 92, -59, 68, 24, 107, -97, -58, 63, -113, -63, -67, 71, 122, 71, 118, 123, 121, -93, -123, 114, 46, 59, 97, 78, 90, 56, 44, 109, -121, 81, 107, 21, 11, -118, -14, 65, -10, -73, 117, -81, 43, -24, -110, -25, 10, -18, 30, -39, 97, 93, 29, -124, -32, -75, 65, -120, -31, -36, 50, -48, 66, 115, -75, -52, -118, 112, 83, 31, -67, 21, 56, -40, -74, 56, 55, 95, -62, 79, -18, 120, -101, -10, -28, -3, -93, -29, -8, -96, -62, -2, -105, -21, -86, 13, 53, -104, -115, -50, 32, -51, -61, 58, -111, -75, 124, 82, 38, 106, -116, -100, -37, -102, -61, -63, -111, -89, -37, -116, -15, -44, 32, 49, 87, -15, -7, -125, 55, -84, -107, 118, 106, -116, 35, 58, -16, 73, -9, 7, -16, 24, 42, 22, 39, -105, -125, -56, -16, -95, -27, 24, 103, -111, -100, -78, 87, -9, 49, 100, 8, 114, 42, -21};
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
    msg.setTimeStamp(0.0543371856304);
    msg.setSource(6710U);
    msg.setSourceEntity(8U);
    msg.setDestination(39172U);
    msg.setDestinationEntity(219U);
    msg.origin.assign("QIDKZCAHQWXYTYLNIOKJGGRZNOEUKLPBWWLIAUZLPPKFAKGYKRVRSFCAMQPZPNCWHDEVQEDMYUGDTNJPVQJABJSOMTWIECQDRARQONCUXVKMLBOPXFVFCTAQKJTHMPXEEYVWNGOIPFSDFB");
    msg.htime = 0.300211549118;
    msg.lat = 0.75642296621;
    msg.lon = 0.537695913367;
    const char tmp_msg_0[] = {53, -101, 37, 41, 92, -80, 56, -122, -103, 63, -53, -90, 49, -102, 8, 69, -76, 27, 122, 10, -111, -14, 44, -92, -83, -41, 59, 42, -90, 71, 56, -16, 118, -10, -62, 50, 14, 69, -16, -11, 68, 125, -66, 29, 83, -48, -50, 11, -44, -83, 64, 45, -114, -25, -123, -31, -88, -9};
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
    msg.setTimeStamp(0.155042331306);
    msg.setSource(43947U);
    msg.setSourceEntity(222U);
    msg.setDestination(12741U);
    msg.setDestinationEntity(189U);
    msg.origin.assign("AOOKRQNAFQDLFXTUPIZBBYKWNELCGCWVDIJBYPXJESCNBUYENRWWGRLQIABPVXBFYIEKDSPQYWNOHJAURXYFDVHQQULQZUNFTXGNUIWMLTLEBDOXFDMCVZBAISCJYPZOIZHGJNDGVEZEHJTFZWVORIVSBRPPMROJMLNTOKCUTAKMUOBTOSG");
    msg.htime = 0.507199272463;
    msg.lat = 0.426130756835;
    msg.lon = 0.440645421495;
    const char tmp_msg_0[] = {-40, 80, -45, 89, -1, 108, -113, -25, -128, 4, -43, -115, -52, -80, 106, 81, 11, -23, -45, -23, -8, -53, 46, -30, -16, 16, 59, -72, -19, 36, 98, -89, 12, 118, -120, -83, 100, -75, -124, 81, -109, 34, -53, 61, 48, 90, 37, -37, -12, -41, -14, 83, -51, -54, -61, 73, 68, 39, 86, 109, 101, 93, -123, 57, 24, 26, -14, -50, -53, 2, -27, 17, -1, 99, -39};
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
    msg.setTimeStamp(0.794895669439);
    msg.setSource(62817U);
    msg.setSourceEntity(210U);
    msg.setDestination(33261U);
    msg.setDestinationEntity(35U);
    msg.req_id = 29273U;
    msg.ttl = 4259U;
    msg.destination.assign("JSBOHQZYAQREMELDGJSRATNKUWZGHFJPLS");
    const char tmp_msg_0[] = {-103, -49, -108, 56, 19, 126, 33, -86, 65, -127, -88, -36, -15, 0, -102, -97, -76, 9, -112, -101, 104, -126, 36, 85, -16, -58, 22, 87, -36, -24, -108, -2, 105, 99, -16, -70, 61, 79, 73, -87, 26, -120, 53, 47, 64, 25, -33, 12, 56, 61, -112, 20, -75, 126, -77, 109, -111, -94, 113, -105, -92, -117, 74, 112, -31, -71, -111, -114, -103, -87, 20, 89, -47, -124, 116, 97, 109, -52, 78, -102, 119, -73, -27, -84, -41, -60, 103, -67, -46, -85, 55, -106, -77, -77, 96, -117, -90, -113, 94, 49, -7, 82, -15, 19, 28, -54, 49, 59, 55, 86, -93, 77, 29, 65, -88, 110, 100, -115, 118, 76, -82, 87, -6, -102, 88, -28, -86, 121, 12, -103, -103, 52, 69, -92, 57, -29, -116, -47, 103, -114, -106, -32, -107, -57, 59, -49, -108, -55, -6, -27, 117, -68, 59, -102, 124, -63, 114, 106, 91, 112, -82, -71, -90, -11, 4, -102, -53, 4, 112, -53, -122, 69, -100, 43, -15, -120, -79, 32, -92, -112, -34, 98, -84, -52, -52, -117, 103, 108, -20, 93, -101, 85, 80, -111, 25, -37, -122, 5, 30, 45, 65, -88, -3, -90, 38, -51, 119, -34, 4, 2, 105, 6, -88, 11, 8, -9, 108, -97, -100, -18, -19, 126, -79, -118};
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
    msg.setTimeStamp(0.347109550149);
    msg.setSource(3879U);
    msg.setSourceEntity(49U);
    msg.setDestination(17048U);
    msg.setDestinationEntity(103U);
    msg.req_id = 16022U;
    msg.ttl = 11008U;
    msg.destination.assign("NHGCWIUGQHXSWNJZLHFDLYUGSQJOXQJDFYFLVBQFKBZTVBFNPEYBRARNENIUMAMXRTFVVGOTMDZOCQARGINUDDAVXERIUSLTLWZJPPYFHOVCZYATBCEIIRMXHAP");
    const char tmp_msg_0[] = {32, 72, 47, -107, -24, 34, -72, 101, -73, -26, 17, -62, -92, 119, 108, 123, 112, -8, 80, 109, -99, 32, 122, 82, -112, 70, -66, -120, 0, -51, 37, 45, -80, -54, 107, 34, -72, 34, 33, -89, 23, -44, -116, 29, -54, -62, 80, 6, -76, 45, 59, -91, -97, -127, 80, 122, 54, -54, -100, -10, -18, 27, 61, -38, -53, -106, -29, -100, 48, 116, -118, -78, -31, 122, -2, 55, 54, -10, 7, 89, -11, 104, 108, -60, -96, 68, 23, -119, -39, 73, -27, 34, 65, 33, -64, -84, 2, -16, 66, 89, 125, 8, -91, -58, -102, -46, -49, 73, -1, 12, -6, 96, -113, -88, -118, 24, 52, 86, -112, 21, -42, 109, 14, -111, 82, -32, -82, 81, -53, 94, 106, -95, -125, 33, 58, 90, 83, 13, -118, -118, -76, 96, -22, 94, 11, -120, -105, 100, -30, 84, 29, -102, -2};
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
    msg.setTimeStamp(0.159545451106);
    msg.setSource(59922U);
    msg.setSourceEntity(120U);
    msg.setDestination(25285U);
    msg.setDestinationEntity(125U);
    msg.req_id = 29401U;
    msg.ttl = 61442U;
    msg.destination.assign("XWYGFQEDMBAKMPWXBQNVWILEMNSABWISGBFQAOSAAYPUDAKIJVCGDZWMQTGVHTCPVCTBTXYJHVRGLBRIIEYXCVMRYEJMSSIHNBHCPICKCKUZFZHSFNPRTBDDZJMNHQSKDOHXXFYKDIOFQMYKU");
    const char tmp_msg_0[] = {-90, 115, 109, 102, -15, 107, 94, 32, -51, 104, -124, -38, -30, -47, -100, -43, 98, 32, 75, -11, -18, -128, -17, -75, -100, -126, -89, -125, 18, -63, 37, -102, 82, -99, 51, 77, 76, -101, 46, -21, -16, 59, 126, 36, 43, 40, -54, 81, -24, 107, 78, -92, -36, -92, 2, -32, 48, 33, 11, 63, -64, 32, 52, 118, -71, 106, -40, 8, 51, -63, -12, 121, -18, -71, 98, 41, -43, 88, 16, -71, -97, 9, 51, -111, 39, 118, -34, 31, 58, -53, -12, 115, -110, 98, 38, -47, -120, -13, -59, 26, -102, -16, -55, 41, -34, 76, -5, -74, 66, -46, 118, 101, 2, 67, -32, -94, -58, 13, 121, -67, 102, -61, -80, 113, 55, 59, 110, 34, 37, -41, -10, 83, -25, -96, -53, 15, 39, 14, 88, 82, -67, 76, 115, -83, -57, -20, -22, -126, 8, 31, -16, 11, -110, 101, 111, -123, -69, 102, 103, 115, -44, 15, -34, 15, -123, -78, 52, -57, 31, 83, -4, -61, -114, -125, 103, 96, -81, -99, 33, -52, 48, -97, 37, 68, 47, 79, -90, 54, 97, -28, 41, -72, -78, 119, 111, -32, 81, 79, 14, -79, 44, -1, -69, 66, 11, -83, 15, -92, 91, -103, -5, 32, -82, 11, 85, 45, -72, -51, 42, -22, -26, -114, -109, 81, -113, -29, 62, -59};
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
    msg.setTimeStamp(0.310232717694);
    msg.setSource(37402U);
    msg.setSourceEntity(8U);
    msg.setDestination(24368U);
    msg.setDestinationEntity(77U);
    msg.req_id = 12792U;
    msg.status = 34U;
    msg.text.assign("RQPPNGKIPVNTIHIXWYQWLOEAZLQYURZFRPXTEFSVJLYSDKYMEPNKAMJSWBCVRYCQJKWZXPQOQSMGVUGNVGBTPHIXWSMUPZJZEVODCTYWZCRWBWHMWHGELCLAOOZAVXDMIOVMDYFHIAUMJQCLRKTFZL");

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
    msg.setTimeStamp(0.28846194797);
    msg.setSource(26409U);
    msg.setSourceEntity(86U);
    msg.setDestination(35141U);
    msg.setDestinationEntity(181U);
    msg.req_id = 59082U;
    msg.status = 86U;
    msg.text.assign("ZVRILCZRLGPDQAWQOVZXLBDTLDLYXRQWOQSJXKQHYUVBPFQFZTIMCMFDPNRCMSOLOUNKIVPBUBSXHFJOUWSPMRHHATBCYALPKFSYLFNDILAOXDKNDBKJGAJCJACOSVZQYIATJEBITXQCGWMGESMYSUJRWUDTIWMDAUEEGPPAXXKKYVBTBNQVLOJFHSTHZUUTEXPR");

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
    msg.setTimeStamp(0.886311183149);
    msg.setSource(38019U);
    msg.setSourceEntity(231U);
    msg.setDestination(30596U);
    msg.setDestinationEntity(1U);
    msg.req_id = 24163U;
    msg.status = 58U;
    msg.text.assign("QQYIYMEHMVMLGVRSPZWBVPCDGPZZFDENGJNXGPIJHHTTWJHUEXLXLUAHQKIFFLUYZAMNYZZSJBKZYVKLJVCZQKPMKSPWAEIPHVOQQRQKYNNOOMABYTAEFKZAVAWDUIXFWIEWCHCCCUDLUNLKOJTGFBOQSHXOBFZJLLOPOGGBPMINRVSAHDTKTFGYWGMORNSGEFXJXUVYXEARXDEDPJD");

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
    msg.setTimeStamp(0.80843963922);
    msg.setSource(10560U);
    msg.setSourceEntity(51U);
    msg.setDestination(45149U);
    msg.setDestinationEntity(254U);
    msg.group_name.assign("AHXEHAHYOZOKXMKRFSAIUSUYQVXCOMLBYOUSCXCGAAQNAHNRIEZHJGERGVNSWLTJMDXWMRWJQSXSTMCNEYXSECRVCZTOVVRHHBBWPTJDVZDLYODNRGUAJSFIGXYRZDFBVVOCDNFCTJFEMJEFEHUIUZRXKZLHJBIBMAPVYGFPGTIBWZLWNMWMQBZSLQCKLKYUFBPPQBIKQPNNRPQAWYQGXVWYKLGOKJDMIAO");
    msg.links = 1879515981U;

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
    msg.setTimeStamp(0.675354142796);
    msg.setSource(16348U);
    msg.setSourceEntity(253U);
    msg.setDestination(46354U);
    msg.setDestinationEntity(73U);
    msg.group_name.assign("QERCSRPOOMICHWVOZFKKTGUUHLSCHJYTSRJNCFPAYDEANJGXTQXXMLGHGOMMJGMMZYJXRALIZNBMVQVIPMKTOREGPJRWIFSWPYPTYUASKRDNUXPCZVOOQTEOTWDQBGGDMYRKZXPANQAJTZFFKCODIWHBVXVCM");
    msg.links = 1434546066U;

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
    msg.setTimeStamp(0.627978130876);
    msg.setSource(50523U);
    msg.setSourceEntity(146U);
    msg.setDestination(9059U);
    msg.setDestinationEntity(91U);
    msg.group_name.assign("AXDSYSUWEFDTPBGFKLJWDNFNZEGLGAUXVCVSGXWEBHRPZVJCDROSWJOJOAJIBTZ");
    msg.links = 1005474953U;

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
    msg.setTimeStamp(0.182751969808);
    msg.setSource(26478U);
    msg.setSourceEntity(248U);
    msg.setDestination(25460U);
    msg.setDestinationEntity(7U);
    msg.groupname.assign("ZYQNKCPXBUPXKWHXRPSIQDKQXSXQTNGZJMIWLAUO");
    msg.action = 115U;
    msg.grouplist.assign("GHMBMEPLJVKOIJPSDDDIAHDV");

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
    msg.setTimeStamp(0.297621136293);
    msg.setSource(41203U);
    msg.setSourceEntity(243U);
    msg.setDestination(38112U);
    msg.setDestinationEntity(227U);
    msg.groupname.assign("SFOFUTDBFOICGJJJSBDMHSYPSLAWGOGQMPBPMRVXSGYXZQHIQJKXBUDCZOBUKJMWMWHYWMHTBN");
    msg.action = 132U;
    msg.grouplist.assign("BSLKVVJTCXCZQAGSLVDHXJZXXNUWQDINJRZQRAVSKQJBBRPGORWMQJCLOTIJAFGPNENIWUKHEWMSBGAXGUQVOKPTHZXPTFRAWEYFKYUZEAVNOUOJKSTQSBIHDPWUEEEWCSLRDCPPVQSQVYJKCHVOVTASGBWEFDNJFIPLRPCOARKGHRYUIGHDOYRIEYZY");

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
    msg.setTimeStamp(0.449585309363);
    msg.setSource(2471U);
    msg.setSourceEntity(45U);
    msg.setDestination(39338U);
    msg.setDestinationEntity(80U);
    msg.groupname.assign("ABVVSJFSEICFGDYAHROTIZZDSQWHVVAYODRIBEMGXGBYVYAUTQJQNUWDGRBYQNNPCZWOWQPALTHLAFIVFKERUBOMXIIXKENEHGVSFVJTOGKSSUUAMHWXVIWNKKTGZTJHYZIADLDBLCZFFCXMSPRBTEDLCCITQPBZMCKOZJWZRMBOFGBYUGASKSNKJNOPXYLUQOPDGPJMQNRLXCCFEJIFWHMKNLEXJYHEWHVSZUDKRC");
    msg.action = 119U;
    msg.grouplist.assign("RJAWKGUAIMYGJHDEDIHJNANLQ");

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
    msg.setTimeStamp(0.737625489244);
    msg.setSource(52865U);
    msg.setSourceEntity(17U);
    msg.setDestination(63950U);
    msg.setDestinationEntity(26U);
    msg.value = 0.0645544425449;
    msg.sys_src = 63604U;

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
    msg.setTimeStamp(0.422534876067);
    msg.setSource(2774U);
    msg.setSourceEntity(73U);
    msg.setDestination(53766U);
    msg.setDestinationEntity(5U);
    msg.value = 0.255431487125;
    msg.sys_src = 65183U;

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
    msg.setTimeStamp(0.145875875279);
    msg.setSource(40377U);
    msg.setSourceEntity(194U);
    msg.setDestination(54497U);
    msg.setDestinationEntity(163U);
    msg.value = 0.749978848738;
    msg.sys_src = 16133U;

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
    msg.setTimeStamp(0.476805435247);
    msg.setSource(48416U);
    msg.setSourceEntity(135U);
    msg.setDestination(10879U);
    msg.setDestinationEntity(102U);
    msg.value = 0.789052579371;
    msg.units = 192U;

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
    msg.setTimeStamp(0.456002602288);
    msg.setSource(29245U);
    msg.setSourceEntity(150U);
    msg.setDestination(52590U);
    msg.setDestinationEntity(207U);
    msg.value = 0.898890021587;
    msg.units = 241U;

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
    msg.setTimeStamp(0.194461034085);
    msg.setSource(34914U);
    msg.setSourceEntity(229U);
    msg.setDestination(46296U);
    msg.setDestinationEntity(1U);
    msg.value = 0.515293100966;
    msg.units = 29U;

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
    msg.setTimeStamp(0.824675516114);
    msg.setSource(2881U);
    msg.setSourceEntity(146U);
    msg.setDestination(49294U);
    msg.setDestinationEntity(6U);
    msg.base_lat = 0.732475606288;
    msg.base_lon = 0.498017639765;
    msg.base_time = 0.700246890255;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 2924U;
    tmp_msg_0.destination = 7937U;
    tmp_msg_0.timeout = 0.474623503428;
    IMC::NavigationData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.bias_psi = 0.0658415109208;
    tmp_tmp_msg_0_0.bias_r = 0.112402683401;
    tmp_tmp_msg_0_0.cog = 0.488330552944;
    tmp_tmp_msg_0_0.cyaw = 0.657768110574;
    tmp_tmp_msg_0_0.lbl_rej_level = 0.550337748202;
    tmp_tmp_msg_0_0.gps_rej_level = 0.249947352113;
    tmp_tmp_msg_0_0.custom_x = 0.39721352039;
    tmp_tmp_msg_0_0.custom_y = 0.0519777778989;
    tmp_tmp_msg_0_0.custom_z = 0.583989810194;
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
    msg.setTimeStamp(0.546883922769);
    msg.setSource(32324U);
    msg.setSourceEntity(125U);
    msg.setDestination(35855U);
    msg.setDestinationEntity(56U);
    msg.base_lat = 0.279579711149;
    msg.base_lon = 0.694002384608;
    msg.base_time = 0.665082396539;

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
    msg.setTimeStamp(0.45552251034);
    msg.setSource(5319U);
    msg.setSourceEntity(44U);
    msg.setDestination(52843U);
    msg.setDestinationEntity(223U);
    msg.base_lat = 0.836887671895;
    msg.base_lon = 0.237156439583;
    msg.base_time = 0.543380287617;

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
    msg.setTimeStamp(0.796822655854);
    msg.setSource(9469U);
    msg.setSourceEntity(232U);
    msg.setDestination(54064U);
    msg.setDestinationEntity(97U);
    msg.base_lat = 0.00129156156183;
    msg.base_lon = 0.336181049159;
    msg.base_time = 0.995543006232;
    const char tmp_msg_0[] = {25, -117, 119, -46, 81, 72, -14, 54, 6, -83, -76, -2, -50, -64, 15, 22, 68, 102, -14, -71, -24, 112, 50, 54, -105, -21, -64, -81, -34, -49, -126, 0, -95, -38, -13, -45, -100, -30, 78, -51, -112, 34, 75, -113, -115, -111, -2, -86, -22, 110, 41, -126, -35, -94, -34, 35, 112, 96, 69, 109, -84};
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
    msg.setTimeStamp(0.467011934502);
    msg.setSource(1489U);
    msg.setSourceEntity(49U);
    msg.setDestination(44937U);
    msg.setDestinationEntity(28U);
    msg.base_lat = 0.537412399457;
    msg.base_lon = 0.730967090353;
    msg.base_time = 0.586004198528;
    const char tmp_msg_0[] = {-9, -37, -74, -15, -115, -121, 105, -109, -58, -114, 32, 112, -32, 119, 27, 31, 81, 80, -19, -76, 39, -41, -1, 61, 84, -81, 82, -15, -70, 102, 26, -60, -4, 2, 96, 6, -29, -48, 83, 46, 62, 44, 59, 47, 93, 7, -117, -29, 11, -90, -43, -110, 102, -67, -98, -67, 94, 72, 79, 24, -33, -16, 106, 57, -79, -53, 17, -24, -118, 92, 88, -29, -10, 116, 3, 80, -120, -97, -21, -13, 94, -96, -106, 45, -68, 0, 68, -87, -112, 121, 7, -102, 67, 15, 113, 117, -122, 71, 115};
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
    msg.setTimeStamp(0.927878923038);
    msg.setSource(20190U);
    msg.setSourceEntity(46U);
    msg.setDestination(3041U);
    msg.setDestinationEntity(230U);
    msg.base_lat = 0.36271133657;
    msg.base_lon = 0.635732810558;
    msg.base_time = 0.604080151984;
    const char tmp_msg_0[] = {-118, -44, -53, -79, -83, -90, 5, -17, 100, 46, -101, 95, -103, -94, -100, -1, -105, -120, 15, 19, -6, 41, 96, -27, -127, -107, -77, -79, -56, 15, 122, 126, 54, -13, 66, 66, 51, 103, 32, 49, 108, -102, -12, 60, -77, -97, -73, -84, -85, 18, 57, 52, 57, 69, 126, 124, 24, -93, 71, -65, 25, 35, 84, 5, 35, 42, -83, 28, 14, -29, -76, -108, -94, 88, -113, 120, 49, 81, -32, -18, -128, 48, 79, 80, 72, 97, -52, -128, -100, 54, -112, 67, -38, 52, 98, 96, -5, -45, -106, -91, -28, -105, 94, 9, -90, -79, 97, -111, 18, 17, -34, 125, 67, -85, -87, -113, -124, 74, 118, -121, 59, -11, 115, -106, -59, -3, 11, -91, -123, 65, 60, 123, -95, 115, 12, -49, 12, 21, -24, -70, -58, 84, 6, -94, -109, -32, -91, -113, 91, -45};
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
    msg.setTimeStamp(0.38682344189);
    msg.setSource(19771U);
    msg.setSourceEntity(135U);
    msg.setDestination(17775U);
    msg.setDestinationEntity(82U);
    msg.sys_id = 59850U;
    msg.priority = 97;
    msg.x = -20098;
    msg.y = 4083;
    msg.z = -2210;
    msg.t = -19790;
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("WTTDQLWJDRIZFJFNVXDMLYPNHJGFECIJRDETMPHMUESTCGFFMKJQLYHXAXLZRBRSZAX");
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
    msg.setTimeStamp(0.253284363409);
    msg.setSource(21311U);
    msg.setSourceEntity(216U);
    msg.setDestination(47075U);
    msg.setDestinationEntity(209U);
    msg.sys_id = 45682U;
    msg.priority = -97;
    msg.x = 24234;
    msg.y = 2719;
    msg.z = -18347;
    msg.t = 28752;
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 253U;
    tmp_msg_0.snapshot.assign("KBKVHIBERIJGLRZZDXHZHCANLCLLHHWQIO");
    IMC::PowerChannelState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WIYKPCYMCJRQZFABLPGSXLBLDNAOFZAERDYTFVXCMVWZORXVQYVTCOUKDDBNIOXJVRDZHVOYKCUMAPMXSEMYGGHSLTFQAIWBIRUGGGRNGEARMAPZBCHTQKINJPLFDXKNIWGXTQUANCITLVSUWDQOMNUXWROJTJOEWLUZBKHNCPUCPTETEPTZYF");
    tmp_tmp_msg_0_0.state = 121U;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.439035443242);
    msg.setSource(62956U);
    msg.setSourceEntity(160U);
    msg.setDestination(42174U);
    msg.setDestinationEntity(160U);
    msg.sys_id = 4141U;
    msg.priority = -44;
    msg.x = 22534;
    msg.y = -14169;
    msg.z = 1078;
    msg.t = -27557;
    IMC::AcousticStatus tmp_msg_0;
    tmp_msg_0.req_id = 35078U;
    tmp_msg_0.type = 185U;
    tmp_msg_0.status = 19U;
    tmp_msg_0.info.assign("PWRCQASXQXNXNLHTXKGTLRDETNUVJLAWFPHMDFOSFAKYIIVFYCJTXVMXNYBYKDHKPAWUPOKITQYZMCZIUSGHGKLWKBUIMZRGJSQMZCOLZCDWTODYLTRXKBBVSHJPNJCFHDPZFOGDPOTH");
    tmp_msg_0.range = 0.489119478465;
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
    msg.setTimeStamp(0.474211948497);
    msg.setSource(36639U);
    msg.setSourceEntity(0U);
    msg.setDestination(31031U);
    msg.setDestinationEntity(48U);
    msg.req_id = 40961U;
    msg.type = 63U;
    msg.max_size = 22454U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.206971310315;
    tmp_msg_0.base_lon = 0.459002488131;
    tmp_msg_0.base_time = 0.0747276453333;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 32833U;
    tmp_tmp_msg_0_0.priority = -123;
    tmp_tmp_msg_0_0.x = -15547;
    tmp_tmp_msg_0_0.y = 13070;
    tmp_tmp_msg_0_0.z = -5163;
    tmp_tmp_msg_0_0.t = -5038;
    IMC::VerticalProfile tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.parameter = 214U;
    tmp_tmp_tmp_msg_0_0_0.numsamples = 134U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.690094665599;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.385269388097;
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
    msg.setTimeStamp(0.948390561231);
    msg.setSource(20739U);
    msg.setSourceEntity(54U);
    msg.setDestination(45544U);
    msg.setDestinationEntity(161U);
    msg.req_id = 20236U;
    msg.type = 32U;
    msg.max_size = 46832U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.906702925467;
    tmp_msg_0.base_lon = 0.471303786903;
    tmp_msg_0.base_time = 0.118619792996;
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
    msg.setTimeStamp(0.0131747323252);
    msg.setSource(6398U);
    msg.setSourceEntity(135U);
    msg.setDestination(14719U);
    msg.setDestinationEntity(136U);
    msg.req_id = 3915U;
    msg.type = 11U;
    msg.max_size = 54436U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.323022477769;
    tmp_msg_0.base_lon = 0.179730654461;
    tmp_msg_0.base_time = 0.712617045557;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 8981U;
    tmp_tmp_msg_0_0.destination = 13682U;
    tmp_tmp_msg_0_0.timeout = 0.584809942957;
    IMC::LoggingControl tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 221U;
    tmp_tmp_tmp_msg_0_0_0.name.assign("IOXHUVPPBDUWDEWZTZJNSSUFMDNVGWTCLHYUOOQQQAWGKXZUNOMAWCARZTQKREDADUWVXKVYMIPXEENNMLLIVKCNKPJHUNEVBCFDGQSHAIRBHLAXVCWLFATKFGORXJGPAUJTVNEWEDIMCYKAGLSOQBJYBBDRHJVQCIUSHFYJFGZPTHIKBFITRMXMP");
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
    msg.setTimeStamp(0.410980199656);
    msg.setSource(28293U);
    msg.setSourceEntity(230U);
    msg.setDestination(53727U);
    msg.setDestinationEntity(241U);
    msg.original_source = 32924U;
    msg.destination = 674U;
    msg.timeout = 0.777557211412;
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.362850147165;
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
    msg.setTimeStamp(0.0692684988769);
    msg.setSource(43642U);
    msg.setSourceEntity(111U);
    msg.setDestination(2974U);
    msg.setDestinationEntity(246U);
    msg.original_source = 48593U;
    msg.destination = 60029U;
    msg.timeout = 0.725247410953;
    IMC::AcousticSystemsQuery tmp_msg_0;
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
    msg.setTimeStamp(0.715359597234);
    msg.setSource(32795U);
    msg.setSourceEntity(40U);
    msg.setDestination(16262U);
    msg.setDestinationEntity(142U);
    msg.original_source = 20469U;
    msg.destination = 39561U;
    msg.timeout = 0.687094240327;
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.501249290863;
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
    msg.setTimeStamp(0.582766767256);
    msg.setSource(7787U);
    msg.setSourceEntity(92U);
    msg.setDestination(46198U);
    msg.setDestinationEntity(224U);
    msg.type = 249U;
    msg.comm_interface = 24381U;
    msg.model = 50811U;
    msg.list.assign("RSMTBECEEMVWLZHKJCDQMQFTXKGXPGPRXNDSWWXOBBYZGKWEDCBNQCRGVHJXWZCSGOQNEGONBYSLIHJYUFHMQAKFVIVWRJMSPLYIPNQDTLELOIUYPBTVTVKZSZLDROAYYYHUNAUUGGZXIWDWMUMZJAUSSROODAWIPXUZFLILUJNPUKMRPHJJVXOEAATLNV");

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
    msg.setTimeStamp(0.580831359798);
    msg.setSource(48956U);
    msg.setSourceEntity(211U);
    msg.setDestination(30905U);
    msg.setDestinationEntity(210U);
    msg.type = 26U;
    msg.comm_interface = 48595U;
    msg.model = 20892U;
    msg.list.assign("FFURBDJGKMIDYTMBIICHRCXWUQQVDUYNOVMFXXBGVUSTWPMFMWRSLPRFUIUFJYHPHM");

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
    msg.setTimeStamp(0.6510679734);
    msg.setSource(38523U);
    msg.setSourceEntity(31U);
    msg.setDestination(34964U);
    msg.setDestinationEntity(25U);
    msg.type = 153U;
    msg.comm_interface = 30808U;
    msg.model = 25852U;
    msg.list.assign("AEKMOUNQQHDYJYCRSUZVJOXXBWBPYSOGUMWQBTDTEYEZUGALUIISYJHIVFNTOFVKXJTYCMNQFRVPCOPIMNIOEJDUPQPVICZPBZGENBNWABRQDYJKOTYWNWQEZRQCLTFHYEFBKLBZWFAD");

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
    msg.setTimeStamp(0.666198579408);
    msg.setSource(55331U);
    msg.setSourceEntity(162U);
    msg.setDestination(34282U);
    msg.setDestinationEntity(125U);
    msg.type = 144U;
    msg.req_id = 1812802084U;
    msg.ttl = 25821U;
    msg.code = 38U;
    msg.destination.assign("OFLTGMLPAOYBIGRSHUSHTQBDVJZREYFPTSQXBAZEGJHISMSACHKWUKNHJAWFGETKMUVWFVPXCMRJUVPQLXZNWFBPVDPKHZSXQSCJIOUWQCVTVZSNJRAABTBQIKUO");
    msg.source.assign("EAEPQQRTUDOEMFZDJZESVBLDXHVLXVB");
    msg.acknowledge = 152U;
    msg.status = 239U;
    const char tmp_msg_0[] = {84, -28, -75, -42, 110, -95, 31, -64, -102, 20, -26, 9, 49, 28, -112, -52, -120, 76, 99, -114, -115, -25, 112, 64, -107, 36, 45, 25, -35, -11, -71, -61, -90, 22, 17, -52, 32, 18, -73, -13, -16, 42, 79, 23, -30, 59, 18, 65, -66, 43, 58, 13, 19, -62, -21, -5, 28, 108, -6, -31, 32, 15, 101, -109, 11, 49, 56, -30, 116, -49, 40, -67, 69, -41, -108, 120, 86, 93, 42, 115, 97, -51, 46, 99, 22, 24, -57, 75, -21, 15, 124, -118, -126, -113, 4, 116, -62, -17, 72, -21, -29, 57, -89, 5, -114, -75, -68, -43, -80, -11, 79, -126, 41, 2, -20, -108, 58, 73, 97, -31, 53, -16, -67, 24, 18, -116, -105, -26, 20, 117, 1, -4, 80, 1, 121, 111, -42, -58, 65, 111, 77, 23, -18, -30, 106, -111, 83, 111, 24, 78, -95, 51, 72, 112, -94, -24, -50, 78, 97};
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
    msg.setTimeStamp(0.451254625911);
    msg.setSource(18259U);
    msg.setSourceEntity(142U);
    msg.setDestination(37818U);
    msg.setDestinationEntity(58U);
    msg.type = 160U;
    msg.req_id = 4066632222U;
    msg.ttl = 32706U;
    msg.code = 130U;
    msg.destination.assign("SHWYJKSYIZYQPEZGSZPGWRXQK");
    msg.source.assign("QXLAHVFVAVVKCNYQZBZFQOKMOYN");
    msg.acknowledge = 232U;
    msg.status = 78U;
    const char tmp_msg_0[] = {43, 47, 13, 123, -30, -27, -99, -111, -66, -17, 125, 11, 68, 86, 92, 7, -44, 106, 47, 107, -116, -55, -5, -69, 62, 62, -74, -99, -64, -56, -42, 37, -18, -108, -47, 77, 76, -66, -7, 68, -80, 79, 83, 116, -30, -47, -40, -91, -78, -20, -102, -25};
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
    msg.setTimeStamp(0.920447010013);
    msg.setSource(39493U);
    msg.setSourceEntity(189U);
    msg.setDestination(8094U);
    msg.setDestinationEntity(20U);
    msg.type = 141U;
    msg.req_id = 2988764321U;
    msg.ttl = 1195U;
    msg.code = 162U;
    msg.destination.assign("JHVRRNGTSDNYMDDDURSBVNBBQHHESGTQYNSHBARUZXMUCHAEAAEKAKSWLBQQUIPJHWJFCLKMAAQMTL");
    msg.source.assign("DHUPOFSACPMKNWTVMOCUHSDVYHWCLCBSZQXUOFZVKFZXVAEN");
    msg.acknowledge = 54U;
    msg.status = 186U;
    const char tmp_msg_0[] = {31, -120, 113, -14, -31, -122, 45, -9, 112, -126, 114, -20, 89, 0, -16, 57, 52, -70, 118, -15, 15, 88, -103, 5, -77, 115, 62, 14, 113, 37, -5, 18, 31, -53, -34, -104, -122, 56, -29, 111, -89, 2, 17, -112, -65, 6, -47, 102, -13, -27, -31, -18, 42, 66, 18, 39, -42, 33, 7, 123, 75, 106, 92, -11, 109, -17, -49, 67, -119, 8, 65, -41, -1, -37, -61, 55, -45, -73, 37, 112, 114, -99, 66, 60, 84, 0, 101, -82, -127, -81, -39, 76, 83, 119, -62, -102, 41, 117, -51, 67, -127, -116, -101, 83, 124, 126, -66, 38, 4, -106, -28, -36, -9, 46, -70, -106, 35, 29, -8, 48, -103, 2, 3, 96, -82, -50, 41, 33, 9, 18, -55, 84, 110, 43, 52, -68, -102, 68, 5, 53, 57, 109, 120, -67, 85, 101, -15, 85, -123, -63, 21, 90, -112, -20, -65, 101, 80, -32, 22, 76, 6, 32, 106, 111, -69, 80, 50, -42, -85, -17, 5};
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
    msg.setTimeStamp(0.0739204955692);
    msg.setSource(4252U);
    msg.setSourceEntity(174U);
    msg.setDestination(50258U);
    msg.setDestinationEntity(221U);
    msg.id = 190U;
    msg.range = 0.876729591836;

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
    msg.setTimeStamp(0.0309864293728);
    msg.setSource(54758U);
    msg.setSourceEntity(175U);
    msg.setDestination(63681U);
    msg.setDestinationEntity(39U);
    msg.id = 139U;
    msg.range = 0.135412067357;

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
    msg.setTimeStamp(0.585978506474);
    msg.setSource(41584U);
    msg.setSourceEntity(117U);
    msg.setDestination(43950U);
    msg.setDestinationEntity(105U);
    msg.id = 175U;
    msg.range = 0.808226142915;

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
    msg.setTimeStamp(0.245036156473);
    msg.setSource(36442U);
    msg.setSourceEntity(230U);
    msg.setDestination(61323U);
    msg.setDestinationEntity(175U);
    msg.beacon.assign("VZPQJIFXIQGLPAMWDDOSEMHWQCTYFJPGKSHYZAKUEWCRMMARAQLHSEJGVCXYWRFVNSCYOVXHKSPNVUCERJXUJBEBOVYXJMMJVCRPMMCYYAJTTHIVUTEWQQSKNPBXNSLHLBWYVGRHIIUNBOFSIDSUGJEUXMKGOQRBUAZFTGEUGDFXZCRAKQFNNAHINYADIZUTRLT");
    msg.lat = 0.0807000681336;
    msg.lon = 0.0657997049362;
    msg.depth = 0.95455929249;
    msg.query_channel = 119U;
    msg.reply_channel = 152U;
    msg.transponder_delay = 240U;

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
    msg.setTimeStamp(0.910819291065);
    msg.setSource(23859U);
    msg.setSourceEntity(181U);
    msg.setDestination(2565U);
    msg.setDestinationEntity(234U);
    msg.beacon.assign("NPATJETJMRVMGULDIVMRZLHAWPLACICTLCVWSAJONFMBEHXVWRKEDFSTBZFREYPBOYQMTOSZSYOJSHBGZEIJNGCVSGOQDNCQTDGHWMVEXFYBVWSOFLGQWZJBFUROYHCYRNVKYDSWAAFTBRRVWMNDDAWYUHVWUXNIZBHDFXXIPHNPXKXOAUPCUOAFSFKXTKUJPAHQZUJPZUXQQTBIUQMYMCELIPLLHLINGKGETMKPCQYK");
    msg.lat = 0.700884478599;
    msg.lon = 0.0399894279972;
    msg.depth = 0.3391376834;
    msg.query_channel = 31U;
    msg.reply_channel = 138U;
    msg.transponder_delay = 30U;

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
    msg.setTimeStamp(0.421090433407);
    msg.setSource(13394U);
    msg.setSourceEntity(153U);
    msg.setDestination(45382U);
    msg.setDestinationEntity(63U);
    msg.beacon.assign("UPUDJRDMST");
    msg.lat = 0.601923237865;
    msg.lon = 0.734674150797;
    msg.depth = 0.341726469418;
    msg.query_channel = 209U;
    msg.reply_channel = 197U;
    msg.transponder_delay = 24U;

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
    msg.setTimeStamp(0.225822118072);
    msg.setSource(53214U);
    msg.setSourceEntity(57U);
    msg.setDestination(16550U);
    msg.setDestinationEntity(202U);
    msg.op = 203U;

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
    msg.setTimeStamp(0.925295492783);
    msg.setSource(64688U);
    msg.setSourceEntity(239U);
    msg.setDestination(46535U);
    msg.setDestinationEntity(52U);
    msg.op = 44U;

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
    msg.setTimeStamp(0.417072519708);
    msg.setSource(59643U);
    msg.setSourceEntity(100U);
    msg.setDestination(48135U);
    msg.setDestinationEntity(13U);
    msg.op = 26U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XNIQYOOYNLXQTODYULDTGMKCOLSBVKPEHAEDLGRTZXQAGNEVBBQ");
    tmp_msg_0.lat = 0.838858995702;
    tmp_msg_0.lon = 0.0392529399038;
    tmp_msg_0.depth = 0.468913439623;
    tmp_msg_0.query_channel = 239U;
    tmp_msg_0.reply_channel = 235U;
    tmp_msg_0.transponder_delay = 109U;
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
    msg.setTimeStamp(0.670930963711);
    msg.setSource(16958U);
    msg.setSourceEntity(91U);
    msg.setDestination(31678U);
    msg.setDestinationEntity(99U);
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("ZNRNABHYPPBGRGUKVBHVSOHXNKHILIUDXPSPWCDABWYWNLPZQXYJJBVZFRNOTGEHFSVYDLYOTVQSGJVTFIMONEXVNAWADJPLKCTMTKLSHEUFWAIRFARTRXCQCMLIQODBOHWBOZQJNMISTSGBEWDQAKMUREEYVCTZCLQJLCE");
    tmp_msg_0.value = 139U;
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
    msg.setTimeStamp(0.270222898047);
    msg.setSource(56423U);
    msg.setSourceEntity(75U);
    msg.setDestination(59784U);
    msg.setDestinationEntity(84U);
    IMC::DissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.338359561384;
    tmp_msg_0.type = 111U;
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
    msg.setTimeStamp(0.774654339307);
    msg.setSource(34736U);
    msg.setSourceEntity(196U);
    msg.setDestination(61443U);
    msg.setDestinationEntity(50U);
    IMC::UamTxRange tmp_msg_0;
    tmp_msg_0.seq = 28385U;
    tmp_msg_0.sys_dst.assign("MICCEEMNYMTAOGQFYUVHDWBJFQHMROUBZRTPFFPIOGFCJZQZUPELQNRUPTHTGMDPFDAYCINBSKXFPASEMVJSTHSGPNKRMIHBXIPCUVTKRZAABYLWHEROLCKSSSOQKQOGKPDJCNRVZUETTZGILWRCQOUWIVCNGUDRZXVPFLAFHZKQXYBNIYXXNWXDQBMEUSJWVWNJYJILS");
    tmp_msg_0.timeout = 0.900043356625;
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
    msg.setTimeStamp(0.0169114523906);
    msg.setSource(52021U);
    msg.setSourceEntity(89U);
    msg.setDestination(41029U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.415471204169;
    msg.lon = 0.278383082815;
    msg.depth = 0.68759802045;
    msg.sentence.assign("RDTRBLTAYWDYTBVBINILRPVQOMJLHZXFIQKEEUUSAYVMCGPVUBOHUCNIPSVQTIHHUFIPUDZKVIRWGBPMGOZNEKDLOUZDSZJIMAAFHCJOCYKCXAGGHZTBFPYCKXAWOAYEWOZAFNEEWGB");
    msg.txtime = 0.59408132937;
    msg.modem_type.assign("OVDUOCDWIODTHJXYKCUKAWYSYQSZNAPDFVESDQLJR");
    msg.sys_src.assign("KQHKXUYFJIIILLGKQLVEAFLNCVVGPQLNUTYEJXIHJLGCKF");
    msg.seq = 45813U;
    msg.sys_dst.assign("BRXOPVWQSCTKPQMBYHMKFPTGQVFGWHIJIXSUAABVDOUJMSRKRTPYISZYKRL");
    msg.flags = 148U;
    const char tmp_msg_0[] = {-113, -65, -61, 97, -120, -111, 35, -26, -47, 107, -22, 92, -112, 124, 84, -50, -10, -9, 41, -121, -34, -113, 16, 80, -85, -24};
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
    msg.setTimeStamp(0.265056311291);
    msg.setSource(25123U);
    msg.setSourceEntity(149U);
    msg.setDestination(56174U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.189528131936;
    msg.lon = 0.912383816006;
    msg.depth = 0.226783523756;
    msg.sentence.assign("XQMDBYLDPPAUTUPERGQDBPMWCJQKAZHUTUBNDVTGFQAQCILOGWKNR");
    msg.txtime = 0.82602444831;
    msg.modem_type.assign("HEIYDRGIZSOMKBPVPSALTLORTVUFDMPMEKDAFWHFQIHJWMGWRCYNGFTTXBKGCPTAHCCXGUHBSQZ");
    msg.sys_src.assign("XDJUJAIEQZJHFYCARUMZHXIGHTBZWMMKDNNVIWOXLUIVIUECRYHBQXATTCHWOGPQKBBAYFBSRPLPLLMMXLDMEOVXLNCGXTRPHUOEKVNHUCQYVLRKZXSSGPGDKQWEIAWDHDHFJCXOENSYLBJCIQGMPCVZEFFFUQZUGPPKSGTQBLTDUAPKKRGYISZJATZLVFZORMVSAHFNYQDGWWCEPAWYVFOUNWMVFYZD");
    msg.seq = 30538U;
    msg.sys_dst.assign("KIYACHLQXXJMRDDRYUBZSXJWLHCARN");
    msg.flags = 5U;
    const char tmp_msg_0[] = {20, 121, 83, 76, 92, -14, -86, -59, -41, -36, -91, -70, 40, -34, 10, 38, -19, 50, 14, 18, -125, 11, -119, -124, -116, -34, 54, 32, 55, 103, -1, 84, -50, 68, -121, 14, -111, -83, 48, 116, 78, -53, 51, 63, -81, -19, -120, -120, -75, -17, 45, 55, -44, 114, 53, 31, -48, 50, -6, 56, -70, -52, -21, -1, 54, -85, -118, 122, -80, -40, 13, 86, -97, 75, -54, 118, -127, 1, -50, 111, 88, 91, 86, -56, 94, -91, 80, -112, 50, 50, 100, 81, 91, -73, 42, -113, 82, -5, -98, 97, -111, -63, 50, 12, -46, -91, -99, 3, -116, -85, -9, -67, -48, 95, 57, -73, -72, -110, -48, -110, -67, -97, 22, -55, -19, 113, 36, -128, 32, -41, 37, -106, 89, -110, -122, -120, 42, 1, 12, 110, 9, -77, 70, -28, -47};
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
    msg.setTimeStamp(0.636455882467);
    msg.setSource(50755U);
    msg.setSourceEntity(230U);
    msg.setDestination(22825U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.24255467502;
    msg.lon = 0.268824952903;
    msg.depth = 0.554657711877;
    msg.sentence.assign("VGJLLFTTVXYVMMESWZXNWHAZCNRUGYRSGDMFRGCUFMJUPLCMWBIDPPXMOLEXCQMLSNBHDKNNLHDBVYMTGZXJIJVOOOQFZZQABYLFTJZHSYERBADBZFJBZCBJGVPRHSDKRWMTQVVLIXIUGQPQRPARWNKTFTAFHYDEYEOATXKIEBQWCZXQDSPHTOHYUMRLXU");
    msg.txtime = 0.864409131526;
    msg.modem_type.assign("EDOXBSTVSCQDCYWOZUQZVUXMZASUWBEYAXZHIVRCIZPPRFBYOSPQTELKBAMJSILRYJOJXGOP");
    msg.sys_src.assign("IKRHSGUXPIARKLSAYBQTCFTEHXDQGOPGNJFDBEEMKCDEDXJTIRHUKZQWLJTLOGAULQPOSEQSBVWYRUJC");
    msg.seq = 33074U;
    msg.sys_dst.assign("LQTKEFMURZJKKOGHAQLGDFSIQJRVDHPONMEGYYGWJZQKNMQRMOTUKWSBJWJMGERXBJYCPSBWZVLYZMVSTHANKKLRJUPDHBARTLFCBJFCXULTJXOVYXCHBOE");
    msg.flags = 126U;
    const char tmp_msg_0[] = {36, 67, 110, 89, -115, 23, 63, 85, -63, -1, -52, 88, 0, -64, -83, -91, -81, 108, -21, 73, 65, 4, -8, 12, -34, 8, 102, 91, 86, 106, -108, 109, -128, 112, -55, 72, 89, -113, -121, -65, -43, 50, 9, -81, 59, -104, 2, -25, -35, 71, 11, -119, -71, -53, 114, -36, -87, 69, -124, 86, -87, -108, 24, 8, -39, 80, -63, -107, 6, -88, -14, -14, 31, -43, -122, 54, -73, -97, -108, 12, -38, -30, 106, 55, -5, -104, 27, 44, 80, -91, -20, 124, 15, -13, 123, -108, -37, 68, 81, 73, 101, -14, -58, 121, -92, 65, -34, -49, 126, 46, -75, 117, -94, 103, 86, 21, -112, -97, 84, -98, 15, 11, -72, -17, 104, -72, -46, 53, 73, -39, 109, 66, -1, 115, 99, -35, -80, 26, 15, 105, 18, 56, 93, 33, -11, -116, 13, -116, -125, -38, -96, 53, 100, 87, 54, 50, -58, 48, -73, -37, 24, -55, 54, -122, 82, -93, 48, -123, 125, -102, 105, 119, 39, 67, 112, -124, 8, -65, 41, 121, 27, -5, 82, 24, -79, -88, -8, -128, -58, -114, 24, 55, 28, 65, -22, -120, 99, 1, -2, 102, -45, 30, -26, -82, 68, -25, 108, 58, 73, -102, 53, -112, -87, 34, 105, -110, -109, 11, 64, -20};
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
    msg.setTimeStamp(0.706034360208);
    msg.setSource(25753U);
    msg.setSourceEntity(32U);
    msg.setDestination(50265U);
    msg.setDestinationEntity(23U);
    msg.op = 70U;
    msg.system.assign("RGNPUDXYDMSOSPZGRXWKFPUURIHOSITVCHKPHYJMGFSNFVJUITFZNARILXPGRVKIDZAXWCUZNXCMZERPAGDCNZOCJOCKBQSBGBLBOEPZIDWANLYYFFKAGPDCXZDOZAXHYDVRSJCYWO");
    msg.range = 0.803369400278;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.110644305569;
    tmp_msg_0.beam_height = 0.0869523386529;
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
    msg.setTimeStamp(0.176669470896);
    msg.setSource(48542U);
    msg.setSourceEntity(113U);
    msg.setDestination(53769U);
    msg.setDestinationEntity(6U);
    msg.op = 221U;
    msg.system.assign("EMULMYCSUBVFEGGACVWHJHCOBADACGEZWDIJRLINMPWSITNVQPFJXNXQKRJRDTFCVVIZFTQZABYGIUGOQESOSKUUSWVTYRGKNPCHFDZOXYRYUJRZDKZLPPJUCAXNUBXDAHRJBLCWTPLWOQFVWQYONQDXAISVXHBKUNEYTMZKGOMKM");
    msg.range = 0.18790967031;
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.265187922474;
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
    msg.setTimeStamp(0.694743750569);
    msg.setSource(34025U);
    msg.setSourceEntity(121U);
    msg.setDestination(46536U);
    msg.setDestinationEntity(81U);
    msg.op = 192U;
    msg.system.assign("QGRKTYPDHBDDKANHGFFJMTXIPVMUSSNRAOPCGRHHUQDG");
    msg.range = 0.791663940429;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.480531007776;
    tmp_msg_0.y = 0.893896504265;
    tmp_msg_0.z = 0.413042530184;
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
    msg.setTimeStamp(0.561206569557);
    msg.setSource(20134U);
    msg.setSourceEntity(95U);
    msg.setDestination(42338U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.269584485204);
    msg.setSource(53314U);
    msg.setSourceEntity(167U);
    msg.setDestination(33321U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.56115480987);
    msg.setSource(44196U);
    msg.setSourceEntity(8U);
    msg.setDestination(26404U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.628821119808);
    msg.setSource(11818U);
    msg.setSourceEntity(59U);
    msg.setDestination(16449U);
    msg.setDestinationEntity(119U);
    msg.list.assign("GVUFUXINZCTYYYTJRKHGJDJXRZLFWAMUQWJXBUFZAEMQNOWDOQFSFWTFNVKKRUEKALKYEHALTRPVSVKTQYJAOGCQEBRXXHRJIEZLBCSOCCIHRTNUDUMHSBPMAPSGMICMGWOEVSRM");

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
    msg.setTimeStamp(0.481721853921);
    msg.setSource(31076U);
    msg.setSourceEntity(32U);
    msg.setDestination(28434U);
    msg.setDestinationEntity(200U);
    msg.list.assign("AQKEPSGOSWRXCTALVBVPKPVEPRIJLNDSDAPWTHLYDBHGJFECCEQETROHCGEUJJWWVCKSQAMTHBGKPSAOTVMJGMWYZAQJBWGURFADZBYMFMGAXYSQMKRUOHZPQFDPJQWVHLNCWMNYTCHLTIIHWOZZKIBFASMWEVTDXIXRRFOBQLOYKFFODQLUAZVZC");

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
    msg.setTimeStamp(0.799639655088);
    msg.setSource(58382U);
    msg.setSourceEntity(220U);
    msg.setDestination(50277U);
    msg.setDestinationEntity(186U);
    msg.list.assign("PSTLACIWHCYVATUITEYRARL");

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
    msg.setTimeStamp(0.961060254105);
    msg.setSource(55188U);
    msg.setSourceEntity(141U);
    msg.setDestination(16974U);
    msg.setDestinationEntity(216U);
    msg.peer.assign("LECMEVHXEQTIPLNVFOCFGXGHERINZYRDUAMSKRZKWWAOQHGCNYJZXGQOJDOMM");
    msg.rssi = 0.0266912305985;
    msg.integrity = 41293U;

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
    msg.setTimeStamp(0.68141217094);
    msg.setSource(26208U);
    msg.setSourceEntity(72U);
    msg.setDestination(65340U);
    msg.setDestinationEntity(95U);
    msg.peer.assign("DNVJKHRICBZAWQGAYMJCULQSMBGPSBDLDMOFUXTDCVNBXTEDRKTNXBLQJOZSKVYLXJHVKMXRYLRQCOWXBTAAYIQDTVUVJIHFRKQZMNXFYRBNIXHNOLXFKHUPMAERGGCAU");
    msg.rssi = 0.847729195484;
    msg.integrity = 42481U;

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
    msg.setTimeStamp(0.296771928019);
    msg.setSource(47054U);
    msg.setSourceEntity(197U);
    msg.setDestination(24834U);
    msg.setDestinationEntity(161U);
    msg.peer.assign("LUKXNPXYHEYRIMAETQPTVYQGGZWKNSITIPIHWEUYKMMUJAXONPRRIXVSQGATNCCOSBNHYPAANTJQYVJBMKEXERFILJUCRXCAJOYMQHZWQZSJVOFEOJMRFWIVQSLIDYFYEBXEZCJUMJSGCDWZWHFOMBFNTXQFSLNKVAGZRYLHCQODMSCRAUGTUGZFHSVWDDPETK");
    msg.rssi = 0.836555446315;
    msg.integrity = 25310U;

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
    msg.setTimeStamp(0.677088631911);
    msg.setSource(7174U);
    msg.setSourceEntity(249U);
    msg.setDestination(45015U);
    msg.setDestinationEntity(41U);
    msg.req_id = 6582U;
    msg.destination.assign("WINLVYVSJPPAZUYZBFSAAQZZKKZEGPLDLQOFVNSMEXUPQXGEWZDAWOEODVNBBOJWGJUROUOZIHUTWBLFWYIOBTXIXTTQTJKKQFJJGFWRFMAOXDQTANDULYTZZIRLTFOSHDVUORAHCUURMTAVCEBCHCBKIYJQMEJRGGQSKCSPHFBHLSVXJNXWJPQYPPGCCCGDDNMVMEEPZDGNNRMAIHXXAGNIFRXSQDBKRMHVUEHWLMYSYKPKBVRMNSCCIF");
    msg.timeout = 0.449993204558;
    msg.range = 0.445381238033;
    msg.type = 228U;
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 83U;
    tmp_msg_0.request_id = 54575U;
    tmp_msg_0.command = 4U;
    IMC::CompassCalibration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 60657U;
    tmp_tmp_msg_0_0.lat = 0.744853549845;
    tmp_tmp_msg_0_0.lon = 0.587734759996;
    tmp_tmp_msg_0_0.z = 0.281034329165;
    tmp_tmp_msg_0_0.z_units = 133U;
    tmp_tmp_msg_0_0.pitch = 0.219261052403;
    tmp_tmp_msg_0_0.amplitude = 0.890690187961;
    tmp_tmp_msg_0_0.duration = 43632U;
    tmp_tmp_msg_0_0.speed = 0.275431336059;
    tmp_tmp_msg_0_0.speed_units = 147U;
    tmp_tmp_msg_0_0.radius = 0.595552070587;
    tmp_tmp_msg_0_0.direction = 17U;
    tmp_tmp_msg_0_0.custom.assign("LCXXGZXJVNZHOWLGSHRABZIDLIWAKYRNRNSOPFFYQBHYSKRLIGIOCYLCNANP");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 29659U;
    tmp_msg_0.info.assign("YIOGSXDRGSNDPNGEQIIWKDIHUDVKGEBWPNSMEYQHQIDQIPCVHGISQHG");
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
    msg.setTimeStamp(0.156164357867);
    msg.setSource(35143U);
    msg.setSourceEntity(192U);
    msg.setDestination(1523U);
    msg.setDestinationEntity(227U);
    msg.req_id = 14517U;
    msg.destination.assign("GQXOXHQATNPBZJTQWTDSQDLBIYPQWZUCQESMURMVETCWKZFRFFXAGZUECFYGOBCEYZKYCKXMYZ");
    msg.timeout = 0.366118899808;
    msg.range = 0.97076184196;
    msg.type = 185U;
    IMC::AcousticLink tmp_msg_0;
    tmp_msg_0.peer.assign("KYZIXLBEDRDLTZTBVCURGIEACAUGFDGKUECGIFXKWXLWOIVPHOXVSPLVSMVHSOYTTSBHKMTSAZXQUUMFOYGUEEPMAAFRVJSWDJQLBXIWVAUGYZPXYIKSMEVPQNRKCEYWBNMNORRYHJCNJTKLQIDTBMYMHRSHNLAEDMIMJGUZXJAKLQFDJNGTXFRZHBUANIVCOICNPKWSHCFJU");
    tmp_msg_0.rssi = 0.656743445088;
    tmp_msg_0.integrity = 56390U;
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
    msg.setTimeStamp(0.0994940074148);
    msg.setSource(14827U);
    msg.setSourceEntity(71U);
    msg.setDestination(38321U);
    msg.setDestinationEntity(241U);
    msg.req_id = 46056U;
    msg.destination.assign("ELQFGJWSBGZWNCHJZWYMGRPHPOLCBAQZQWTWNCDITVYAHLZYNVKMPGPERJCZBIK");
    msg.timeout = 0.477794430042;
    msg.range = 0.200239628952;
    msg.type = 113U;
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 14441U;
    tmp_msg_0.value = 70U;
    tmp_msg_0.error.assign("ZRQBLZIPZLDXACYHVMKQZAMPBVRYMFMLHFMUCNSXZRBHDIJMIESTUSOZYFJNQEGZGFYVJICMQTPAVEAMZQSBHNPHUHLLUPALJGEDKRCRWERFSJTDNZMWDACTOVBNUYLITAGTHSKWGBOKIWOJIQBXWUVYOUCNVGPEZPXBFOJXA");
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
    msg.setTimeStamp(0.633372852792);
    msg.setSource(47571U);
    msg.setSourceEntity(26U);
    msg.setDestination(19544U);
    msg.setDestinationEntity(154U);
    msg.req_id = 19009U;
    msg.type = 13U;
    msg.status = 136U;
    msg.info.assign("JHCBVUJABEPHXVOBXNDLKXEYHJUBMJAMYNXSWXQOVMGZZBXSFMWJYINTKXIDCNKANYMHSYDTGEGCXGVINEOOKLLQBJPWGIPNLDUZGKRRLJANFUYWCKLMYLCOUMIZCRSJDZRMSPYWRWDLIVJHZDBQGUHWPEQNWRATHSARVEHFUFLSBPVFMHEDIYTTCHSRM");
    msg.range = 0.448582727607;

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
    msg.setTimeStamp(0.146045016626);
    msg.setSource(40904U);
    msg.setSourceEntity(44U);
    msg.setDestination(32289U);
    msg.setDestinationEntity(76U);
    msg.req_id = 37851U;
    msg.type = 225U;
    msg.status = 152U;
    msg.info.assign("TBVZPEGFXIKBIVNNEUJIMUWDSDXDKEXNYEBALCYRATBHFLWVRXAKGYVIOCMFRZMPPFOQKCCJBKELRTFZTOHALTDYAWIKXJUJWHNZZWOGFJLKQTNNFCQCSNGZDSERMPSTRDLOIXFZIYAXVTMVLUXBYLHGJLSAWEPGNPPHSARQCHIQRJIRMMOXMYTKUDCMUVMBHYHDWUAWEZUYDJTLJVRBGNSGOPIEKQ");
    msg.range = 0.485386043284;

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
    msg.setTimeStamp(0.0548621688568);
    msg.setSource(4798U);
    msg.setSourceEntity(46U);
    msg.setDestination(25891U);
    msg.setDestinationEntity(197U);
    msg.req_id = 53305U;
    msg.type = 45U;
    msg.status = 236U;
    msg.info.assign("CWZOWVRTODVAFALCWTFHAVNOAKYJUINPPHVRBFPZTIZUFGVXVRTEKDDSPCOCNYXGTXEEOJGJICQTXZIFWZURWDVQQKTXDPAYLRNIFYORDSYQLP");
    msg.range = 0.61702267708;

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
    msg.setTimeStamp(0.176529136107);
    msg.setSource(17455U);
    msg.setSourceEntity(12U);
    msg.setDestination(55154U);
    msg.setDestinationEntity(98U);
    msg.value = -23682;

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
    msg.setTimeStamp(0.795852553116);
    msg.setSource(5067U);
    msg.setSourceEntity(69U);
    msg.setDestination(26394U);
    msg.setDestinationEntity(74U);
    msg.value = -23347;

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
    msg.setTimeStamp(0.475928885498);
    msg.setSource(43160U);
    msg.setSourceEntity(90U);
    msg.setDestination(9164U);
    msg.setDestinationEntity(47U);
    msg.value = -29503;

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
    msg.setTimeStamp(0.804181570018);
    msg.setSource(16788U);
    msg.setSourceEntity(75U);
    msg.setDestination(16105U);
    msg.setDestinationEntity(184U);
    msg.value = 0.175854846889;

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
    msg.setTimeStamp(0.491868255504);
    msg.setSource(50353U);
    msg.setSourceEntity(29U);
    msg.setDestination(45350U);
    msg.setDestinationEntity(42U);
    msg.value = 0.163004724775;

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
    msg.setTimeStamp(0.831690917533);
    msg.setSource(33181U);
    msg.setSourceEntity(160U);
    msg.setDestination(12954U);
    msg.setDestinationEntity(139U);
    msg.value = 0.910504091015;

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
    msg.setTimeStamp(0.0441047076564);
    msg.setSource(10895U);
    msg.setSourceEntity(190U);
    msg.setDestination(28785U);
    msg.setDestinationEntity(11U);
    msg.value = 0.243755845287;

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
    msg.setTimeStamp(0.0790742625525);
    msg.setSource(26237U);
    msg.setSourceEntity(199U);
    msg.setDestination(11303U);
    msg.setDestinationEntity(184U);
    msg.value = 0.564394521017;

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
    msg.setTimeStamp(0.563951595345);
    msg.setSource(20913U);
    msg.setSourceEntity(24U);
    msg.setDestination(53569U);
    msg.setDestinationEntity(92U);
    msg.value = 0.693752950517;

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
    msg.setTimeStamp(0.243753224731);
    msg.setSource(48378U);
    msg.setSourceEntity(225U);
    msg.setDestination(22184U);
    msg.setDestinationEntity(63U);
    msg.validity = 11465U;
    msg.type = 1U;
    msg.utc_year = 19715U;
    msg.utc_month = 27U;
    msg.utc_day = 79U;
    msg.utc_time = 0.549886272035;
    msg.lat = 0.898200621871;
    msg.lon = 0.230284553841;
    msg.height = 0.204871653368;
    msg.satellites = 27U;
    msg.cog = 0.461566464778;
    msg.sog = 0.212816253503;
    msg.hdop = 0.40993155385;
    msg.vdop = 0.706389921343;
    msg.hacc = 0.161077506552;
    msg.vacc = 0.183689077618;

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
    msg.setTimeStamp(0.46236295772);
    msg.setSource(29615U);
    msg.setSourceEntity(48U);
    msg.setDestination(48231U);
    msg.setDestinationEntity(238U);
    msg.validity = 28095U;
    msg.type = 10U;
    msg.utc_year = 46118U;
    msg.utc_month = 109U;
    msg.utc_day = 207U;
    msg.utc_time = 0.0826066121044;
    msg.lat = 0.0162626728656;
    msg.lon = 0.832733820851;
    msg.height = 0.299787723532;
    msg.satellites = 85U;
    msg.cog = 0.288757703824;
    msg.sog = 0.622305289059;
    msg.hdop = 0.882500035478;
    msg.vdop = 0.254025601462;
    msg.hacc = 0.105303752884;
    msg.vacc = 0.536940201782;

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
    msg.setTimeStamp(0.692768369003);
    msg.setSource(45718U);
    msg.setSourceEntity(77U);
    msg.setDestination(18135U);
    msg.setDestinationEntity(144U);
    msg.validity = 43042U;
    msg.type = 46U;
    msg.utc_year = 5763U;
    msg.utc_month = 236U;
    msg.utc_day = 243U;
    msg.utc_time = 0.85120801073;
    msg.lat = 0.168513456358;
    msg.lon = 0.42663667744;
    msg.height = 0.35922688372;
    msg.satellites = 245U;
    msg.cog = 0.737479250088;
    msg.sog = 0.391991662053;
    msg.hdop = 0.441173080376;
    msg.vdop = 0.214889466632;
    msg.hacc = 0.198702249997;
    msg.vacc = 0.235142886694;

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
    msg.setTimeStamp(0.660111874063);
    msg.setSource(48159U);
    msg.setSourceEntity(125U);
    msg.setDestination(63033U);
    msg.setDestinationEntity(177U);
    msg.time = 0.101291556755;
    msg.phi = 0.850413040009;
    msg.theta = 0.16893247715;
    msg.psi = 0.212904156442;
    msg.psi_magnetic = 0.483733098027;

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
    msg.setTimeStamp(0.805385995606);
    msg.setSource(62723U);
    msg.setSourceEntity(193U);
    msg.setDestination(43609U);
    msg.setDestinationEntity(59U);
    msg.time = 0.420004394416;
    msg.phi = 0.951364364732;
    msg.theta = 0.505935965533;
    msg.psi = 0.123718531421;
    msg.psi_magnetic = 0.194185480868;

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
    msg.setTimeStamp(0.837949592546);
    msg.setSource(47137U);
    msg.setSourceEntity(114U);
    msg.setDestination(40636U);
    msg.setDestinationEntity(144U);
    msg.time = 0.122676360733;
    msg.phi = 0.312969153015;
    msg.theta = 0.18204830979;
    msg.psi = 0.901689391211;
    msg.psi_magnetic = 0.327741995992;

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
    msg.setTimeStamp(0.269812654214);
    msg.setSource(60126U);
    msg.setSourceEntity(16U);
    msg.setDestination(65377U);
    msg.setDestinationEntity(193U);
    msg.time = 0.784785779468;
    msg.x = 0.881892024006;
    msg.y = 0.0920769558797;
    msg.z = 0.402975119652;
    msg.timestep = 0.0363091448765;

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
    msg.setTimeStamp(0.984278407517);
    msg.setSource(18341U);
    msg.setSourceEntity(185U);
    msg.setDestination(57859U);
    msg.setDestinationEntity(128U);
    msg.time = 0.120347522755;
    msg.x = 0.0246952739124;
    msg.y = 0.458957721525;
    msg.z = 0.708062972169;
    msg.timestep = 0.29386423427;

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
    msg.setTimeStamp(0.0811806141209);
    msg.setSource(55939U);
    msg.setSourceEntity(130U);
    msg.setDestination(25283U);
    msg.setDestinationEntity(207U);
    msg.time = 0.55043035635;
    msg.x = 0.716818165107;
    msg.y = 0.984890499389;
    msg.z = 0.943064687613;
    msg.timestep = 0.48015363677;

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
    msg.setTimeStamp(0.444806842362);
    msg.setSource(6632U);
    msg.setSourceEntity(80U);
    msg.setDestination(19195U);
    msg.setDestinationEntity(83U);
    msg.time = 0.838271278829;
    msg.x = 0.299355976781;
    msg.y = 0.181109138084;
    msg.z = 0.626470532677;

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
    msg.setTimeStamp(0.663796612465);
    msg.setSource(33430U);
    msg.setSourceEntity(29U);
    msg.setDestination(53322U);
    msg.setDestinationEntity(13U);
    msg.time = 0.862564484774;
    msg.x = 0.279644211118;
    msg.y = 0.531361279544;
    msg.z = 0.1029607765;

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
    msg.setTimeStamp(0.911811510721);
    msg.setSource(26848U);
    msg.setSourceEntity(154U);
    msg.setDestination(65503U);
    msg.setDestinationEntity(181U);
    msg.time = 0.113355912783;
    msg.x = 0.360876320007;
    msg.y = 0.287459939431;
    msg.z = 0.750569324535;

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
    msg.setTimeStamp(0.66121660226);
    msg.setSource(63706U);
    msg.setSourceEntity(37U);
    msg.setDestination(20382U);
    msg.setDestinationEntity(37U);
    msg.time = 0.985204696067;
    msg.x = 0.978064197161;
    msg.y = 0.967770062787;
    msg.z = 0.112575173965;

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
    msg.setTimeStamp(0.219469957853);
    msg.setSource(3074U);
    msg.setSourceEntity(146U);
    msg.setDestination(6913U);
    msg.setDestinationEntity(153U);
    msg.time = 0.635624301958;
    msg.x = 0.698525194547;
    msg.y = 0.366467649387;
    msg.z = 0.682692709422;

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
    msg.setTimeStamp(0.552811279739);
    msg.setSource(1116U);
    msg.setSourceEntity(67U);
    msg.setDestination(59113U);
    msg.setDestinationEntity(233U);
    msg.time = 0.0323650014992;
    msg.x = 0.558224072659;
    msg.y = 0.249202319052;
    msg.z = 0.0167662714519;

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
    msg.setTimeStamp(0.291142303289);
    msg.setSource(63069U);
    msg.setSourceEntity(50U);
    msg.setDestination(53619U);
    msg.setDestinationEntity(216U);
    msg.time = 0.372568207541;
    msg.x = 0.801229597626;
    msg.y = 0.944628126193;
    msg.z = 0.405286157155;

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
    msg.setTimeStamp(0.150093763446);
    msg.setSource(596U);
    msg.setSourceEntity(17U);
    msg.setDestination(45253U);
    msg.setDestinationEntity(28U);
    msg.time = 0.414838371745;
    msg.x = 0.332381897267;
    msg.y = 0.477244619393;
    msg.z = 0.22932172754;

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
    msg.setTimeStamp(0.751511210799);
    msg.setSource(16742U);
    msg.setSourceEntity(137U);
    msg.setDestination(14635U);
    msg.setDestinationEntity(155U);
    msg.time = 0.198468160379;
    msg.x = 0.920045401141;
    msg.y = 0.916775194423;
    msg.z = 0.318131369552;

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
    msg.setTimeStamp(0.695098285948);
    msg.setSource(15339U);
    msg.setSourceEntity(172U);
    msg.setDestination(18081U);
    msg.setDestinationEntity(133U);
    msg.validity = 116U;
    msg.x = 0.208633760977;
    msg.y = 0.125998015929;
    msg.z = 0.0544496199553;

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
    msg.setTimeStamp(0.173695453894);
    msg.setSource(62381U);
    msg.setSourceEntity(39U);
    msg.setDestination(26507U);
    msg.setDestinationEntity(142U);
    msg.validity = 192U;
    msg.x = 0.886268629987;
    msg.y = 0.988076084336;
    msg.z = 0.508210072023;

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
    msg.setTimeStamp(0.642432942476);
    msg.setSource(64261U);
    msg.setSourceEntity(85U);
    msg.setDestination(54065U);
    msg.setDestinationEntity(122U);
    msg.validity = 104U;
    msg.x = 0.149370011182;
    msg.y = 0.750830629411;
    msg.z = 0.551621255894;

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
    msg.setTimeStamp(0.228582364947);
    msg.setSource(5783U);
    msg.setSourceEntity(158U);
    msg.setDestination(1944U);
    msg.setDestinationEntity(224U);
    msg.validity = 176U;
    msg.x = 0.395347456806;
    msg.y = 0.961370242594;
    msg.z = 0.843416472336;

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
    msg.setTimeStamp(0.0993928456166);
    msg.setSource(26541U);
    msg.setSourceEntity(246U);
    msg.setDestination(44036U);
    msg.setDestinationEntity(237U);
    msg.validity = 40U;
    msg.x = 0.546375630026;
    msg.y = 0.811675640935;
    msg.z = 0.728078626663;

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
    msg.setTimeStamp(0.919493983796);
    msg.setSource(19306U);
    msg.setSourceEntity(128U);
    msg.setDestination(62105U);
    msg.setDestinationEntity(237U);
    msg.validity = 184U;
    msg.x = 0.440253584559;
    msg.y = 0.804942276486;
    msg.z = 0.285712740708;

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
    msg.setTimeStamp(0.757741025396);
    msg.setSource(45467U);
    msg.setSourceEntity(148U);
    msg.setDestination(48958U);
    msg.setDestinationEntity(93U);
    msg.time = 0.0750049763843;
    msg.x = 0.717386248508;
    msg.y = 0.0138173146234;
    msg.z = 0.96576514229;

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
    msg.setTimeStamp(0.640589601627);
    msg.setSource(24886U);
    msg.setSourceEntity(190U);
    msg.setDestination(29779U);
    msg.setDestinationEntity(223U);
    msg.time = 0.438121747436;
    msg.x = 0.187937509327;
    msg.y = 0.970212785148;
    msg.z = 0.806454177194;

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
    msg.setTimeStamp(0.8310413422);
    msg.setSource(841U);
    msg.setSourceEntity(89U);
    msg.setDestination(30412U);
    msg.setDestinationEntity(10U);
    msg.time = 0.337150208895;
    msg.x = 0.346827620127;
    msg.y = 0.544956859257;
    msg.z = 0.178244563268;

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
    msg.setTimeStamp(0.712481298044);
    msg.setSource(23859U);
    msg.setSourceEntity(180U);
    msg.setDestination(64972U);
    msg.setDestinationEntity(105U);
    msg.validity = 240U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.480253795697;
    tmp_msg_0.beam_height = 0.720177268745;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.949937090793;

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
    msg.setTimeStamp(0.194930475104);
    msg.setSource(16696U);
    msg.setSourceEntity(62U);
    msg.setDestination(43452U);
    msg.setDestinationEntity(9U);
    msg.validity = 110U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.303848479546;
    tmp_msg_0.beam_height = 0.293345259578;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.290622624011;

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
    msg.setTimeStamp(0.413012976157);
    msg.setSource(54274U);
    msg.setSourceEntity(240U);
    msg.setDestination(9652U);
    msg.setDestinationEntity(93U);
    msg.validity = 88U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.321840495574;
    tmp_msg_0.y = 0.358821286119;
    tmp_msg_0.z = 0.615534033394;
    tmp_msg_0.phi = 0.817376675183;
    tmp_msg_0.theta = 0.561231855632;
    tmp_msg_0.psi = 0.818137003764;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.39524989062;
    tmp_msg_1.beam_height = 0.430594249753;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.807516185893;

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
    msg.setTimeStamp(0.55272037217);
    msg.setSource(1432U);
    msg.setSourceEntity(24U);
    msg.setDestination(18725U);
    msg.setDestinationEntity(38U);
    msg.value = 0.820727496083;

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
    msg.setTimeStamp(0.749414522038);
    msg.setSource(42627U);
    msg.setSourceEntity(129U);
    msg.setDestination(37694U);
    msg.setDestinationEntity(33U);
    msg.value = 0.0712556466399;

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
    msg.setTimeStamp(0.918380693983);
    msg.setSource(7517U);
    msg.setSourceEntity(26U);
    msg.setDestination(56595U);
    msg.setDestinationEntity(237U);
    msg.value = 0.382019763091;

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
    msg.setTimeStamp(0.374151109146);
    msg.setSource(56712U);
    msg.setSourceEntity(37U);
    msg.setDestination(5593U);
    msg.setDestinationEntity(197U);
    msg.value = 0.607324463866;

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
    msg.setTimeStamp(0.362610634955);
    msg.setSource(2755U);
    msg.setSourceEntity(114U);
    msg.setDestination(61191U);
    msg.setDestinationEntity(44U);
    msg.value = 0.879165389303;

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
    msg.setTimeStamp(0.49794602255);
    msg.setSource(48474U);
    msg.setSourceEntity(238U);
    msg.setDestination(54339U);
    msg.setDestinationEntity(174U);
    msg.value = 0.681040266233;

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
    msg.setTimeStamp(0.373571769638);
    msg.setSource(14934U);
    msg.setSourceEntity(164U);
    msg.setDestination(45322U);
    msg.setDestinationEntity(100U);
    msg.value = 0.575557858407;

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
    msg.setTimeStamp(0.4210072209);
    msg.setSource(33262U);
    msg.setSourceEntity(87U);
    msg.setDestination(3671U);
    msg.setDestinationEntity(186U);
    msg.value = 0.765156869788;

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
    msg.setTimeStamp(0.477013421235);
    msg.setSource(41398U);
    msg.setSourceEntity(49U);
    msg.setDestination(47529U);
    msg.setDestinationEntity(104U);
    msg.value = 0.646982075906;

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
    msg.setTimeStamp(0.175367866242);
    msg.setSource(45342U);
    msg.setSourceEntity(75U);
    msg.setDestination(38157U);
    msg.setDestinationEntity(97U);
    msg.value = 0.818528091962;

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
    msg.setTimeStamp(0.458818360218);
    msg.setSource(7563U);
    msg.setSourceEntity(235U);
    msg.setDestination(50103U);
    msg.setDestinationEntity(88U);
    msg.value = 0.230854423092;

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
    msg.setTimeStamp(0.043048515917);
    msg.setSource(17668U);
    msg.setSourceEntity(109U);
    msg.setDestination(33095U);
    msg.setDestinationEntity(210U);
    msg.value = 0.808884963014;

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
    msg.setTimeStamp(0.200565449606);
    msg.setSource(10199U);
    msg.setSourceEntity(149U);
    msg.setDestination(36360U);
    msg.setDestinationEntity(210U);
    msg.value = 0.572399642156;

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
    msg.setTimeStamp(0.984838186961);
    msg.setSource(41980U);
    msg.setSourceEntity(85U);
    msg.setDestination(43332U);
    msg.setDestinationEntity(78U);
    msg.value = 0.0796653146378;

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
    msg.setTimeStamp(0.476904254492);
    msg.setSource(17891U);
    msg.setSourceEntity(251U);
    msg.setDestination(38045U);
    msg.setDestinationEntity(38U);
    msg.value = 0.0594799334785;

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
    msg.setTimeStamp(0.24920660639);
    msg.setSource(14410U);
    msg.setSourceEntity(142U);
    msg.setDestination(33739U);
    msg.setDestinationEntity(51U);
    msg.value = 0.818437863815;

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
    msg.setTimeStamp(0.857905488727);
    msg.setSource(59653U);
    msg.setSourceEntity(62U);
    msg.setDestination(15148U);
    msg.setDestinationEntity(203U);
    msg.value = 0.425507195484;

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
    msg.setTimeStamp(0.147333169269);
    msg.setSource(64445U);
    msg.setSourceEntity(158U);
    msg.setDestination(6256U);
    msg.setDestinationEntity(178U);
    msg.value = 0.771893441054;

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
    msg.setTimeStamp(0.288829806231);
    msg.setSource(59937U);
    msg.setSourceEntity(184U);
    msg.setDestination(45361U);
    msg.setDestinationEntity(47U);
    msg.value = 0.924920606824;

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
    msg.setTimeStamp(0.37592912134);
    msg.setSource(59597U);
    msg.setSourceEntity(57U);
    msg.setDestination(44886U);
    msg.setDestinationEntity(204U);
    msg.value = 0.0132907787275;

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
    msg.setTimeStamp(0.854409701273);
    msg.setSource(47809U);
    msg.setSourceEntity(71U);
    msg.setDestination(32651U);
    msg.setDestinationEntity(236U);
    msg.value = 0.113283088653;

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
    msg.setTimeStamp(0.545935731882);
    msg.setSource(61296U);
    msg.setSourceEntity(54U);
    msg.setDestination(44259U);
    msg.setDestinationEntity(165U);
    msg.value = 0.755417242447;

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
    msg.setTimeStamp(0.396053928364);
    msg.setSource(23144U);
    msg.setSourceEntity(74U);
    msg.setDestination(26706U);
    msg.setDestinationEntity(25U);
    msg.value = 0.835850052823;

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
    msg.setTimeStamp(0.98590935535);
    msg.setSource(55056U);
    msg.setSourceEntity(11U);
    msg.setDestination(8932U);
    msg.setDestinationEntity(135U);
    msg.value = 0.825440117318;

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
    msg.setTimeStamp(0.988991072501);
    msg.setSource(45708U);
    msg.setSourceEntity(245U);
    msg.setDestination(4579U);
    msg.setDestinationEntity(62U);
    msg.direction = 0.992928130459;
    msg.speed = 0.402310418021;
    msg.turbulence = 0.802319606734;

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
    msg.setTimeStamp(0.546229840613);
    msg.setSource(21181U);
    msg.setSourceEntity(8U);
    msg.setDestination(6817U);
    msg.setDestinationEntity(137U);
    msg.direction = 0.478060134717;
    msg.speed = 0.914536741872;
    msg.turbulence = 0.91444998196;

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
    msg.setTimeStamp(0.424185450771);
    msg.setSource(25295U);
    msg.setSourceEntity(153U);
    msg.setDestination(31211U);
    msg.setDestinationEntity(212U);
    msg.direction = 0.903004947664;
    msg.speed = 0.574087720175;
    msg.turbulence = 0.138688987543;

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
    msg.setTimeStamp(0.471827228259);
    msg.setSource(12422U);
    msg.setSourceEntity(157U);
    msg.setDestination(21552U);
    msg.setDestinationEntity(147U);
    msg.value = 0.501988732353;

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
    msg.setTimeStamp(0.493225277988);
    msg.setSource(47881U);
    msg.setSourceEntity(248U);
    msg.setDestination(14859U);
    msg.setDestinationEntity(24U);
    msg.value = 0.607332789997;

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
    msg.setTimeStamp(0.815172450805);
    msg.setSource(13126U);
    msg.setSourceEntity(239U);
    msg.setDestination(60617U);
    msg.setDestinationEntity(23U);
    msg.value = 0.837886472438;

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
    msg.setTimeStamp(0.0809041782498);
    msg.setSource(22089U);
    msg.setSourceEntity(127U);
    msg.setDestination(3707U);
    msg.setDestinationEntity(145U);
    msg.value.assign("CPFTFMULGHQEMJOMJYCAOAWVNZIVLBSYAPZBYUTQOFGRHTBAYCMODKVWNCICEZOKM");

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
    msg.setTimeStamp(0.611959450716);
    msg.setSource(15703U);
    msg.setSourceEntity(26U);
    msg.setDestination(10331U);
    msg.setDestinationEntity(27U);
    msg.value.assign("PPBASUDXIHVSTEBQLUNEIPOVMOZDXFVGWYNBEJQWLQWLSHIKCWOZYNXINRKWCROFPUEGULCDAAGLCEYGSOPHXXCDQONWBDYCKPIHTRJFZVECCRJGUODLXWBZXGYMTEMTAAOJZPQYHAEFBVRGAJNCMRJMZH");

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
    msg.setTimeStamp(0.91363149319);
    msg.setSource(36376U);
    msg.setSourceEntity(230U);
    msg.setDestination(29843U);
    msg.setDestinationEntity(198U);
    msg.value.assign("YPOBJJUJJFBBDERWOYIUGAJRCTINUZGMQWVVFDHFCSFDKKBHKIMXRZGNHEJUIKHEUXBNDNLQMTNQSXIXQPDAZSXLOYBTKVCJPTKGVACRQLRHPQCUMISKWLJOYTZSDALBXUUROVMSBECPMZIFH");

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
    msg.setTimeStamp(0.101005461575);
    msg.setSource(14402U);
    msg.setSourceEntity(181U);
    msg.setDestination(31036U);
    msg.setDestinationEntity(45U);
    const char tmp_msg_0[] = {2, 1, -13, -77, 73, 58, 37, -15, 29, 58, 100, 95, -108, 84, -27, -33, 42, 101, 119, -55, -19, 107, -43, -103, 43, 32, 116, -74, -8, 2, 47, 7, -10, -42, 63, -102, 53, 31, -16, -30, -103, 98, -124, -8, 102, 102, -101, 40, 54, -114, -97, 44, 109, 83, -113, 1, -12, -24};
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
    msg.setTimeStamp(0.853447704953);
    msg.setSource(52911U);
    msg.setSourceEntity(180U);
    msg.setDestination(30982U);
    msg.setDestinationEntity(64U);
    const char tmp_msg_0[] = {124, -18, -9, -45, 1, -64, 102, 14, 116, -7, 123, -29, -82, -45, -37, -63, 123, 101, 81, 87, -80, -97, 27, -9, -47, 12, 108, 39, 62, -17, -127, -39, -64, -72, 69, 66, -12, 4, 11, 101, 110, -19, 126, 80, -11, 27, 112, -100, 119, 35, 108, 77, -73, -38, -19, -41, 21, 59, 91, -117, 39, -55, 90, -30};
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
    msg.setTimeStamp(0.266123956724);
    msg.setSource(39959U);
    msg.setSourceEntity(44U);
    msg.setDestination(6741U);
    msg.setDestinationEntity(69U);
    const char tmp_msg_0[] = {-126, -72, -56, -119, 49, 49, 33, 55, -126, -64, 7, -81, 52, -32, 21, 101, 83, -9, -108, -94, -84, 15, 50, 31, 15, 81, 51, -71, 26, 1, 105, -30, 20, -114, 27, -78, -79, -4, -7, -81, 30, 61, 109, -18, 70, -59, 1, -87, -32, 7, 111, 125, -101, 68, -77, -104, 31, -114, -45, -10, 121, 109, -83, -108, -68, -24, 91, -56, 67, 49, -126, -65, 10, 63, 76, -11, -6, 102, -30, -39, 53, -127, 23, -25, -114, 116, -47, 74, -29, 8, 19, -112, 77, 33, -57, 53, -15, -42, -38, 49, 1, -18, -44, 16, 8, -63, -82, 43, 110, 62, 6, -24, 72, -92, -40, -14, -78, 68, 51, -58, 61, 6, -90, 74, 83, -91, -127, 18, 102, 115, 10, 47, -36, -3, 44, -19, -67, 62, -50, 58, -42, -77, -42, -60, -121, -7, 122, -32, 60, -77, -122, 110, -114, -107, 33, 50, 54, -114, -47, -96, 94, 32, 4, 96, -113, -79, -13, -55, -32, -23, 115, 120, -66, -30, -79, -44, -25, -84, 17, 114, -121, 47, -26, -48, 22, 5, 53, 24};
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
    msg.setTimeStamp(0.569760311633);
    msg.setSource(61915U);
    msg.setSourceEntity(167U);
    msg.setDestination(33657U);
    msg.setDestinationEntity(63U);
    msg.value = 0.977758284943;

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
    msg.setTimeStamp(0.0459469047104);
    msg.setSource(59477U);
    msg.setSourceEntity(246U);
    msg.setDestination(14231U);
    msg.setDestinationEntity(233U);
    msg.value = 0.79925905941;

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
    msg.setTimeStamp(0.913640041134);
    msg.setSource(6131U);
    msg.setSourceEntity(4U);
    msg.setDestination(4592U);
    msg.setDestinationEntity(144U);
    msg.value = 0.996113719396;

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
    msg.setTimeStamp(0.940626234708);
    msg.setSource(52638U);
    msg.setSourceEntity(30U);
    msg.setDestination(14454U);
    msg.setDestinationEntity(101U);
    msg.type = 97U;
    msg.frequency = 3658814365U;
    msg.min_range = 1992U;
    msg.max_range = 65174U;
    msg.bits_per_point = 172U;
    msg.scale_factor = 0.846390948515;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.18310024545;
    tmp_msg_0.beam_height = 0.881445935561;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {59, -102, -9, 113, 74, 75, -67, -79, 117, -19, -11, -109, 55, -54, 6, -106, -92, -65, 107, 72, 64, 6, 28, 113, 46, -128, 90, 23, -103, -57, 45, -115, 82, 26, -7, 62, 22, 67, -106, 70, 21, -112, 75, -113, 36, -52, -82, -38, 104, -14, 83, -96, 16, -86, 48, -12, -89, -82, -59, -33, -76, 104, 104, 61, -62, 56, 33, -127, -57, -57, -126, -82, -127, -28, 11, -59, 112, 62, -20, -91, -60, 94, -31, -43, -94, 31, -126, -113, 106, -113, 108, 58, 66, -52, -127, 101, 118, 7, 102, 115, -81, 55, -21, -117, -96, 39, 116, 51, 12, -74, -93, 48, -128, -6, 119, -91, 102, -74, 22, 7, -60, -111, -126};
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
    msg.setTimeStamp(0.842430552343);
    msg.setSource(25903U);
    msg.setSourceEntity(193U);
    msg.setDestination(28900U);
    msg.setDestinationEntity(84U);
    msg.type = 20U;
    msg.frequency = 760390237U;
    msg.min_range = 7828U;
    msg.max_range = 46910U;
    msg.bits_per_point = 154U;
    msg.scale_factor = 0.273213892128;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.49335218427;
    tmp_msg_0.beam_height = 0.193502493737;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-2, 81, 123, 19, -124, -91, 105, -56, -65, -72, 83, 120, -30, 46, -90, -43, -4, 98, 87, -95, 25, 48};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

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
    msg.setTimeStamp(0.0716844963468);
    msg.setSource(5895U);
    msg.setSourceEntity(166U);
    msg.setDestination(45550U);
    msg.setDestinationEntity(152U);
    msg.type = 135U;
    msg.frequency = 4114339871U;
    msg.min_range = 31543U;
    msg.max_range = 39314U;
    msg.bits_per_point = 144U;
    msg.scale_factor = 0.550111346235;
    const char tmp_msg_0[] = {18, -8, -40, 123, 76, 63, 30, 1, -115, 14, 109, 34, -22};
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
    msg.setTimeStamp(0.380245417903);
    msg.setSource(32978U);
    msg.setSourceEntity(175U);
    msg.setDestination(19030U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.781725565771);
    msg.setSource(5317U);
    msg.setSourceEntity(6U);
    msg.setDestination(7358U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.88041017398);
    msg.setSource(61390U);
    msg.setSourceEntity(71U);
    msg.setDestination(31639U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.843194781609);
    msg.setSource(51356U);
    msg.setSourceEntity(218U);
    msg.setDestination(1934U);
    msg.setDestinationEntity(38U);
    msg.op = 149U;

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
    msg.setTimeStamp(0.63098207724);
    msg.setSource(20105U);
    msg.setSourceEntity(79U);
    msg.setDestination(36767U);
    msg.setDestinationEntity(215U);
    msg.op = 66U;

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
    msg.setTimeStamp(0.687340159918);
    msg.setSource(42098U);
    msg.setSourceEntity(70U);
    msg.setDestination(800U);
    msg.setDestinationEntity(171U);
    msg.op = 85U;

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
    msg.setTimeStamp(0.892917059997);
    msg.setSource(16010U);
    msg.setSourceEntity(242U);
    msg.setDestination(52509U);
    msg.setDestinationEntity(253U);
    msg.value = 0.221515332269;
    msg.confidence = 0.675802427919;
    msg.opmodes.assign("TVSCRBLTWAQYDPFBXGDZOWXBNECSOKYYAGEFPNUXKTMGPGQXUUHAGWHMAECKOCJKTIDENJQLZSXYWPZB");

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
    msg.setTimeStamp(0.922061786567);
    msg.setSource(46968U);
    msg.setSourceEntity(57U);
    msg.setDestination(30833U);
    msg.setDestinationEntity(157U);
    msg.value = 0.392041278888;
    msg.confidence = 0.332987254859;
    msg.opmodes.assign("RTTQBJDYBJLPJOGPFMWJMEPRLAJSOUBKDOSOKLCHSBPQNVXRTITBZNOWDXQIXIQEQDHCCGYADWLFXWCBFQFOKZHWCRISERDVDENEKZIXEZNMHGLNOVQKQNVUYHVPMUYESCGGJUGRYGYUCLKRIMQFUDTMCPLHARVXAZNTJRHSATNAAUMILVXFVWDFCHAKKBTNBCZANVFPEXZVTMWZIRYGGPAGKYZFEWFWSIUXBUJQXMLEYKSTZJSHDPI");

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
    msg.setTimeStamp(0.140202656658);
    msg.setSource(42672U);
    msg.setSourceEntity(113U);
    msg.setDestination(16295U);
    msg.setDestinationEntity(44U);
    msg.value = 0.951879082932;
    msg.confidence = 0.876418518534;
    msg.opmodes.assign("FERXDGMVYSPFWWHSJCYYGNPBHIEHUDJHMALTZLSQNEJKUIFQSALJIJVHVPVHXCRSRTENTTWRPWYNQYCNQPZONCDRQAZUJSVIQKOBUFIKCDXPMWXUJCNNFGBVRFXSEPTDGZCWEESFCUGYMOIBSLFDDKTYAOTWQEZAGJIKILNEXVPKRQUVGZCOYLULWRLMAXHDTXGBMOMWPDVKOJVYKAQRCBDUWBKMKALPUEAINTORFMOXTGZYOHBZZZFQGBMJH");

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
    msg.setTimeStamp(0.660483232853);
    msg.setSource(14627U);
    msg.setSourceEntity(86U);
    msg.setDestination(21907U);
    msg.setDestinationEntity(146U);
    msg.itow = 1903514652U;
    msg.lat = 0.192892591246;
    msg.lon = 0.0880183152277;
    msg.height_ell = 0.628985918572;
    msg.height_sea = 0.400827817374;
    msg.hacc = 0.312831334892;
    msg.vacc = 0.135848067653;
    msg.vel_n = 0.955208399319;
    msg.vel_e = 0.573771183524;
    msg.vel_d = 0.38473537639;
    msg.speed = 0.633615332303;
    msg.gspeed = 0.30874131602;
    msg.heading = 0.413264916497;
    msg.sacc = 0.541136903294;
    msg.cacc = 0.0093958957645;

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
    msg.setTimeStamp(0.510168432019);
    msg.setSource(39552U);
    msg.setSourceEntity(200U);
    msg.setDestination(18025U);
    msg.setDestinationEntity(28U);
    msg.itow = 554000506U;
    msg.lat = 0.521424933751;
    msg.lon = 0.360145981319;
    msg.height_ell = 0.367329770133;
    msg.height_sea = 0.0783163930704;
    msg.hacc = 0.51629906491;
    msg.vacc = 0.193919771162;
    msg.vel_n = 0.00646115395435;
    msg.vel_e = 0.108383865035;
    msg.vel_d = 0.626507592375;
    msg.speed = 0.734260768129;
    msg.gspeed = 0.569482215331;
    msg.heading = 0.214171180332;
    msg.sacc = 0.868189107362;
    msg.cacc = 0.880107908612;

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
    msg.setTimeStamp(0.506638752271);
    msg.setSource(15806U);
    msg.setSourceEntity(92U);
    msg.setDestination(5399U);
    msg.setDestinationEntity(9U);
    msg.itow = 3712792803U;
    msg.lat = 0.76646273659;
    msg.lon = 0.704942424325;
    msg.height_ell = 0.187480945733;
    msg.height_sea = 0.931477630543;
    msg.hacc = 0.547831790647;
    msg.vacc = 0.0756996222818;
    msg.vel_n = 0.249089990506;
    msg.vel_e = 0.797450001366;
    msg.vel_d = 0.761440637686;
    msg.speed = 0.305884009299;
    msg.gspeed = 0.154268943679;
    msg.heading = 0.631591409591;
    msg.sacc = 0.249335511644;
    msg.cacc = 0.985448574565;

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
    msg.setTimeStamp(0.321761143744);
    msg.setSource(63209U);
    msg.setSourceEntity(254U);
    msg.setDestination(6008U);
    msg.setDestinationEntity(149U);
    msg.id = 31U;
    msg.value = 0.612488822647;

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
    msg.setTimeStamp(0.115361932045);
    msg.setSource(64716U);
    msg.setSourceEntity(42U);
    msg.setDestination(45567U);
    msg.setDestinationEntity(143U);
    msg.id = 73U;
    msg.value = 0.604585500512;

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
    msg.setTimeStamp(0.583802238327);
    msg.setSource(60531U);
    msg.setSourceEntity(216U);
    msg.setDestination(3704U);
    msg.setDestinationEntity(241U);
    msg.id = 203U;
    msg.value = 0.394018619741;

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
    msg.setTimeStamp(0.397743528388);
    msg.setSource(1589U);
    msg.setSourceEntity(234U);
    msg.setDestination(42048U);
    msg.setDestinationEntity(80U);
    msg.x = 0.422385571082;
    msg.y = 0.573220834038;
    msg.z = 0.378914037405;
    msg.phi = 0.898313750217;
    msg.theta = 0.628103948647;
    msg.psi = 0.522528296898;

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
    msg.setTimeStamp(0.0639574588493);
    msg.setSource(20767U);
    msg.setSourceEntity(58U);
    msg.setDestination(64551U);
    msg.setDestinationEntity(32U);
    msg.x = 0.0990272730822;
    msg.y = 0.992045346401;
    msg.z = 0.55142394172;
    msg.phi = 0.362580217606;
    msg.theta = 0.30913861154;
    msg.psi = 0.321474165864;

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
    msg.setTimeStamp(0.0561454266856);
    msg.setSource(31847U);
    msg.setSourceEntity(63U);
    msg.setDestination(22455U);
    msg.setDestinationEntity(117U);
    msg.x = 0.275075628859;
    msg.y = 0.0244862723677;
    msg.z = 0.743904467387;
    msg.phi = 0.469773583208;
    msg.theta = 0.0143589602182;
    msg.psi = 0.284831592879;

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
    msg.setTimeStamp(0.682905811215);
    msg.setSource(1259U);
    msg.setSourceEntity(243U);
    msg.setDestination(48895U);
    msg.setDestinationEntity(0U);
    msg.beam_width = 0.66005116917;
    msg.beam_height = 0.523634001381;

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
    msg.setTimeStamp(0.43207241233);
    msg.setSource(20989U);
    msg.setSourceEntity(7U);
    msg.setDestination(60136U);
    msg.setDestinationEntity(191U);
    msg.beam_width = 0.55435500582;
    msg.beam_height = 0.501195705737;

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
    msg.setTimeStamp(0.0940029634146);
    msg.setSource(37274U);
    msg.setSourceEntity(181U);
    msg.setDestination(23702U);
    msg.setDestinationEntity(197U);
    msg.beam_width = 0.139872657697;
    msg.beam_height = 0.54293513486;

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
    msg.setTimeStamp(0.889209123136);
    msg.setSource(29074U);
    msg.setSourceEntity(196U);
    msg.setDestination(43804U);
    msg.setDestinationEntity(70U);
    msg.sane = 222U;

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
    msg.setTimeStamp(0.375272172973);
    msg.setSource(29925U);
    msg.setSourceEntity(234U);
    msg.setDestination(52999U);
    msg.setDestinationEntity(95U);
    msg.sane = 108U;

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
    msg.setTimeStamp(0.799008226613);
    msg.setSource(35994U);
    msg.setSourceEntity(24U);
    msg.setDestination(7061U);
    msg.setDestinationEntity(156U);
    msg.sane = 93U;

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
    msg.setTimeStamp(0.904579621494);
    msg.setSource(19299U);
    msg.setSourceEntity(165U);
    msg.setDestination(58015U);
    msg.setDestinationEntity(220U);
    msg.value = 0.327169300951;

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
    msg.setTimeStamp(0.133428449203);
    msg.setSource(19742U);
    msg.setSourceEntity(176U);
    msg.setDestination(27994U);
    msg.setDestinationEntity(200U);
    msg.value = 0.365929153822;

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
    msg.setTimeStamp(0.108373158295);
    msg.setSource(35494U);
    msg.setSourceEntity(89U);
    msg.setDestination(26187U);
    msg.setDestinationEntity(176U);
    msg.value = 0.923890006029;

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
    msg.setTimeStamp(0.464721236211);
    msg.setSource(374U);
    msg.setSourceEntity(113U);
    msg.setDestination(14076U);
    msg.setDestinationEntity(72U);
    msg.value = 0.542120888576;

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
    msg.setTimeStamp(0.812615629972);
    msg.setSource(35307U);
    msg.setSourceEntity(126U);
    msg.setDestination(8975U);
    msg.setDestinationEntity(136U);
    msg.value = 0.680279499674;

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
    msg.setTimeStamp(0.653940260299);
    msg.setSource(52101U);
    msg.setSourceEntity(163U);
    msg.setDestination(4275U);
    msg.setDestinationEntity(167U);
    msg.value = 0.523916090536;

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
    msg.setTimeStamp(0.379072292186);
    msg.setSource(9592U);
    msg.setSourceEntity(57U);
    msg.setDestination(9743U);
    msg.setDestinationEntity(126U);
    msg.value = 0.605329928104;

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
    msg.setTimeStamp(0.697277687986);
    msg.setSource(28818U);
    msg.setSourceEntity(26U);
    msg.setDestination(19588U);
    msg.setDestinationEntity(138U);
    msg.value = 0.644884813676;

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
    msg.setTimeStamp(0.0234807552527);
    msg.setSource(54596U);
    msg.setSourceEntity(137U);
    msg.setDestination(35814U);
    msg.setDestinationEntity(26U);
    msg.value = 0.101812468686;

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
    msg.setTimeStamp(0.388278148368);
    msg.setSource(23816U);
    msg.setSourceEntity(196U);
    msg.setDestination(54108U);
    msg.setDestinationEntity(167U);
    msg.value = 0.676088179386;

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
    msg.setTimeStamp(0.541725650495);
    msg.setSource(55694U);
    msg.setSourceEntity(136U);
    msg.setDestination(65396U);
    msg.setDestinationEntity(123U);
    msg.value = 0.0826724202081;

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
    msg.setTimeStamp(0.93409945155);
    msg.setSource(19163U);
    msg.setSourceEntity(57U);
    msg.setDestination(31743U);
    msg.setDestinationEntity(4U);
    msg.value = 0.235614000181;

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
    msg.setTimeStamp(0.981167049937);
    msg.setSource(46408U);
    msg.setSourceEntity(163U);
    msg.setDestination(31008U);
    msg.setDestinationEntity(16U);
    msg.value = 0.168523130531;

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
    msg.setTimeStamp(0.403298340268);
    msg.setSource(50693U);
    msg.setSourceEntity(184U);
    msg.setDestination(57522U);
    msg.setDestinationEntity(239U);
    msg.value = 0.342604562801;

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
    msg.setTimeStamp(0.00928902616437);
    msg.setSource(59688U);
    msg.setSourceEntity(78U);
    msg.setDestination(21121U);
    msg.setDestinationEntity(124U);
    msg.value = 0.17835352582;

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
    msg.setTimeStamp(0.235431742868);
    msg.setSource(34813U);
    msg.setSourceEntity(239U);
    msg.setDestination(7216U);
    msg.setDestinationEntity(221U);
    msg.value = 0.0920374427821;

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
    msg.setTimeStamp(0.389977915109);
    msg.setSource(52246U);
    msg.setSourceEntity(143U);
    msg.setDestination(1720U);
    msg.setDestinationEntity(84U);
    msg.value = 0.723047814057;

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
    msg.setTimeStamp(0.307408262658);
    msg.setSource(14489U);
    msg.setSourceEntity(137U);
    msg.setDestination(54048U);
    msg.setDestinationEntity(55U);
    msg.value = 0.127616041335;

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
    msg.setTimeStamp(0.204602679865);
    msg.setSource(10982U);
    msg.setSourceEntity(233U);
    msg.setDestination(859U);
    msg.setDestinationEntity(12U);
    msg.value = 0.879177620031;

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
    msg.setTimeStamp(0.263929721713);
    msg.setSource(56940U);
    msg.setSourceEntity(153U);
    msg.setDestination(45444U);
    msg.setDestinationEntity(25U);
    msg.value = 0.629597574455;

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
    msg.setTimeStamp(0.921955894293);
    msg.setSource(37877U);
    msg.setSourceEntity(229U);
    msg.setDestination(51700U);
    msg.setDestinationEntity(72U);
    msg.value = 0.831279178505;

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
    msg.setTimeStamp(0.75977864297);
    msg.setSource(47125U);
    msg.setSourceEntity(199U);
    msg.setDestination(796U);
    msg.setDestinationEntity(183U);
    msg.value = 0.184415683853;

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
    msg.setTimeStamp(0.770488145039);
    msg.setSource(1326U);
    msg.setSourceEntity(204U);
    msg.setDestination(44287U);
    msg.setDestinationEntity(225U);
    msg.value = 0.274182059269;

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
    msg.setTimeStamp(0.0786650640054);
    msg.setSource(1027U);
    msg.setSourceEntity(197U);
    msg.setDestination(2483U);
    msg.setDestinationEntity(41U);
    msg.value = 0.864125070423;

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
    msg.setTimeStamp(0.705933707795);
    msg.setSource(14250U);
    msg.setSourceEntity(79U);
    msg.setDestination(9540U);
    msg.setDestinationEntity(160U);
    msg.validity = 36154U;
    msg.type = 122U;
    msg.tow = 2350938938U;
    msg.base_lat = 0.643865728663;
    msg.base_lon = 0.720243423963;
    msg.base_height = 0.13204178787;
    msg.n = 0.423051733887;
    msg.e = 0.346716982298;
    msg.d = 0.0796005970788;
    msg.v_n = 0.618930250521;
    msg.v_e = 0.59582700831;
    msg.v_d = 0.306810088449;
    msg.satellites = 183U;
    msg.iar_hyp = 11627U;
    msg.iar_ratio = 0.53775360803;

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
    msg.setTimeStamp(0.861354242828);
    msg.setSource(13513U);
    msg.setSourceEntity(35U);
    msg.setDestination(52358U);
    msg.setDestinationEntity(246U);
    msg.validity = 44907U;
    msg.type = 221U;
    msg.tow = 1805233663U;
    msg.base_lat = 0.638771918134;
    msg.base_lon = 0.766914253493;
    msg.base_height = 0.458731733399;
    msg.n = 0.677485617114;
    msg.e = 0.929085812837;
    msg.d = 0.800442319677;
    msg.v_n = 0.755472452096;
    msg.v_e = 0.837504794738;
    msg.v_d = 0.878932110488;
    msg.satellites = 190U;
    msg.iar_hyp = 27129U;
    msg.iar_ratio = 0.599792261002;

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
    msg.setTimeStamp(0.677200353669);
    msg.setSource(22477U);
    msg.setSourceEntity(234U);
    msg.setDestination(35678U);
    msg.setDestinationEntity(19U);
    msg.validity = 12194U;
    msg.type = 90U;
    msg.tow = 3215396110U;
    msg.base_lat = 0.66456291445;
    msg.base_lon = 0.267197335649;
    msg.base_height = 0.950750971166;
    msg.n = 0.786406445777;
    msg.e = 0.177574989234;
    msg.d = 0.173466619306;
    msg.v_n = 0.0376668249041;
    msg.v_e = 0.121272771075;
    msg.v_d = 0.837456460176;
    msg.satellites = 242U;
    msg.iar_hyp = 38786U;
    msg.iar_ratio = 0.0941741425459;

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
    msg.setTimeStamp(0.876730121976);
    msg.setSource(65471U);
    msg.setSourceEntity(84U);
    msg.setDestination(43643U);
    msg.setDestinationEntity(236U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.22359447737;
    tmp_msg_0.lon = 0.819180744016;
    tmp_msg_0.height = 0.565732684082;
    tmp_msg_0.x = 0.438887706285;
    tmp_msg_0.y = 0.214648024306;
    tmp_msg_0.z = 0.671147592663;
    tmp_msg_0.phi = 0.0184542808692;
    tmp_msg_0.theta = 0.597084536566;
    tmp_msg_0.psi = 0.445549511206;
    tmp_msg_0.u = 0.779570873703;
    tmp_msg_0.v = 0.0567293249058;
    tmp_msg_0.w = 0.254684664066;
    tmp_msg_0.vx = 0.207229502917;
    tmp_msg_0.vy = 0.55557320964;
    tmp_msg_0.vz = 0.731065501289;
    tmp_msg_0.p = 0.299205133653;
    tmp_msg_0.q = 0.287614179364;
    tmp_msg_0.r = 0.488165218643;
    tmp_msg_0.depth = 0.557383110284;
    tmp_msg_0.alt = 0.534953592727;
    msg.state.set(tmp_msg_0);
    msg.type = 172U;

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
    msg.setTimeStamp(0.637855444783);
    msg.setSource(14446U);
    msg.setSourceEntity(227U);
    msg.setDestination(31031U);
    msg.setDestinationEntity(201U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.114517877332;
    tmp_msg_0.lon = 0.890399583826;
    tmp_msg_0.height = 0.287554209463;
    tmp_msg_0.x = 0.618330106906;
    tmp_msg_0.y = 0.0429249502743;
    tmp_msg_0.z = 0.177980728956;
    tmp_msg_0.phi = 0.0863419298686;
    tmp_msg_0.theta = 0.496606436755;
    tmp_msg_0.psi = 0.707994320381;
    tmp_msg_0.u = 0.239341397368;
    tmp_msg_0.v = 0.549320501513;
    tmp_msg_0.w = 0.254230364722;
    tmp_msg_0.vx = 0.633997749955;
    tmp_msg_0.vy = 0.424905174256;
    tmp_msg_0.vz = 0.0374832035482;
    tmp_msg_0.p = 0.819167796694;
    tmp_msg_0.q = 0.247594283649;
    tmp_msg_0.r = 0.462395926141;
    tmp_msg_0.depth = 0.211061959506;
    tmp_msg_0.alt = 0.783079506995;
    msg.state.set(tmp_msg_0);
    msg.type = 70U;

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
    msg.setTimeStamp(0.0173329653085);
    msg.setSource(3596U);
    msg.setSourceEntity(28U);
    msg.setDestination(38811U);
    msg.setDestinationEntity(150U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.988550742238;
    tmp_msg_0.lon = 0.847822519741;
    tmp_msg_0.height = 0.0752546772108;
    tmp_msg_0.x = 0.553027302795;
    tmp_msg_0.y = 0.207212020544;
    tmp_msg_0.z = 0.484863436541;
    tmp_msg_0.phi = 0.13646801087;
    tmp_msg_0.theta = 0.969189392299;
    tmp_msg_0.psi = 0.476484091615;
    tmp_msg_0.u = 0.453836241762;
    tmp_msg_0.v = 0.0914299545778;
    tmp_msg_0.w = 0.514775227935;
    tmp_msg_0.vx = 0.879120932626;
    tmp_msg_0.vy = 0.177779738163;
    tmp_msg_0.vz = 0.717639332476;
    tmp_msg_0.p = 0.338244820338;
    tmp_msg_0.q = 0.257631400179;
    tmp_msg_0.r = 0.606124544437;
    tmp_msg_0.depth = 0.395332131564;
    tmp_msg_0.alt = 0.884237596434;
    msg.state.set(tmp_msg_0);
    msg.type = 22U;

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
    msg.setTimeStamp(0.951252687864);
    msg.setSource(517U);
    msg.setSourceEntity(141U);
    msg.setDestination(3142U);
    msg.setDestinationEntity(40U);
    msg.value = 0.555171434048;

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
    msg.setTimeStamp(0.363128771348);
    msg.setSource(50951U);
    msg.setSourceEntity(64U);
    msg.setDestination(55708U);
    msg.setDestinationEntity(139U);
    msg.value = 0.856153775462;

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
    msg.setTimeStamp(0.391840493841);
    msg.setSource(3338U);
    msg.setSourceEntity(54U);
    msg.setDestination(57326U);
    msg.setDestinationEntity(121U);
    msg.value = 0.256659711782;

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
    msg.setTimeStamp(0.0662321120313);
    msg.setSource(63860U);
    msg.setSourceEntity(104U);
    msg.setDestination(3044U);
    msg.setDestinationEntity(172U);
    msg.value = 0.552072198836;

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
    msg.setTimeStamp(0.613371754991);
    msg.setSource(1867U);
    msg.setSourceEntity(118U);
    msg.setDestination(53632U);
    msg.setDestinationEntity(38U);
    msg.value = 0.11132492762;

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
    msg.setTimeStamp(0.508685251025);
    msg.setSource(12217U);
    msg.setSourceEntity(200U);
    msg.setDestination(22780U);
    msg.setDestinationEntity(95U);
    msg.value = 0.0509695019859;

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
    msg.setTimeStamp(0.116355355504);
    msg.setSource(48U);
    msg.setSourceEntity(44U);
    msg.setDestination(40567U);
    msg.setDestinationEntity(240U);
    msg.value = 0.686437203096;

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
    msg.setTimeStamp(0.904029450826);
    msg.setSource(2959U);
    msg.setSourceEntity(30U);
    msg.setDestination(61049U);
    msg.setDestinationEntity(126U);
    msg.value = 0.564896759739;

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
    msg.setTimeStamp(0.740088378062);
    msg.setSource(34227U);
    msg.setSourceEntity(112U);
    msg.setDestination(54036U);
    msg.setDestinationEntity(250U);
    msg.value = 0.995475825557;

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
    msg.setTimeStamp(0.240601362758);
    msg.setSource(52395U);
    msg.setSourceEntity(132U);
    msg.setDestination(25338U);
    msg.setDestinationEntity(11U);
    msg.value = 0.496309894234;

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
    msg.setTimeStamp(0.806032272656);
    msg.setSource(20671U);
    msg.setSourceEntity(253U);
    msg.setDestination(6366U);
    msg.setDestinationEntity(165U);
    msg.value = 0.491668524011;

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
    msg.setTimeStamp(0.598046383366);
    msg.setSource(9579U);
    msg.setSourceEntity(198U);
    msg.setDestination(48508U);
    msg.setDestinationEntity(93U);
    msg.value = 0.152834128962;

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
    msg.setTimeStamp(0.909857624515);
    msg.setSource(35717U);
    msg.setSourceEntity(138U);
    msg.setDestination(7400U);
    msg.setDestinationEntity(233U);
    msg.value = 0.472459483225;

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
    msg.setTimeStamp(0.642590059384);
    msg.setSource(45232U);
    msg.setSourceEntity(150U);
    msg.setDestination(43775U);
    msg.setDestinationEntity(137U);
    msg.value = 0.396336493761;

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
    msg.setTimeStamp(0.75473741266);
    msg.setSource(2724U);
    msg.setSourceEntity(115U);
    msg.setDestination(51686U);
    msg.setDestinationEntity(83U);
    msg.value = 0.102514562828;

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
    msg.setTimeStamp(0.10291348607);
    msg.setSource(2833U);
    msg.setSourceEntity(184U);
    msg.setDestination(5844U);
    msg.setDestinationEntity(187U);
    msg.id = 117U;
    msg.zoom = 137U;
    msg.action = 90U;

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
    msg.setTimeStamp(0.53376346033);
    msg.setSource(21604U);
    msg.setSourceEntity(158U);
    msg.setDestination(30095U);
    msg.setDestinationEntity(25U);
    msg.id = 159U;
    msg.zoom = 15U;
    msg.action = 71U;

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
    msg.setTimeStamp(0.155721484704);
    msg.setSource(31589U);
    msg.setSourceEntity(1U);
    msg.setDestination(15434U);
    msg.setDestinationEntity(85U);
    msg.id = 124U;
    msg.zoom = 146U;
    msg.action = 90U;

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
    msg.setTimeStamp(0.64811054523);
    msg.setSource(47527U);
    msg.setSourceEntity(247U);
    msg.setDestination(20020U);
    msg.setDestinationEntity(0U);
    msg.id = 28U;
    msg.value = 0.0578975652603;

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
    msg.setTimeStamp(0.4279164552);
    msg.setSource(38269U);
    msg.setSourceEntity(65U);
    msg.setDestination(55081U);
    msg.setDestinationEntity(185U);
    msg.id = 208U;
    msg.value = 0.804110288298;

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
    msg.setTimeStamp(0.506476797351);
    msg.setSource(41571U);
    msg.setSourceEntity(96U);
    msg.setDestination(26504U);
    msg.setDestinationEntity(41U);
    msg.id = 8U;
    msg.value = 0.978618935694;

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
    msg.setTimeStamp(0.965179018228);
    msg.setSource(1684U);
    msg.setSourceEntity(124U);
    msg.setDestination(870U);
    msg.setDestinationEntity(232U);
    msg.id = 42U;
    msg.value = 0.684587619719;

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
    msg.setTimeStamp(0.530208324297);
    msg.setSource(32617U);
    msg.setSourceEntity(244U);
    msg.setDestination(20499U);
    msg.setDestinationEntity(250U);
    msg.id = 55U;
    msg.value = 0.286673393534;

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
    msg.setTimeStamp(0.280669700823);
    msg.setSource(32721U);
    msg.setSourceEntity(3U);
    msg.setDestination(37289U);
    msg.setDestinationEntity(82U);
    msg.id = 134U;
    msg.value = 0.632002666397;

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
    msg.setTimeStamp(0.661045457612);
    msg.setSource(53492U);
    msg.setSourceEntity(192U);
    msg.setDestination(43270U);
    msg.setDestinationEntity(2U);
    msg.id = 15U;
    msg.angle = 0.566069347898;

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
    msg.setTimeStamp(0.417474197156);
    msg.setSource(44604U);
    msg.setSourceEntity(147U);
    msg.setDestination(268U);
    msg.setDestinationEntity(117U);
    msg.id = 21U;
    msg.angle = 0.516235059296;

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
    msg.setTimeStamp(0.214923008316);
    msg.setSource(46762U);
    msg.setSourceEntity(120U);
    msg.setDestination(6729U);
    msg.setDestinationEntity(235U);
    msg.id = 217U;
    msg.angle = 0.406760490572;

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
    msg.setTimeStamp(0.944794670004);
    msg.setSource(59524U);
    msg.setSourceEntity(251U);
    msg.setDestination(26189U);
    msg.setDestinationEntity(138U);
    msg.op = 188U;
    msg.actions.assign("OPJDSOWVRIMGHMVIPWBBCBUNKTMSJICYLUZIDWKLFRHATNZOVFFCZIVCLSBXULWMNEUZTWAJPZTILTAMXZSYKKHGPDSVUZFGFSODAKRPGBLVBGQHJGLVBNTZMKCCEJXUZWRVNBAKNYAZJIROFIRXFHELDUOQQBUKQVSOBOELYHYJDCPJQXTYFFMTXWXNEAWPWJSGAEXCCCGHVQNRPDNYKYDLGOMMXNEIHYEQWGXDSYJRQOHFIQKERSUQR");

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
    msg.setTimeStamp(0.936793964479);
    msg.setSource(2354U);
    msg.setSourceEntity(133U);
    msg.setDestination(63705U);
    msg.setDestinationEntity(161U);
    msg.op = 212U;
    msg.actions.assign("IHPWPENLUALYAIVCXMREKI");

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
    msg.setTimeStamp(0.558298641457);
    msg.setSource(18178U);
    msg.setSourceEntity(105U);
    msg.setDestination(11993U);
    msg.setDestinationEntity(58U);
    msg.op = 55U;
    msg.actions.assign("SPOSKEQKWQULHIFOEHCFRWTSOSILZBPKGYXDRBLXETCTEIBPLVLGHHPHZZZHCQWLURKLRWNNBNICJFYIRAUZYXGAWKVUGODCFBYAMN");

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
    msg.setTimeStamp(0.405281834208);
    msg.setSource(40850U);
    msg.setSourceEntity(160U);
    msg.setDestination(24954U);
    msg.setDestinationEntity(119U);
    msg.actions.assign("PDEOVMVQCULRBLJRVHPTQBAEZGMDLPDQRSSYEGRQDVSYESUXACOIRHNUADOJFBNMWQYIQFGSGHJTUIGKRXPTMUGFDXVMNMUPZHAVXZUKRPXWLPNNSOTWMJBCPBMIHXVJDWGCJCIAWBTIREYTHZFPBYKVKIEXBOWZKMYAU");

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
    msg.setTimeStamp(0.74179932565);
    msg.setSource(45651U);
    msg.setSourceEntity(136U);
    msg.setDestination(46961U);
    msg.setDestinationEntity(111U);
    msg.actions.assign("WSPCGCDQEZOTBKPKAYBENGYBLXMSVTMDFXJDUDZPYUKRLEVUGGNHINTFHSCZEFZZJNNHWBADAPQIIGPJUPRYLHPRWNVWCTTNLHGZFANTNUWCSHFMDFRXWERYSEMELJUXOOOOAODMKIT");

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
    msg.setTimeStamp(0.121272691628);
    msg.setSource(40451U);
    msg.setSourceEntity(136U);
    msg.setDestination(9831U);
    msg.setDestinationEntity(170U);
    msg.actions.assign("YILJEBVLTIYOWVMWUVBOEIVSUENOANCCVPYDXGLEWCYZTVEQPJGVWPRNAYTCBRAXTUKSSMMTUASMSDZFKHSGHREDVGNPNUETZGDKLCJBHLKJXFXOITUFIAOQHNSGVSVOZYZFCZHLIHXWMGEHLQRWYDDBDP");

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
    msg.setTimeStamp(0.227127723402);
    msg.setSource(54300U);
    msg.setSourceEntity(163U);
    msg.setDestination(59923U);
    msg.setDestinationEntity(116U);
    msg.button = 234U;
    msg.value = 85U;

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
    msg.setTimeStamp(0.463654111985);
    msg.setSource(37767U);
    msg.setSourceEntity(81U);
    msg.setDestination(48618U);
    msg.setDestinationEntity(3U);
    msg.button = 37U;
    msg.value = 223U;

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
    msg.setTimeStamp(0.116871148491);
    msg.setSource(33071U);
    msg.setSourceEntity(18U);
    msg.setDestination(20425U);
    msg.setDestinationEntity(10U);
    msg.button = 135U;
    msg.value = 99U;

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
    msg.setTimeStamp(0.997274148683);
    msg.setSource(40885U);
    msg.setSourceEntity(84U);
    msg.setDestination(56573U);
    msg.setDestinationEntity(176U);
    msg.op = 14U;
    msg.text.assign("IWGQDAKQBOIJAJJYLSQTSCDLFVHMOHREFDVVFCKMPXLVEOPFVZWWEDDFQFYNYOMVJPHDKTLZOXGLHMNTEZGPBSCRRXNAJTCAIKYGOGUUHCMLEWMPIEMWRWWLMJBZBYEHYTXSQTLKPNHBG");

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
    msg.setTimeStamp(0.998541199531);
    msg.setSource(5205U);
    msg.setSourceEntity(88U);
    msg.setDestination(55059U);
    msg.setDestinationEntity(108U);
    msg.op = 87U;
    msg.text.assign("AMWEOLRJXGYLUTGZFOTEUQXSLNUPNHQPLLBMDECNHKLFZXGFAAGCWJBSBXGWSMDVVTJCNZCZQUQWBPTMPQZGFATRKIDKPPGIFVWBYJJHKBWEYZEKRGOREURFAYYDOZWSCTOLKMINUFISSWQXIBMXMNGAJRZPFVVFKRJYKDESSCOVQONDVYACCUAJOQTENBZKXIREWDLMRTGHPIV");

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
    msg.setTimeStamp(0.471724311622);
    msg.setSource(2781U);
    msg.setSourceEntity(149U);
    msg.setDestination(7823U);
    msg.setDestinationEntity(194U);
    msg.op = 12U;
    msg.text.assign("CRYXUAEPFHAVXGESTFZOKXFMWAAUFKUWHCBGCIDDZKFZTNMQNJMOJGQKHYGCAXPLPHOVBEDVPCQSPRBTXEYKHWOVIIIBLZLIMGWVOFYMLCLUWHAKVGIITLCSYZNWTESAZHPIXJRJMNRQEERFUUNQYGSTBHAMMM");

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
    msg.setTimeStamp(0.368966588721);
    msg.setSource(8540U);
    msg.setSourceEntity(20U);
    msg.setDestination(40499U);
    msg.setDestinationEntity(129U);
    msg.op = 177U;
    msg.time_remain = 0.132258643128;
    msg.sched_time = 0.941412245201;

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
    msg.setTimeStamp(0.262794587536);
    msg.setSource(34258U);
    msg.setSourceEntity(238U);
    msg.setDestination(27027U);
    msg.setDestinationEntity(101U);
    msg.op = 183U;
    msg.time_remain = 0.775390919146;
    msg.sched_time = 0.843525009761;

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
    msg.setTimeStamp(0.954080304045);
    msg.setSource(47035U);
    msg.setSourceEntity(134U);
    msg.setDestination(29259U);
    msg.setDestinationEntity(205U);
    msg.op = 197U;
    msg.time_remain = 0.0320778846781;
    msg.sched_time = 0.0595966428297;

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
    msg.setTimeStamp(0.547246971237);
    msg.setSource(53232U);
    msg.setSourceEntity(25U);
    msg.setDestination(37145U);
    msg.setDestinationEntity(21U);
    msg.name.assign("HJLGNTEVIWECHVKJCDBVAAIWUKBJLHITZZWERNYNSOXATLTNXNIYQPBZBHFPXMKGCOZRTLOSZFLAOKBRDJAQXXDBFDCLKCBGXVVUOWFXPVVRQIASPYSKFCHMBMFGCIFTRDUBUNRFMWQYYUPWVWDQCSHJUSNMRUTNPDXGQNMSFGHIOCM");
    msg.op = 159U;
    msg.sched_time = 0.545942019705;

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
    msg.setTimeStamp(0.0721632606076);
    msg.setSource(58547U);
    msg.setSourceEntity(115U);
    msg.setDestination(54600U);
    msg.setDestinationEntity(81U);
    msg.name.assign("AZNWOOQAQXXGSLVSJGQTZVYKPLWFYFTRXZABTMMBMQQIOTJXMZXYXLKMSDRBLOEFUORAOCEUAGACEMIPYTOIMXDMVJZJIHHZFEDDAWDSAHITZFFEZCSGDHNRDGIWXHWNJVLRAYLWIPCCMVJOINEHPNHGKSRKNHIAFCNBYLYENJTPTFUWMNIBPWVTOFGVXY");
    msg.op = 172U;
    msg.sched_time = 0.419249655135;

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
    msg.setTimeStamp(0.0759770722973);
    msg.setSource(61825U);
    msg.setSourceEntity(162U);
    msg.setDestination(63917U);
    msg.setDestinationEntity(105U);
    msg.name.assign("OCQWERONLHIGEGXLMPQKRCOLUKBFVGGYGNUNOMYNGXILMJVLXGBAVJEBMEFWAZAWNDYCXZIIOEICMSCSDQPLCLPKHLJWIPNGNRPTFGVQUDHEQSQCDREKIFZXUYJVHVBBXWFHIUDBJCBQUWBKAMDZBAQPJUOTRHZSWGVANMAZRROXSQNPTOHTIZQJTNFUHYTOYISFCWWMKMUFLTPTVLTJYXRHJAXKHAUDJDEZDXOYCPF");
    msg.op = 250U;
    msg.sched_time = 0.751597497289;

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
    msg.setTimeStamp(0.51512682399);
    msg.setSource(19388U);
    msg.setSourceEntity(241U);
    msg.setDestination(18322U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.971112685811);
    msg.setSource(48116U);
    msg.setSourceEntity(171U);
    msg.setDestination(63187U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.132698865116);
    msg.setSource(56366U);
    msg.setSourceEntity(249U);
    msg.setDestination(56915U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.220686762079);
    msg.setSource(54584U);
    msg.setSourceEntity(183U);
    msg.setDestination(13507U);
    msg.setDestinationEntity(193U);
    msg.name.assign("HCVFSFNZKBLUZTWXAJNBOWEFVFZDQMPBHCYYQCUOUSMRWNTACGQYBNPYUDEKDVZPXEPASSKULMIGBXRZHNBGDBCCLITTCHXTLXQMNQVWZRASOCUEXTRDMGDQOUPOXTFGSVAKPJFFZEHHVVIGIEUYKLMFKWFEBPSGMJLOHRTHQJSTIYDDLJHYNIBYGNLRJ");
    msg.state = 172U;

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
    msg.setTimeStamp(0.295828257991);
    msg.setSource(41986U);
    msg.setSourceEntity(69U);
    msg.setDestination(60087U);
    msg.setDestinationEntity(68U);
    msg.name.assign("MLVWBQIVLSRBPDCBJXCEWBIZKGWKYSCLQMMOAWVCOKOCHNTURRGDGNKOUEWXTWXCKNJRKMPOMVTYSXBHUQBJYJQJSQGZUOLAJEDIFNURDWAQWGTKEIPKAUDHRSLEVRFINLACPCHMJZFEXEOTVMNHHRUOQF");
    msg.state = 247U;

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
    msg.setTimeStamp(0.162691808405);
    msg.setSource(3351U);
    msg.setSourceEntity(168U);
    msg.setDestination(16640U);
    msg.setDestinationEntity(152U);
    msg.name.assign("OBMRDWGDVLDVRSAFGLVBOZPFPZOYWMMSHBRWOSYDELTCJJXBZUQLCUUETHUJQDJCHLVDYSOWQNWQHTLIMNVHJWPHZNOTHZZEKGTRZHLMGCBQUUYPCQYMPXAWECSJBEYZKRSRQUKUZKKVCXCMIRRECXKTAMKTSJXQBFHPABNIVOWCFXFDOFOFWPIIUNNINNAPQISMGQITELHWGPEIXDRJYJAKLFONVSKETDFABYANVEAUPXGKJTSRGYFXIVB");
    msg.state = 74U;

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
    msg.setTimeStamp(0.1948382024);
    msg.setSource(33806U);
    msg.setSourceEntity(243U);
    msg.setDestination(27551U);
    msg.setDestinationEntity(144U);
    msg.name.assign("JZXXWONDLAQTTAGPDLJIHPUWKYCWVPRGEODAIB");
    msg.value = 154U;

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
    msg.setTimeStamp(0.710913225144);
    msg.setSource(17718U);
    msg.setSourceEntity(14U);
    msg.setDestination(31984U);
    msg.setDestinationEntity(95U);
    msg.name.assign("KSUJOMUHLDKCTWBBJNMNUSJBPOVNEVOGMBAEDNWGIEVACRMNDMJLGFXXQTTPTHSIKUDPJRHRQRESIBUJDUXLYAQPCYKCCLPORZLWFPIAAVPPAYKQXWCJGITVUFHEBDLWBITVMJCZDFWROCLCZTFWQIKKSNOYHPDNZDEBXOWFZGKZYBRB");
    msg.value = 193U;

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
    msg.setTimeStamp(0.547596182139);
    msg.setSource(52778U);
    msg.setSourceEntity(66U);
    msg.setDestination(34097U);
    msg.setDestinationEntity(184U);
    msg.name.assign("MSGTYOXUOCUJXBKDEKALHCHQITTHIPUMNXVXMIFSAOXWKNAYPGVGNCZECNGCYQTOWCXTWTAJVNZWZFXLQYP");
    msg.value = 218U;

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
    msg.setTimeStamp(0.595296781736);
    msg.setSource(1283U);
    msg.setSourceEntity(143U);
    msg.setDestination(44123U);
    msg.setDestinationEntity(223U);
    msg.name.assign("MOEIABYZWGVDRNGDYROQBLVBCPXFGDBTZBMPVASZWWEHITSWBCRJBUOOLQRXZIHHJFPVGYSDSZTNCGY");

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
    msg.setTimeStamp(0.700448964983);
    msg.setSource(30934U);
    msg.setSourceEntity(234U);
    msg.setDestination(22475U);
    msg.setDestinationEntity(203U);
    msg.name.assign("LELGXYZJXDJWKBYGITUAHDOJKLURROXXKMJWESKEANRSRCKOKFBTARNAYDQSEJANLBCQQUWVGMCCNQYOLIZYHQGFOCIGSSBMMZMPKRIIXGFZSTUHPASWBNPPZUKMITXFLWEVYLUTAXUTHKWNBVWGTHYJYZOPNPNWCFVDPFJHTKDFROWIVDMN");

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
    msg.setTimeStamp(0.0786647527053);
    msg.setSource(18438U);
    msg.setSourceEntity(242U);
    msg.setDestination(21305U);
    msg.setDestinationEntity(169U);
    msg.name.assign("XXSDGHRUVTLSAWDGYIBYHBBPFGANZIGNEFMNVMJZAOUFLXWJMVKHUVHLFWYHLXUBJILPTIRIEBEWGUUEKBHROMCKNPJBRKUQXWQPEZMJNDDGWTGVVNJPPSAEAWBNZHOCWXQXSAFRCQDJXULEPYCCTQCRVIYNIKRTYPFQFMYXDZICYTOETOYKR");

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
    msg.setTimeStamp(0.793620589934);
    msg.setSource(62316U);
    msg.setSourceEntity(187U);
    msg.setDestination(45028U);
    msg.setDestinationEntity(37U);
    msg.name.assign("EAPUMRJEDMOLJDXHPMBUILTHFJIXGQYZNUMRQMVFVFAKOTRURWCZSSGBGRZXPGJKTDISYQHAAVQVEUKTPBLSWMCFKPQYEAWUXJJSIEKICOXJIKSFJTHNOQZGVCFNCNHVEXGLRIYLZVXNCLMIODIALOLDHOVGYTGERVHBUAP");
    msg.value = 65U;

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
    msg.setTimeStamp(0.589511064489);
    msg.setSource(51848U);
    msg.setSourceEntity(165U);
    msg.setDestination(45000U);
    msg.setDestinationEntity(65U);
    msg.name.assign("WFVCIORXLPQBCUJIOPRNDRASENGHUAWFGEFNPYVETSLSTILKZPCOGXCOPIINROYVNPVNTGVMZYJGBRVGSJFNIXOLQBABQZLLKBRWMJSXAKDRNCTXIAJHIEEBBJQOQLESAPMKUAFYQDRMUFPMWLHDMTJQUHSDOFEHSJXOGDVGNCETXCDCWMAZ");
    msg.value = 167U;

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
    msg.setTimeStamp(0.286187185556);
    msg.setSource(27468U);
    msg.setSourceEntity(254U);
    msg.setDestination(18061U);
    msg.setDestinationEntity(149U);
    msg.name.assign("FYKMHHXKCQUDWJKDGMAZCRWHBBFVNMWTGYGTFZBMETWCOPZIHNKQZAIONCHMWXXALOLQUNIMQRXOXHCLYADTJDRDTMUUQFVGEJDNWJTRJGWEBRDYNANHBULFZKQYSIPQACBFAVBNZPLHM");
    msg.value = 106U;

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
    msg.setTimeStamp(0.449349619507);
    msg.setSource(35494U);
    msg.setSourceEntity(69U);
    msg.setDestination(2475U);
    msg.setDestinationEntity(6U);
    msg.id = 200U;
    msg.period = 3448151094U;
    msg.duty_cycle = 2126158393U;

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
    msg.setTimeStamp(0.992910870481);
    msg.setSource(18171U);
    msg.setSourceEntity(27U);
    msg.setDestination(11457U);
    msg.setDestinationEntity(210U);
    msg.id = 231U;
    msg.period = 261671840U;
    msg.duty_cycle = 4271550455U;

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
    msg.setTimeStamp(0.522118722039);
    msg.setSource(18722U);
    msg.setSourceEntity(8U);
    msg.setDestination(449U);
    msg.setDestinationEntity(162U);
    msg.id = 199U;
    msg.period = 616559444U;
    msg.duty_cycle = 1642094656U;

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
    msg.setTimeStamp(0.562504649575);
    msg.setSource(47017U);
    msg.setSourceEntity(188U);
    msg.setDestination(64207U);
    msg.setDestinationEntity(28U);
    msg.id = 214U;
    msg.period = 1129081071U;
    msg.duty_cycle = 243492704U;

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
    msg.setTimeStamp(0.434400129913);
    msg.setSource(24522U);
    msg.setSourceEntity(105U);
    msg.setDestination(58273U);
    msg.setDestinationEntity(209U);
    msg.id = 183U;
    msg.period = 1676049848U;
    msg.duty_cycle = 2881187220U;

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
    msg.setTimeStamp(0.218470498318);
    msg.setSource(46637U);
    msg.setSourceEntity(65U);
    msg.setDestination(52578U);
    msg.setDestinationEntity(243U);
    msg.id = 169U;
    msg.period = 2550685575U;
    msg.duty_cycle = 846756513U;

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
    msg.setTimeStamp(0.991939303917);
    msg.setSource(34259U);
    msg.setSourceEntity(242U);
    msg.setDestination(7309U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.703772202657;
    msg.lon = 0.91703171398;
    msg.height = 0.252096042078;
    msg.x = 0.187101739789;
    msg.y = 0.00855520437701;
    msg.z = 0.473556545133;
    msg.phi = 0.383918241367;
    msg.theta = 0.165328911216;
    msg.psi = 0.642038567152;
    msg.u = 0.418573229324;
    msg.v = 0.864175915679;
    msg.w = 0.287670370123;
    msg.vx = 0.168700680803;
    msg.vy = 0.0476339005409;
    msg.vz = 0.0607822771044;
    msg.p = 0.980163432149;
    msg.q = 0.960016932649;
    msg.r = 0.159432875909;
    msg.depth = 0.507172160141;
    msg.alt = 0.324243158415;

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
    msg.setTimeStamp(0.372498243825);
    msg.setSource(35546U);
    msg.setSourceEntity(116U);
    msg.setDestination(44342U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.950338980258;
    msg.lon = 0.242147661447;
    msg.height = 0.190323496289;
    msg.x = 0.1805589695;
    msg.y = 0.101652289186;
    msg.z = 0.993313804804;
    msg.phi = 0.0428328553312;
    msg.theta = 0.258374813217;
    msg.psi = 0.638638567356;
    msg.u = 0.374758144141;
    msg.v = 0.0201994478421;
    msg.w = 0.549043861359;
    msg.vx = 0.504483092731;
    msg.vy = 0.0501366124516;
    msg.vz = 0.246671295084;
    msg.p = 0.81429702834;
    msg.q = 0.70768997427;
    msg.r = 0.276712136272;
    msg.depth = 0.967932839302;
    msg.alt = 0.147129491428;

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
    msg.setTimeStamp(0.307178729078);
    msg.setSource(28494U);
    msg.setSourceEntity(93U);
    msg.setDestination(62380U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.237769437496;
    msg.lon = 0.227440665521;
    msg.height = 0.862350064289;
    msg.x = 0.910175538709;
    msg.y = 0.781512200914;
    msg.z = 0.1412514907;
    msg.phi = 0.8779727899;
    msg.theta = 0.761216630609;
    msg.psi = 0.0528987242496;
    msg.u = 0.187087137127;
    msg.v = 0.806381710098;
    msg.w = 0.27752897129;
    msg.vx = 0.901229164712;
    msg.vy = 0.425088507715;
    msg.vz = 0.530229398876;
    msg.p = 0.823995728117;
    msg.q = 0.947032455321;
    msg.r = 0.0181346352795;
    msg.depth = 0.861390239745;
    msg.alt = 0.798225793705;

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
    msg.setTimeStamp(0.28849006002);
    msg.setSource(397U);
    msg.setSourceEntity(239U);
    msg.setDestination(7450U);
    msg.setDestinationEntity(237U);
    msg.x = 0.600776407823;
    msg.y = 0.829943414156;
    msg.z = 0.931114966348;

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
    msg.setTimeStamp(0.0473807742605);
    msg.setSource(12658U);
    msg.setSourceEntity(19U);
    msg.setDestination(11205U);
    msg.setDestinationEntity(155U);
    msg.x = 0.570214086329;
    msg.y = 0.0738194666854;
    msg.z = 0.989020202374;

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
    msg.setTimeStamp(0.935823928167);
    msg.setSource(21792U);
    msg.setSourceEntity(232U);
    msg.setDestination(26925U);
    msg.setDestinationEntity(169U);
    msg.x = 0.535393559908;
    msg.y = 0.677413078369;
    msg.z = 0.211703635635;

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
    msg.setTimeStamp(0.845096346579);
    msg.setSource(65516U);
    msg.setSourceEntity(48U);
    msg.setDestination(65452U);
    msg.setDestinationEntity(46U);
    msg.value = 0.935211909855;

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
    msg.setTimeStamp(0.232908197176);
    msg.setSource(57999U);
    msg.setSourceEntity(117U);
    msg.setDestination(57195U);
    msg.setDestinationEntity(52U);
    msg.value = 0.780802166692;

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
    msg.setTimeStamp(0.556935948097);
    msg.setSource(6766U);
    msg.setSourceEntity(168U);
    msg.setDestination(5164U);
    msg.setDestinationEntity(190U);
    msg.value = 0.542577944697;

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
    msg.setTimeStamp(0.336923367647);
    msg.setSource(6285U);
    msg.setSourceEntity(220U);
    msg.setDestination(17301U);
    msg.setDestinationEntity(34U);
    msg.value = 0.692620585711;

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
    msg.setTimeStamp(0.33602012394);
    msg.setSource(63610U);
    msg.setSourceEntity(137U);
    msg.setDestination(4806U);
    msg.setDestinationEntity(53U);
    msg.value = 0.0140904181018;

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
    msg.setTimeStamp(0.146800869838);
    msg.setSource(32430U);
    msg.setSourceEntity(71U);
    msg.setDestination(59947U);
    msg.setDestinationEntity(2U);
    msg.value = 0.102729197368;

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
    msg.setTimeStamp(0.300590108441);
    msg.setSource(5396U);
    msg.setSourceEntity(235U);
    msg.setDestination(65026U);
    msg.setDestinationEntity(199U);
    msg.x = 0.715295012749;
    msg.y = 0.261184420202;
    msg.z = 0.198399282262;
    msg.phi = 0.326645927302;
    msg.theta = 0.21216124755;
    msg.psi = 0.136373500487;
    msg.p = 0.0443195331482;
    msg.q = 0.651818939504;
    msg.r = 0.993628621143;
    msg.u = 0.989369350772;
    msg.v = 0.116537212588;
    msg.w = 0.971445180337;
    msg.bias_psi = 0.612405409258;
    msg.bias_r = 0.808615305171;

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
    msg.setTimeStamp(0.668066884314);
    msg.setSource(9128U);
    msg.setSourceEntity(237U);
    msg.setDestination(22927U);
    msg.setDestinationEntity(225U);
    msg.x = 0.118254181346;
    msg.y = 0.083388286692;
    msg.z = 0.879403558811;
    msg.phi = 0.878653543004;
    msg.theta = 0.11085291782;
    msg.psi = 0.520546914451;
    msg.p = 0.924680064403;
    msg.q = 0.285440093976;
    msg.r = 0.126999869315;
    msg.u = 0.399662182794;
    msg.v = 0.445909163816;
    msg.w = 0.648873641775;
    msg.bias_psi = 0.244488575257;
    msg.bias_r = 0.387796276473;

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
    msg.setTimeStamp(0.825274110484);
    msg.setSource(44932U);
    msg.setSourceEntity(8U);
    msg.setDestination(48117U);
    msg.setDestinationEntity(231U);
    msg.x = 0.548970376088;
    msg.y = 0.520302173503;
    msg.z = 0.801556262098;
    msg.phi = 0.986759777423;
    msg.theta = 0.362671216147;
    msg.psi = 0.504908991158;
    msg.p = 0.523153106114;
    msg.q = 0.78872556012;
    msg.r = 0.484385554251;
    msg.u = 0.842936728512;
    msg.v = 0.938028717766;
    msg.w = 0.361229369371;
    msg.bias_psi = 0.818841455945;
    msg.bias_r = 0.959604572607;

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
    msg.setTimeStamp(0.40650081887);
    msg.setSource(52428U);
    msg.setSourceEntity(61U);
    msg.setDestination(16213U);
    msg.setDestinationEntity(15U);
    msg.bias_psi = 0.18875911106;
    msg.bias_r = 0.155414575529;
    msg.cog = 0.307952978332;
    msg.cyaw = 0.645314113984;
    msg.lbl_rej_level = 0.707850305689;
    msg.gps_rej_level = 0.020958983349;
    msg.custom_x = 0.40467204524;
    msg.custom_y = 0.0921961739004;
    msg.custom_z = 0.54035391816;

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
    msg.setTimeStamp(0.399277346513);
    msg.setSource(26731U);
    msg.setSourceEntity(42U);
    msg.setDestination(6772U);
    msg.setDestinationEntity(126U);
    msg.bias_psi = 0.145242623517;
    msg.bias_r = 0.422052027499;
    msg.cog = 0.0278812832084;
    msg.cyaw = 0.73429230797;
    msg.lbl_rej_level = 0.130286060496;
    msg.gps_rej_level = 0.184247077633;
    msg.custom_x = 0.36099363754;
    msg.custom_y = 0.691977385152;
    msg.custom_z = 0.558047206527;

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
    msg.setTimeStamp(0.154491802702);
    msg.setSource(49426U);
    msg.setSourceEntity(27U);
    msg.setDestination(25441U);
    msg.setDestinationEntity(146U);
    msg.bias_psi = 0.173733046745;
    msg.bias_r = 0.0342164545462;
    msg.cog = 0.742598340686;
    msg.cyaw = 0.652965079876;
    msg.lbl_rej_level = 0.698421824023;
    msg.gps_rej_level = 0.0263441647469;
    msg.custom_x = 0.153751254506;
    msg.custom_y = 0.464104989345;
    msg.custom_z = 0.213574233941;

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
    msg.setTimeStamp(0.888188466497);
    msg.setSource(34490U);
    msg.setSourceEntity(213U);
    msg.setDestination(43948U);
    msg.setDestinationEntity(216U);
    msg.utc_time = 0.330644410082;
    msg.reason = 254U;

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
    msg.setTimeStamp(0.800885524215);
    msg.setSource(24391U);
    msg.setSourceEntity(49U);
    msg.setDestination(32749U);
    msg.setDestinationEntity(82U);
    msg.utc_time = 0.00830340789099;
    msg.reason = 187U;

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
    msg.setTimeStamp(0.634938175377);
    msg.setSource(6384U);
    msg.setSourceEntity(31U);
    msg.setDestination(13611U);
    msg.setDestinationEntity(99U);
    msg.utc_time = 0.630513730215;
    msg.reason = 157U;

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
    msg.setTimeStamp(0.926240655179);
    msg.setSource(43076U);
    msg.setSourceEntity(144U);
    msg.setDestination(43041U);
    msg.setDestinationEntity(32U);
    msg.id = 135U;
    msg.range = 0.555351352399;
    msg.acceptance = 51U;

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
    msg.setTimeStamp(0.554008804557);
    msg.setSource(6630U);
    msg.setSourceEntity(245U);
    msg.setDestination(31660U);
    msg.setDestinationEntity(25U);
    msg.id = 114U;
    msg.range = 0.471523688513;
    msg.acceptance = 193U;

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
    msg.setTimeStamp(0.127885745698);
    msg.setSource(60257U);
    msg.setSourceEntity(21U);
    msg.setDestination(3467U);
    msg.setDestinationEntity(69U);
    msg.id = 243U;
    msg.range = 0.142050196633;
    msg.acceptance = 168U;

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
    msg.setTimeStamp(0.587874693665);
    msg.setSource(60135U);
    msg.setSourceEntity(93U);
    msg.setDestination(3814U);
    msg.setDestinationEntity(89U);
    msg.type = 133U;
    msg.reason = 86U;
    msg.value = 0.957725582082;
    msg.timestep = 0.185835948121;

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
    msg.setTimeStamp(0.601965073453);
    msg.setSource(49735U);
    msg.setSourceEntity(28U);
    msg.setDestination(28369U);
    msg.setDestinationEntity(136U);
    msg.type = 199U;
    msg.reason = 40U;
    msg.value = 0.710001581486;
    msg.timestep = 0.963586963926;

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
    msg.setTimeStamp(0.0504420181875);
    msg.setSource(50594U);
    msg.setSourceEntity(174U);
    msg.setDestination(46550U);
    msg.setDestinationEntity(13U);
    msg.type = 230U;
    msg.reason = 161U;
    msg.value = 0.989560070993;
    msg.timestep = 0.902289510537;

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
    msg.setTimeStamp(0.819865280951);
    msg.setSource(7734U);
    msg.setSourceEntity(29U);
    msg.setDestination(38347U);
    msg.setDestinationEntity(108U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QPJCAAWWMHSMDXZNQYHJYHOWSFBLATYFLXOPCBVDRCADVYNRHZJXPICEONQQYTUJFLKMPEHRQGPBCBORHGXIOXENMLEBNJXADAYNSPCFMBNVAHEVJITSFUFKWJSGLJMRWDIKKGZPKBUSCYSYWXLIMBGUTPOERTCMDXVZWCYVVVUORODSTZWLGFJPUSJWXNQTDENGSGHNLMGVB");
    tmp_msg_0.lat = 0.438414035212;
    tmp_msg_0.lon = 0.875880111318;
    tmp_msg_0.depth = 0.400347552702;
    tmp_msg_0.query_channel = 169U;
    tmp_msg_0.reply_channel = 203U;
    tmp_msg_0.transponder_delay = 132U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.249825311002;
    msg.y = 0.969029209536;
    msg.var_x = 0.941980811924;
    msg.var_y = 0.680798223836;
    msg.distance = 0.985225196183;

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
    msg.setTimeStamp(0.162306089369);
    msg.setSource(53108U);
    msg.setSourceEntity(122U);
    msg.setDestination(53795U);
    msg.setDestinationEntity(232U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UZKBDWMLJSLNSAKOZOILKWSDKGUXFHLEAGPCDMYOMEBIGQYBJRWLTBPDYGJIRZDJWQNWZVANNEIAJYWTSPPATNIBQKMMYEICJQGFVDCFIFEHFUWVOXNPTHXLRTAQYKREY");
    tmp_msg_0.lat = 0.549030820443;
    tmp_msg_0.lon = 0.175503130342;
    tmp_msg_0.depth = 0.537971906405;
    tmp_msg_0.query_channel = 234U;
    tmp_msg_0.reply_channel = 195U;
    tmp_msg_0.transponder_delay = 215U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.382594257148;
    msg.y = 0.460163531678;
    msg.var_x = 0.695049398111;
    msg.var_y = 0.712959597143;
    msg.distance = 0.568080497354;

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
    msg.setTimeStamp(0.333904294946);
    msg.setSource(25236U);
    msg.setSourceEntity(23U);
    msg.setDestination(14564U);
    msg.setDestinationEntity(153U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RCHMCFEWAYLRCXZNRIHWHPONOWVIDZCCSWJMLMAHVZAXVT");
    tmp_msg_0.lat = 0.107920286571;
    tmp_msg_0.lon = 0.957444086547;
    tmp_msg_0.depth = 0.0285256700288;
    tmp_msg_0.query_channel = 138U;
    tmp_msg_0.reply_channel = 228U;
    tmp_msg_0.transponder_delay = 141U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.307358102327;
    msg.y = 0.882924522908;
    msg.var_x = 0.552423953057;
    msg.var_y = 0.348061158836;
    msg.distance = 0.281549866346;

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
    msg.setTimeStamp(0.208709466895);
    msg.setSource(15805U);
    msg.setSourceEntity(37U);
    msg.setDestination(6516U);
    msg.setDestinationEntity(159U);
    msg.state = 170U;

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
    msg.setTimeStamp(0.341774626917);
    msg.setSource(61140U);
    msg.setSourceEntity(231U);
    msg.setDestination(2294U);
    msg.setDestinationEntity(39U);
    msg.state = 60U;

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
    msg.setTimeStamp(0.522375785793);
    msg.setSource(60970U);
    msg.setSourceEntity(196U);
    msg.setDestination(33268U);
    msg.setDestinationEntity(205U);
    msg.state = 202U;

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
    msg.setTimeStamp(0.675639317935);
    msg.setSource(29348U);
    msg.setSourceEntity(238U);
    msg.setDestination(25161U);
    msg.setDestinationEntity(214U);
    msg.x = 0.369383612487;
    msg.y = 0.726113113829;
    msg.z = 0.321666275643;

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
    msg.setTimeStamp(0.445678224519);
    msg.setSource(58399U);
    msg.setSourceEntity(65U);
    msg.setDestination(38078U);
    msg.setDestinationEntity(205U);
    msg.x = 0.632530519183;
    msg.y = 0.694402839909;
    msg.z = 0.402862057534;

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
    msg.setTimeStamp(0.277678159024);
    msg.setSource(21808U);
    msg.setSourceEntity(186U);
    msg.setDestination(57114U);
    msg.setDestinationEntity(166U);
    msg.x = 0.786469904425;
    msg.y = 0.286746963521;
    msg.z = 0.184834362376;

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
    msg.setTimeStamp(0.0498637552174);
    msg.setSource(45081U);
    msg.setSourceEntity(21U);
    msg.setDestination(15485U);
    msg.setDestinationEntity(101U);
    msg.va = 0.705730954067;
    msg.aoa = 0.249775264476;
    msg.ssa = 0.361817165511;

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
    msg.setTimeStamp(0.13352365298);
    msg.setSource(36310U);
    msg.setSourceEntity(179U);
    msg.setDestination(11405U);
    msg.setDestinationEntity(153U);
    msg.va = 0.00173801825733;
    msg.aoa = 0.585043835891;
    msg.ssa = 0.692822750353;

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
    msg.setTimeStamp(0.759830258778);
    msg.setSource(3114U);
    msg.setSourceEntity(110U);
    msg.setDestination(16259U);
    msg.setDestinationEntity(142U);
    msg.va = 0.620173363455;
    msg.aoa = 0.228977894716;
    msg.ssa = 0.133345641228;

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
    msg.setTimeStamp(0.95804178136);
    msg.setSource(42583U);
    msg.setSourceEntity(161U);
    msg.setDestination(12622U);
    msg.setDestinationEntity(134U);
    msg.value = 0.2746609946;

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
    msg.setTimeStamp(0.369386154996);
    msg.setSource(5286U);
    msg.setSourceEntity(176U);
    msg.setDestination(24113U);
    msg.setDestinationEntity(48U);
    msg.value = 0.738609425396;

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
    msg.setTimeStamp(0.314544462985);
    msg.setSource(24510U);
    msg.setSourceEntity(122U);
    msg.setDestination(19011U);
    msg.setDestinationEntity(190U);
    msg.value = 0.856031519285;

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
    msg.setTimeStamp(0.82634399931);
    msg.setSource(58871U);
    msg.setSourceEntity(113U);
    msg.setDestination(39330U);
    msg.setDestinationEntity(240U);
    msg.value = 0.828955098023;
    msg.z_units = 246U;

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
    msg.setTimeStamp(0.9844660467);
    msg.setSource(25700U);
    msg.setSourceEntity(183U);
    msg.setDestination(21544U);
    msg.setDestinationEntity(34U);
    msg.value = 0.00396259361748;
    msg.z_units = 52U;

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
    msg.setTimeStamp(0.178680469795);
    msg.setSource(32556U);
    msg.setSourceEntity(171U);
    msg.setDestination(198U);
    msg.setDestinationEntity(28U);
    msg.value = 0.904442858086;
    msg.z_units = 42U;

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
    msg.setTimeStamp(0.504051228735);
    msg.setSource(15765U);
    msg.setSourceEntity(252U);
    msg.setDestination(12235U);
    msg.setDestinationEntity(133U);
    msg.value = 0.433395086062;
    msg.speed_units = 192U;

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
    msg.setTimeStamp(0.962193474581);
    msg.setSource(59829U);
    msg.setSourceEntity(3U);
    msg.setDestination(19363U);
    msg.setDestinationEntity(109U);
    msg.value = 0.675414694499;
    msg.speed_units = 211U;

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
    msg.setTimeStamp(0.524375883361);
    msg.setSource(62899U);
    msg.setSourceEntity(215U);
    msg.setDestination(2659U);
    msg.setDestinationEntity(233U);
    msg.value = 0.56669450463;
    msg.speed_units = 29U;

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
    msg.setTimeStamp(0.943201872841);
    msg.setSource(56576U);
    msg.setSourceEntity(201U);
    msg.setDestination(20145U);
    msg.setDestinationEntity(72U);
    msg.value = 0.897261871974;

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
    msg.setTimeStamp(0.445722045197);
    msg.setSource(51294U);
    msg.setSourceEntity(176U);
    msg.setDestination(44377U);
    msg.setDestinationEntity(185U);
    msg.value = 0.822310892758;

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
    msg.setTimeStamp(0.777898647705);
    msg.setSource(39665U);
    msg.setSourceEntity(37U);
    msg.setDestination(46590U);
    msg.setDestinationEntity(248U);
    msg.value = 0.768041722492;

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
    msg.setTimeStamp(0.720725706309);
    msg.setSource(65317U);
    msg.setSourceEntity(131U);
    msg.setDestination(29895U);
    msg.setDestinationEntity(134U);
    msg.value = 0.335622364938;

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
    msg.setTimeStamp(0.81059856351);
    msg.setSource(34970U);
    msg.setSourceEntity(61U);
    msg.setDestination(34548U);
    msg.setDestinationEntity(192U);
    msg.value = 0.707644907802;

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
    msg.setTimeStamp(0.282945408203);
    msg.setSource(21279U);
    msg.setSourceEntity(72U);
    msg.setDestination(1205U);
    msg.setDestinationEntity(240U);
    msg.value = 0.631794828589;

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
    msg.setTimeStamp(0.00202926953081);
    msg.setSource(52313U);
    msg.setSourceEntity(19U);
    msg.setDestination(25230U);
    msg.setDestinationEntity(55U);
    msg.value = 0.329456697209;

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
    msg.setTimeStamp(0.711917788652);
    msg.setSource(51863U);
    msg.setSourceEntity(129U);
    msg.setDestination(22496U);
    msg.setDestinationEntity(246U);
    msg.value = 0.120061857612;

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
    msg.setTimeStamp(0.342395836207);
    msg.setSource(65042U);
    msg.setSourceEntity(160U);
    msg.setDestination(42303U);
    msg.setDestinationEntity(14U);
    msg.value = 0.11859156488;

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
    msg.setTimeStamp(0.426898675544);
    msg.setSource(61147U);
    msg.setSourceEntity(124U);
    msg.setDestination(53502U);
    msg.setDestinationEntity(174U);
    msg.path_ref = 1542441547U;
    msg.start_lat = 0.892578464857;
    msg.start_lon = 0.256188079876;
    msg.start_z = 0.175627797532;
    msg.start_z_units = 111U;
    msg.end_lat = 0.244425175015;
    msg.end_lon = 0.785473862405;
    msg.end_z = 0.943451745593;
    msg.end_z_units = 223U;
    msg.speed = 0.562160234801;
    msg.speed_units = 43U;
    msg.lradius = 0.287504087397;
    msg.flags = 94U;

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
    msg.setTimeStamp(0.617679454143);
    msg.setSource(15123U);
    msg.setSourceEntity(144U);
    msg.setDestination(34922U);
    msg.setDestinationEntity(142U);
    msg.path_ref = 2471086660U;
    msg.start_lat = 0.0910770317285;
    msg.start_lon = 0.584844583025;
    msg.start_z = 0.306427230826;
    msg.start_z_units = 110U;
    msg.end_lat = 0.429541579632;
    msg.end_lon = 0.250016951509;
    msg.end_z = 0.486214768115;
    msg.end_z_units = 162U;
    msg.speed = 0.860406509456;
    msg.speed_units = 5U;
    msg.lradius = 0.336262740701;
    msg.flags = 119U;

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
    msg.setTimeStamp(0.651346951262);
    msg.setSource(31644U);
    msg.setSourceEntity(11U);
    msg.setDestination(63721U);
    msg.setDestinationEntity(47U);
    msg.path_ref = 1399632908U;
    msg.start_lat = 0.890017445536;
    msg.start_lon = 0.05276717622;
    msg.start_z = 0.0631462878831;
    msg.start_z_units = 18U;
    msg.end_lat = 0.516930433232;
    msg.end_lon = 0.946181678557;
    msg.end_z = 0.587464769462;
    msg.end_z_units = 65U;
    msg.speed = 0.595447438213;
    msg.speed_units = 16U;
    msg.lradius = 0.821760218863;
    msg.flags = 130U;

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
    msg.setTimeStamp(0.0510986926063);
    msg.setSource(26903U);
    msg.setSourceEntity(32U);
    msg.setDestination(50396U);
    msg.setDestinationEntity(39U);
    msg.x = 0.815752593476;
    msg.y = 0.376378951117;
    msg.z = 0.56143214321;
    msg.k = 0.888443703643;
    msg.m = 0.589617462656;
    msg.n = 0.692342543948;
    msg.flags = 241U;

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
    msg.setTimeStamp(0.251099338684);
    msg.setSource(19614U);
    msg.setSourceEntity(69U);
    msg.setDestination(31410U);
    msg.setDestinationEntity(51U);
    msg.x = 0.243829596012;
    msg.y = 0.86195864989;
    msg.z = 0.912751522137;
    msg.k = 0.945641126517;
    msg.m = 0.685136252877;
    msg.n = 0.922650654962;
    msg.flags = 18U;

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
    msg.setTimeStamp(0.33065388244);
    msg.setSource(17133U);
    msg.setSourceEntity(117U);
    msg.setDestination(16698U);
    msg.setDestinationEntity(133U);
    msg.x = 0.85289443276;
    msg.y = 0.627262573554;
    msg.z = 0.280133572138;
    msg.k = 0.270292494422;
    msg.m = 0.523214647948;
    msg.n = 0.167916929325;
    msg.flags = 17U;

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
    msg.setTimeStamp(0.329910677954);
    msg.setSource(22377U);
    msg.setSourceEntity(10U);
    msg.setDestination(63770U);
    msg.setDestinationEntity(170U);
    msg.value = 0.305976545803;

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
    msg.setTimeStamp(0.431642017002);
    msg.setSource(55016U);
    msg.setSourceEntity(180U);
    msg.setDestination(20288U);
    msg.setDestinationEntity(68U);
    msg.value = 0.0367133954624;

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
    msg.setTimeStamp(0.296266957436);
    msg.setSource(37286U);
    msg.setSourceEntity(215U);
    msg.setDestination(61424U);
    msg.setDestinationEntity(105U);
    msg.value = 0.575547179609;

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
    msg.setTimeStamp(0.713446114921);
    msg.setSource(24025U);
    msg.setSourceEntity(4U);
    msg.setDestination(59387U);
    msg.setDestinationEntity(194U);
    msg.u = 0.974677130306;
    msg.v = 0.329765975962;
    msg.w = 0.153524290267;
    msg.p = 0.446457672004;
    msg.q = 0.7023380294;
    msg.r = 0.0125901958613;
    msg.flags = 35U;

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
    msg.setTimeStamp(0.140447468488);
    msg.setSource(64698U);
    msg.setSourceEntity(222U);
    msg.setDestination(55428U);
    msg.setDestinationEntity(101U);
    msg.u = 0.331397924936;
    msg.v = 0.969764561451;
    msg.w = 0.755458679756;
    msg.p = 0.494937861945;
    msg.q = 0.0810246657906;
    msg.r = 0.319852558276;
    msg.flags = 73U;

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
    msg.setTimeStamp(0.127333338585);
    msg.setSource(63747U);
    msg.setSourceEntity(79U);
    msg.setDestination(63291U);
    msg.setDestinationEntity(68U);
    msg.u = 0.735949389631;
    msg.v = 0.0602857613037;
    msg.w = 0.291996816724;
    msg.p = 0.597475746012;
    msg.q = 0.523461047333;
    msg.r = 0.105762079659;
    msg.flags = 27U;

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
    msg.setTimeStamp(0.966198199501);
    msg.setSource(36828U);
    msg.setSourceEntity(212U);
    msg.setDestination(30868U);
    msg.setDestinationEntity(190U);
    msg.path_ref = 1960458907U;
    msg.start_lat = 0.826513976058;
    msg.start_lon = 0.335629017201;
    msg.start_z = 0.792373841173;
    msg.start_z_units = 74U;
    msg.end_lat = 0.535154970553;
    msg.end_lon = 0.131287345785;
    msg.end_z = 0.661177622367;
    msg.end_z_units = 222U;
    msg.lradius = 0.207622302895;
    msg.flags = 183U;
    msg.x = 0.454248896477;
    msg.y = 0.757724997613;
    msg.z = 0.48832895873;
    msg.vx = 0.720106849253;
    msg.vy = 0.362241845648;
    msg.vz = 0.507689752437;
    msg.course_error = 0.533543019698;
    msg.eta = 61560U;

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
    msg.setTimeStamp(0.742699977799);
    msg.setSource(41539U);
    msg.setSourceEntity(44U);
    msg.setDestination(45887U);
    msg.setDestinationEntity(132U);
    msg.path_ref = 4135333162U;
    msg.start_lat = 0.761047204938;
    msg.start_lon = 0.751666036449;
    msg.start_z = 0.209157029646;
    msg.start_z_units = 134U;
    msg.end_lat = 0.178026983727;
    msg.end_lon = 0.448073514297;
    msg.end_z = 0.0439469082193;
    msg.end_z_units = 28U;
    msg.lradius = 0.615197532884;
    msg.flags = 119U;
    msg.x = 0.915637056211;
    msg.y = 0.133207066712;
    msg.z = 0.0788675994184;
    msg.vx = 0.421191846494;
    msg.vy = 0.440015770964;
    msg.vz = 0.141847811022;
    msg.course_error = 0.60513351308;
    msg.eta = 41649U;

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
    msg.setTimeStamp(0.954990637074);
    msg.setSource(26529U);
    msg.setSourceEntity(86U);
    msg.setDestination(3419U);
    msg.setDestinationEntity(65U);
    msg.path_ref = 1041281668U;
    msg.start_lat = 0.343928434736;
    msg.start_lon = 0.318819775676;
    msg.start_z = 0.800802178659;
    msg.start_z_units = 70U;
    msg.end_lat = 0.357343489311;
    msg.end_lon = 0.817865853106;
    msg.end_z = 0.00900469262025;
    msg.end_z_units = 177U;
    msg.lradius = 0.768006422457;
    msg.flags = 224U;
    msg.x = 0.962079905339;
    msg.y = 0.0580576410115;
    msg.z = 0.871073789114;
    msg.vx = 0.862154967218;
    msg.vy = 0.636104318852;
    msg.vz = 0.976076892384;
    msg.course_error = 0.774292611526;
    msg.eta = 18978U;

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
    msg.setTimeStamp(0.502027406388);
    msg.setSource(20734U);
    msg.setSourceEntity(7U);
    msg.setDestination(5469U);
    msg.setDestinationEntity(125U);
    msg.k = 0.185110861279;
    msg.m = 0.413090367629;
    msg.n = 0.626207430872;

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
    msg.setTimeStamp(0.818750343826);
    msg.setSource(30167U);
    msg.setSourceEntity(179U);
    msg.setDestination(7830U);
    msg.setDestinationEntity(235U);
    msg.k = 0.410315683735;
    msg.m = 0.0738291735027;
    msg.n = 0.563045967139;

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
    msg.setTimeStamp(0.690030153396);
    msg.setSource(42830U);
    msg.setSourceEntity(105U);
    msg.setDestination(33766U);
    msg.setDestinationEntity(202U);
    msg.k = 0.945677977549;
    msg.m = 0.660388764458;
    msg.n = 0.346425641671;

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
    msg.setTimeStamp(0.812065722828);
    msg.setSource(64569U);
    msg.setSourceEntity(38U);
    msg.setDestination(22759U);
    msg.setDestinationEntity(117U);
    msg.p = 0.884614321824;
    msg.i = 0.858824523782;
    msg.d = 0.166238739004;
    msg.a = 0.0646950135751;

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
    msg.setTimeStamp(0.598349963817);
    msg.setSource(19371U);
    msg.setSourceEntity(81U);
    msg.setDestination(22432U);
    msg.setDestinationEntity(172U);
    msg.p = 0.373727610061;
    msg.i = 0.336080556383;
    msg.d = 0.554737867762;
    msg.a = 0.00330975175093;

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
    msg.setTimeStamp(0.918793030182);
    msg.setSource(7952U);
    msg.setSourceEntity(111U);
    msg.setDestination(52570U);
    msg.setDestinationEntity(3U);
    msg.p = 0.19193122021;
    msg.i = 0.760922480916;
    msg.d = 0.223591942792;
    msg.a = 0.814733438444;

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
    msg.setTimeStamp(0.893235210251);
    msg.setSource(18390U);
    msg.setSourceEntity(167U);
    msg.setDestination(45471U);
    msg.setDestinationEntity(229U);
    msg.op = 124U;

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
    msg.setTimeStamp(0.446261236897);
    msg.setSource(55837U);
    msg.setSourceEntity(217U);
    msg.setDestination(1665U);
    msg.setDestinationEntity(223U);
    msg.op = 125U;

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
    msg.setTimeStamp(0.220464857866);
    msg.setSource(14682U);
    msg.setSourceEntity(2U);
    msg.setDestination(46U);
    msg.setDestinationEntity(52U);
    msg.op = 140U;

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
    msg.setTimeStamp(0.407147041178);
    msg.setSource(64316U);
    msg.setSourceEntity(5U);
    msg.setDestination(55824U);
    msg.setDestinationEntity(164U);
    msg.x = 0.384003424262;
    msg.y = 0.76484320681;
    msg.z = 0.608168421487;
    msg.vx = 0.290490897318;
    msg.vy = 0.411189545145;
    msg.vz = 0.0983045618565;
    msg.ax = 0.612512581162;
    msg.ay = 0.874473432627;
    msg.az = 0.521627919071;
    msg.flags = 57350U;

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
    msg.setTimeStamp(0.16873849925);
    msg.setSource(57535U);
    msg.setSourceEntity(41U);
    msg.setDestination(31651U);
    msg.setDestinationEntity(172U);
    msg.x = 0.0090018840412;
    msg.y = 0.894965206792;
    msg.z = 0.731281237029;
    msg.vx = 0.14048525359;
    msg.vy = 0.489373666067;
    msg.vz = 0.0092236147692;
    msg.ax = 0.808879619057;
    msg.ay = 0.34371615706;
    msg.az = 0.846249507615;
    msg.flags = 38518U;

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
    msg.setTimeStamp(0.501302077547);
    msg.setSource(10322U);
    msg.setSourceEntity(49U);
    msg.setDestination(41201U);
    msg.setDestinationEntity(223U);
    msg.x = 0.0201145603113;
    msg.y = 0.393436582177;
    msg.z = 0.19186999884;
    msg.vx = 0.120230644274;
    msg.vy = 0.727974099183;
    msg.vz = 0.945030432422;
    msg.ax = 0.238334431138;
    msg.ay = 0.314101243212;
    msg.az = 0.319398359509;
    msg.flags = 19462U;

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
    msg.setTimeStamp(0.697365926134);
    msg.setSource(36793U);
    msg.setSourceEntity(198U);
    msg.setDestination(39381U);
    msg.setDestinationEntity(5U);
    msg.value = 0.590066740425;

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
    msg.setTimeStamp(0.538006207934);
    msg.setSource(60964U);
    msg.setSourceEntity(65U);
    msg.setDestination(15248U);
    msg.setDestinationEntity(231U);
    msg.value = 0.0699314820957;

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
    msg.setTimeStamp(0.140143836654);
    msg.setSource(61541U);
    msg.setSourceEntity(109U);
    msg.setDestination(5650U);
    msg.setDestinationEntity(147U);
    msg.value = 0.290518553816;

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
    msg.setTimeStamp(0.58825605088);
    msg.setSource(53046U);
    msg.setSourceEntity(194U);
    msg.setDestination(3005U);
    msg.setDestinationEntity(37U);
    msg.timeout = 45815U;
    msg.lat = 0.258291129583;
    msg.lon = 0.827037812116;
    msg.z = 0.12389481829;
    msg.z_units = 153U;
    msg.speed = 0.337507942165;
    msg.speed_units = 198U;
    msg.roll = 0.265149531224;
    msg.pitch = 0.370719749298;
    msg.yaw = 0.716927904375;
    msg.custom.assign("SFKNNIUYINTXUBDHJVLCGJXHZKGZTEAWYCVGQLKJPEUKRSBXOIOMICZNGPU");

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
    msg.setTimeStamp(0.0270667824611);
    msg.setSource(15684U);
    msg.setSourceEntity(52U);
    msg.setDestination(20565U);
    msg.setDestinationEntity(177U);
    msg.timeout = 12176U;
    msg.lat = 0.894705847123;
    msg.lon = 0.398273602933;
    msg.z = 0.606295352002;
    msg.z_units = 102U;
    msg.speed = 0.0551403060464;
    msg.speed_units = 69U;
    msg.roll = 0.89469919394;
    msg.pitch = 0.447731661009;
    msg.yaw = 0.473629492971;
    msg.custom.assign("MNLTEHZOSAWLCLIOZOFDAMRGGATNOBSPDHDLBCSRRDCGSHJRTNPB");

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
    msg.setTimeStamp(0.0539534571966);
    msg.setSource(25101U);
    msg.setSourceEntity(16U);
    msg.setDestination(17378U);
    msg.setDestinationEntity(3U);
    msg.timeout = 33293U;
    msg.lat = 0.90538602773;
    msg.lon = 0.0898095598708;
    msg.z = 0.475871406404;
    msg.z_units = 75U;
    msg.speed = 0.406551227341;
    msg.speed_units = 124U;
    msg.roll = 0.263443238029;
    msg.pitch = 0.437950404666;
    msg.yaw = 0.490258304992;
    msg.custom.assign("BMFCGGULJRSLNVVFDQVRCMGSNHJLGXOCZKTOILTAWSYFBHFYYFBDSOQSDAPMRFOOMAHJKTDCLHDQISADWKEKTWANBLBGWFUQEIMMXLJPABWZTBCGZZGPYRGFIJKMCCMHQWBNTWJVRUVOQKSVSICNATYUEZAPQTSPQYRXBERHURSXDQJEVGUQTDHDKEUEWEMIEZJXFPFYVXZGVJZYPINJDHMZWKOXKLUUKRXEXLVZPLTANYOIOYUC");

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
    msg.setTimeStamp(0.904261818632);
    msg.setSource(53430U);
    msg.setSourceEntity(128U);
    msg.setDestination(14460U);
    msg.setDestinationEntity(129U);
    msg.timeout = 39776U;
    msg.lat = 0.961384680288;
    msg.lon = 0.10077884487;
    msg.z = 0.192460122603;
    msg.z_units = 235U;
    msg.speed = 0.165699712716;
    msg.speed_units = 31U;
    msg.duration = 3574U;
    msg.radius = 0.554817342828;
    msg.flags = 57U;
    msg.custom.assign("RVBYGXEAXIRQZIQCIMQDUECYPXGTWSEVBSVGVRDOTXRZWBKKDQASWOHFYLRAVMFPCZAGUQHMBDPIFPQJJDSRPJCCKFYUIULBPYVLMKTGLNBUWHHTEWYSLRWESUNPMONVJXNDABUXMJDFXEXXUHRTHEWMCPQWCNLTDQGRDQKJFVTNZGZFDYKJHCOSRFTKNEOPIAJNSGLZBVMEKCHAOYXVTLKJIYSKOFQBFGSA");

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
    msg.setTimeStamp(0.0743050058708);
    msg.setSource(16144U);
    msg.setSourceEntity(8U);
    msg.setDestination(46770U);
    msg.setDestinationEntity(39U);
    msg.timeout = 57966U;
    msg.lat = 0.0188029926394;
    msg.lon = 0.0771134493641;
    msg.z = 0.137240088407;
    msg.z_units = 228U;
    msg.speed = 0.668364875896;
    msg.speed_units = 58U;
    msg.duration = 24097U;
    msg.radius = 0.574086402775;
    msg.flags = 173U;
    msg.custom.assign("VAENUMPDJVFJPHYAMRZOKTZSWYLOFLCPXBKIIQENNPTAMYQCFFWOYBXSEFGGVYPTGBGJHZBSDVDHTWIXJOSORNFUVQYPPCRSDHGAYGRMUXLHYHCVQOQDGQORWHADMLJUUXKGSFMEFCUEELNXXWSRWNWIHCIJJZVCESAMQIKSJM");

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
    msg.setTimeStamp(0.234402878765);
    msg.setSource(12878U);
    msg.setSourceEntity(119U);
    msg.setDestination(22488U);
    msg.setDestinationEntity(211U);
    msg.timeout = 4764U;
    msg.lat = 0.439500043793;
    msg.lon = 0.720041118526;
    msg.z = 0.00263993161263;
    msg.z_units = 76U;
    msg.speed = 0.649969617291;
    msg.speed_units = 241U;
    msg.duration = 46596U;
    msg.radius = 0.54287558946;
    msg.flags = 158U;
    msg.custom.assign("JDKGCSBQHPFNBGIEAXVSJVAYHKWFTSOBIOUBRQCNVYCNVRBKWPEZBQRLZXNLRFEPCJWQFXVDJXBWSKCSDUZGLHKSYOAPJZPEEUTNMJITWLUFTVGAMOMRTYYGLIIQJOVLZHPTWLVNZEISRRWCHRUQMZHYXQATMAHTKYOWPDXWOEVUEQKMFAYMAD");

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
    msg.setTimeStamp(0.870909403095);
    msg.setSource(12336U);
    msg.setSourceEntity(185U);
    msg.setDestination(48358U);
    msg.setDestinationEntity(144U);
    msg.custom.assign("MMLRNAFHOESAVNJXSUIPQHVTOQYESWIGXNHJZQVTKWOBRUZGQYZFZKPGWGKZHWSHFJBAYAAKPSGJBBZPIVZBFFALIETNZREWADMDUQKLDGGJCCOSMBVHPTWYMECSMWXMTWCEFRDCJHLQZIFLSYFVIAOODCVVBUDQYHEDOAGUXCHPNBVSPTDOAGZPRJLKJGR");

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
    msg.setTimeStamp(0.805980984255);
    msg.setSource(10742U);
    msg.setSourceEntity(102U);
    msg.setDestination(17033U);
    msg.setDestinationEntity(197U);
    msg.custom.assign("GBKPALYLDPOTUCKUPVEYUTNUEJNIKDHMOA");

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
    msg.setTimeStamp(0.93370086438);
    msg.setSource(45300U);
    msg.setSourceEntity(103U);
    msg.setDestination(15826U);
    msg.setDestinationEntity(205U);
    msg.custom.assign("TPMIAOKQKAWHCSENQUARZFZBHRAXKOYNKMCIQOWVZWTVIGRDVXNHZZGWXNBNLXAKZHEOLBKXZMMUQIGJTSUVJCVUJTFQFEWMISDCXJRYGYGHMVWWTOYCLJHTNIBI");

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
    msg.setTimeStamp(0.19591966063);
    msg.setSource(16237U);
    msg.setSourceEntity(114U);
    msg.setDestination(7640U);
    msg.setDestinationEntity(101U);
    msg.timeout = 34566U;
    msg.lat = 0.642132511485;
    msg.lon = 0.666758082858;
    msg.z = 0.0934363443213;
    msg.z_units = 26U;
    msg.duration = 45885U;
    msg.speed = 0.947838919996;
    msg.speed_units = 102U;
    msg.type = 23U;
    msg.radius = 0.824596847922;
    msg.length = 0.985379565389;
    msg.bearing = 0.896728584509;
    msg.direction = 252U;
    msg.custom.assign("TSCXMDFUXSWYNOOBBTMBCGDXIRMAGKUKVPAMYFNGTHLMAVGJZSTJFXIDPLKZTRFKURXKCENPEXITSLXLZIMJUODZDCILYUSAZWNAHTUPZJMSIGUEJAJVZOVVDCYOCBQJRVCEQBTFFYFAQNWHREUCEQSVHJXW");

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
    msg.setTimeStamp(0.798863941636);
    msg.setSource(32268U);
    msg.setSourceEntity(181U);
    msg.setDestination(16340U);
    msg.setDestinationEntity(57U);
    msg.timeout = 51946U;
    msg.lat = 0.567196256895;
    msg.lon = 0.704494407695;
    msg.z = 0.104240516965;
    msg.z_units = 76U;
    msg.duration = 52618U;
    msg.speed = 0.815504568665;
    msg.speed_units = 229U;
    msg.type = 64U;
    msg.radius = 0.956921306011;
    msg.length = 0.529206732846;
    msg.bearing = 0.669150505584;
    msg.direction = 194U;
    msg.custom.assign("BSFFMZIHKXYQSJIXZVKSOGUMYRWQMMKVSPXCQDJVTFXWWCQPDAUJDSRZFMHJOXXTUKOTGDBHETKUNQNDZKEFKNWYWJNZYLAMTXYDAOFZFPN");

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
    msg.setTimeStamp(0.33382230087);
    msg.setSource(38288U);
    msg.setSourceEntity(243U);
    msg.setDestination(10793U);
    msg.setDestinationEntity(50U);
    msg.timeout = 10550U;
    msg.lat = 0.458987321987;
    msg.lon = 0.640762941901;
    msg.z = 0.512585839411;
    msg.z_units = 230U;
    msg.duration = 53366U;
    msg.speed = 0.473477527169;
    msg.speed_units = 145U;
    msg.type = 160U;
    msg.radius = 0.926315707336;
    msg.length = 0.769484638558;
    msg.bearing = 0.553561676035;
    msg.direction = 60U;
    msg.custom.assign("LOJIGRLQIMQUKNMMYKYJVBGSBZVGFQHEOPJI");

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
    msg.setTimeStamp(0.123439894629);
    msg.setSource(28801U);
    msg.setSourceEntity(251U);
    msg.setDestination(38319U);
    msg.setDestinationEntity(101U);
    msg.duration = 35537U;
    msg.custom.assign("PIXATIDKJKPJJOQLTXWSQBJMFXANXZOQJUZHMLJGTGFSHDOWUNUFSRDHUZRHCLHUDWOZBIDSMVDERONDZBAAOCYWKEIPLPYFGCRDVZPIOIQIABHCTOIGGNBLQAYQZNPRKQPFAWAYNKXJNUKCYETRMBOQWLJTSGWFGVVEMSXTUMBGHXMREFEFLLJVZCXNXWSTD");

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
    msg.setTimeStamp(0.588084733385);
    msg.setSource(3971U);
    msg.setSourceEntity(101U);
    msg.setDestination(59265U);
    msg.setDestinationEntity(162U);
    msg.duration = 53690U;
    msg.custom.assign("AUWSFBRNWJGNTHYXVPLAYWHFFRNSQETFBSGQOGJISYJEENETEWKPFCPXYGIRJNSKZKLZSKAKZTXRQIFQWHZCOVBXTEBTNLMAUCILKZMIUAOLRDBIJYAHVFGIMMGHZEIWUHSVDBPQMGCSFWBDCDYDDCHIXKDJCXOURTXGMLWGKQOVLUHTTCWMIBRRVQPYSNLWAZZYDQPHVJODXBMGPFOHRYNVJAYQVZFJCMKSQPDLOJTBRA");

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
    msg.setTimeStamp(0.296625281617);
    msg.setSource(4954U);
    msg.setSourceEntity(150U);
    msg.setDestination(48280U);
    msg.setDestinationEntity(33U);
    msg.duration = 56796U;
    msg.custom.assign("RUBCMODJKYJJPXOCFFIJDYKLBALXMTSFKDWQPVDLYBSARTQAUEGEZTGMLBWDZGARIVLWVREIIIKCXWCPPRCZTAOBKTEXPHWVBHNFJXUQFLYYPJDRMEBGCSWUMYENRQUJHDIXOPOKTWMSHEQDPZKVFQELVFOJQHTGNVZFAXSAYETTSNGZLIBYLOSZAMZHXMKHUPQGSECWWCWFBNRNIGHCJXHAIPNRUOUSNNQKVVADTOXCYYNUMRZSJK");

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
    msg.setTimeStamp(0.482335595222);
    msg.setSource(52802U);
    msg.setSourceEntity(134U);
    msg.setDestination(49889U);
    msg.setDestinationEntity(50U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.514506057122;
    msg.control.set(tmp_msg_0);
    msg.duration = 18690U;
    msg.custom.assign("ECFUMIBTQHMPKCCOKLPFJUXIQKYCPJJMBOZVLLDWGKHIGSLAPVETMHNDQXKYPHTBZCEDGXQOIQUTAUYSMONETNYRFGGMTZQEWRDJWGWIRDLDYRTRWZPJHGVNDJKTZBDFVFBZKHQSVUDOUWXOJZBEIFYCWJAVAXCXUJOMHPEP");

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
    msg.setTimeStamp(0.292460069499);
    msg.setSource(7657U);
    msg.setSourceEntity(245U);
    msg.setDestination(9739U);
    msg.setDestinationEntity(195U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.239984482821;
    tmp_msg_0.z_units = 218U;
    msg.control.set(tmp_msg_0);
    msg.duration = 45008U;
    msg.custom.assign("UXSIFVECNWDLWXSAWEQHZXCZVYNFOEQJANKRMBKBVYADNKEMSJCVXDHTRGYYLAJDSPBAEBTADZFOFOEOUCMCCLWZW");

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
    msg.setTimeStamp(0.00213969334869);
    msg.setSource(7450U);
    msg.setSourceEntity(233U);
    msg.setDestination(30841U);
    msg.setDestinationEntity(193U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2596911566U;
    tmp_msg_0.start_lat = 0.554492191908;
    tmp_msg_0.start_lon = 0.0461314691883;
    tmp_msg_0.start_z = 0.95388574317;
    tmp_msg_0.start_z_units = 217U;
    tmp_msg_0.end_lat = 0.767889418434;
    tmp_msg_0.end_lon = 0.642773974112;
    tmp_msg_0.end_z = 0.825609025358;
    tmp_msg_0.end_z_units = 75U;
    tmp_msg_0.speed = 0.419518259292;
    tmp_msg_0.speed_units = 238U;
    tmp_msg_0.lradius = 0.85897472243;
    tmp_msg_0.flags = 151U;
    msg.control.set(tmp_msg_0);
    msg.duration = 23814U;
    msg.custom.assign("OZGPJFWHVMDBHU");

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
    msg.setTimeStamp(0.733847733929);
    msg.setSource(9230U);
    msg.setSourceEntity(254U);
    msg.setDestination(23559U);
    msg.setDestinationEntity(184U);
    msg.timeout = 275U;
    msg.lat = 0.763124605731;
    msg.lon = 0.112735579616;
    msg.z = 0.647407790641;
    msg.z_units = 146U;
    msg.speed = 0.21135699238;
    msg.speed_units = 193U;
    msg.bearing = 0.907296091717;
    msg.cross_angle = 0.154378911756;
    msg.width = 0.219740582091;
    msg.length = 0.4833424423;
    msg.hstep = 0.750948402759;
    msg.coff = 113U;
    msg.alternation = 157U;
    msg.flags = 222U;
    msg.custom.assign("NAAAKLNIEIHVEZQRTTEJKXVJTQJMLBAZVSBSHHNQQFXSMWUWFTGSZUKXKIHFSUQGPLEHDYMMNRPVILYKCADTYLUYDCDQJKBQOHPFXSLNNXLWZPXNDGJPFCVGRWYWCEYWJ");

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
    msg.setTimeStamp(0.766649104874);
    msg.setSource(13105U);
    msg.setSourceEntity(177U);
    msg.setDestination(53608U);
    msg.setDestinationEntity(91U);
    msg.timeout = 17530U;
    msg.lat = 0.428340391535;
    msg.lon = 0.32239169376;
    msg.z = 0.521009640867;
    msg.z_units = 64U;
    msg.speed = 0.991540257005;
    msg.speed_units = 37U;
    msg.bearing = 0.359363622737;
    msg.cross_angle = 0.58910260981;
    msg.width = 0.126076929294;
    msg.length = 0.501967766088;
    msg.hstep = 0.598235723468;
    msg.coff = 250U;
    msg.alternation = 78U;
    msg.flags = 122U;
    msg.custom.assign("PNCWZGIOVYKAWVKRWQJZOQZZCRMOWYELBCWFFUBDIEXRMZMHIIMTPJJEHLYFFCSANSOUOQIPGUEFANXOOAHOJFTQLGTVFMDBBLDTZEJBIIZYJXBPLIRHVUXFQOIKXYMKDVYDLXTTWVQURSYLNBMGEJPPLVARHAGSJSGNMTA");

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
    msg.setTimeStamp(0.0989457707167);
    msg.setSource(43209U);
    msg.setSourceEntity(47U);
    msg.setDestination(32466U);
    msg.setDestinationEntity(95U);
    msg.timeout = 30824U;
    msg.lat = 0.359743504512;
    msg.lon = 0.36305839672;
    msg.z = 0.340690356528;
    msg.z_units = 150U;
    msg.speed = 0.748875749849;
    msg.speed_units = 214U;
    msg.bearing = 0.584191607023;
    msg.cross_angle = 0.584507636595;
    msg.width = 0.97192464996;
    msg.length = 0.0960808647784;
    msg.hstep = 0.711621593081;
    msg.coff = 26U;
    msg.alternation = 246U;
    msg.flags = 241U;
    msg.custom.assign("HGBDXDEQEPOTLVFQEUJGMMOITLVQJBLUHXQGKRNJRTRGPNMBXYVRDMJYRRSSUDWDIFJNQDWFQSENXAZDIDWHPVEBGGGFMNBOWXKSGCCNCZFSZTAUBMTGAIYRFTBALCDPEWAOMSDLKHUNACRHFWOAWZWQUEHIPZYLSHFPAKKHYAKQVRTYEIZZIHKYVUNICTXOKTJUSNJWZIJVOUSQCZJKYOVMLOXRKLUV");

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
    msg.setTimeStamp(0.0623562570245);
    msg.setSource(13943U);
    msg.setSourceEntity(65U);
    msg.setDestination(18948U);
    msg.setDestinationEntity(171U);
    msg.timeout = 346U;
    msg.lat = 0.780163967164;
    msg.lon = 0.831905996671;
    msg.z = 0.593707893851;
    msg.z_units = 102U;
    msg.speed = 0.351298208173;
    msg.speed_units = 33U;
    msg.custom.assign("VIQCTNIQJYAYBLRZUOFPCPZNAMKAL");

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
    msg.setTimeStamp(0.317588444585);
    msg.setSource(972U);
    msg.setSourceEntity(252U);
    msg.setDestination(36363U);
    msg.setDestinationEntity(86U);
    msg.timeout = 13892U;
    msg.lat = 0.90079794025;
    msg.lon = 0.687902622295;
    msg.z = 0.216342570068;
    msg.z_units = 76U;
    msg.speed = 0.728412004448;
    msg.speed_units = 103U;
    msg.custom.assign("PUCUIJUQBSSHRCHLEXHGDKSCHBDTQXVLRIGWCNLYECZBAMKUYAV");

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
    msg.setTimeStamp(0.177000571257);
    msg.setSource(15926U);
    msg.setSourceEntity(193U);
    msg.setDestination(33828U);
    msg.setDestinationEntity(132U);
    msg.timeout = 34037U;
    msg.lat = 0.340265457263;
    msg.lon = 0.453234188046;
    msg.z = 0.266657188059;
    msg.z_units = 31U;
    msg.speed = 0.349909043421;
    msg.speed_units = 165U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.117815977034;
    tmp_msg_0.y = 0.320692053675;
    tmp_msg_0.z = 0.519360579235;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GIWBDLKHBSSHNUCMMGGDSXOJTBJVNCZMKOMEZTIHMPTFVRVVJEOZSXFJGTWONYWAZYABTTFBCYQXUMMGAEKETTKAYPJSUYERLNAVAPWBBVJGYULSPADKOKNVHNFJZQIISTHPULQULZLDIWJMRLPUZSAGPWLCCYZFQDDRRNOYIWCRWXHVKQEXBUCWRQGXIREGKUKQWZFMPIXXAQIDFOFEVLHQNOXINRCHAYEHZOMTJHRSCDSDEBFFB");

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
    msg.setTimeStamp(0.555856891776);
    msg.setSource(63093U);
    msg.setSourceEntity(152U);
    msg.setDestination(44667U);
    msg.setDestinationEntity(153U);
    msg.x = 0.270273689783;
    msg.y = 0.151759707917;
    msg.z = 0.636685170852;

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
    msg.setTimeStamp(0.0974495670641);
    msg.setSource(59950U);
    msg.setSourceEntity(53U);
    msg.setDestination(49657U);
    msg.setDestinationEntity(223U);
    msg.x = 0.852715238883;
    msg.y = 0.909641306097;
    msg.z = 0.762007216;

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
    msg.setTimeStamp(0.329778125096);
    msg.setSource(301U);
    msg.setSourceEntity(215U);
    msg.setDestination(35570U);
    msg.setDestinationEntity(44U);
    msg.x = 0.494076805859;
    msg.y = 0.529615531267;
    msg.z = 0.135396303693;

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
    msg.setTimeStamp(0.473543629293);
    msg.setSource(47643U);
    msg.setSourceEntity(124U);
    msg.setDestination(3519U);
    msg.setDestinationEntity(63U);
    msg.timeout = 13215U;
    msg.lat = 0.794398959646;
    msg.lon = 0.29898884457;
    msg.z = 0.410584751392;
    msg.z_units = 40U;
    msg.amplitude = 0.613088778413;
    msg.pitch = 0.28527463206;
    msg.speed = 0.256582447985;
    msg.speed_units = 126U;
    msg.custom.assign("WEPYLMPJGQTBAOKZYTLNVCKFDMHQBJGENDMESZQEEXZVOXYDJGWSYKRCSCXQBOJAYWJOFHMALUIRJMWBLIUVZXJDGDEKEHIRUECIQBMSLNNVWBIRCPQYOHDVRNGFWF");

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
    msg.setTimeStamp(0.110973601);
    msg.setSource(2869U);
    msg.setSourceEntity(180U);
    msg.setDestination(22540U);
    msg.setDestinationEntity(129U);
    msg.timeout = 1385U;
    msg.lat = 0.631841461024;
    msg.lon = 0.558719016012;
    msg.z = 0.776764436816;
    msg.z_units = 183U;
    msg.amplitude = 0.220776608668;
    msg.pitch = 0.303573138262;
    msg.speed = 0.982017540703;
    msg.speed_units = 237U;
    msg.custom.assign("PHWLNIGVNJBYPKEVOKBSJTHRCCWLDLJWASVNFMTQVUOTXIQLATDXEQGYFFQXENYLTJKBJYRRZOAZ");

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
    msg.setTimeStamp(0.570844202366);
    msg.setSource(1483U);
    msg.setSourceEntity(75U);
    msg.setDestination(61434U);
    msg.setDestinationEntity(44U);
    msg.timeout = 52577U;
    msg.lat = 0.919185893951;
    msg.lon = 0.530531335783;
    msg.z = 0.943315287163;
    msg.z_units = 141U;
    msg.amplitude = 0.161877143759;
    msg.pitch = 0.463958780099;
    msg.speed = 0.159177972624;
    msg.speed_units = 128U;
    msg.custom.assign("FINGUNDQUIXXRNOTERYPTZSZEEEMUAFBQSALDBKHECKHITGVTGNIOPGVIZSVRWNXYIMQDMAOJDFDTIAEJVPORZKPKNZVGFQBLLJUFJHRJSMWAGTWWOLUYYIKWHFYUFMZSOBVBLMPRQLXWEVINYQDNAUGFRMLNYXUCPDQPJZTBQ");

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
    msg.setTimeStamp(0.951076099807);
    msg.setSource(65175U);
    msg.setSourceEntity(189U);
    msg.setDestination(30455U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.431218883123);
    msg.setSource(1785U);
    msg.setSourceEntity(207U);
    msg.setDestination(23609U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.953497396493);
    msg.setSource(36679U);
    msg.setSourceEntity(4U);
    msg.setDestination(26472U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.926537155414);
    msg.setSource(8978U);
    msg.setSourceEntity(185U);
    msg.setDestination(15758U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.0124884680484;
    msg.lon = 0.814768568927;
    msg.z = 0.255441935519;
    msg.z_units = 211U;
    msg.radius = 0.609764791992;
    msg.duration = 31358U;
    msg.speed = 0.47423322304;
    msg.speed_units = 0U;
    msg.custom.assign("QKFTKWMJUDPQZSVJIYLLUSCDWYQUHPJEELHAEBIUNZWPLWCRKIXYHRX");

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
    msg.setTimeStamp(0.573198742698);
    msg.setSource(23941U);
    msg.setSourceEntity(69U);
    msg.setDestination(6538U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.4607682784;
    msg.lon = 0.269259817222;
    msg.z = 0.595347440814;
    msg.z_units = 6U;
    msg.radius = 0.915306616019;
    msg.duration = 9790U;
    msg.speed = 0.126680072933;
    msg.speed_units = 156U;
    msg.custom.assign("ZYQPRLAMICGMUJCSPVQELQEFDWXSQTDTXNBSAAWUCRDEGZKCRXPBFYCZLLJMTVZEPGSPIAHFPOSEFXUQYWWBEDNJFEHZNVNZPDFQHXWHYUCOOEMUYDDNLVLBTMHWJCHYJHUBVRUFXUHAWGJQYVXRLPCIWIKOIZHKULIOOLTMKFTAAQZOPKBMJJZFOHKVDTNSOEGSKNQDOGGVBGCYBTWMJAIKMRZRRXJSYARBSCNRM");

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
    msg.setTimeStamp(0.451034998071);
    msg.setSource(33935U);
    msg.setSourceEntity(195U);
    msg.setDestination(15987U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.550000707481;
    msg.lon = 0.589360554831;
    msg.z = 0.222810032987;
    msg.z_units = 113U;
    msg.radius = 0.0161411410885;
    msg.duration = 63276U;
    msg.speed = 0.829081450152;
    msg.speed_units = 158U;
    msg.custom.assign("CWZCFTOSIUGNLLBNGO");

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
    msg.setTimeStamp(0.976228529763);
    msg.setSource(10987U);
    msg.setSourceEntity(117U);
    msg.setDestination(37804U);
    msg.setDestinationEntity(157U);
    msg.timeout = 11825U;
    msg.flags = 167U;
    msg.lat = 0.666206095876;
    msg.lon = 0.161677209417;
    msg.start_z = 0.311504206989;
    msg.start_z_units = 205U;
    msg.end_z = 0.354625117822;
    msg.end_z_units = 216U;
    msg.radius = 0.124491820775;
    msg.speed = 0.347940525606;
    msg.speed_units = 172U;
    msg.custom.assign("BTSMQQDROZEVBSACOMNLVFTZUXUVPBJZKJYMGWGXAPWHORTEJDRJQKXKVIXCTDEHGYJSHHEAAJXNLSVCWUSZZIUIUBHAQIJ");

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
    msg.setTimeStamp(0.334969153834);
    msg.setSource(52717U);
    msg.setSourceEntity(203U);
    msg.setDestination(43655U);
    msg.setDestinationEntity(241U);
    msg.timeout = 5577U;
    msg.flags = 215U;
    msg.lat = 0.0540241439674;
    msg.lon = 0.957117437886;
    msg.start_z = 0.330662151822;
    msg.start_z_units = 1U;
    msg.end_z = 0.331820965536;
    msg.end_z_units = 24U;
    msg.radius = 0.580208025927;
    msg.speed = 0.782595200471;
    msg.speed_units = 250U;
    msg.custom.assign("QGLXABLQTEGYNYXGOIBVKDDZSUSDWPSPVUZCKLFTOOMFLBNOURZCODGNOZKQFQQWWWOJEC");

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
    msg.setTimeStamp(0.367908943998);
    msg.setSource(50972U);
    msg.setSourceEntity(43U);
    msg.setDestination(21184U);
    msg.setDestinationEntity(61U);
    msg.timeout = 52335U;
    msg.flags = 207U;
    msg.lat = 0.135647958665;
    msg.lon = 0.456848584612;
    msg.start_z = 0.309987691468;
    msg.start_z_units = 112U;
    msg.end_z = 0.82862920935;
    msg.end_z_units = 144U;
    msg.radius = 0.875084660439;
    msg.speed = 0.991435541872;
    msg.speed_units = 106U;
    msg.custom.assign("XGJDJLYZRNBJKHPAWNIULWSVPOCPFQDSJTVRPHHAKZXOJGZKBVXTWQCMCKQBOXHCQLUOZBFFZKCWVFA");

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
    msg.setTimeStamp(0.532516370688);
    msg.setSource(50215U);
    msg.setSourceEntity(211U);
    msg.setDestination(24534U);
    msg.setDestinationEntity(7U);
    msg.timeout = 35880U;
    msg.lat = 0.365118583579;
    msg.lon = 0.947413592701;
    msg.z = 0.024554133272;
    msg.z_units = 57U;
    msg.speed = 0.83686832894;
    msg.speed_units = 67U;
    msg.custom.assign("JKWSPATZDDTFQYXESFKCEAATDKMHYWNRXEJNQDUXSYUFA");

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
    msg.setTimeStamp(0.679345228185);
    msg.setSource(44224U);
    msg.setSourceEntity(23U);
    msg.setDestination(2098U);
    msg.setDestinationEntity(180U);
    msg.timeout = 61516U;
    msg.lat = 0.328342272879;
    msg.lon = 0.225281793151;
    msg.z = 0.545388707225;
    msg.z_units = 210U;
    msg.speed = 0.509641775637;
    msg.speed_units = 151U;
    msg.custom.assign("QEAGJKPTNYMAHMZDZKANYDHLHZYKMXRXENIISUPZINIYJUEREBCNWJSCOUQPQCZFZEWSZGBFKVXWYMZPCFATVLBRIJQUVSSIRMUCCCGUELLHAWJHVTRJVUE");

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
    msg.setTimeStamp(0.824030839269);
    msg.setSource(29749U);
    msg.setSourceEntity(129U);
    msg.setDestination(3248U);
    msg.setDestinationEntity(73U);
    msg.timeout = 32397U;
    msg.lat = 0.120131975463;
    msg.lon = 0.268930567619;
    msg.z = 0.335326813383;
    msg.z_units = 239U;
    msg.speed = 0.478948594096;
    msg.speed_units = 234U;
    msg.custom.assign("EEXAVJHPKZGRDKZIJSDQAJHABRHXOOMWUSGPZUNKYOCMTCESPOSIMNTOVNXVKKASHXLLYYDQZIYIEMHVBYUNHXAFBEPFRTJYMYGEXLLWAKVZBEWQYITBODNNBFUFQFGXWDRLGHHETZOWPGNZGSEBYDOPCDZLCIMDQONWC");

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
    msg.setTimeStamp(0.870651293271);
    msg.setSource(39207U);
    msg.setSourceEntity(235U);
    msg.setDestination(31143U);
    msg.setDestinationEntity(18U);
    msg.x = 0.892188596017;
    msg.y = 0.693706922284;
    msg.z = 0.740497364339;
    msg.t = 0.176024687541;

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
    msg.setTimeStamp(0.951163171672);
    msg.setSource(50964U);
    msg.setSourceEntity(140U);
    msg.setDestination(24734U);
    msg.setDestinationEntity(181U);
    msg.x = 0.274103804918;
    msg.y = 0.44821391428;
    msg.z = 0.684601409208;
    msg.t = 0.2779601097;

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
    msg.setTimeStamp(0.760192061827);
    msg.setSource(12435U);
    msg.setSourceEntity(180U);
    msg.setDestination(43509U);
    msg.setDestinationEntity(34U);
    msg.x = 0.980334879868;
    msg.y = 0.848738044129;
    msg.z = 0.716630238463;
    msg.t = 0.284432199125;

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
    msg.setTimeStamp(0.789260212209);
    msg.setSource(31285U);
    msg.setSourceEntity(1U);
    msg.setDestination(29907U);
    msg.setDestinationEntity(6U);
    msg.timeout = 51905U;
    msg.name.assign("QUXGUZLVMDGCDPFVVSRJBGJNNKEAJOWPHIUGPGBWGZPTBWLJATZVEHRXVXRMSASCPQVPWXQCEDFJKIKFNRMDECCRIABUNLIVCFTMOUAXYGTEZKADURTLUOVMWXMCRPBQEEFIDTHDZHAZZAPHJIKHJOQEXACB");
    msg.custom.assign("WBLZENQSGIGYDKROCTJBWSAVKEGFMVQWZURQPCSGWENNEIWMAPHYAYUERPHGGXPBYFOHKJAHXDTSTLM");

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
    msg.setTimeStamp(0.974458912785);
    msg.setSource(51337U);
    msg.setSourceEntity(3U);
    msg.setDestination(32238U);
    msg.setDestinationEntity(208U);
    msg.timeout = 41080U;
    msg.name.assign("HTKJSUINIRKBDKILJPSYANKVCHZJJXXWHIFELLBGPZAWQSPSOQSYCOMRSQMOIUCVXYBNPYXDDFOCZALEWRWOQEMHHFGPFLGSGQGNNBXHLIWWGHBYIAPBCMDJMZMPXYXIARVVPDKTURUXAZKOMQFVUUQIBMZZASZOFVDHDZYKFBIHBKFVERROLAYZKDAUDDYWNJWEFCHTXTUPELV");
    msg.custom.assign("PTSSZBFYLUGCJOREJYBGAKFRLYUGVEWDMNNVKDWVBWDTAUVCQIOOGZNIAQWLKPEGYGIFUAWIFOOSKXBVMCPQKTPXLVFUQXMSQGLGKUFSDRZAYWIMJFHHHCJPQVYNMNBSIPQWGODLZCARDEEIKSDEJERJSHC");

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
    msg.setTimeStamp(0.909258447638);
    msg.setSource(2045U);
    msg.setSourceEntity(250U);
    msg.setDestination(38585U);
    msg.setDestinationEntity(27U);
    msg.timeout = 6894U;
    msg.name.assign("VDMNDXQFRAHHLTMSRSIWPNYTLWOSMVTNJZUIKDACVIOWHJFIFKTZEGQLDNGUAAOYZBGEBNMOXMUAQDAWJFZFHTQKFVNFTDZCHXCECHMPLUIWSJVNE");
    msg.custom.assign("RERISLUGCVFZPBNIXADHMDWKIQPTYBVJNPQXDMOXDBYAKPUZJEUEQJKPFATMOIVNHBUFQRMBOAVWTVKGLCQOBGYTJKGQCPDOOTFAYHBEHHPFZYINNLIYXSSLPUHMKGEIFVCIXMULXDZSJHKFRUWUNJJQCWRQQEGWNZZYYMTERKMGZXKHJCYGKQIRSZNAPFDZFEAFCLAOAWYAOSMSOTXSLERRGB");

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
    msg.setTimeStamp(0.194789433012);
    msg.setSource(21652U);
    msg.setSourceEntity(111U);
    msg.setDestination(9795U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.47598944633;
    msg.lon = 0.997162442662;
    msg.z = 0.603751247582;
    msg.z_units = 190U;
    msg.speed = 0.850061811456;
    msg.speed_units = 111U;
    msg.start_time = 0.467342092697;
    msg.custom.assign("LMDJXOISLRMESQKAFJYFIVWXDGUELKKYYGNQRBJSNDKFDRXVWAAELWATXKBBOLVVPNROVIXPGITMZLHJKLQTONQXMTSJETVAMVTWZDYHAROFEDVYQETH");

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
    msg.setTimeStamp(0.0969230877527);
    msg.setSource(65228U);
    msg.setSourceEntity(57U);
    msg.setDestination(11848U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.260785891439;
    msg.lon = 0.722307569683;
    msg.z = 0.848688622067;
    msg.z_units = 49U;
    msg.speed = 0.496017495392;
    msg.speed_units = 103U;
    msg.start_time = 0.889999377203;
    msg.custom.assign("YLUPVZRCJLRHPBVWOBRQGEHUJCQPEDPDVJBKOYNAOSLJYXTXUVCCJZPHRJLWZFKAGAFJMMYEWVVEWVNFWZ");

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
    msg.setTimeStamp(0.33344253997);
    msg.setSource(62484U);
    msg.setSourceEntity(117U);
    msg.setDestination(53832U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.658824825921;
    msg.lon = 0.44525623662;
    msg.z = 0.43585639802;
    msg.z_units = 127U;
    msg.speed = 0.884363099424;
    msg.speed_units = 17U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.856752019;
    tmp_msg_0.y = 0.139602083852;
    tmp_msg_0.z = 0.201695563674;
    tmp_msg_0.t = 0.816291273926;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.807420921095;
    msg.custom.assign("QGNQWABEGWKFYCFDNGVXVAUOSAVIYVDCBCECJHLWPQYDOXBVOIKTPNAZNZJTORJMBHNWLSEPZHIFIURMZJLPUPWGEDAUKSYHUTYNGVOXK");

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
    msg.setTimeStamp(0.133837744527);
    msg.setSource(64500U);
    msg.setSourceEntity(185U);
    msg.setDestination(18983U);
    msg.setDestinationEntity(94U);
    msg.vid = 5852U;
    msg.off_x = 0.688229475539;
    msg.off_y = 0.849081180311;
    msg.off_z = 0.974916809556;

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
    msg.setTimeStamp(0.813244548377);
    msg.setSource(32672U);
    msg.setSourceEntity(186U);
    msg.setDestination(19716U);
    msg.setDestinationEntity(205U);
    msg.vid = 29991U;
    msg.off_x = 0.169372965413;
    msg.off_y = 0.520873953267;
    msg.off_z = 0.714934502521;

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
    msg.setTimeStamp(0.445271129898);
    msg.setSource(48330U);
    msg.setSourceEntity(152U);
    msg.setDestination(49027U);
    msg.setDestinationEntity(86U);
    msg.vid = 48777U;
    msg.off_x = 0.861646669518;
    msg.off_y = 0.540050567293;
    msg.off_z = 0.947326189116;

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
    msg.setTimeStamp(0.226984472094);
    msg.setSource(16722U);
    msg.setSourceEntity(78U);
    msg.setDestination(49307U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.456161059587);
    msg.setSource(2502U);
    msg.setSourceEntity(95U);
    msg.setDestination(21440U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.371789432228);
    msg.setSource(22315U);
    msg.setSourceEntity(57U);
    msg.setDestination(10103U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.107908292616);
    msg.setSource(269U);
    msg.setSourceEntity(39U);
    msg.setDestination(7580U);
    msg.setDestinationEntity(65U);
    msg.mid = 35801U;

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
    msg.setTimeStamp(0.876006529052);
    msg.setSource(13463U);
    msg.setSourceEntity(245U);
    msg.setDestination(64354U);
    msg.setDestinationEntity(134U);
    msg.mid = 56513U;

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
    msg.setTimeStamp(0.735054929615);
    msg.setSource(39159U);
    msg.setSourceEntity(110U);
    msg.setDestination(18589U);
    msg.setDestinationEntity(42U);
    msg.mid = 38126U;

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
    msg.setTimeStamp(0.88878497054);
    msg.setSource(29943U);
    msg.setSourceEntity(7U);
    msg.setDestination(30337U);
    msg.setDestinationEntity(152U);
    msg.state = 54U;
    msg.eta = 48852U;
    msg.info.assign("QJWAZMTREQMGHWLBOHYDUWHWJMFBMIMMSPRECKXBXUGEOHDLNQPXWUZSHGLIKCVMGFUSFOYCITIQTGOVCQRWIKKAIRVVLVDQNUGLYWVJNSXHGBJPAPHNAMYLBXJSYFTFNAOXCUKERILSYCRZYWLY");

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
    msg.setTimeStamp(0.368098026191);
    msg.setSource(63198U);
    msg.setSourceEntity(99U);
    msg.setDestination(56754U);
    msg.setDestinationEntity(98U);
    msg.state = 235U;
    msg.eta = 54468U;
    msg.info.assign("QBWKAAAZWDNZMFUUOLCCYPGPSIMLRDBQXRTCPZOSUIZPDQALMQDFXUWTVKJUEOSXAJMSCVZQOJFAYBVBRVFYDLWIGPZYBIRKZLEQBOEEWKGDTMAKL");

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
    msg.setTimeStamp(0.551014653122);
    msg.setSource(4577U);
    msg.setSourceEntity(27U);
    msg.setDestination(37218U);
    msg.setDestinationEntity(191U);
    msg.state = 170U;
    msg.eta = 35591U;
    msg.info.assign("QSDWZMUJETJJOGIDGSYGKCAHXZMUXVDWENXVTXNOUFBIJVSVKOXPTTNQQBPFAZZMOBDNQEIKEFIJORCHSWDSEYCWHRLLLWSHEGBAZKUYNELAMDGJCQWNDRMGAXTKIPRYFUMYIWBKNYWZGQVHJGOSUDBUHMOGFZVKEHCNUJHYIOITRRFFPUJCXPBDLQZMVALVLQFRAEQWRAKLXQPKTFBANYZPSSAXYRCLBTOPBY");

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
    msg.setTimeStamp(0.501151194323);
    msg.setSource(52634U);
    msg.setSourceEntity(195U);
    msg.setDestination(43953U);
    msg.setDestinationEntity(3U);
    msg.system = 6417U;
    msg.duration = 1450U;
    msg.speed = 0.707242231402;
    msg.speed_units = 116U;
    msg.x = 0.394647881623;
    msg.y = 0.0893561955627;
    msg.z = 0.212781577318;
    msg.z_units = 105U;

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
    msg.setTimeStamp(0.700818236047);
    msg.setSource(5069U);
    msg.setSourceEntity(126U);
    msg.setDestination(54999U);
    msg.setDestinationEntity(26U);
    msg.system = 49471U;
    msg.duration = 32548U;
    msg.speed = 0.40029323044;
    msg.speed_units = 214U;
    msg.x = 0.836467628797;
    msg.y = 0.621628839638;
    msg.z = 0.067706757666;
    msg.z_units = 37U;

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
    msg.setTimeStamp(0.832364233647);
    msg.setSource(51328U);
    msg.setSourceEntity(204U);
    msg.setDestination(53199U);
    msg.setDestinationEntity(102U);
    msg.system = 17364U;
    msg.duration = 59672U;
    msg.speed = 0.52365472987;
    msg.speed_units = 208U;
    msg.x = 0.223864035111;
    msg.y = 0.804237819468;
    msg.z = 0.757355684099;
    msg.z_units = 114U;

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
    msg.setTimeStamp(0.198288745376);
    msg.setSource(58209U);
    msg.setSourceEntity(25U);
    msg.setDestination(490U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.275483084451;
    msg.lon = 0.341938825915;
    msg.speed = 0.246789848796;
    msg.speed_units = 158U;
    msg.duration = 5735U;
    msg.sys_a = 48934U;
    msg.sys_b = 57389U;
    msg.move_threshold = 0.151652513241;

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
    msg.setTimeStamp(0.548582369615);
    msg.setSource(16172U);
    msg.setSourceEntity(147U);
    msg.setDestination(21784U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.920204517074;
    msg.lon = 0.521389271324;
    msg.speed = 0.247854974191;
    msg.speed_units = 250U;
    msg.duration = 13172U;
    msg.sys_a = 17658U;
    msg.sys_b = 35808U;
    msg.move_threshold = 0.258947263705;

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
    msg.setTimeStamp(0.993782028408);
    msg.setSource(36988U);
    msg.setSourceEntity(147U);
    msg.setDestination(61150U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.133491002524;
    msg.lon = 0.900479792064;
    msg.speed = 0.57092694254;
    msg.speed_units = 131U;
    msg.duration = 60642U;
    msg.sys_a = 28904U;
    msg.sys_b = 14703U;
    msg.move_threshold = 0.697026058738;

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
    msg.setTimeStamp(0.830685961704);
    msg.setSource(46312U);
    msg.setSourceEntity(175U);
    msg.setDestination(40348U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.323714560934;
    msg.lon = 0.97265327646;
    msg.z = 0.793725435206;
    msg.z_units = 153U;
    msg.speed = 0.781655701136;
    msg.speed_units = 39U;
    msg.custom.assign("RTFWHQGBSCUWRJBBPMPGMIXMWZOZHLHUMIIGBYKKDZAHXYTXDCEMLBTJSZATSXYNSVUGKLQAVQWGDPPIVVMVFRCITXKFDZDIFRPPTRHZBAVBEULOUGKLLKOPKNFZ");

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
    msg.setTimeStamp(0.954776852249);
    msg.setSource(59691U);
    msg.setSourceEntity(228U);
    msg.setDestination(25233U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.350475997717;
    msg.lon = 0.529148566333;
    msg.z = 0.813219030199;
    msg.z_units = 184U;
    msg.speed = 0.244418655548;
    msg.speed_units = 183U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.481780579507;
    tmp_msg_0.lon = 0.0054882003286;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("UUYNXCWYUONAZHGJKNEFUTJROLATSHGJYGMDQGCFGRQSPEDDSSXSFPJHTPYXHHNMIPDZKOIZQCABJXVHYTJXWXNORRWWEPARLEAIGUYRYKZNFOQRALBMIGNMBWHLUIKDEPICBSVADBAOQVKTYCDTCGQUGCWMPBUJLMVNBWYLOWFAXYPQKXIQTCEKQXSRCOKFMLIWVVZMHQOSEZBZKDTFVTNBFLJGVFRT");

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
    msg.setTimeStamp(0.953084840896);
    msg.setSource(42397U);
    msg.setSourceEntity(35U);
    msg.setDestination(5865U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.105010543532;
    msg.lon = 0.822752773316;
    msg.z = 0.435027971072;
    msg.z_units = 195U;
    msg.speed = 0.604700414266;
    msg.speed_units = 19U;
    msg.custom.assign("XPYZIDWZIHULLCXNKOJYFBEOTQNYVKCLWMLPPEODGGHQBLSTSAQZJETWIIUNHOPFSBIOKFLKTXHXDXCPPKNVWGLZQHWKITMKTYCJVUERHGIRVDJMUFECRMKCTMPWRJBHTDEN");

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
    msg.setTimeStamp(0.657383859502);
    msg.setSource(58265U);
    msg.setSourceEntity(252U);
    msg.setDestination(52495U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.965655026677;
    msg.lon = 0.634205407889;

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
    msg.setTimeStamp(0.46611756029);
    msg.setSource(27657U);
    msg.setSourceEntity(20U);
    msg.setDestination(10568U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.673458933459;
    msg.lon = 0.35462799775;

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
    msg.setTimeStamp(0.339407880067);
    msg.setSource(17801U);
    msg.setSourceEntity(118U);
    msg.setDestination(24086U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.0420544841127;
    msg.lon = 0.640025884905;

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
    msg.setTimeStamp(0.476110922581);
    msg.setSource(64328U);
    msg.setSourceEntity(87U);
    msg.setDestination(31047U);
    msg.setDestinationEntity(163U);
    msg.timeout = 32714U;
    msg.lat = 0.32964390432;
    msg.lon = 0.223644012119;
    msg.z = 0.322854496441;
    msg.z_units = 192U;
    msg.pitch = 0.0812651761407;
    msg.amplitude = 0.00710422631264;
    msg.duration = 12790U;
    msg.speed = 0.709450582011;
    msg.speed_units = 248U;
    msg.radius = 0.841600694525;
    msg.direction = 230U;
    msg.custom.assign("ARPCGMBHSNFSLMRCIPFQRTHESSSBBGEXJDAMPVWVTTISPBDVOZGHOJXVQHEPMHAIMCUFNFV");

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
    msg.setTimeStamp(0.845736503459);
    msg.setSource(27626U);
    msg.setSourceEntity(10U);
    msg.setDestination(9046U);
    msg.setDestinationEntity(227U);
    msg.timeout = 58372U;
    msg.lat = 0.602586250596;
    msg.lon = 0.897072893717;
    msg.z = 0.609360560327;
    msg.z_units = 120U;
    msg.pitch = 0.18473582256;
    msg.amplitude = 0.690545152205;
    msg.duration = 11107U;
    msg.speed = 0.285018585719;
    msg.speed_units = 78U;
    msg.radius = 0.257802807216;
    msg.direction = 241U;
    msg.custom.assign("KVSLYAUPIRYTQJQHGAEMQDRFDKXPZTJUPJZGUKRRILLJQSMOYBLGOHPSEBDLXQMZACJWOSWUDLJWIJTCBVDSCVXOFVBYXXNQJEMVYEDKRKDXSCBRVNZOONADSRINFAAKXTTQBCWGLFJVVHAHXZWUOUDNFMOOESQGRJKEKAYMSHMIQDZIXZXWPPEYVWLZPYNHGFBVHWINRYH");

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
    msg.setTimeStamp(0.268292746992);
    msg.setSource(43814U);
    msg.setSourceEntity(179U);
    msg.setDestination(11139U);
    msg.setDestinationEntity(34U);
    msg.timeout = 35729U;
    msg.lat = 0.540103132051;
    msg.lon = 0.643926744514;
    msg.z = 0.331208068932;
    msg.z_units = 17U;
    msg.pitch = 0.12027356161;
    msg.amplitude = 0.642821667685;
    msg.duration = 38002U;
    msg.speed = 0.425014555383;
    msg.speed_units = 201U;
    msg.radius = 0.298350382239;
    msg.direction = 5U;
    msg.custom.assign("HMCJRVNHZVLCJWEUEGUDDZYKOJDRLZGULHGPKBESSJOACODLMGIQMNWUDGISIVHDTPEXPFQNCLEXNRWWJFRHTUBRMYTCLKTZCBYVRFCUHFUWF");

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
    msg.setTimeStamp(0.826497105966);
    msg.setSource(13871U);
    msg.setSourceEntity(50U);
    msg.setDestination(47568U);
    msg.setDestinationEntity(181U);
    msg.formation_name.assign("DLAYHKZLYELGQPSCFIFASIGJZZTJUEKPPSTFNGUWZSOFIBMIVDZSFBWNUKSYKIMXMXEDVDCRDXTFGIRMEAQJHQRPYRBOAUONVLRQVAXYPIAOGMYOLTJ");
    msg.reference_frame = 116U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 20565U;
    tmp_msg_0.off_x = 0.692506699487;
    tmp_msg_0.off_y = 0.189018930377;
    tmp_msg_0.off_z = 0.535605238801;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("DQYTSOFQFOVEMFRKVZINZDUJDKWHBBJQUPPRNCFNUBUKKJJAWIYIRCVKOICBHLAPJJIFRCXMDUTOQPLRZVPFOPVUCBWYHQJBASGNEFSLDHSOGVSLMMYFLBCKMBFZGDEOYYXTXIMENGYLKJMWNWKMMNIBVTXSEJRSZDQOWEURGZHVYWAZLSCLADETNTXGAAKIEJHPVTIACEKTVHPCGXZURGBQULWWMOCSPQHOXLAR");

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
    msg.setTimeStamp(0.594860042142);
    msg.setSource(37755U);
    msg.setSourceEntity(85U);
    msg.setDestination(49802U);
    msg.setDestinationEntity(98U);
    msg.formation_name.assign("FABBXUNIVFCIOKVLXDQKCHMGGTYXHSDUZLGEKLQZRRJLMFZQBVOEICGHPSBLNTTAJQTJJUNRLDWLBISCYWDFPBODHFWWOGCUBMNRMXYWMOSRKRYMHSOWSHJXJHVYPKAEMODIYHCRUQFQBBYPZCPCNFWGPVRMVQGFIRNUUXLUMAIXAZHPDGIXOTMEBADFEFZTWOGQDVKADNKJSKXCUAPZWJAPKSCEOTYINVKILTZHYWQERSSEZVAXNQZU");
    msg.reference_frame = 179U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 16021U;
    tmp_msg_0.off_x = 0.393727633463;
    tmp_msg_0.off_y = 0.971719434038;
    tmp_msg_0.off_z = 0.570655722544;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("MKOIKGDWDJGKQRLQWUSKVCSHJXPZAELIJLGJOMFTQZBCJDHIHPEPTWKXCVEISWYBZRHVWCIDKRTBXKMENWJYSQTNTEBOSCLQFVLLKLUM");

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
    msg.setTimeStamp(0.309293372865);
    msg.setSource(2518U);
    msg.setSourceEntity(239U);
    msg.setDestination(4770U);
    msg.setDestinationEntity(61U);
    msg.formation_name.assign("RSBTTIQRRJFVJSK");
    msg.reference_frame = 106U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 43181U;
    tmp_msg_0.off_x = 0.762640011673;
    tmp_msg_0.off_y = 0.17739793078;
    tmp_msg_0.off_z = 0.0895884611269;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("TVMCMVHXNNOIQJXYMWQCNLFJOBCUWHBATNHYLKERPKQZBUWBNSCMBVHYQQMLVKSTVAOWUOTUQRSCDSEGIHGRTCPFUBPGPWPIKCQCKWGAYRRSLITXIGXGPBYEAZDHEHEIRZVOPYYZLLXJYDERRAFZLAVFBJXFCUTTSUYKZHEDJMMUVOGFIWNOXGIKOFDOEJJZPRMJP");

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
    msg.setTimeStamp(0.299893600632);
    msg.setSource(32293U);
    msg.setSourceEntity(18U);
    msg.setDestination(20438U);
    msg.setDestinationEntity(248U);
    msg.group_name.assign("VGIGOUJOITUYFVSPZXREMBNDWSHONKSGCAYCQUFHIWXRTZKTHENZLWCDJXZKIMKBMBQEFLCEOETKDAQTJRLDPCXZBCJBGWBQRRYMISAKFTLAMYVHUPHIRZJMGCUSBKDE");
    msg.formation_name.assign("AATDRXEVAHACYZBGWEAKPC");
    msg.plan_id.assign("CLMBTNQGCCGKXPXGWVPNWSTAJXVELQDXLXFMFWUYUPIKEQWOAEZWADCIEFLLRVKYIICJJGLTTMRHMRLHUBDKDOSNMMQYEWPCCPBIUUXVATXJSNAIBFCJMPOZNDKGDHHJQJEUOHYZYFLDAQRVHVUPOZBUNNRBBMGAP");
    msg.description.assign("GHWEDCXZWDADJCVJNUIDYJPDZUGYQAQOETYSNUMWPVTAOCGXWCBDTBHMYBBHGVJZEFIIOOOPIUSZIGKFLTMXQVVFERSLSNJIPLHZTUAJHPUXHGBREJHCIOFRTNIVTOPUSCMROMZXARCTXSTVUBYNOQMCCEWRGYNHLYBMLKNNSBGEJKIKZKCQWMFXLDEGKJPQRFWXLWQAFGLVAYKNMBFZZKEQSKPFDRJIPADYUYNLTVSAFXQRAVMQKWSHLEXZRD");
    msg.leader_speed = 0.228901712526;
    msg.leader_bank_lim = 0.953201954898;
    msg.pos_sim_err_lim = 0.766808426341;
    msg.pos_sim_err_wrn = 0.437498574955;
    msg.pos_sim_err_timeout = 19033U;
    msg.converg_max = 0.871123442417;
    msg.converg_timeout = 25270U;
    msg.comms_timeout = 56380U;
    msg.turb_lim = 0.89152551742;
    msg.custom.assign("CQUZOKIAJMBWHQUBERBYWFSQTLVQCMHGNJDKANKIWZIRXNUSPGTHODREPKLADDZGRJDUWZVPHTBSYNVNFSMNVERAGBFBFXDTZEXCFYQFXLYGJHZOXGHIPLAWGBKZPUCTEHVEVXRCIZLOVAPBVATCNFYSWIFIXOWPJMYFNUZSLSASYGRIDOEDTQETYQSSGDLLM");

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
    msg.setTimeStamp(0.136453918454);
    msg.setSource(19811U);
    msg.setSourceEntity(17U);
    msg.setDestination(7126U);
    msg.setDestinationEntity(55U);
    msg.group_name.assign("OTZJOXDRFLGXKGSMUHZNYWDZVWUPYDHCLVVJFSFMMHPKLGMJOVGQCBXIZJSBSZYGBRX");
    msg.formation_name.assign("QHHVEGDJVLTULGDJSZLKSNMKCLFFKSKYLMWIBOGDCHLBVVXSXMUNWUQKHHBNQZRCOMOHAXRRYQKZVFPGPLXHQYENPAJNNPCYYAGKXWNJPTBQUXGSRWWXMOIP");
    msg.plan_id.assign("QCZMGDGMKENGOVLFEGXNMWNZTJGTGWSDTKNSDTJMNPWPXXEIZKAFECRSJWLRHVITVFW");
    msg.description.assign("YVMCEOGISNJRIUBWJZQNVRD");
    msg.leader_speed = 0.22759099643;
    msg.leader_bank_lim = 0.481876747465;
    msg.pos_sim_err_lim = 0.199980215738;
    msg.pos_sim_err_wrn = 0.435056517874;
    msg.pos_sim_err_timeout = 24565U;
    msg.converg_max = 0.683395224019;
    msg.converg_timeout = 37953U;
    msg.comms_timeout = 53258U;
    msg.turb_lim = 0.483175170434;
    msg.custom.assign("HHZNMDFUHXIITQLBHZTEIIGVKFFTCRBSUFXMTFJFBWKRQIVYZCEWNRAUAZJFMMDZGPLVMJAU");

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
    msg.setTimeStamp(0.154150043439);
    msg.setSource(14691U);
    msg.setSourceEntity(148U);
    msg.setDestination(27750U);
    msg.setDestinationEntity(67U);
    msg.group_name.assign("IZMFAYJSOKXLOPCMQYJCRGPKZZZFCFWCBTGODSIFHUCDVCEBLBGXXYAMXKIKUHNTTEFAKNLMNLOOLDSTIJSVARNJKPHWBVJIUEXDJXZPAIFNEOCPEETTCWLIKPEKFLBSYQTPMBRAUMNIRZZQJUAYRSNDPQSWRMNZQPLQQVMNBTHWVGCWRQSRHHYDBWHUIAKJGHVNIQYMGYWZXPFSKXOUBXO");
    msg.formation_name.assign("ABZOQZWYPNDZLZRFZWAXOUCCDBCAKDTLPXFBQBWYETAAQKRWFLESCNQZBNUZGUSTJLLAVJJYGGDSOCQEXGGO");
    msg.plan_id.assign("YVNWTUEJIJTMJAQIDRIHQUKBIBVGBVFGWIZRFKTWXKBGVSPZVBNBDH");
    msg.description.assign("WMTMWAFOPNKISWMRMKWDYXJUXUCSKRAZZDUUKXLGLETVYUWJRKVFRBGLZDPQPJGQHBTVPQDQHDVOOWNFGKOKXYYYALABNMCHEK");
    msg.leader_speed = 0.36419867626;
    msg.leader_bank_lim = 0.888876366925;
    msg.pos_sim_err_lim = 0.592863883823;
    msg.pos_sim_err_wrn = 0.573745681804;
    msg.pos_sim_err_timeout = 36342U;
    msg.converg_max = 0.446172559435;
    msg.converg_timeout = 3180U;
    msg.comms_timeout = 32216U;
    msg.turb_lim = 0.541823495552;
    msg.custom.assign("WPCEMNANLRXCHUYCZPJYRMLYUWMKXHUISMMGRTWDJUQKXDBIZQPJVQRPNDAERXZSZCFLISTXJRUSZYAISYJKAKBCFITABDFFXLJGOGZJDPBRDEMHGNTKFQRZPJVTWNNOAUGVTESBLVQQQBFIVDUSKVWHMRBCHGKXCJOUZOVQDXVXTARIFBWMKGGTTYOCEENOHWEYFALHGBDCNKOFQLOTYEKXWLVHHCIPHUN");

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
    msg.setTimeStamp(0.579857369648);
    msg.setSource(11025U);
    msg.setSourceEntity(74U);
    msg.setDestination(36349U);
    msg.setDestinationEntity(234U);
    msg.control_src = 42435U;
    msg.control_ent = 88U;
    msg.timeout = 0.830992255115;
    msg.loiter_radius = 0.973426497298;
    msg.altitude_interval = 0.503919700195;

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
    msg.setTimeStamp(0.367581481004);
    msg.setSource(12678U);
    msg.setSourceEntity(196U);
    msg.setDestination(16466U);
    msg.setDestinationEntity(30U);
    msg.control_src = 28025U;
    msg.control_ent = 116U;
    msg.timeout = 0.17491472145;
    msg.loiter_radius = 0.222464503887;
    msg.altitude_interval = 0.933018316559;

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
    msg.setTimeStamp(0.234640546765);
    msg.setSource(47755U);
    msg.setSourceEntity(116U);
    msg.setDestination(17182U);
    msg.setDestinationEntity(249U);
    msg.control_src = 19414U;
    msg.control_ent = 161U;
    msg.timeout = 0.548438643669;
    msg.loiter_radius = 0.140746541738;
    msg.altitude_interval = 0.281200236513;

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
    msg.setTimeStamp(0.272149211396);
    msg.setSource(39342U);
    msg.setSourceEntity(246U);
    msg.setDestination(16100U);
    msg.setDestinationEntity(203U);
    msg.flags = 15U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.710749751239;
    tmp_msg_0.speed_units = 222U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.543037477224;
    tmp_msg_1.z_units = 98U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.738179165558;
    msg.lon = 0.190840772;
    msg.radius = 0.311349154255;

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
    msg.setTimeStamp(0.987472757328);
    msg.setSource(46255U);
    msg.setSourceEntity(199U);
    msg.setDestination(33926U);
    msg.setDestinationEntity(8U);
    msg.flags = 254U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.39333023403;
    tmp_msg_0.speed_units = 200U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.21876240585;
    tmp_msg_1.z_units = 185U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.206008457672;
    msg.lon = 0.0922570666166;
    msg.radius = 0.828026128625;

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
    msg.setTimeStamp(0.457204980144);
    msg.setSource(30315U);
    msg.setSourceEntity(163U);
    msg.setDestination(57763U);
    msg.setDestinationEntity(16U);
    msg.flags = 213U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.295270730984;
    tmp_msg_0.speed_units = 151U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0561528412057;
    tmp_msg_1.z_units = 184U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.22916217441;
    msg.lon = 0.470805873379;
    msg.radius = 0.747407707132;

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
    msg.setTimeStamp(0.328273956577);
    msg.setSource(57260U);
    msg.setSourceEntity(110U);
    msg.setDestination(22216U);
    msg.setDestinationEntity(172U);
    msg.control_src = 64947U;
    msg.control_ent = 60U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 131U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.684371649309;
    tmp_tmp_msg_0_0.speed_units = 161U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.521064598858;
    tmp_tmp_msg_0_1.z_units = 252U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0211299490617;
    tmp_msg_0.lon = 0.67472878185;
    tmp_msg_0.radius = 0.702250975548;
    msg.reference.set(tmp_msg_0);
    msg.state = 56U;
    msg.proximity = 180U;

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
    msg.setTimeStamp(0.775686447142);
    msg.setSource(26187U);
    msg.setSourceEntity(223U);
    msg.setDestination(37982U);
    msg.setDestinationEntity(116U);
    msg.control_src = 29273U;
    msg.control_ent = 80U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 234U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.734978217675;
    tmp_tmp_msg_0_0.speed_units = 126U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.346011387788;
    tmp_tmp_msg_0_1.z_units = 180U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.267762637659;
    tmp_msg_0.lon = 0.51237796764;
    tmp_msg_0.radius = 0.896470752083;
    msg.reference.set(tmp_msg_0);
    msg.state = 22U;
    msg.proximity = 169U;

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
    msg.setTimeStamp(0.466360455091);
    msg.setSource(18555U);
    msg.setSourceEntity(130U);
    msg.setDestination(9453U);
    msg.setDestinationEntity(176U);
    msg.control_src = 39682U;
    msg.control_ent = 143U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 6U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.266467185602;
    tmp_tmp_msg_0_0.speed_units = 187U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.66193954499;
    tmp_tmp_msg_0_1.z_units = 211U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.672941115455;
    tmp_msg_0.lon = 0.347856945858;
    tmp_msg_0.radius = 0.522163103118;
    msg.reference.set(tmp_msg_0);
    msg.state = 137U;
    msg.proximity = 218U;

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
    msg.setTimeStamp(0.802686533303);
    msg.setSource(10935U);
    msg.setSourceEntity(196U);
    msg.setDestination(2190U);
    msg.setDestinationEntity(186U);
    msg.ax_cmd = 0.696117570001;
    msg.ay_cmd = 0.660342574709;
    msg.az_cmd = 0.318471200655;
    msg.ax_des = 0.241175520306;
    msg.ay_des = 0.0972757245331;
    msg.az_des = 0.0379176991434;
    msg.virt_err_x = 0.167305849218;
    msg.virt_err_y = 0.456879478332;
    msg.virt_err_z = 0.907208118069;
    msg.surf_fdbk_x = 0.157915682849;
    msg.surf_fdbk_y = 0.520928581378;
    msg.surf_fdbk_z = 0.664525281629;
    msg.surf_unkn_x = 0.98067903233;
    msg.surf_unkn_y = 0.989616889713;
    msg.surf_unkn_z = 0.973385239197;
    msg.ss_x = 0.61160052827;
    msg.ss_y = 0.322260906332;
    msg.ss_z = 0.18844696881;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("IOUJGZCLAQVKTIWLHODBXLYKWXSJPWKTFFACCKODWFEXPBPVTAYWFNAXHCVMINEARXSS");
    tmp_msg_0.dist = 0.621102320219;
    tmp_msg_0.err = 0.851912798735;
    tmp_msg_0.ctrl_imp = 0.607229883042;
    tmp_msg_0.rel_dir_x = 0.425301918912;
    tmp_msg_0.rel_dir_y = 0.46863552644;
    tmp_msg_0.rel_dir_z = 0.209200690142;
    tmp_msg_0.err_x = 0.923326494729;
    tmp_msg_0.err_y = 0.466721750446;
    tmp_msg_0.err_z = 0.541235807424;
    tmp_msg_0.rf_err_x = 0.324674994672;
    tmp_msg_0.rf_err_y = 0.00950747759566;
    tmp_msg_0.rf_err_z = 0.401332776837;
    tmp_msg_0.rf_err_vx = 0.774499122456;
    tmp_msg_0.rf_err_vy = 0.0176619434938;
    tmp_msg_0.rf_err_vz = 0.634989798495;
    tmp_msg_0.ss_x = 0.294507385151;
    tmp_msg_0.ss_y = 0.899404306518;
    tmp_msg_0.ss_z = 0.694257419665;
    tmp_msg_0.virt_err_x = 0.272922621547;
    tmp_msg_0.virt_err_y = 0.36898921888;
    tmp_msg_0.virt_err_z = 0.864342103916;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.154375907255);
    msg.setSource(20310U);
    msg.setSourceEntity(28U);
    msg.setDestination(60720U);
    msg.setDestinationEntity(14U);
    msg.ax_cmd = 0.0928502764454;
    msg.ay_cmd = 0.301013965764;
    msg.az_cmd = 0.86081780391;
    msg.ax_des = 0.112651649368;
    msg.ay_des = 0.960937262861;
    msg.az_des = 0.465382844375;
    msg.virt_err_x = 0.915701385667;
    msg.virt_err_y = 0.855698576844;
    msg.virt_err_z = 0.648216096124;
    msg.surf_fdbk_x = 0.897919718621;
    msg.surf_fdbk_y = 0.00912107594265;
    msg.surf_fdbk_z = 0.708003105899;
    msg.surf_unkn_x = 0.589862286848;
    msg.surf_unkn_y = 0.117777290821;
    msg.surf_unkn_z = 0.936701260336;
    msg.ss_x = 0.996425847555;
    msg.ss_y = 0.429471218335;
    msg.ss_z = 0.189124665649;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("AJTGDIPXIXOFPGFSOPBWUSZNCRWGCOIPJKQOSRFMIPJUNILGHBGMHVEOVMGLBUYQTYFRBWUVHWNEIJEUKIJZCBFORMRWRAUESCNKBEBSVHKXDUTELYTDIQCPZKQERDVXPJWNNQJNKWEOTTGVSW");
    tmp_msg_0.dist = 0.767228358623;
    tmp_msg_0.err = 0.162308648854;
    tmp_msg_0.ctrl_imp = 0.276568449022;
    tmp_msg_0.rel_dir_x = 0.351325478621;
    tmp_msg_0.rel_dir_y = 0.380420401367;
    tmp_msg_0.rel_dir_z = 0.859047467206;
    tmp_msg_0.err_x = 0.6916491693;
    tmp_msg_0.err_y = 0.245816427499;
    tmp_msg_0.err_z = 0.0748763085295;
    tmp_msg_0.rf_err_x = 0.300906384392;
    tmp_msg_0.rf_err_y = 0.547001155912;
    tmp_msg_0.rf_err_z = 0.459714212012;
    tmp_msg_0.rf_err_vx = 0.468557623291;
    tmp_msg_0.rf_err_vy = 0.502445910849;
    tmp_msg_0.rf_err_vz = 0.285835660282;
    tmp_msg_0.ss_x = 0.36969530338;
    tmp_msg_0.ss_y = 0.337022220482;
    tmp_msg_0.ss_z = 0.691988089966;
    tmp_msg_0.virt_err_x = 0.719313507239;
    tmp_msg_0.virt_err_y = 0.26377381377;
    tmp_msg_0.virt_err_z = 0.845656526594;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.345122261987);
    msg.setSource(142U);
    msg.setSourceEntity(233U);
    msg.setDestination(39040U);
    msg.setDestinationEntity(81U);
    msg.ax_cmd = 0.474272528582;
    msg.ay_cmd = 0.388658957694;
    msg.az_cmd = 0.212852510788;
    msg.ax_des = 0.691554899719;
    msg.ay_des = 0.680074445841;
    msg.az_des = 0.0963028728333;
    msg.virt_err_x = 0.331302168917;
    msg.virt_err_y = 0.615581003508;
    msg.virt_err_z = 0.689805903635;
    msg.surf_fdbk_x = 0.841027346921;
    msg.surf_fdbk_y = 0.129823046691;
    msg.surf_fdbk_z = 0.926920998751;
    msg.surf_unkn_x = 0.483416317302;
    msg.surf_unkn_y = 0.464529341183;
    msg.surf_unkn_z = 0.429608880884;
    msg.ss_x = 0.367372951426;
    msg.ss_y = 0.960092928455;
    msg.ss_z = 0.658212950964;

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
    msg.setTimeStamp(0.999047243809);
    msg.setSource(18360U);
    msg.setSourceEntity(198U);
    msg.setDestination(6056U);
    msg.setDestinationEntity(169U);
    msg.s_id.assign("UQYPOYNDEJODAVWSTOFHJFTBHSGRMLRXDSMHLOZVBVFTUQBLRNZYJILCVBKDYWOSDXDFWVAKMFZUUZEPALUTVSQQILLTDDMRVDRUBBHPNJIFIHXOCKMUPZXWLAMKYTESZCZAVENCPAOGNEONATGLMWAJQSQFWJQKHWUJHGCRSOJCXXXYBFQTRVZNNINEUFCPJMGLGY");
    msg.dist = 0.0965592719195;
    msg.err = 0.699514264919;
    msg.ctrl_imp = 0.734652921849;
    msg.rel_dir_x = 0.977899317083;
    msg.rel_dir_y = 0.989037930675;
    msg.rel_dir_z = 0.566693586165;
    msg.err_x = 0.344153348262;
    msg.err_y = 0.540563539352;
    msg.err_z = 0.799509902055;
    msg.rf_err_x = 0.649927136599;
    msg.rf_err_y = 0.463218264357;
    msg.rf_err_z = 0.147966402378;
    msg.rf_err_vx = 0.0821786632609;
    msg.rf_err_vy = 0.169173416651;
    msg.rf_err_vz = 0.714100564322;
    msg.ss_x = 0.45217798504;
    msg.ss_y = 0.488012735833;
    msg.ss_z = 0.779301219158;
    msg.virt_err_x = 0.545678171837;
    msg.virt_err_y = 0.833369776583;
    msg.virt_err_z = 0.462921849811;

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
    msg.setTimeStamp(0.159487679282);
    msg.setSource(29849U);
    msg.setSourceEntity(72U);
    msg.setDestination(55833U);
    msg.setDestinationEntity(59U);
    msg.s_id.assign("RXKCWJILTSGBZJBGASFLLVMGJHQIXKQCIRSRPRIZXZQFNRAYNMJMKAYYHPUQYGWMOSTABWUABVZOHTOZKTSXOUHFUPRPTQRWIWCNPVXVVABUS");
    msg.dist = 0.835691949761;
    msg.err = 0.378834882419;
    msg.ctrl_imp = 0.925378318746;
    msg.rel_dir_x = 0.484372937895;
    msg.rel_dir_y = 0.992120138731;
    msg.rel_dir_z = 0.412059916644;
    msg.err_x = 0.165920333958;
    msg.err_y = 0.820800328771;
    msg.err_z = 0.161334656894;
    msg.rf_err_x = 0.967666787867;
    msg.rf_err_y = 0.192616121245;
    msg.rf_err_z = 0.912971403674;
    msg.rf_err_vx = 0.771585733122;
    msg.rf_err_vy = 0.327577210887;
    msg.rf_err_vz = 0.279191965798;
    msg.ss_x = 0.229085085726;
    msg.ss_y = 0.880679160592;
    msg.ss_z = 0.784814547202;
    msg.virt_err_x = 0.101215027487;
    msg.virt_err_y = 0.0689981860551;
    msg.virt_err_z = 0.247477916217;

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
    msg.setTimeStamp(0.367880312559);
    msg.setSource(35240U);
    msg.setSourceEntity(43U);
    msg.setDestination(46613U);
    msg.setDestinationEntity(35U);
    msg.s_id.assign("QTJONQNRSTUGWLQZBBWORXYEMEMYOXNBRVAVLOFLGMVFPTIETIPYKUQIFVDAYODRCLYWKHPUEUOQCNZZCLRHUFNIANVDPDFNXFMRQTSEH");
    msg.dist = 0.364597604778;
    msg.err = 0.460002176719;
    msg.ctrl_imp = 0.824313718214;
    msg.rel_dir_x = 0.50867940149;
    msg.rel_dir_y = 0.710464402935;
    msg.rel_dir_z = 0.935093395785;
    msg.err_x = 0.0477591139036;
    msg.err_y = 0.274962369423;
    msg.err_z = 0.241503425127;
    msg.rf_err_x = 0.0399355573314;
    msg.rf_err_y = 0.472088660507;
    msg.rf_err_z = 0.181553791687;
    msg.rf_err_vx = 0.559034414718;
    msg.rf_err_vy = 0.627750509101;
    msg.rf_err_vz = 0.108791962619;
    msg.ss_x = 0.796784544624;
    msg.ss_y = 0.309136364841;
    msg.ss_z = 0.990215635442;
    msg.virt_err_x = 0.847005620929;
    msg.virt_err_y = 0.447870169065;
    msg.virt_err_z = 0.683076908711;

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
    msg.setTimeStamp(0.0629143796481);
    msg.setSource(62921U);
    msg.setSourceEntity(37U);
    msg.setDestination(26072U);
    msg.setDestinationEntity(11U);
    msg.timeout = 1746U;
    msg.rpm = 0.197844238391;
    msg.direction = 97U;
    msg.custom.assign("FHEOVRYZHYLSMYDSPEWKJJWXSMVHL");

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
    msg.setTimeStamp(0.958390253291);
    msg.setSource(44246U);
    msg.setSourceEntity(218U);
    msg.setDestination(44845U);
    msg.setDestinationEntity(240U);
    msg.timeout = 2991U;
    msg.rpm = 0.204181678827;
    msg.direction = 120U;
    msg.custom.assign("SULLQXUNMVFKWSZVEHVGZDPFOOAPRRRXTIGOGHXTUKCETNBTXHMWLUWSTMZLWAOAVCDCJBHQYDMIMQHVTUZQBFBUKXVICLRNSHBYQGJLJPYNFPJBIEWUIC");

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
    msg.setTimeStamp(0.38265932628);
    msg.setSource(10858U);
    msg.setSourceEntity(250U);
    msg.setDestination(592U);
    msg.setDestinationEntity(76U);
    msg.timeout = 53615U;
    msg.rpm = 0.065386376137;
    msg.direction = 224U;
    msg.custom.assign("REEFRLTQCKSOULVPEBXUDVKOGPBWFQUNIKNVOPIBHERHLAAPVLAYTXOYQILBJSWBDISEURNCWWWFUADGBKWZSZCFAQHHRCFAXPFOHETTCEESJFNSNNOILWCXVXXKPPINZJQGJIXDZGCHPUJYYAYOZUKJOUDMBRLKPXYNYS");

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
    msg.setTimeStamp(0.699508838888);
    msg.setSource(17789U);
    msg.setSourceEntity(76U);
    msg.setDestination(37002U);
    msg.setDestinationEntity(102U);
    msg.formation_name.assign("VQEYHQGPTMUDIEHQNIOMBEDPXMKSJNNDJTAVVHQXMFKJSU");
    msg.type = 119U;
    msg.op = 169U;
    msg.group_name.assign("ZUUCWLWPZNGRZQIZBFSCAWTTEZTJWPYDGFRUMQLJTXHSJGSNFNAJTZZQYRAUMBCAOVFPSXMOOUSRVOEEJWNFCDDUKYIJVUQYUXLDQKPCRJSPOHODTHXCYCNKPGTQYJCQQBNVWTVHRVXHYGBOKNRSGHKEPELZKIPRBSVGAXRAITLMQLNGTWFMLBVZMJDYXKMSHEFAZNYKYIIWWAKOMPIBEGRFXHLHUFBCMEWDGIEDAIDBNDIQEPJLVOLVKHX");
    msg.plan_id.assign("SFAEEXWXYWKTDXSXGWRBFEFYTBPXCSNSRJCOTRAQMBFKRUTLLQJZLPNMYJBOCVZIKUEMCUGMHCDDKDUEEFKKIINOAWLQJZADNAMCPMIMUKOCYAPXXWLLCVTFMFPYZVBILHFVGACHVSZJPOLVBCZDLGGJWVQSDVVJQOSEZQGIUBYSHDSOWIUIXAJHHGHXMEUWMOGITDRURNREQYGSKNZOKWIPX");
    msg.description.assign("MWRRWCQFDHZOYQEYFAPSMMYGTSAXLYZZWZFWVIVVPGBCLOGJUCANNTCMUOWPYZBURLKVDXPNNXHUPDOACDVNSJORZIUBINKKOJAQLXR");
    msg.reference_frame = 147U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 19427U;
    tmp_msg_0.off_x = 0.391492972845;
    tmp_msg_0.off_y = 0.288885837965;
    tmp_msg_0.off_z = 0.898206213587;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.441700303054;
    msg.leader_speed_min = 0.184635879988;
    msg.leader_speed_max = 0.236435622304;
    msg.leader_alt_min = 0.492608257397;
    msg.leader_alt_max = 0.684966847928;
    msg.pos_sim_err_lim = 0.191251359258;
    msg.pos_sim_err_wrn = 0.625934537909;
    msg.pos_sim_err_timeout = 11711U;
    msg.converg_max = 0.534819503062;
    msg.converg_timeout = 46358U;
    msg.comms_timeout = 4057U;
    msg.turb_lim = 0.929205277322;
    msg.custom.assign("MWZQQSJKAEDWLVPPWNSHZNVICOVTNRRPXZXBPRKOKFCOUBGFVFUSIU");

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
    msg.setTimeStamp(0.392445377433);
    msg.setSource(25344U);
    msg.setSourceEntity(103U);
    msg.setDestination(24882U);
    msg.setDestinationEntity(212U);
    msg.formation_name.assign("RHBHFCJQPXNDBNMGTYJOSOWCDSPNPYDQKPDFMMYWASPSJTDUOJBTJEYYEZUCHAMETGIVZSFIGQDQDLMSNIDHIRNSBJWKLBUBBWVQLAOQYTSVXXEEPGVZVFESQAFTBTGRQXLIZJR");
    msg.type = 49U;
    msg.op = 53U;
    msg.group_name.assign("YMLPFSXSDNEWTVEWOIFXCNEQUNLMURTKYWRISLCUDFJGBTXPVOGZVZJRCGJYVWGNUKEHQWMDHLTHFDSGX");
    msg.plan_id.assign("TCDUYKJGRKAQPAULJOFCRKYTHBDTFKDVWHWIQVWWXWMABJHQKPXHZXSOAITNALDTQJSIGPPNPLAWZHZIGZUINYSZVVYACFSGMUYEVDSKBSLNVGWTSKUYOPBYIQEJJTCTETLDOUMDFETVXKACENAXZBLKPHXEMUQEGLZBJNCJOEZNKGNWLHBLEOXVYNSBAIMCMPYFGGRWRRHFLRNQUJPRSOZB");
    msg.description.assign("QYPJQCBENYNOLDFKLCMVXOWSVUXPFKUXMZCNUTLGPZAMERLYUDWVAYVDJZYQLHKDMRSRVJAVMYDHBTVLSOENUYZUSGGUOCAZGEFOZUNZHIJFRJJDOCHNBGWTHKKMKVWRAUCCOGBJNCWBGWPKQTBMSPIGRQLTWWTVEPVBTRWKFRAUHIJPCAIFMPOXSHFQXEKXLNQYLSQNDAMWAISRRPATICTJXQDXHBYE");
    msg.reference_frame = 199U;
    msg.leader_bank_lim = 0.857310410521;
    msg.leader_speed_min = 0.403974751135;
    msg.leader_speed_max = 0.32316644279;
    msg.leader_alt_min = 0.893496852259;
    msg.leader_alt_max = 0.259127030682;
    msg.pos_sim_err_lim = 0.215016648037;
    msg.pos_sim_err_wrn = 0.274070581082;
    msg.pos_sim_err_timeout = 58612U;
    msg.converg_max = 0.284025036412;
    msg.converg_timeout = 52047U;
    msg.comms_timeout = 41404U;
    msg.turb_lim = 0.370618235148;
    msg.custom.assign("QEAKNNDZRCMPHWNGTYYKLFVNXGKEZTRBISMHSHGIBVRDWVCAGAVRGBH");

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
    msg.setTimeStamp(0.908211838334);
    msg.setSource(16321U);
    msg.setSourceEntity(49U);
    msg.setDestination(39706U);
    msg.setDestinationEntity(207U);
    msg.formation_name.assign("DQTNLRMSXGEBHISGSLCRVPYFBYQQDDNVHGFBCGWRBMVIAGLKTWDVXQ");
    msg.type = 34U;
    msg.op = 247U;
    msg.group_name.assign("NAJJUDBJMDMSOLLZRDSTNDFLZBKIYBVVPGHACBUMACLXESBYFJCXKKPPUXNEYMYKIGYYWSHNPRWVETWJHEYFFXOPHAAQXHQRPYMSGLKGJ");
    msg.plan_id.assign("ETERGNDPVNCGUYUWYCNYFXMJKBQZTXTMBPFYMAUNLHXFWCKCJQHVSMWHDVFSECLGCIDUIGLLDDNYWJCUEKFMIFLHKCNOVVER");
    msg.description.assign("BDYYYSDBJHPWVIKVUMSLFZGOZDVXHENHXMGRIRSSDQPUJLQUGNNZPKZQRWBHWJQLWHTBYJLCZTFNNTNRHDBAVSACNARYGSCLORAVNRJRQYPEXBCMATPTOBGMTZJPQCVWXDOQXWFAMPPBGAKYGIDUJJXSIVURVUWDFLCEAEQJIJQFCZXKKXEQHVYMZBTBYPNPWFKEEHYOM");
    msg.reference_frame = 76U;
    msg.leader_bank_lim = 0.980262058151;
    msg.leader_speed_min = 0.915934160487;
    msg.leader_speed_max = 0.497353562427;
    msg.leader_alt_min = 0.713892489961;
    msg.leader_alt_max = 0.819130973574;
    msg.pos_sim_err_lim = 0.526348707891;
    msg.pos_sim_err_wrn = 0.289171265816;
    msg.pos_sim_err_timeout = 21761U;
    msg.converg_max = 0.365406787771;
    msg.converg_timeout = 26660U;
    msg.comms_timeout = 2297U;
    msg.turb_lim = 0.880879475073;
    msg.custom.assign("MURBKQLJJODSFZVUIOOAKKYVWIDHYMNEAHXWLRQUGISZAMVGZETSTASCDBRUUWOXQOCSILKMFACHUPGNZFPOWXIPWMVBHYOMBTJXHLDZREQMITKJIONDCBOGSSZREBBPZHUTYFDRQDJRKSASTFXNXZFMQLDWDZGTXTPRIOKJCNWZGEKHPQJWVQCFICFGDAVYCGNWYEBPYEUPCLASTG");

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
    msg.setTimeStamp(0.559988442725);
    msg.setSource(4484U);
    msg.setSourceEntity(31U);
    msg.setDestination(15611U);
    msg.setDestinationEntity(224U);
    msg.timeout = 34226U;
    msg.lat = 0.777215001546;
    msg.lon = 0.59087599147;
    msg.z = 0.229436008152;
    msg.z_units = 63U;
    msg.speed = 0.652898478687;
    msg.speed_units = 36U;
    msg.custom.assign("UOOFMIDGIPFIPGEYNOZNIHVXMVQJXFFGPZGTODKZMNQAEDBFGTBMZWY");

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
    msg.setTimeStamp(0.161230433369);
    msg.setSource(999U);
    msg.setSourceEntity(195U);
    msg.setDestination(61916U);
    msg.setDestinationEntity(68U);
    msg.timeout = 3950U;
    msg.lat = 0.715579411389;
    msg.lon = 0.996020285822;
    msg.z = 0.252051512905;
    msg.z_units = 244U;
    msg.speed = 0.552311180531;
    msg.speed_units = 215U;
    msg.custom.assign("QLFNOEFEBNLIJVRNNAWTFFJBUCUZMCVSEYFPLHPIVULNCZMVJJTRWQGLSZTLUSCMWQOPUVRRSQGGBSYDUJOTQFNEDCDORWYTJ");

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
    msg.setTimeStamp(0.44803921941);
    msg.setSource(62441U);
    msg.setSourceEntity(209U);
    msg.setDestination(33761U);
    msg.setDestinationEntity(79U);
    msg.timeout = 18229U;
    msg.lat = 0.0366477388991;
    msg.lon = 0.933453100724;
    msg.z = 0.550561270857;
    msg.z_units = 74U;
    msg.speed = 0.316231389989;
    msg.speed_units = 201U;
    msg.custom.assign("UTDXWTOPKNRWDKIQCUSPYNZOGLINJBMTYBYHXWNTLUQCKAOSJAPVVMIMQTVXMHXOIZKKSCJHDAUZFWVQAXREQNXDIEEPFSDZVEAWEWLAVGNYSJJKMKBTVFRIOYOHLXCFPMUMJOYBRGPJFLRIHQNKFZSHIJLRUREZURAMXNDGGCTOWQMIBA");

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
    msg.setTimeStamp(0.444984457345);
    msg.setSource(57859U);
    msg.setSourceEntity(225U);
    msg.setDestination(49391U);
    msg.setDestinationEntity(252U);
    msg.timeout = 164U;
    msg.lat = 0.586894482394;
    msg.lon = 0.0138358553421;
    msg.z = 0.40417800763;
    msg.z_units = 61U;
    msg.speed = 0.215041668198;
    msg.speed_units = 80U;
    msg.custom.assign("SOCSMPILOJRDETUJYGBDZFJXAVAFIAWGNKSPHUZPEBCYZTNGYCQQOHMUXAHFTGLGGLDSSLRGKHYFMFQMNFIBWRTZPCWSJMJRAJUZJCOTZUNLRIFDUV");

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
    msg.setTimeStamp(0.797739397296);
    msg.setSource(31737U);
    msg.setSourceEntity(37U);
    msg.setDestination(48101U);
    msg.setDestinationEntity(37U);
    msg.timeout = 25255U;
    msg.lat = 0.100556927708;
    msg.lon = 0.437072885434;
    msg.z = 0.356644990204;
    msg.z_units = 37U;
    msg.speed = 0.12563636912;
    msg.speed_units = 121U;
    msg.custom.assign("NAGPLNXQCHNCMEYAZGTGDWRZBVJUVLMZBRDYWXCFAMTQULIVFXKTOVTKFQMHMSBEYNBHJFANVNLCUZXEILSQQJOFOPEKZNGGLGGBXBBZAHLKMBQWHYILFNDOTDUQMNTDVSBIEMJVUOIYRWSCPZZHSEGKUMWYCJIJSREVRFXRPPPK");

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
    msg.setTimeStamp(0.5311119293);
    msg.setSource(37716U);
    msg.setSourceEntity(112U);
    msg.setDestination(13632U);
    msg.setDestinationEntity(71U);
    msg.timeout = 30748U;
    msg.lat = 0.776654151612;
    msg.lon = 0.12343822512;
    msg.z = 0.40166950868;
    msg.z_units = 63U;
    msg.speed = 0.917352243797;
    msg.speed_units = 120U;
    msg.custom.assign("CCJBAAUIUBOVUDAEVFKXZCNFWKJUHILPVKQGBZLDONPFFRGXTJZEZJFAMXXGYMQWVPFCKPECSYOQHSMIYADLQPEXSKHPLNRAFOTFPDKPSULZNTGDMBRERNDTJEENDOXIZBVKWRTDMIHYMINGOUVOTGZHWAPLWYWYNZXTEHPGRIDVSYYVGSGLLRRCUWOTZNUKEONYMQSTFMBCR");

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
    msg.setTimeStamp(0.205100522495);
    msg.setSource(36122U);
    msg.setSourceEntity(171U);
    msg.setDestination(36192U);
    msg.setDestinationEntity(89U);
    msg.arrival_time = 0.462984971334;
    msg.lat = 0.596081193687;
    msg.lon = 0.305783251621;
    msg.z = 0.324834402965;
    msg.z_units = 151U;
    msg.travel_z = 0.82360318211;
    msg.travel_z_units = 248U;
    msg.delayed = 97U;

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
    msg.setTimeStamp(0.854519629263);
    msg.setSource(8635U);
    msg.setSourceEntity(88U);
    msg.setDestination(60733U);
    msg.setDestinationEntity(200U);
    msg.arrival_time = 0.975297366465;
    msg.lat = 0.25937374969;
    msg.lon = 0.818236138204;
    msg.z = 0.981924661068;
    msg.z_units = 158U;
    msg.travel_z = 0.15164671733;
    msg.travel_z_units = 61U;
    msg.delayed = 106U;

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
    msg.setTimeStamp(0.925085156218);
    msg.setSource(43535U);
    msg.setSourceEntity(182U);
    msg.setDestination(37585U);
    msg.setDestinationEntity(6U);
    msg.arrival_time = 0.49467748484;
    msg.lat = 0.279834532437;
    msg.lon = 0.0423266058834;
    msg.z = 0.758359244415;
    msg.z_units = 195U;
    msg.travel_z = 0.61450206756;
    msg.travel_z_units = 178U;
    msg.delayed = 2U;

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
    msg.setTimeStamp(0.479643164181);
    msg.setSource(534U);
    msg.setSourceEntity(13U);
    msg.setDestination(30044U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.600447254747;
    msg.lon = 0.311161671889;
    msg.z = 0.506708467384;
    msg.z_units = 31U;
    msg.speed = 0.894798180835;
    msg.speed_units = 65U;
    msg.bearing = 0.560564939795;
    msg.cross_angle = 0.667529555422;
    msg.width = 0.276313942323;
    msg.length = 0.0840508348459;
    msg.coff = 189U;
    msg.angaperture = 0.747752500224;
    msg.range = 31373U;
    msg.overlap = 153U;
    msg.flags = 75U;
    msg.custom.assign("MDNYCLQUPFSTJLJDYZMITAVZMCEHCRPFKHHSNCLFLMYXSQUZMSSGATQHDKKTNNORBOBEGDIXQOSYKWJGEMEKWOULEXPQULDTULSNPGPUWOFZXJZFIXBDIIQFNVBRBBRRWRFUCADJBQOMLVZVZVWRIZXQQPJBCEGISATTJXPZYXIZUKQYHXYSNBTFMCANGSLHHIAWVAUMGLFEUHVGPTJT");

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
    msg.setTimeStamp(0.707220991533);
    msg.setSource(4085U);
    msg.setSourceEntity(43U);
    msg.setDestination(3731U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.0637996106967;
    msg.lon = 0.0468324180572;
    msg.z = 0.14661926607;
    msg.z_units = 20U;
    msg.speed = 0.833975044891;
    msg.speed_units = 174U;
    msg.bearing = 0.913582224331;
    msg.cross_angle = 0.319655397762;
    msg.width = 0.795963279641;
    msg.length = 0.669028958835;
    msg.coff = 55U;
    msg.angaperture = 0.9178053777;
    msg.range = 19002U;
    msg.overlap = 61U;
    msg.flags = 185U;
    msg.custom.assign("CZXJSENWMPHAJHGYCFRYQZPYUZXABCYXGCRENEAHRTUVIGJSBECTMIQYFFRCLHTYTBOZWOEYIPRWSORGWQODEZICOSEFUIYOSZXACTGUFKDDKWSMJLMMDLUJPFJNOJDTBV");

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
    msg.setTimeStamp(0.14504165865);
    msg.setSource(48635U);
    msg.setSourceEntity(219U);
    msg.setDestination(21406U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.28420684761;
    msg.lon = 0.0906801090509;
    msg.z = 0.138581139489;
    msg.z_units = 123U;
    msg.speed = 0.605204807313;
    msg.speed_units = 117U;
    msg.bearing = 0.675344077439;
    msg.cross_angle = 0.930371700618;
    msg.width = 0.166190674729;
    msg.length = 0.774541334771;
    msg.coff = 156U;
    msg.angaperture = 0.921046221686;
    msg.range = 59090U;
    msg.overlap = 225U;
    msg.flags = 246U;
    msg.custom.assign("YUOHTZAAQMUNXWUQBYFSGXFQKOFZXIZENCXRETJFZBBMKHMTERWLLIMAPCYITBSWYRWOWCTDKPCNRTQDGJHEHBYDRNVUIRNXHHKCDPJSVHAPDVQQEHK");

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
    msg.setTimeStamp(0.6374486473);
    msg.setSource(58596U);
    msg.setSourceEntity(76U);
    msg.setDestination(34135U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.145821457857;
    msg.lon = 0.426786164117;
    msg.z = 0.316868576623;
    msg.z_units = 166U;
    msg.speed = 0.831628478208;
    msg.speed_units = 12U;
    msg.bearing = 0.922255603061;
    msg.width = 0.599628732685;
    msg.hstep = 0.532425569406;
    msg.first_curve_right = 110U;

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
    msg.setTimeStamp(0.0434691821548);
    msg.setSource(3428U);
    msg.setSourceEntity(157U);
    msg.setDestination(51034U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.880121611846;
    msg.lon = 0.427319719356;
    msg.z = 0.84011030654;
    msg.z_units = 160U;
    msg.speed = 0.357479173675;
    msg.speed_units = 174U;
    msg.bearing = 0.0417637517356;
    msg.width = 0.452956493363;
    msg.hstep = 0.225092165437;
    msg.first_curve_right = 48U;

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
    msg.setTimeStamp(0.677698908177);
    msg.setSource(27088U);
    msg.setSourceEntity(238U);
    msg.setDestination(36633U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.772427740506;
    msg.lon = 0.867566025953;
    msg.z = 0.864132806018;
    msg.z_units = 94U;
    msg.speed = 0.491933398589;
    msg.speed_units = 190U;
    msg.bearing = 0.739262335307;
    msg.width = 0.755039730951;
    msg.hstep = 0.405387637866;
    msg.first_curve_right = 86U;

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
    msg.setTimeStamp(0.477819117811);
    msg.setSource(15153U);
    msg.setSourceEntity(34U);
    msg.setDestination(65014U);
    msg.setDestinationEntity(236U);
    msg.timeout = 21644U;
    msg.lat = 0.365317980125;
    msg.lon = 0.165307412359;
    msg.z = 0.862980713868;
    msg.z_units = 207U;
    msg.speed = 0.432843367006;
    msg.speed_units = 8U;
    msg.syringe0 = 201U;
    msg.syringe1 = 95U;
    msg.syringe2 = 94U;
    msg.custom.assign("YNQDEIGORJJUZCMXDJYZRHRQRHZYTAUPNEWEQHLMNEHUQMFMOASFDLNAOOXDSENYVSGXCZQUYIKJOIAHQGNJFFXEFGPZRVAVPXKXHDWVTTEKWTGNUUWNSFIKTWMKYHDJMZEZD");

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
    msg.setTimeStamp(0.360795803764);
    msg.setSource(19862U);
    msg.setSourceEntity(111U);
    msg.setDestination(2920U);
    msg.setDestinationEntity(64U);
    msg.timeout = 15678U;
    msg.lat = 0.898665028685;
    msg.lon = 0.533984007901;
    msg.z = 0.0573226580541;
    msg.z_units = 57U;
    msg.speed = 0.708992089266;
    msg.speed_units = 108U;
    msg.syringe0 = 193U;
    msg.syringe1 = 188U;
    msg.syringe2 = 197U;
    msg.custom.assign("PBZFFWLNIACUVSMJNJHIELZZFLEYJGSGXYZAWKTYFUFPARBXOUQHGFWFBDZXIKNSTQKCJNIARXWQXCNDTPAAHSESLIGMEBIXHJNBYMOJGDAEMIYRMPKRGBYOAYTCVQDDGUQMPBEYSHRHLUZVSCHVTHKOYJIATTQIG");

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
    msg.setTimeStamp(0.535332189927);
    msg.setSource(55252U);
    msg.setSourceEntity(28U);
    msg.setDestination(24637U);
    msg.setDestinationEntity(139U);
    msg.timeout = 48925U;
    msg.lat = 0.608167724268;
    msg.lon = 0.996347484322;
    msg.z = 0.0238082041717;
    msg.z_units = 225U;
    msg.speed = 0.437422056222;
    msg.speed_units = 77U;
    msg.syringe0 = 62U;
    msg.syringe1 = 105U;
    msg.syringe2 = 197U;
    msg.custom.assign("ODGUJFLKVITGFKVTTVUAKRRNNDMYJUPVTFUZZRUXUIRXQYSWXYAIGCHEDJUTQMAXOQOGTZEFYJIIUWYQSTAUMRNEVXHOBNSFPACCDIPOUSQPZBYGWMVLEAYVHSWEXBFTOEDCNLNNNJJCAQIWTQXHEDAIJGQACSBVNPDFZPJLFQKADOBZPKWESRYBCHNPCODOGIMPJHHLEXCKBBVGKOWIHLHBV");

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
    msg.setTimeStamp(0.777554454705);
    msg.setSource(30212U);
    msg.setSourceEntity(240U);
    msg.setDestination(64925U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.525514332644);
    msg.setSource(48617U);
    msg.setSourceEntity(53U);
    msg.setDestination(15613U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.301040975632);
    msg.setSource(15832U);
    msg.setSourceEntity(253U);
    msg.setDestination(40755U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.785047891561);
    msg.setSource(61993U);
    msg.setSourceEntity(179U);
    msg.setDestination(39871U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.245162069889;
    msg.lon = 0.214097541244;
    msg.z = 0.912861766097;
    msg.z_units = 8U;
    msg.speed = 0.436366319483;
    msg.speed_units = 138U;
    msg.takeoff_pitch = 0.294615025752;
    msg.custom.assign("PRHHVETJCYTTFKFBVSNZOUXYTJPQOZPRVWYASESHEMQPGLWDOVWGUCIBPUCVAAHZSTXLCLGDLTOODGUGXUKLVFOHIFLMXZFJDKIURNHMCQVEIXBJTMZREBYMMQJDZOAHIKENJNNVHYNPNGLYDDBKSZECHZMQENYNSQBVYLMAFJRWOSSTPBVLFZJHYXRIAWADGWSRPEBI");

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
    msg.setTimeStamp(0.0593274564791);
    msg.setSource(41204U);
    msg.setSourceEntity(158U);
    msg.setDestination(61194U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.712807409332;
    msg.lon = 0.352955049923;
    msg.z = 0.538847711461;
    msg.z_units = 123U;
    msg.speed = 0.382615514509;
    msg.speed_units = 182U;
    msg.takeoff_pitch = 0.709229574506;
    msg.custom.assign("KCMPXOMQUEENAGNUYRVKEDJTPUDAKVNAYIGTPSYQUMUWIIZOZNQMZKUYWSPYEFJXGDITHTONBOHCPFTDRWQUBPIJASPOFSVEWBWDKLBQKRVMYAHMTZDRESBBGXTJGIXPPL");

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
    msg.setTimeStamp(0.808130347076);
    msg.setSource(10814U);
    msg.setSourceEntity(210U);
    msg.setDestination(28631U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.672546709816;
    msg.lon = 0.479835095087;
    msg.z = 0.481701928291;
    msg.z_units = 216U;
    msg.speed = 0.343319685938;
    msg.speed_units = 104U;
    msg.takeoff_pitch = 0.736440984174;
    msg.custom.assign("DRSCEAUZVGGPUWJBLFPNDFXYJCMREJVWEWVWDWZIFNLVZSPMWTHDFBSDDASHNYGZUDGUSAMHDRQUTMCGYKIPHLNAUKCKFVBHBFAZNNCEYWQBAAONXQFJUAOMPTGJXQGIEHBJKRNXHLLPXFTYOZAPTXBSBQPZEBOFOVXDLHOEPOLXSQCLHEYSIRKFQKQRTY");

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
    msg.setTimeStamp(0.153526905455);
    msg.setSource(13618U);
    msg.setSourceEntity(202U);
    msg.setDestination(39562U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.653496410989;
    msg.lon = 0.677460450921;
    msg.z = 0.591374910393;
    msg.z_units = 3U;
    msg.speed = 0.475726833475;
    msg.speed_units = 1U;
    msg.abort_z = 0.848569046725;
    msg.bearing = 0.352606998039;
    msg.glide_slope = 90U;
    msg.glide_slope_alt = 0.259470898914;
    msg.custom.assign("FIVAJXIROEQVXABPHSATNIDCAUZZBFPAKTWKBSFIHLDJJBKRLDPVSGDHGEYRYBUGKKVTMRNQCOABWMTMGPOWMHXNZGSNRKFMQYEHZSXM");

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
    msg.setTimeStamp(0.824266069786);
    msg.setSource(23165U);
    msg.setSourceEntity(70U);
    msg.setDestination(9910U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.127074675483;
    msg.lon = 0.895461957993;
    msg.z = 0.308334358811;
    msg.z_units = 155U;
    msg.speed = 0.968883624278;
    msg.speed_units = 189U;
    msg.abort_z = 0.0300669889173;
    msg.bearing = 0.765509843685;
    msg.glide_slope = 48U;
    msg.glide_slope_alt = 0.463206815587;
    msg.custom.assign("UYNPLGONKUUNXGNLXLTPKWBZLDJHJZYCXODBYMBRFVGOTVEQETFVRKIFGOUXBBYJDZEOMSTTYYPPACJXVEDIAHZDNFNWPRZSAPWCQAZMJNZEZGUOLXFKVHAARYBWPYCPOWGUQFVBOUQRMZKRYIEOAHVCHXMAGLRKPDRYEDMOTESAF");

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
    msg.setTimeStamp(0.794106247425);
    msg.setSource(20349U);
    msg.setSourceEntity(35U);
    msg.setDestination(52850U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.61295008152;
    msg.lon = 0.588759316726;
    msg.z = 0.757505171296;
    msg.z_units = 136U;
    msg.speed = 0.450972690621;
    msg.speed_units = 174U;
    msg.abort_z = 0.891041711507;
    msg.bearing = 0.717805817137;
    msg.glide_slope = 119U;
    msg.glide_slope_alt = 0.371328720018;
    msg.custom.assign("HZYYDGHEZVAKCLZYVNCBOOJVIFLEXFANMAHKLULNCJHKPWKKPBYBYUYRHJUCDNKVEULSJRIEWSDBORZERMGCPWINOVPSFYFQKEWIZTQADKAAVQXASIITTTQXOUGOLKUCRDCNXPOFFNEHLEEJJRRURTJBHTQPSOBXPQGIJBIKVWZYOGXTSQMX");

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
    msg.setTimeStamp(0.723196110168);
    msg.setSource(6667U);
    msg.setSourceEntity(131U);
    msg.setDestination(28212U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.186864268837;
    msg.lon = 0.573367848473;
    msg.speed = 0.216966701641;
    msg.speed_units = 130U;
    msg.limits = 44U;
    msg.max_depth = 0.728944447587;
    msg.min_alt = 0.220252374105;
    msg.time_limit = 0.308275983684;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.658224565067;
    tmp_msg_0.lon = 0.841599680298;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("PAYBCXYBFFIFJCVKQIVQXEFKJHVJGHDNMKQNRBDNUHCVVZDWYLEBRVVBISCXBXZLPEKHIKGGQYMPIJBEYNSQDERGSWKXQRESHNFTZZCTPEEWUTKCWDBSSATGIWOJOUICQJXFLZCYAOTLFAHQSLDXIDNDPRYHROZASURBZUSCRLSJANNYZNNAHRPRGOVPPLKYTTOUMUMTDCWPOEZXEHZLLAWJMMFTXUXDAWFYIGIUPKOWMGG");
    msg.custom.assign("YURQGIVNRYSSMESVBODUVYSDBXMXCRXJOHQHEJJYFJOLUIHIRQLUUKVVGSCOCMEXQOOPAHDUFLWORHDBPTAETWRFLWFATTRVDDCLRONGZQSSUEGXUVOWKIYANMXPVKMABWVAJCHDWVFQIXACTFJNMNJNEYLGZGTSDJEDNYAZKPMF");

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
    msg.setTimeStamp(0.371831169162);
    msg.setSource(50803U);
    msg.setSourceEntity(156U);
    msg.setDestination(27920U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.871233403783;
    msg.lon = 0.801006445244;
    msg.speed = 0.117826740265;
    msg.speed_units = 193U;
    msg.limits = 72U;
    msg.max_depth = 0.0533783822422;
    msg.min_alt = 0.137703771543;
    msg.time_limit = 0.316216874247;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.535305439773;
    tmp_msg_0.lon = 0.832175548507;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("KGBUYDATYCBBHROJDRQWIEKMKVESCTRCPZRHPVCIMSNJMFQJGQVHOXLGQSPJHLJZRQJICZWUQBCWHPBKJIKNVRZRMKHSGTFJAPKXTYFTKBXTVUZDOVYOPWLDUMMSFNRDQGQPYYZVOND");
    msg.custom.assign("OOWCNGIAGLRVVMVJJVXXZMQNXZQECEEIKYBENYNNTYUWZAWTGPXUGICEYLMQVLDBRHFTDOVINHULTYDCLAXMUAFYFDPFJKBUHKPLZZGBXTABJXZDRYUJSQHAQSRNYJFMDIRPVZSAWOWXPRSTSOSMAKWGLIFASLRSBBHCGBENJKHSWLPTRFKMZYEQLDKVMCDMERCGPVOWNREHQGUOOGQJ");

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
    msg.setTimeStamp(0.990908193623);
    msg.setSource(44801U);
    msg.setSourceEntity(51U);
    msg.setDestination(62867U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.900882924834;
    msg.lon = 0.788608167645;
    msg.speed = 0.571418833812;
    msg.speed_units = 64U;
    msg.limits = 80U;
    msg.max_depth = 0.483852639901;
    msg.min_alt = 0.527535676933;
    msg.time_limit = 0.604018599299;
    msg.controller.assign("MGLTYFMOPWUYCXPSMKWQADZOHIZBOUUGCROQLERWXXCAZQKSHZKTFPLFAZRXGLYEBWDPDKHYRZRVJKHKFUALSGBYISIMWICHIZTYNVBDHECEXPESNNGQVCKLOMNWFNVNIAWUEJRPFYCASQENXFAINWCVQTVJOAIOPMGV");
    msg.custom.assign("KTRLITETBLYUSEDRGSTMYMAKKCKLUEFOLDGHRVEHXDHBEFJWCNQSLJGNYSJOAA");

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
    msg.setTimeStamp(0.0316224914078);
    msg.setSource(7463U);
    msg.setSourceEntity(162U);
    msg.setDestination(14756U);
    msg.setDestinationEntity(22U);
    msg.target.assign("NRNTOZMIUSYDYXTDGXCFIFIKYSOYQPZTWLIAETZXAAHYLJNREXYACWORZMIWTBQMWUQVOGBTYLFIWWAZRKGAQMZDNNYJSPPBMBSOVVCWALJIANCOXVPUHGLBPGFDDFNJNEPHQSMDDCRYOMAFCTVNLQEVKVJRZMKUVTKXEQINGCURKQEHJBXLTDHMUWSHVRHALJJDGBOJRKMXHECEBSKSFBLOZHPWKZSGVXEQFLEUTZKGB");
    msg.max_speed = 0.578219855993;
    msg.speed_units = 252U;
    msg.lat = 0.0633137100715;
    msg.lon = 0.76558874247;
    msg.z = 0.807440310129;
    msg.z_units = 108U;
    msg.custom.assign("LGHEUVFWRZRLZHYYBSPFCAHRQEMMZNLQKXYDJOEIJIKAKPGOPBGVMODYLNHESCYIPFXDGKFJDTMEDOTECMIJKQVAXVOJVUQZQBXRSICYKBGAOKSGXETCNPWRKIDBIZOBMARGSK");

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
    msg.setTimeStamp(0.458474877752);
    msg.setSource(36326U);
    msg.setSourceEntity(80U);
    msg.setDestination(13051U);
    msg.setDestinationEntity(130U);
    msg.target.assign("SVVJWZDPXOTCOGMRRXZNZMANBJGXYBEAYXEFGUOLBTJFZHTLQXZDLRIJDHSAISTMPKJVNZRMTPSOSCEGFHSCRVUFVNIQLEFLYTACBRMBEVHIXRQNKRNLYEKKKQGGGOHPIBUCUSVQYWTXBZXWFMYCOATIDBMCJKDWLHMWOOBPNGKZJIGFNUMOTHWLAZRFQCQXAHDLJDWYQSEFDPCNPZTWYCUHWQWBUAD");
    msg.max_speed = 0.623242955218;
    msg.speed_units = 65U;
    msg.lat = 0.884559201515;
    msg.lon = 0.651073628418;
    msg.z = 0.0425572178712;
    msg.z_units = 200U;
    msg.custom.assign("KSXNEJKBAHGUTMUVUPLIANIVEXFRJOBABANDQXEOZCGTTMDHDRYRPZRWSZWKRHOSNYHECPPDLBQQFILUABORRBNNVXVWFHMCGASFJMFSUSQOULBKTUQJWBQKRARFVWHOMICXJEUJCI");

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
    msg.setTimeStamp(0.273603265573);
    msg.setSource(51464U);
    msg.setSourceEntity(19U);
    msg.setDestination(19288U);
    msg.setDestinationEntity(133U);
    msg.target.assign("RXYHZGTJFLSPCZOTVCEWNDHISZRQXLAIBEWPHPRDAHWYTOVFNWAPQUAQDGAFUXVCJGFNAQGH");
    msg.max_speed = 0.615997228143;
    msg.speed_units = 191U;
    msg.lat = 0.724001859557;
    msg.lon = 0.738696446525;
    msg.z = 0.629853931573;
    msg.z_units = 41U;
    msg.custom.assign("SCIGCDKCZIPVOQBFNRSYEENINADAUGZMMIPRZVPNLLYZQESXVXGUUOPKMJEWYXSAFNWERZOHTTIUGVSWFHWIVUKUBXHQDTBUFLKXZHIKDLEBTQGRYQWOAMLFDNLKESVIYJORFJYGXKVTVZWIBXJGDANCDWSQCAIPBGTFLZPYBXMTANLMBWYSEWESRXJREHQOJXDDGAZJVHQNZUSRCGBFPOJHBULN");

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
    msg.setTimeStamp(0.319314717357);
    msg.setSource(17245U);
    msg.setSourceEntity(208U);
    msg.setDestination(63519U);
    msg.setDestinationEntity(77U);
    msg.timeout = 62974U;
    msg.lat = 0.488272186574;
    msg.lon = 0.501789836766;
    msg.speed = 0.831468525243;
    msg.speed_units = 105U;
    msg.custom.assign("RDZWNQBDYAFKCFAHNOEEJOXJPTVXZMAQJNFQUSCYOCKPWWZVDIMDMUGYJCEKUCF");

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
    msg.setTimeStamp(0.433617303583);
    msg.setSource(58373U);
    msg.setSourceEntity(39U);
    msg.setDestination(33556U);
    msg.setDestinationEntity(35U);
    msg.timeout = 58038U;
    msg.lat = 0.969198040028;
    msg.lon = 0.392367651493;
    msg.speed = 0.380674138121;
    msg.speed_units = 63U;
    msg.custom.assign("GNTPOEDOUTFSVCVPOLOQZOTDBYNUEWUWIVCIDZJXGLODDEXXWKTGMYPFAPNSAKIGBWNZNOFMDMHQQLXVJGGLNHKELBPWHXMYCXSUZEOWDMEWKBJCEAIAYFVJHHFNJXTJGBRIZQNJKQIVXXCAIMXHYDRTYKSTCFJDHJKAUWBTRZMMHFRCDZZRLFRPOSYCBPJELRCQRAQBITUWKQBSNEHLUIUTFMIYSU");

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
    msg.setTimeStamp(0.411110836432);
    msg.setSource(45640U);
    msg.setSourceEntity(1U);
    msg.setDestination(40025U);
    msg.setDestinationEntity(119U);
    msg.timeout = 12090U;
    msg.lat = 0.565772671965;
    msg.lon = 0.0774203418855;
    msg.speed = 0.596261375978;
    msg.speed_units = 60U;
    msg.custom.assign("EHIXHFXJEQOGLVLLPTLHZSBCIAUOQIVAYZBTVTZDNEDPFXNMDZCGGDUCRZTHSYMOMQYEPPHDAWRAUISKBQRKJELYCGSC");

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
    msg.setTimeStamp(0.834617141185);
    msg.setSource(36062U);
    msg.setSourceEntity(48U);
    msg.setDestination(30409U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.586353503875;
    msg.lon = 0.977473201504;
    msg.z = 0.0786533794131;
    msg.z_units = 138U;
    msg.radius = 0.0813765953048;
    msg.duration = 30699U;
    msg.speed = 0.508633967379;
    msg.speed_units = 135U;
    msg.popup_period = 15893U;
    msg.popup_duration = 20579U;
    msg.flags = 165U;
    msg.custom.assign("EJWRTWFOKWXXPDAITNZZAZZARYCLFGEQMIJFYMQWVNRPDOQQONVGFPUCKOWLUJGLUGUNPIOQLHJTPKEJLEMVFOOTDHTARDKUZZEYRCTZNFSKBEXYRKKIFENMOGSABGCXVDCTPDVJELAEGQFZVCMXANGZYNWUDOBCXHSYGCSYUKIQAHHIZTIULQJVCYFHTWJUWBBQHWMIMRTOHXDDRKBHBPGQI");

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
    msg.setTimeStamp(0.7810729702);
    msg.setSource(48823U);
    msg.setSourceEntity(133U);
    msg.setDestination(32883U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.423817709392;
    msg.lon = 0.984438347341;
    msg.z = 0.565207792463;
    msg.z_units = 51U;
    msg.radius = 0.947361961314;
    msg.duration = 16517U;
    msg.speed = 0.926973038801;
    msg.speed_units = 54U;
    msg.popup_period = 2267U;
    msg.popup_duration = 41804U;
    msg.flags = 18U;
    msg.custom.assign("HIDPPDXOBYCFZUFXXWVCXAHPEZFPSPQDQRFKZMMAPTERMBXDUBPRBNMDHOJLAIZHAZNKLYBHNRDQDIVRTRNOHUIDTUNBTKPVCWLUTRLZAJELOQSOKOQWVSAEMYYJXPSCSWONZIIBPCEGFUXCGETMTBLYSWKHZOLCIEQRCMYLSSKFGDFIRBHFNDGYTWMQOXGIVVMWTUKJYNZXWGLYNVNCACWUKAZYSMJVLJHKVTFSIKFVEUHJARG");

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
    msg.setTimeStamp(0.874080224515);
    msg.setSource(27334U);
    msg.setSourceEntity(211U);
    msg.setDestination(28566U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.145827984437;
    msg.lon = 0.655250729;
    msg.z = 0.350213964329;
    msg.z_units = 139U;
    msg.radius = 0.660647203474;
    msg.duration = 15085U;
    msg.speed = 0.9515639301;
    msg.speed_units = 186U;
    msg.popup_period = 60630U;
    msg.popup_duration = 29114U;
    msg.flags = 126U;
    msg.custom.assign("GLDDMPJRTZXJOSLHCKRBCWCHLNCHUSEZRINYZMGUFQJVQXHMGKCUVESNXHTFNEUYIDMRAAPQFBKVRILNOADXAXINZDMDBDYJWREQFMWZIUKYMPUTYPODHQMBXGWVGHYKOJJSWGPANFSJPVWOTATRLFHWXLURFVYBEXDEOSGQXWAHTIEPMOJKYZBRBLKGKEQMZVPQKIVRPSSUKSJBPIJEANNCTTCVOYSTOXLTBCVWCFBALLZHOWFEGZDIQYUF");

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
    msg.setTimeStamp(0.775333189898);
    msg.setSource(25672U);
    msg.setSourceEntity(123U);
    msg.setDestination(58535U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.624043624993);
    msg.setSource(59602U);
    msg.setSourceEntity(171U);
    msg.setDestination(43896U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.577792716657);
    msg.setSource(28594U);
    msg.setSourceEntity(106U);
    msg.setDestination(59129U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.563341286567);
    msg.setSource(37455U);
    msg.setSourceEntity(116U);
    msg.setDestination(37624U);
    msg.setDestinationEntity(34U);
    msg.timeout = 1120U;
    msg.lat = 0.377259264801;
    msg.lon = 0.974990874846;
    msg.z = 0.2463393024;
    msg.z_units = 225U;
    msg.speed = 0.294811160481;
    msg.speed_units = 160U;
    msg.bearing = 0.0266721689111;
    msg.width = 0.908537871056;
    msg.direction = 183U;
    msg.custom.assign("YBFBKXGWQXFXVCTZQBFMZXXJAICLCYSZAVKIUSEREAFSIBUOMKGXUSMXAUOCLCDPSNRWWYCJSTDDYMQFCEYZYXLCGUONDHDMEJHNWGTJARIUOOMHYYTKNDQVAJLABGGMDGYFLYRWUPGPKWPPRHLUTPIHLHAQDJNHNTPZNDJMDPVZNHERXIQFZSFVZTFWWAIZUJTVEQBWT");

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
    msg.setTimeStamp(0.646812064305);
    msg.setSource(20243U);
    msg.setSourceEntity(200U);
    msg.setDestination(38191U);
    msg.setDestinationEntity(184U);
    msg.timeout = 35951U;
    msg.lat = 0.273163249942;
    msg.lon = 0.351407183481;
    msg.z = 0.188929123704;
    msg.z_units = 70U;
    msg.speed = 0.930827436518;
    msg.speed_units = 95U;
    msg.bearing = 0.510647093142;
    msg.width = 0.324027797046;
    msg.direction = 222U;
    msg.custom.assign("XNHFKQMUCKYKPNYGWOOBPDNLSNCTTYKKTSZZHTGKZIQHZCHWIDWDAUMNEBMNERMPOVYCKYLXWTIOTJRRDXHHEOLLTPARWZYBLXISKIHBFQXJEBASCEEVWNY");

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
    msg.setTimeStamp(0.431546045133);
    msg.setSource(24004U);
    msg.setSourceEntity(180U);
    msg.setDestination(43398U);
    msg.setDestinationEntity(48U);
    msg.timeout = 28714U;
    msg.lat = 0.88414209961;
    msg.lon = 0.570832673518;
    msg.z = 0.841889601071;
    msg.z_units = 32U;
    msg.speed = 0.575111124368;
    msg.speed_units = 130U;
    msg.bearing = 0.0323065938052;
    msg.width = 0.0527694918504;
    msg.direction = 160U;
    msg.custom.assign("ZUAMZFKOGYWTFGHGGPYQBMVMTVXCUJEDNYXXFBDJZUYQOAJHRVQOHBQCKIECFVPIE");

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
    msg.setTimeStamp(0.704378364362);
    msg.setSource(46940U);
    msg.setSourceEntity(132U);
    msg.setDestination(43736U);
    msg.setDestinationEntity(88U);
    msg.op_mode = 82U;
    msg.error_count = 92U;
    msg.error_ents.assign("RCDJRUTEBLQSQQNUYILDGESGRSLYFJGEBTVJKSFOEWQRVJWXKHZZTOEOKJLAVWJRWVLXDHPQYMBQXEEPFUQXEMYNKHTOPWXTIPMJCKZIWILAGDNXACCUNBBQBFNYPIZNPTPHVNHMXCIDXCKMRTYGHAFRAHXEIYMVNVOUOBQGPRFWPDITFVKZMRSUKWKZIGFMJXZFJMCYWLBIUBLUWZEYUVADOJACMONTBSZHSGFPTCHALAY");
    msg.maneuver_type = 22805U;
    msg.maneuver_stime = 0.464521406913;
    msg.maneuver_eta = 59224U;
    msg.control_loops = 338770406U;
    msg.flags = 165U;
    msg.last_error.assign("YTBFDQWXKUQMIKSSEEOZWFBBNHIWTMJWEZPSFLPOCPCZHDPVFOIAXTPPVQJGOLDTRZCZCKOFEGJAFBHVUGIRMYLOHYFMUQIWEXFCPKEDJCHCJCRREVDNKXXGWGZLDYKEYQHOYAHIMHAIIKNRBYKWTYIDLGUTRLCKUAURMOLDDSLUT");
    msg.last_error_time = 0.73815387461;

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
    msg.setTimeStamp(0.903269272937);
    msg.setSource(44985U);
    msg.setSourceEntity(191U);
    msg.setDestination(57429U);
    msg.setDestinationEntity(32U);
    msg.op_mode = 217U;
    msg.error_count = 151U;
    msg.error_ents.assign("ZYPQJVXSSFYBLFPGVAKGIKDHFDOMPKLZJDYQEZVNVJEHGHOHXHUYCTSFEDUVWWC");
    msg.maneuver_type = 6249U;
    msg.maneuver_stime = 0.672214652346;
    msg.maneuver_eta = 41878U;
    msg.control_loops = 4096308737U;
    msg.flags = 254U;
    msg.last_error.assign("DUSPAHYEIVC");
    msg.last_error_time = 0.339325411089;

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
    msg.setTimeStamp(0.0656470175898);
    msg.setSource(1750U);
    msg.setSourceEntity(31U);
    msg.setDestination(3423U);
    msg.setDestinationEntity(190U);
    msg.op_mode = 182U;
    msg.error_count = 48U;
    msg.error_ents.assign("BWJSKQPMZLJNDLXFCKYKPVDPRBSOEUHL");
    msg.maneuver_type = 20451U;
    msg.maneuver_stime = 0.882255738003;
    msg.maneuver_eta = 4638U;
    msg.control_loops = 2266543525U;
    msg.flags = 75U;
    msg.last_error.assign("QCMFPUUTMESFBKVXTFCN");
    msg.last_error_time = 0.0911388675713;

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
    msg.setTimeStamp(0.230589259674);
    msg.setSource(5135U);
    msg.setSourceEntity(206U);
    msg.setDestination(14734U);
    msg.setDestinationEntity(192U);
    msg.type = 119U;
    msg.request_id = 13457U;
    msg.command = 252U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 24735U;
    tmp_msg_0.lat = 0.86096994195;
    tmp_msg_0.lon = 0.954284459476;
    tmp_msg_0.z = 0.659739126253;
    tmp_msg_0.z_units = 20U;
    tmp_msg_0.speed = 0.160030901145;
    tmp_msg_0.speed_units = 64U;
    tmp_msg_0.custom.assign("SSRFVLYYZNYGZFHTJHVMBULGDJVBUYFLGONIHSPIDWJHHZKQRLIHZBEOSXOGOZBNWTKWBIMCJQZKRAWQERKPPNJMTADCOWMDQEAWRCLCYDPDQGFDIXKEXQPLAHLXKPQOURDJGNUKSQOXGOFHCVSCCTLPJTUONBGTUITEJRMIJWVVUMUARACGICQUBYLABFHSZPEWIEIVXNXEFVOFSDTSATRZWJZXXCMSUTLFXKWRZNKAKEHYYVMNPEBM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 14215U;
    msg.info.assign("EWAQXFNCYJLHIYTFYEOCOLVELBVPBXOWTSHBYKSJLQWZLVEIRWZSXOHSUBMODKRUIRZTEHWUOARMDFUVJGIMPEGFNKWLBNNSPZVCRDGPTJMLRIPBFCDTZYNDLJNKOGBYUUAFF");

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
    msg.setTimeStamp(0.711151852792);
    msg.setSource(32933U);
    msg.setSourceEntity(234U);
    msg.setDestination(43805U);
    msg.setDestinationEntity(90U);
    msg.type = 57U;
    msg.request_id = 6716U;
    msg.command = 145U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 45841U;
    tmp_msg_0.custom.assign("SRRYEDBOANWCJZMHJDYUXWPMNRTAFZNQTECLKQKDWHSOFBMGUYMIQNTWHDEXSATJBAVNP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 14966U;
    msg.info.assign("XZLBTDYBFQULSMMHJQPICCLXMIOIELNBJKJZBNTFBJRESFQHPXXUUNYWOOKAPMAPDSJNLDXMBXVFGBXFOIIWGDQNSYUCZSKHCIUFUCWHMQGLFDPZOPDIWQYGVJMAQKRRNJZWDJGGRXDHVBVSFTGZCHTAIGGVAPHOMMRYWTYXT");

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
    msg.setTimeStamp(0.610973335081);
    msg.setSource(28921U);
    msg.setSourceEntity(139U);
    msg.setDestination(5177U);
    msg.setDestinationEntity(65U);
    msg.type = 253U;
    msg.request_id = 42443U;
    msg.command = 23U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 44503U;
    tmp_msg_0.lat = 0.944298980541;
    tmp_msg_0.lon = 0.474663815404;
    tmp_msg_0.z = 0.347996802204;
    tmp_msg_0.z_units = 188U;
    tmp_msg_0.speed = 0.488102827194;
    tmp_msg_0.speed_units = 161U;
    tmp_msg_0.custom.assign("TBQMUUVKWMWVEUXTJOBNRACWAGFPSZPSRXVQOQKDRBGCCOHGUDNVSXHYXXDEGJCCLYOSTJIAYWNOTKBLVJINHJJLQGHMLKGTJAZLFERZZSLIEVILPPSORRXGZFQEWDSUIHOBEMFMYUEASCHTARPGKLDDNVYYTFIPZFJZISTMUBBDOXICEXZIYKX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 30522U;
    msg.info.assign("VWXIYYAMNKYQTXCHCQJXKPIRMTGKNZPFVDCMOFOWQISHLTJECUJBJMLEMYPTPJKJGHOGIXLVOHSGTLWKFWXZWEXDHAURNDLO");

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
    msg.setTimeStamp(0.207114016358);
    msg.setSource(58178U);
    msg.setSourceEntity(143U);
    msg.setDestination(42510U);
    msg.setDestinationEntity(115U);
    msg.command = 244U;
    msg.entities.assign("UDDBXECINLBFJQSJPTLQNRRIVNSWCTAIUBNTIOUECCBXWFCZXCGUCXMFBZHZLOVOAMOJMBKHLNBMZYYQEKNAMYBVAVIKQJPOPURTZGOQS");

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
    msg.setTimeStamp(0.746671497472);
    msg.setSource(24668U);
    msg.setSourceEntity(85U);
    msg.setDestination(36135U);
    msg.setDestinationEntity(52U);
    msg.command = 182U;
    msg.entities.assign("XGNULNLRAXZDMFHZQBWHILCBXUFCTVEWJYMBPGQELSTLTAQWVRYPUWXOGUHEIIKXOEAPGFRFGGODAFSKYLHJNXRQRNPCENUISPJVBMQFYQRJQEOLJUFNMTRDZPWEDQKEYISYOUOOMTCJUVAPTIGOAPWBWXUKRBVKODXSYMCCNQYIAJZBWYMMYCIDWCSPV");

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
    msg.setTimeStamp(0.881495294095);
    msg.setSource(38216U);
    msg.setSourceEntity(144U);
    msg.setDestination(2445U);
    msg.setDestinationEntity(7U);
    msg.command = 232U;
    msg.entities.assign("JMZFFHJUJFRKXBUPDMOXNTXKNQTGAQJWUGBDXHTPQUCOMINMNLWYZNMYVSHIFRKYXPDNCPLABHTAAELEGYLRTIFSXG");

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
    msg.setTimeStamp(0.153350109281);
    msg.setSource(10294U);
    msg.setSourceEntity(215U);
    msg.setDestination(2038U);
    msg.setDestinationEntity(127U);
    msg.mcount = 111U;
    msg.mnames.assign("FZFIXNJNDOKZNOLJXTHRVAWGTMLWEIEGOSNMBFYODFRPEYVLVWSSIKOCJFPPGZDGDBFGUJHRKBBRCBOAQHFANMQVPJTPTINKHWDUBADIVQMAUHLTYKLCQBJLUGLXULZCYULQHPPQYFZOWGSSSXNQCRUJIVMTWOXEWDXYORHUVBMYZGSB");
    msg.ecount = 147U;
    msg.enames.assign("NMPUKCUEXAORKUYWPKUQCENNVROIZHGLALEYZBQWRNYHBQIRXMGEYOCANCFLBJXLJWDQINBHAPFGNFJVSDYLVWWUYUAMGLQSHFOPOYZECVPUTJCJDGUKFHCOHSIHWGBTZNVBPZGVTZYOPBPFTQXSDWTKPIXKTIABSVXIRAZATXUOMGOQLPJTL");
    msg.ccount = 12U;
    msg.cnames.assign("HFWNPCPVXUNYFKFKAHLSKGENNVIKINNEWDWVFJJRTMBPIHKSPMLGREOVGYXGLTIBVOQTZDYSPZBIQKFQREMYTJAKHGNOCDZADOVXYUNFBIMAWSTWYFPMUTWQRFIVHTKEAZMOJIXRLYULJZLUBJHKZKNSASCYCHRMZGWEVOLZQRPETLLTSMUCQFCCBBMCZFRCDQULBOJXUGWXAEWJGIAPXQPUXDRYONXJ");
    msg.last_error.assign("SUIXDBCZRGXALUDQLEUUWNNJVDALXGPFXHDZIKS");
    msg.last_error_time = 0.505331849261;

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
    msg.setTimeStamp(0.501112733041);
    msg.setSource(43215U);
    msg.setSourceEntity(110U);
    msg.setDestination(9538U);
    msg.setDestinationEntity(202U);
    msg.mcount = 94U;
    msg.mnames.assign("NKPXJXVIAEALJFFNEEZTQBAUGMLRARBOUNXONDZVDJCCZDLGDQKBFERAHMOUYHRHFKVOEJHIPKGYYLXYIFCZRFILFIXRDUJISSVRNLYNICDMMHATMZMVQSMQIHDYZEUAULGQBOBSCNVWDRJZVWCPTBQSZVWAGGKGWXWMNPYXTZRUPYJHSTCFSGXWBWBXC");
    msg.ecount = 154U;
    msg.enames.assign("QNYMLPCGJHSFNHADTYQIZSFAFVDRVBUEWUQN");
    msg.ccount = 0U;
    msg.cnames.assign("KSQZLEILBTMOUIMFANNLDWVKDGGBFRVDIYFHWKWIBJCGOHBREQDSNYSTVBEEPHMSLWXXFUHXZAQPJCQYWZLBKOTTEGSUNUZYCTEADTLKRXFHCHLACZVLAKJAYPBVHGYDAGRCSNUTRDGQMTZCPTCXLRGFJOEYQAVJMFYRNVZMEQHSUWKJRPVKUEHKNPOFOIRBOTJUOEPDIOIBSUQXNSQGYJIDDRMQ");
    msg.last_error.assign("LRTOSPBROKNYUZQHJLWFJAIMXOTZUUIGBPBEBCAQMDPNLSFKMSXJFKEJOLAULCBBIDNAUWYMVEKTHUJRZTGXUBWOZOVNPCHGKEYWCKJFVPGZIHICLRHXASITGIPVSYFQNVTAMQUOLFPXQSMLJEQBCMTDEGTPYJSKPTLXHRQDCLBARUCNSHUVXMMKAXHEHIGQODMYNICFVIGWWKODZHSXGVRVYZJDWRZFZGNEVXQZEPRDY");
    msg.last_error_time = 0.231935638036;

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
    msg.setTimeStamp(0.985028503018);
    msg.setSource(7633U);
    msg.setSourceEntity(67U);
    msg.setDestination(23795U);
    msg.setDestinationEntity(89U);
    msg.mcount = 202U;
    msg.mnames.assign("SWUXBTVSBKBAIZAVUTSJDHXGWQZSPMJXPRREIIEUVWNGXHJEOSOZRHYPYSYRFVDOMYHCHRTYPVLDMCUAA");
    msg.ecount = 245U;
    msg.enames.assign("BIYTBJSRPPNAQCFQGNBVUWFVOYQYMKHVAJGVZDCEIPDCDAOJQGWEBKXFWKDBJRXHMRRWWCCSSNXKTCHHEZDQAKONEXOWUJLPZTIRZIEUTALQZMYFTKZTAXNNOYJEILHUXGKIMVUEKGPZMIBRILUHBYHJKYMOAQUGMNQX");
    msg.ccount = 117U;
    msg.cnames.assign("MJHUFXQFODKWVLIWNXEWQNPWKCTLQVKRID");
    msg.last_error.assign("QWRABBFIJTOLJVBURWGVELRLJTTTWDTQPLJBXWYDETMGJBGANEDYJZGQSAIDH");
    msg.last_error_time = 0.499605010307;

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
    msg.setTimeStamp(0.151922570948);
    msg.setSource(17917U);
    msg.setSourceEntity(230U);
    msg.setDestination(54761U);
    msg.setDestinationEntity(90U);
    msg.mask = 204U;
    msg.max_depth = 0.515204901928;
    msg.min_altitude = 0.0423403420486;
    msg.max_altitude = 0.986138319166;
    msg.min_speed = 0.97488215128;
    msg.max_speed = 0.707220860698;
    msg.max_vrate = 0.551607087087;
    msg.lat = 0.169524403741;
    msg.lon = 0.749054273954;
    msg.orientation = 0.500616812874;
    msg.width = 0.634060383785;
    msg.length = 0.941407004941;

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
    msg.setTimeStamp(0.471935100187);
    msg.setSource(25475U);
    msg.setSourceEntity(134U);
    msg.setDestination(43415U);
    msg.setDestinationEntity(189U);
    msg.mask = 44U;
    msg.max_depth = 0.295633979908;
    msg.min_altitude = 0.694680957234;
    msg.max_altitude = 0.389066887653;
    msg.min_speed = 0.00976986180709;
    msg.max_speed = 0.787453607899;
    msg.max_vrate = 0.44781132366;
    msg.lat = 0.412468420074;
    msg.lon = 0.0245246749461;
    msg.orientation = 0.833104208295;
    msg.width = 0.214292241248;
    msg.length = 0.105018590497;

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
    msg.setTimeStamp(0.525887435799);
    msg.setSource(15679U);
    msg.setSourceEntity(47U);
    msg.setDestination(27315U);
    msg.setDestinationEntity(226U);
    msg.mask = 18U;
    msg.max_depth = 0.358218718945;
    msg.min_altitude = 0.945956243157;
    msg.max_altitude = 0.290577230359;
    msg.min_speed = 0.0757881051752;
    msg.max_speed = 0.119143300102;
    msg.max_vrate = 0.656201336182;
    msg.lat = 0.82832981005;
    msg.lon = 0.625446335646;
    msg.orientation = 0.769822035527;
    msg.width = 0.706820784261;
    msg.length = 0.323038304855;

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
    msg.setTimeStamp(0.995872512927);
    msg.setSource(44300U);
    msg.setSourceEntity(95U);
    msg.setDestination(544U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.488135926541);
    msg.setSource(6606U);
    msg.setSourceEntity(215U);
    msg.setDestination(37334U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.75731628798);
    msg.setSource(41658U);
    msg.setSourceEntity(90U);
    msg.setDestination(32935U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.410586151033);
    msg.setSource(52870U);
    msg.setSourceEntity(206U);
    msg.setDestination(5602U);
    msg.setDestinationEntity(192U);
    msg.duration = 59431U;

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
    msg.setTimeStamp(0.605527744538);
    msg.setSource(42269U);
    msg.setSourceEntity(49U);
    msg.setDestination(52526U);
    msg.setDestinationEntity(42U);
    msg.duration = 19431U;

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
    msg.setTimeStamp(0.115076525938);
    msg.setSource(18056U);
    msg.setSourceEntity(224U);
    msg.setDestination(6780U);
    msg.setDestinationEntity(83U);
    msg.duration = 22516U;

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
    msg.setTimeStamp(0.458730965799);
    msg.setSource(18255U);
    msg.setSourceEntity(45U);
    msg.setDestination(15795U);
    msg.setDestinationEntity(87U);
    msg.enable = 18U;
    msg.mask = 3301125566U;
    msg.scope_ref = 855671877U;

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
    msg.setTimeStamp(0.207772075671);
    msg.setSource(28857U);
    msg.setSourceEntity(24U);
    msg.setDestination(30089U);
    msg.setDestinationEntity(112U);
    msg.enable = 6U;
    msg.mask = 3289430549U;
    msg.scope_ref = 1973757442U;

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
    msg.setTimeStamp(0.835615107389);
    msg.setSource(62380U);
    msg.setSourceEntity(235U);
    msg.setDestination(32338U);
    msg.setDestinationEntity(132U);
    msg.enable = 172U;
    msg.mask = 722551777U;
    msg.scope_ref = 4167594584U;

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
    msg.setTimeStamp(0.764304614805);
    msg.setSource(32235U);
    msg.setSourceEntity(63U);
    msg.setDestination(38504U);
    msg.setDestinationEntity(29U);
    msg.medium = 55U;

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
    msg.setTimeStamp(0.156597772461);
    msg.setSource(24868U);
    msg.setSourceEntity(69U);
    msg.setDestination(3644U);
    msg.setDestinationEntity(124U);
    msg.medium = 123U;

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
    msg.setTimeStamp(0.918464115699);
    msg.setSource(56556U);
    msg.setSourceEntity(176U);
    msg.setDestination(8463U);
    msg.setDestinationEntity(32U);
    msg.medium = 86U;

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
    msg.setTimeStamp(0.597714902285);
    msg.setSource(45569U);
    msg.setSourceEntity(87U);
    msg.setDestination(35389U);
    msg.setDestinationEntity(171U);
    msg.value = 0.981403818032;
    msg.type = 160U;

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
    msg.setTimeStamp(0.44547647153);
    msg.setSource(39788U);
    msg.setSourceEntity(153U);
    msg.setDestination(16867U);
    msg.setDestinationEntity(140U);
    msg.value = 0.859518734932;
    msg.type = 228U;

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
    msg.setTimeStamp(0.181757404007);
    msg.setSource(452U);
    msg.setSourceEntity(229U);
    msg.setDestination(31327U);
    msg.setDestinationEntity(170U);
    msg.value = 0.721923835375;
    msg.type = 11U;

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
    msg.setTimeStamp(0.245630643307);
    msg.setSource(21931U);
    msg.setSourceEntity(184U);
    msg.setDestination(57463U);
    msg.setDestinationEntity(24U);
    msg.possimerr = 0.543373801515;
    msg.converg = 0.486091682576;
    msg.turbulence = 0.276826923035;
    msg.possimmon = 1U;
    msg.commmon = 43U;
    msg.convergmon = 12U;

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
    msg.setTimeStamp(0.972994357691);
    msg.setSource(46871U);
    msg.setSourceEntity(153U);
    msg.setDestination(36722U);
    msg.setDestinationEntity(235U);
    msg.possimerr = 0.34937587023;
    msg.converg = 0.370257302;
    msg.turbulence = 0.548814565453;
    msg.possimmon = 133U;
    msg.commmon = 137U;
    msg.convergmon = 195U;

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
    msg.setTimeStamp(0.454354559188);
    msg.setSource(36861U);
    msg.setSourceEntity(232U);
    msg.setDestination(19094U);
    msg.setDestinationEntity(173U);
    msg.possimerr = 0.0588287867439;
    msg.converg = 0.640636167293;
    msg.turbulence = 0.481362652882;
    msg.possimmon = 108U;
    msg.commmon = 242U;
    msg.convergmon = 246U;

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
    msg.setTimeStamp(0.665101803088);
    msg.setSource(3451U);
    msg.setSourceEntity(178U);
    msg.setDestination(27640U);
    msg.setDestinationEntity(53U);
    msg.autonomy = 218U;
    msg.mode.assign("SYZXIUGJTGLHADYSEBJHDFQMGHNYYZXEELA");

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
    msg.setTimeStamp(0.46583382388);
    msg.setSource(61098U);
    msg.setSourceEntity(197U);
    msg.setDestination(1985U);
    msg.setDestinationEntity(221U);
    msg.autonomy = 100U;
    msg.mode.assign("SZTNPPRDOMMUYIENQBJSBVNOWCBVWORFAWFXHJSMATAHPRVSNRIJJEDSEIBGEDJZZBVWVXCAKRFACCYYPFKHHNXZDKHYCQSHVJOWVBGEAYM");

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
    msg.setTimeStamp(0.836438728719);
    msg.setSource(31625U);
    msg.setSourceEntity(107U);
    msg.setDestination(53756U);
    msg.setDestinationEntity(52U);
    msg.autonomy = 9U;
    msg.mode.assign("GZJRVUALNEDEOLOFUXBXHPVYEVYYNAPOABBLPGPHEKJDRBNOUHRBBZWJASKEFNXSIVFMPMXZFLWXHU");

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
    msg.setTimeStamp(0.316026936463);
    msg.setSource(59925U);
    msg.setSourceEntity(215U);
    msg.setDestination(45601U);
    msg.setDestinationEntity(108U);
    msg.type = 103U;
    msg.op = 155U;
    msg.possimerr = 0.276824600999;
    msg.converg = 0.876404198877;
    msg.turbulence = 0.33378141173;
    msg.possimmon = 224U;
    msg.commmon = 29U;
    msg.convergmon = 218U;

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
    msg.setTimeStamp(0.861055903783);
    msg.setSource(48386U);
    msg.setSourceEntity(246U);
    msg.setDestination(22979U);
    msg.setDestinationEntity(186U);
    msg.type = 230U;
    msg.op = 166U;
    msg.possimerr = 0.903092742155;
    msg.converg = 0.601559992064;
    msg.turbulence = 0.929682150042;
    msg.possimmon = 170U;
    msg.commmon = 69U;
    msg.convergmon = 64U;

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
    msg.setTimeStamp(0.753963625435);
    msg.setSource(39261U);
    msg.setSourceEntity(102U);
    msg.setDestination(13133U);
    msg.setDestinationEntity(92U);
    msg.type = 8U;
    msg.op = 36U;
    msg.possimerr = 0.558293165621;
    msg.converg = 0.773898652242;
    msg.turbulence = 0.332969876214;
    msg.possimmon = 194U;
    msg.commmon = 80U;
    msg.convergmon = 103U;

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
    msg.setTimeStamp(0.780676971982);
    msg.setSource(31780U);
    msg.setSourceEntity(163U);
    msg.setDestination(18436U);
    msg.setDestinationEntity(26U);
    msg.op = 45U;
    msg.comm_interface = 124U;
    msg.period = 52429U;
    msg.sys_dst.assign("EEHCUGDTBIZXVZRGTMSKRFATULMEBLHXYJMVHWZTLQHRXHUWRZDKOFHCDLWAPOJOOBVSZUABGDELRZWMTLRFVPYWPMCJCNYBNZPATUNTNVUQBSFHAGSXFAXXTEDLPTENIQPSOERRIIKUAFGQQJYMLNP");

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
    msg.setTimeStamp(0.31782370062);
    msg.setSource(2702U);
    msg.setSourceEntity(74U);
    msg.setDestination(37351U);
    msg.setDestinationEntity(134U);
    msg.op = 5U;
    msg.comm_interface = 28U;
    msg.period = 26709U;
    msg.sys_dst.assign("TKDGSZJWJFYDGYBCJJXLEZMKHMFNQNJCRVGMP");

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
    msg.setTimeStamp(0.76055784506);
    msg.setSource(447U);
    msg.setSourceEntity(33U);
    msg.setDestination(42593U);
    msg.setDestinationEntity(216U);
    msg.op = 249U;
    msg.comm_interface = 241U;
    msg.period = 52190U;
    msg.sys_dst.assign("UMNEQASYCLDTLEBFHFPOOGZTVCBPMRSEMWZHJHAJYDNSWWZIMFPZKDZXDNNJIDWINAOINDQLIAIFMLQKLXGJGEAJLUBTTUVYWSSWSPZYINUVOZGLTCAWXCHXUGOENMRQRRTKYXOHYXIDYCKWJRFGTUXVAIBJZHGPOGBWOBSQELVEAQIXFMKFTOGNQYVVWJYCQCHEFLSRMXQUKCGURQBHPHNDMOMLHJACPDXETRPZFJKBPKVUF");

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
    msg.setTimeStamp(0.600959542253);
    msg.setSource(58975U);
    msg.setSourceEntity(124U);
    msg.setDestination(61904U);
    msg.setDestinationEntity(10U);
    msg.stime = 3105446265U;
    msg.latitude = 0.352554921444;
    msg.longitude = 0.022479565988;
    msg.altitude = 49316U;
    msg.depth = 33781U;
    msg.heading = 34370U;
    msg.speed = 26538;
    msg.fuel = -88;
    msg.exec_state = -37;
    msg.plan_checksum = 48230U;

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
    msg.setTimeStamp(0.559402249097);
    msg.setSource(14486U);
    msg.setSourceEntity(73U);
    msg.setDestination(51713U);
    msg.setDestinationEntity(46U);
    msg.stime = 3233939733U;
    msg.latitude = 0.142477459197;
    msg.longitude = 0.372240195862;
    msg.altitude = 62876U;
    msg.depth = 34484U;
    msg.heading = 33089U;
    msg.speed = -4859;
    msg.fuel = -52;
    msg.exec_state = 44;
    msg.plan_checksum = 26720U;

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
    msg.setTimeStamp(0.552036796343);
    msg.setSource(46813U);
    msg.setSourceEntity(46U);
    msg.setDestination(19125U);
    msg.setDestinationEntity(82U);
    msg.stime = 3948523624U;
    msg.latitude = 0.987874595657;
    msg.longitude = 0.00386383060613;
    msg.altitude = 33496U;
    msg.depth = 40789U;
    msg.heading = 23408U;
    msg.speed = 6006;
    msg.fuel = -46;
    msg.exec_state = 24;
    msg.plan_checksum = 50462U;

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
    msg.setTimeStamp(0.938915057576);
    msg.setSource(36624U);
    msg.setSourceEntity(131U);
    msg.setDestination(45015U);
    msg.setDestinationEntity(111U);
    msg.req_id = 34974U;
    msg.comm_mean = 228U;
    msg.destination.assign("IVFPTESHAJCFWQDLTIRLOVECIQTREBSMZYLBYIPMCEXURTPHOAXMUWFSQKZNJADADIUBGMJVFWCNELJWRIERWCJOBQCDKDYRKVSQOGXU");
    msg.deadline = 0.895472548165;
    msg.range = 0.178393168817;
    msg.data_mode = 223U;
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CSLVGNREGDIBURNQJQZPWASDCKUOSMFDMTLICFOFAPJLTEZOOYNHAFTPWNWHYGVGDSEDBKWTWZNEDRXHARBJVBPDAOWJSQUIVEXYKRKHFPTIERPUVQYLGNUMRLCCMHMKHVTQWMENQCYJCXEBUSQKYJIDHMSKVXDKQEKHXZVNXWWILOBXPBNKMFGZGXAXBCQSJTFAZUYGWYQTILDVIRZMNZAESUTUOPBHJVYMHOCGRZOOTAYLXPI");
    tmp_msg_0.value.assign("XNCEHPYPJFDZZDBZMBWOKMYFMERMJJZQTCJPKEIXIXNOAHSKKTBMVLVDTYXHGXJROHZWMPVGCFITRJURNBPMIUCSHYMLTBBZUAVQYWFYAQEKQGRGSPDVORKUFWGMDTFZHVSFNIEKCJOXBSFVSAKIDWCUDICHSANPOLVQEQUSSLKVWFGWEJZTPDVAJQYCQYRGALYMOPBHRWZGHUU");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("PEKUCDHVZLWVDGOAYCRVWGMJKPXTDEPNUBSWEPPCKHRGCNXEAIXDAFIEFEOQQYCHOLVXNBXBBRCURSZXOMWY");
    const char tmp_msg_1[] = {19, -93, 98, -106, -20, 90, -62, 30, -3, 54, -83, -4, -9, 42, -57, 47, 104, 30, -22, -63, -55, 41, 19, -48, 104, 18, -81, 101, -95, 94, -66, -118, -32, 29, -2, -59, -36, -47, -32, 10, -21, 85, -81, 57, -45, -123, -106, -68, 95, -124, -12, 102, -127, 0, -69, -15, -50, 10, 115, -101, 29, 67, 96, 62, -15, 72, 30, 73, -71, 111, 61, 104, 108, -88, -44, -3, 78, -10, -58, 34, -41, -46, -76, 70, 63, -98, -32, -56, -12, 120, 53, -56, 125, -121, 55, -54, -78, 0, 102, -3, 67, 71, -57, 74, 118, 100, -91, -78, 30, -48, 23, 66, -42, -117, 82, 0, -93, -82, -82, -64, -102, -69, -25, 16, -21, -84, 64, 70, 89, -21, -50, -86, 43, -77, 37, -3, 61, 50, 74, -94, 69, 82, 6, -76, -19, 126, 87, -59, -103, -6, 122, 84, -16, 122, -52, -31, 63, -113, -21, 112, 10, 18, -40, 2, -112, 94, -46, 84, 48, 110, 106, 20, 64, 77, -112, 58, 74, 96, -119, 83, 23, 59, -84, 29, -75, 101, 28, -4, -30, 103, -109, -7, -77, 79, -102, 0, -107, 8, 7, 103, 55, 45, 88, -23, -106, -102, 79, -23, -44, -106, -47, -2, -117, -12, -80, 126, 121, -50, -81, 85, -48, -15, -54, -86, -55, -77, -49, -18, -114, 19, 103, -9, -71, 106, -104, -21, -26, 53, -118, -42, 121, -83, -43, -116, -68, -69, 51, 29, -62, -7, 86, -21};
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
    msg.setTimeStamp(0.267285253451);
    msg.setSource(17605U);
    msg.setSourceEntity(107U);
    msg.setDestination(47835U);
    msg.setDestinationEntity(135U);
    msg.req_id = 229U;
    msg.comm_mean = 184U;
    msg.destination.assign("WSOXNWXDZBPFDBKBKGVJITPSWRIEIFVENZYDAZROAZOARBYTUPUYIZWMHHAUXZEECLMVXYJTPCBYTSMQKGQCFSTOUFQBMQZNICOKPSPIJLDH");
    msg.deadline = 0.0225158711474;
    msg.range = 0.974315485501;
    msg.data_mode = 174U;
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 165U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GBRSOJPRTPGUMYXDTHVGUAQIZENUIKVZUWXOFHPUZTEFJWTMKDONIGEJVXKEWWBIITQZKRZEIXYQFKTHVSLEMDRPJQCDJLRBYMNLJAABRZPVRTODTUYEAFDSZUJYAXHOYUCCJULX");
    const char tmp_msg_1[] = {77, 4, -59, -123, 124, -73, -33, 94, -114, 106, 34, 41, 40, 102, -113, -109, -102, -51, 18, 28, -96, 52, 96, -14, -38, -37, -53, -19, 10, 116, -98, 97, 124, 85, -87, -13, -125, -49, 63, 62, 88, 26, 19, -76, -11, -32, -128, -43, -90, 118, 113, -45, 104, -108, 95, -71, 58, -44, 35, -116, 42, -110, 87, 34, 82, -71, -75, 88, -58, 12, -107, -70, -127, -36, 23, 62, 20, -8, 34, -21, -59, 25, 44, 79, -11, 11, 69, 55, 60, 26, -116, 47, 61, 50, 23, 116, -117, -78, -9, 2, -43, 119, -41, -22, -15, -75, 79, 97, 104, 22, -41, 40, 53, -15, -57, 32, 121, 57, 17, -67, 47, -9, -2, 6, -97, 5, 15, 77, 41, -7, 60, -103, -92, -23, 44, 66, 69, 42, -120, 118, -16, -15, 126, 18, -107, 21, 27, -23, 31, -128, -63, 44, -34, 126, -18, 64, 120, -19, -50, -8, -102, -6, -25, 6, 88, -43, -74, -64, 93, -67, 87, -103, 74, 77, -47, -64, -79, 10, -57, -63, 12, -13, -34, 25, -42, 96, 99, -42, -106, 36, -85, 12, -53, 72};
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
    msg.setTimeStamp(0.409410633903);
    msg.setSource(16396U);
    msg.setSourceEntity(117U);
    msg.setDestination(26290U);
    msg.setDestinationEntity(161U);
    msg.req_id = 52965U;
    msg.comm_mean = 178U;
    msg.destination.assign("ANGFIGFIFIPTWDNECOYILGWQHSBJHBR");
    msg.deadline = 0.0350220479058;
    msg.range = 0.687176313453;
    msg.data_mode = 38U;
    IMC::ApmStatus tmp_msg_0;
    tmp_msg_0.severity = 153U;
    tmp_msg_0.text.assign("LXXFAAYTVFDDQAHBQWNGWEMPWXENOKUJUKGELLTUE");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("TENSCWBFZLRMEMKYJJUVPPNXEPFGKLKCWCPFFTBWWPIYQQABNCMFPDJBNIGLGXSCOVRLTWGRRMJXSVZPMJRUAYCRODPFAZDGUAOOINSVKGARZYYFGQDXEBYOHIXZVKXNISAMVLEQQWSBNHYISODZIAQUFHGOLBIYTMUYZSHUEIDOKYOCMEQOQHTLHMLEZPDXJSJEHLXCBLWADIRWV");
    const char tmp_msg_1[] = {41, 59, 101, -109, -80, 10, 2, -9, -47, 90, -56, 32, -96, -70, -3, 18, 79, -77, -79, 30, 87, -114, -23, 85, -9, 105, -65, 51, -116, 71, 79, 18, 73, -66, -40, 44, 103, -46, 83, -13, -15, 57, -71, -51, -10, -7, 21, -31, -13, 7, 39, -12, -55, -26, -43, 66, -72, 65, -63, -65, 79, -104, 40, 67, 88, -38, -104, -12, -39, -115, -26, 68, 102, 121, 44, -85, -16, 90, -18, -73, 112, 122, -99, 120, 112, 52, -126, -55, 61, 47, -17, 18, -118, 28, 41, -10, 105, 12, 96, 32, -12, 76, 15, 120, -64, 50, -66, 45, 109, 115, 43, -75, 9, 86, -10, -70, 34, 11, -114, 69, 66, -1, -75, -119, -106, -113, -1, 3, 79, 111, 91, -106, -64, -101, 80, -117, 83, -46, -126, -40, -119, 19, -81, -126, -21, -112, -9, -116, -93, -55, -102, -125, 65, -80, -74, 118, -104, 6, 69, -81, -95, -116, 46, 31, 31, -20, 11, 36};
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
    msg.setTimeStamp(0.694489045206);
    msg.setSource(54796U);
    msg.setSourceEntity(189U);
    msg.setDestination(6810U);
    msg.setDestinationEntity(33U);
    msg.req_id = 10934U;
    msg.status = 2U;
    msg.range = 0.785345421659;
    msg.info.assign("OOMBWPTFXWOPECTRGXAUVLMWSJMWDKZJUZQHWXMGNYHUXMYLFYAEOIODCRYBZYEUJIRPHRJSQEXQTPRDDDMPAAGFSJDNTCKJCGZAWWJBEZIBXMMSHQPWCVLUHISMUPIGNAHGIFNZCCSSWK");

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
    msg.setTimeStamp(0.583206092451);
    msg.setSource(10735U);
    msg.setSourceEntity(23U);
    msg.setDestination(39280U);
    msg.setDestinationEntity(87U);
    msg.req_id = 57225U;
    msg.status = 150U;
    msg.range = 0.561271801811;
    msg.info.assign("QCNJZOYMDLURLIGYTPJPWDEMUVWUPHFJOYOLTCAOTUEZGCBIEVUKCLRVGZHBYNUXVKPVAZXXJNWQEWRFWOIVKZPI");

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
    msg.setTimeStamp(0.756242198488);
    msg.setSource(16581U);
    msg.setSourceEntity(178U);
    msg.setDestination(34932U);
    msg.setDestinationEntity(242U);
    msg.req_id = 46294U;
    msg.status = 45U;
    msg.range = 0.106223157564;
    msg.info.assign("MIGDNBAGDXPYDRZQORWSDSGNQNEFZIHBMAQYRIPNMNJTUISTBGLTFNEHZCZSCWIPYHXJCSPFKRXAJKXLAZJTSABAWUQUOVPVQFTHSFEBLIDGWUCLDZWCRQOKHORPQDKMAEYALBKBQNPVEDGPMPMR");

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
    msg.setTimeStamp(0.714100210646);
    msg.setSource(57237U);
    msg.setSourceEntity(139U);
    msg.setDestination(50720U);
    msg.setDestinationEntity(108U);
    msg.req_id = 56426U;
    msg.destination.assign("BVBEFCQFADHYMQTLEVSUSKPITMNUQYVIWCRWJWRFKMNLYBOCZTOVPRMZGIDXEPLIKKHVUKRMWNFNBIFXGUDTSGDZOVYZPXPCMGSRRCHHUXKTBTPQZEBNXX");
    msg.timeout = 0.993474614099;
    msg.sms_text.assign("ISZCKGGLBGBZEHUSZVLEQXOCTATPDMAJAFOPGJQZKQCLJOFYUADAFCYRXTRDJNPDFUJZKIUBUQRGUIBVMTNAFHYVHANIBZKWLTVNDXQWPFOMENPRPOZWWXAIREJEPWJTYYVIEDGYKMLSSVGMKCTEFSGWWVTULBEPKLEDLYMQODJVJRSBVUQFRBXDHCSWCLNQCNYMNXKISZFFQPOHYHZRDNISBEMCHPIAACSJXI");

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
    msg.setTimeStamp(0.433194158925);
    msg.setSource(57510U);
    msg.setSourceEntity(50U);
    msg.setDestination(58112U);
    msg.setDestinationEntity(105U);
    msg.req_id = 29541U;
    msg.destination.assign("NXTTHJQGMYDYZMZPVAXHLMLPEEQZGWFGJCVHWULWROOSLJXJISZVUKTWTPDIWVTANUFBKOLOMVIUXPIQIPUOUKTANFLWGYJMMNXSCIVWTJHSY");
    msg.timeout = 0.135150859559;
    msg.sms_text.assign("KYXIBDEBXNMIWVFEOPVEZFUZJVMCORXTUGYIZPVPULIDEWHWZHSRAVSWKEJFTCBPJHKRHOKEYUGSBXNEKUJGYOLDIPQAAVUKYDOSQJIHBJMLPZMCVPSMUPXRFHNAAKEKZWSENYOLNFFLGDNOYHUXRCURCIGMXLSDFHLAXQOXTCQQL");

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
    msg.setTimeStamp(0.787533998556);
    msg.setSource(61099U);
    msg.setSourceEntity(151U);
    msg.setDestination(29114U);
    msg.setDestinationEntity(63U);
    msg.req_id = 19064U;
    msg.destination.assign("OZNUFVTSVVGPBWPYBINPGYMPKAWSZCZMPUSGTMSYUJENDUAHNOSRVGDKLLYRVXBYCHHTQZJ");
    msg.timeout = 0.997967622135;
    msg.sms_text.assign("DYDZSQRIQPFVEIABLVZSROZHILQRSJKYZNIWWZFOCFZXACPKPHOMSVLOMUVJHFGSJPDNIUNEQREFTGVAPCSUBESVGNGBSZLTTLTZCCAOLVKMQUINBDYYOMXRIFUEQHWRQLGUCGQOQDRHEMRQPGKNFOAJATXHMNY");

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
    msg.setTimeStamp(0.164796213684);
    msg.setSource(64223U);
    msg.setSourceEntity(47U);
    msg.setDestination(38981U);
    msg.setDestinationEntity(192U);
    msg.req_id = 34539U;
    msg.status = 214U;
    msg.info.assign("SEDXATHVUUKWYSITRW");

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
    msg.setTimeStamp(0.621624273281);
    msg.setSource(55158U);
    msg.setSourceEntity(59U);
    msg.setDestination(25041U);
    msg.setDestinationEntity(225U);
    msg.req_id = 2082U;
    msg.status = 243U;
    msg.info.assign("IRCKXPPHUJMCOCEMSSUKIHVYUDWSLPHEQMZAPNQPRMOWQRIDEYAJKQFIENXBEBKCSNYWLTGDFVXDDLNDHJDAJLATMYACAKTHOKSYIRZCKZZVZLUMGEASFGNWJMHTCCXKFQGIXHFYPNRWVZXNBSD");

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
    msg.setTimeStamp(0.242211796309);
    msg.setSource(20519U);
    msg.setSourceEntity(37U);
    msg.setDestination(42427U);
    msg.setDestinationEntity(150U);
    msg.req_id = 1411U;
    msg.status = 27U;
    msg.info.assign("DQKUDNIJWRVKJROZHTCSYFNYDIKKRHGHHTPIWCSWHSCFVCWYKNMHTPNQCXJGZLCZBMNMWGBGTKVYQDZIUEYLTVEROQMVFTTWGAEXMRESPXOFYBPDPQXAOIFGPCJMAFPDIQLQUSUHGZNPSSEUAKUVVNFLOXFLYLVANBEMFEUDIPPTKUBGKBCJISXDXBBEJLDNMWRALZVXGWWQXWRQJYMUFCECTJAZURLSYS");

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
    msg.setTimeStamp(0.860429521478);
    msg.setSource(16982U);
    msg.setSourceEntity(37U);
    msg.setDestination(7396U);
    msg.setDestinationEntity(210U);
    msg.state = 201U;

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
    msg.setTimeStamp(0.746268375388);
    msg.setSource(13400U);
    msg.setSourceEntity(9U);
    msg.setDestination(18398U);
    msg.setDestinationEntity(126U);
    msg.state = 113U;

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
    msg.setTimeStamp(0.614842223031);
    msg.setSource(8444U);
    msg.setSourceEntity(54U);
    msg.setDestination(1329U);
    msg.setDestinationEntity(161U);
    msg.state = 9U;

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
    msg.setTimeStamp(0.383377648973);
    msg.setSource(49521U);
    msg.setSourceEntity(121U);
    msg.setDestination(26303U);
    msg.setDestinationEntity(52U);
    msg.state = 190U;

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
    msg.setTimeStamp(0.91230878772);
    msg.setSource(46746U);
    msg.setSourceEntity(236U);
    msg.setDestination(17203U);
    msg.setDestinationEntity(20U);
    msg.state = 38U;

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
    msg.setTimeStamp(0.589750311288);
    msg.setSource(59962U);
    msg.setSourceEntity(125U);
    msg.setDestination(41064U);
    msg.setDestinationEntity(123U);
    msg.state = 115U;

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
    msg.setTimeStamp(0.937004033268);
    msg.setSource(40406U);
    msg.setSourceEntity(97U);
    msg.setDestination(28261U);
    msg.setDestinationEntity(119U);
    msg.req_id = 18964U;
    msg.destination.assign("JCYTNWSSNZTBGGACOXITACSEKUNJDZVRMLNFAQJPOYROEWSZYBHGTDYFNXEFORCTOFSRFAJWUCPPUKVKIVKCMRYSBNDRIGGXFCQWMGJHOZUVQNIDVNGORBXCIDPHJIUPXAFLQSLFBQBRUIQYZEJGTKHVOEHETQFZDLMMXMQEPAIPPYSWLKACIVWZJVZHPXIKWLOMSWZMWTBHYHASQHMERJXZVAKNUGKJRUDHLOKYLEPXDUNBWEFCDVQM");
    msg.timeout = 0.933107641867;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.412181780003;
    tmp_msg_0.lon = 0.414607886122;
    tmp_msg_0.z = 0.834701208169;
    tmp_msg_0.z_units = 115U;
    tmp_msg_0.speed = 0.20480910359;
    tmp_msg_0.speed_units = 87U;
    tmp_msg_0.takeoff_pitch = 0.783650520596;
    tmp_msg_0.custom.assign("VCCHSCWOGEYWUY");
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
    msg.setTimeStamp(0.917281437472);
    msg.setSource(33218U);
    msg.setSourceEntity(210U);
    msg.setDestination(10405U);
    msg.setDestinationEntity(224U);
    msg.req_id = 4757U;
    msg.destination.assign("SAMXNSITWLXIBCAKOEODWZQDYYHHXYWVYHAEYDXYCZBJPJRGEQLQBJVUHMWTOIAKYRALVSJZLAIZTHESNWXXCGWUBEMRSSIAQETFKODAHDMKVRKPCMGBMOJDCYNGYNFIHVPKNNHUMIFGTNXZUYRQIJPJJKQLPWJUVHDFSTVBCOFZZULKZICTLRCVZSOGEVORMWLRKGRMNLFQZODXMTFFJ");
    msg.timeout = 0.849789528805;
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 227U;
    tmp_msg_0.label.assign("XUXIPRVYIFWQYEBQLRXNQSYRKPKLVAGAJXLMEANSMANBMTPCEUCFHPLLFRAJWJDXUZYEFSSAUMJTITCJMOLWQDWKJAKNAHUYVZZVVUMVHIGRPXGSFIYBCLNEEDPYJBLTJFOQTBYQIOGRVDNRQQXZHJKUTRVZIBCANZSOCFDMLESUOACBGPPRRUUOVHVMTHGQZXOYHWTNOFLCTDEH");
    tmp_msg_0.component.assign("TPUUXFFRFWBWPRJRCEWWOEEXVSJQMZMQQODGDSYUHVQRJNDKQNKYTSYLNTPADCWSWEKZHEZAWNKWPGRINLSYKIIKOYUNZNGRYGHJJSQBVHMTKLIMAGLTPCPKVBCAHETDABLPVXXFMFGJLWIHOURNUDMPBLZBFKUIQHENJAQQXCIEMHAVYIBOVSXC");
    tmp_msg_0.act_time = 35325U;
    tmp_msg_0.deact_time = 18070U;
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
    msg.setTimeStamp(0.332081683361);
    msg.setSource(24536U);
    msg.setSourceEntity(106U);
    msg.setDestination(19002U);
    msg.setDestinationEntity(235U);
    msg.req_id = 44345U;
    msg.destination.assign("GULTDQHKWFEVSVBFTWXRJWHBIEXKPFYCJXGZTDIQKJZHHRLKOEPLAVDQCKFUOPRERBXIPYKXSMGULJJBIDBOGCFMRIDKHNPSUUNQRZCLLYEGLUXUZASOAJYISWWONQHTVNFWCAIENSVAQMYFCDGFASHAPMHFKOAZDTZTNMITPTBEEWYMUZZSYAGXMBRNRFXOVHZYDYLTGBUYMWBSOCVJAOVZOPGMJQCVPRLD");
    msg.timeout = 0.341201952546;
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("QUWQDJORCXYDENIYQPAAZUXMTXIHOUTSYEESDJGLCJSUXRQIHVWKSNAZKLMACODGZKGWYEOZVZPLORLASTKDBWCQDQGYGEPRHVDBMNNGHOAPVLVFWVJESCSSNODDWQIYSCIMMCHWKNMPOYOTAHTIHXVYBNRIQAUCRDPBZJFTFHIEPTJCBJZNKWQKFGUPFULYFPMFIMZXWJVLGZPKGMHTFQAIFBTECJBJRUZX");
    tmp_msg_0.sys_type = 131U;
    tmp_msg_0.owner = 20270U;
    tmp_msg_0.lat = 0.303892911459;
    tmp_msg_0.lon = 0.582745980815;
    tmp_msg_0.height = 0.823260831084;
    tmp_msg_0.services.assign("UTXOJQBHGPOJCIIIQEOXSNWCARBTOSIBFZPOSHWNDFOUSFVYGCYHREJQOYJRKRZSMXYNERILUWWMPTUCIBXKHVSGYNGAFQKQDLNARWPETXGPCMWXFZBMYAEJHXESHEYRLLQTPVREAAMKLFGGLCAKOIIUVFMYMDIHTPNFHDVCUMDEQVTWVURFIDKCTLSZXADWYCSJWNGBMKBNDDBPXAGEVOLJBZBVTWZYHLPTPUXANZKMU");
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
    msg.setTimeStamp(0.47877397165);
    msg.setSource(53489U);
    msg.setSourceEntity(59U);
    msg.setDestination(58215U);
    msg.setDestinationEntity(35U);
    msg.req_id = 60060U;
    msg.status = 215U;
    msg.info.assign("EWBNPLAHFRJEZNMDFPTCBDWPZSLISXEMDUDAPIWJBNLKJMCKAPZGFGYTMQHNCUSHALUGJIDFLZXVTQFZSRATZNHGOYMXUOJGLKRMJCFWBDUZWEITAQZLKDRDVBKTGOSYTWTGNSQXYFHJYCDAXEXVWXCBVREVNJUEFKSMWRIIMQXOQYVQGHOGBKONUKALN");

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
    msg.setTimeStamp(0.0599698080952);
    msg.setSource(3839U);
    msg.setSourceEntity(110U);
    msg.setDestination(7128U);
    msg.setDestinationEntity(79U);
    msg.req_id = 8993U;
    msg.status = 40U;
    msg.info.assign("SRBGGCTGXNQFFRXAEDRUVUOQNCLSTMJQFQQYRAF");

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
    msg.setTimeStamp(0.674574635075);
    msg.setSource(2078U);
    msg.setSourceEntity(240U);
    msg.setDestination(9101U);
    msg.setDestinationEntity(217U);
    msg.req_id = 15587U;
    msg.status = 86U;
    msg.info.assign("EZYXSFTBEIBGLACUDLREOWFJWCNYCETVNELQJPRDKTXKIAMTHHOPGRIUTARJGGRKCJVQPKIVEIDKJNRPGYFJFMMOURGEQTFZLBSTYPCATGHVQYZUXIPFSWPUMABXLHBXMSMVPHKXYBOEZTPWQSWAZOIQOWLLOYSKDAOYSDXGFMLNZVZXQJJDLBUHZEAQHJ");

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
    msg.setTimeStamp(0.714318477391);
    msg.setSource(49511U);
    msg.setSourceEntity(195U);
    msg.setDestination(47046U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.907455305126);
    msg.setSource(61120U);
    msg.setSourceEntity(1U);
    msg.setDestination(19195U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.0913833800732);
    msg.setSource(56595U);
    msg.setSourceEntity(187U);
    msg.setDestination(3659U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.911727868547);
    msg.setSource(42397U);
    msg.setSourceEntity(52U);
    msg.setDestination(8993U);
    msg.setDestinationEntity(74U);
    msg.plan_id.assign("PEGAUEMWSWPFCKQCKYFWVHKWXJMFMEXODLYIPVFPQHOVFJROXTUIVCRGZGRJEONGRTWGQKZCMYGSOGYSLRQRBVYMWCTONSMQUUWKBBCLTIZD");
    msg.description.assign("GJFTILIHKVYEXVRVEFXWUQLAHECFQMWSSJGINNGFMFZTDIRLTEVXDHTBBNNBISGLKVBGFJLDGXOOQCTZNNLDXAYTHAOABRDUPBQEOVQLWHZTPWZAUBKRSQJDXRHAMSYUSGWKPKEPVPELARMEMCGWCGDYPHVKINKAJCXJAEOJSMWPLOPTRM");
    msg.vnamespace.assign("RUKKYIPNYEHFEXHPTMHCDTIGAQXBJPUIORRNXOYLHTJVDUICIAJULPETJTQLMMMKPESZTBPPDUWJUOADYBMAVOWUFVCNTICAIMAGONIBJRKWHLPGVVDDQQZCNZWFZBMDFDFWSUXMQHLRGXFLSIKOZNJVEHTQGJBJYTAFVHCEXUQJDKWKRLSSLSUXPZCES");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("OXXLRWVCFZIQMCRYKLKMZSPSXHWKAJRFIZEYGHFFOTETRAWWUSEFJZUAJHAVGBFDMPHQXVNMJNPBMDDPKFMQROZXDBCWEULVGLUEBDQSKTQVUVNXIQGXYUTOTZOHIWWYCINKBGIHFYALFEBZRINYOBKGLPEDYUBGAAMEEPVPHWORVNYOVNTWTIJSGSHXOMAAZJUJXISOWYCPQCPQSRKUIZNJCNLMYXTLCRJFNDCJKLPQDTSZA");
    tmp_msg_0.value.assign("UWDVGVTFZOYMRQRSBRMQDYIADDOXNTILNESTQUEMMTVTYNYGSMCAONXYQEGMKRYPCHTEGHVZCSUCCGPHRSEQHUROJCWDWRLPKZROUSKKKEWALTAFWYEFJK");
    tmp_msg_0.type = 48U;
    tmp_msg_0.access = 73U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("WHERBATCCBDZATATIYEMQOXKLOBKMOBBKXXKGZMWXOUNTWSPAHZVLRFNGPMZSZFDHYJNFINJDYURPPZIJGJUVPSIGEPICQJEVRZVXKDWNAXDCCAUMBWYIMYWWKRLRVSBHTEUDCYLGTSQKKLLFVQWSHFEOHLNACDTTKPUPHGEHIPSBZRCKOFSNAYLTNQVUDVLOYWXCSMJWDILYSFHOPGIQRRAGENEJGTBOFNQRBQFOQUUIXAZMVGXZU");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("IKWJZBZGQJJBBETMOFLMSKIJSCSBFWHTXPYCRQWANFTGIUOKKEUZDDRQRPSOSHTMNGYZHWXKGUVYRNGDHIAUULADDLYIGNUQZEIZPWVKZALEWBEWFJJFOCRMBYNHQDDINHGCBVXBGYOKUPAMXTXGURNNTXTLTEACSOJVYFVIDQKFWCYJRVQLDEJOXMGYIYMIMUFOCFPCUFT");
    tmp_msg_1.dest_man.assign("IVZPCFFTGCLQVLIYGJDUSXKBHYAGRVNIMKJOHARNODYZNNFJXXJMRNEBZPURSMPITYDKXWJVWSMMGTKSHNSQULMUUAJOVFTZNMDQ");
    tmp_msg_1.conditions.assign("IOVOUPDPJLCTWRPAIMNYBITKTQSTVQMJUXFHDXKUAYODHNOCWKIYJEPJBGGXDAMHZRKUMXYSZKGJVQHRLAPQMRJRCJNNASGBEZDDZWPAAUCQLMYASEWVJMHQYVHOLGFAZXUIMVYNWDOTCXTCXMVWJBONPQWRFJQVDLCBKFCONHSSESVYPOLR");
    msg.transitions.push_back(tmp_msg_1);
    IMC::Fluorescein tmp_msg_2;
    tmp_msg_2.value = 0.460564095566;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::TCPStatus tmp_msg_3;
    tmp_msg_3.req_id = 15986U;
    tmp_msg_3.status = 29U;
    tmp_msg_3.info.assign("JFQGKLFIKONXKWNSJPDPYDLRCSNLZORSAGZTHZKZUAFYPQUVRZHKTUJPZIWGOOMYGEGUWHSCJOQDHEWMAJLKSNNNXQLBMAOMFERIRIPISOHZBLZWMCHCFEKXKWHBYIEPJFVAWQKVPMGCXMXSTIDEOHHIUDGYSTGVCEGDQOBQTUMUFYCWMUQNPXTBQVNRLANCBJD");
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.826263423462);
    msg.setSource(45909U);
    msg.setSourceEntity(84U);
    msg.setDestination(26058U);
    msg.setDestinationEntity(19U);
    msg.plan_id.assign("RMANZQUZVGKKMPYAOSXVIZATLLBDAFSHPQLTSNFEDSIGNLJBCEKTRCOIFVZYJ");
    msg.description.assign("BZIRFOPHGOYYWAXIFONJGCMPBOICIKNZGCKCHGURVDCFFJQRMESKEXJOWCSIITKZEANNDGQVHCTBHRULYLMHRQLPCWXJBJRADPTAKPZKQBAPHIJKBQXLYFSPITQWWLYOWUYNASZIMEOOFBYTMIRETXKQUUUSNPYAUJTKEEVHSDNGXXNEFSPCTVWLZZYMTXOQGUZJJVDZLVDMVFFLNSLVWGUAKRPFZVMH");
    msg.vnamespace.assign("HVVAHVHWLZZWPCFSECQJZVSAJMLTQIFZILSGMWBXDUHQUKNUKOSFGFRROKIKVABNEQQBHJTQPMWKGHBDNYKDGWOCHLQJWUAZCOXJFJPOKDEIDFHMTIGTMPVVRRUXKIOINBX");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("OEUZHTDWCNEZYWIFJVHNOEKHPBINAKWELYGVAKSMQSALJLPSOJPTNXKHMJYVYODAXTRPFKNCWYVKXZNUEGSSMGRJVCLIEZJDSCMXXFMIFSUIPTSIJLCAGWKKYLVDQIMTIPORUWGBDGRQXIZEMCOVLTMJNUTMWNRBHUCPXBTZDTHARLECIUHKQVCVFBLCZXBPBFQJ");
    tmp_msg_0.value.assign("HPTDQWUEMSMIRZBZNILKZDQJQHPKRNFMCKYYDRWQNVEVVXXOCJDTMOFRWKMFJUWKEPHQPZJWSCOQHITYLBALEOJLXCAAJBSERCBFL");
    tmp_msg_0.type = 9U;
    tmp_msg_0.access = 42U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("QZVIFHFJIBZBPYQKURYEWXFCKUTVTQMSTPKNFXNTTCIBFGA");

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
    msg.setTimeStamp(0.523068484401);
    msg.setSource(48694U);
    msg.setSourceEntity(174U);
    msg.setDestination(48707U);
    msg.setDestinationEntity(19U);
    msg.plan_id.assign("THWBDCGTFTJDIRVFXXUWJQIFSHZXVLXHGRALXSRCUS");
    msg.description.assign("HONRFMECSTOBUCGTSQODDWZGPBVNZ");
    msg.vnamespace.assign("HNJVLMRXGMRHZPRQ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("LYYXJXKGTNFXRMOMFMHJETKFOAKZCIEMKKEWPRQOCDZBAHEEGFTJRSXDTULXVJOQMQBASSPBIHWKPLIWXTODRAWY");
    tmp_msg_0.value.assign("BBDWWOENZFWPYKTYIFPNQVGLZRSGTKSRACFWEXMOPRJRLJJXPWXLSEBJUXHDUMGNBHOSNQDMVQOOVTDUITZQVXFMZADYPFCCJNDJHGRCRBCATVFJOOPTTEEYALSIECCESIKGGFZEOQMOSWHRBXQMWHPXEKHZEYTDMQPBGUZZIIMGNTHJUQDYPTDGAUBWGQVCSLAKXKNNACLYUOUFILLFKRJJIKWAXAIAQVILSCKYUFDWVRSVHPZNVMHKNBYZ");
    tmp_msg_0.type = 177U;
    tmp_msg_0.access = 199U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("AWTDYMFPHLPBDJRTPBDCTISMKNLG");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("SKTAEZKZRDFDDUN");
    IMC::Launch tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 25015U;
    tmp_tmp_msg_1_0.lat = 0.274390673524;
    tmp_tmp_msg_1_0.lon = 0.446154771672;
    tmp_tmp_msg_1_0.z = 0.787546204066;
    tmp_tmp_msg_1_0.z_units = 167U;
    tmp_tmp_msg_1_0.speed = 0.922438084319;
    tmp_tmp_msg_1_0.speed_units = 66U;
    tmp_tmp_msg_1_0.custom.assign("BCMJXPJGWYTBSBRTSEDDZTJBLNJJQXPXIXUFDIVPAZUUDMOFCYADRGPKHUEPSCDQZYMRPUKCAVATUFVHIXGHVTMQDVWLLZHWKNZFEQZNNEMYNGEKNTRRYZBLPIAEEWJIGYPIHIFEXFWHVGGIWYUFMJO");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::SmsRequest tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.req_id = 49260U;
    tmp_tmp_msg_1_1.destination.assign("RGIVFVWTIGYCRUBZDDVWOXPVHLN");
    tmp_tmp_msg_1_1.timeout = 0.414988234907;
    tmp_tmp_msg_1_1.sms_text.assign("GLBNMXPZENUMJYRJIAJTGZDKBUQRVBBBOTPQGNYHKKMMFXHECQUOPOTXTINCZXNABALATQFQFHWLPOSPLSSDYKXVRIYHUEWRAQVIAUPCMKH");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::EstimatedState tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.lat = 0.4771049774;
    tmp_tmp_msg_1_2.lon = 0.653723087349;
    tmp_tmp_msg_1_2.height = 0.63944179566;
    tmp_tmp_msg_1_2.x = 0.615368659446;
    tmp_tmp_msg_1_2.y = 0.33612180315;
    tmp_tmp_msg_1_2.z = 0.967223914563;
    tmp_tmp_msg_1_2.phi = 0.68244312229;
    tmp_tmp_msg_1_2.theta = 0.865135764919;
    tmp_tmp_msg_1_2.psi = 0.352626601397;
    tmp_tmp_msg_1_2.u = 0.637481735585;
    tmp_tmp_msg_1_2.v = 0.839789771923;
    tmp_tmp_msg_1_2.w = 0.534933399608;
    tmp_tmp_msg_1_2.vx = 0.3534810753;
    tmp_tmp_msg_1_2.vy = 0.804074956729;
    tmp_tmp_msg_1_2.vz = 0.173570045148;
    tmp_tmp_msg_1_2.p = 0.242741064407;
    tmp_tmp_msg_1_2.q = 0.826002035056;
    tmp_tmp_msg_1_2.r = 0.347683995422;
    tmp_tmp_msg_1_2.depth = 0.043057650444;
    tmp_tmp_msg_1_2.alt = 0.677404037428;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("WVPLDPKIOXBUDXSUERIKZJGPLXMCRTGRYTRUSJTNTJADYYUDFPXOMBBFSLQWLHDF");
    tmp_msg_2.dest_man.assign("QQXOEGEYJPCARHGWIEFDOAVUHLKNTLMZBVRELNACTWGJCPMXZYRZARFJTZGFQLSNIFNBKFKHGCWSKEORRTAONCKUPCFIBWJDQDQHMWXHZISZSBMMIKIFANQSSIVMEAKWUIJNCIXXMJARFDLPAFAUYYOYEHONBPTXLZMRQVYQYKJPTLVRDD");
    tmp_msg_2.conditions.assign("UNXKODYPZRAIZKSCIXQHPUXTOZCWICOGTWHWNDIEAEOLDVLSDJGPKFVTO");
    IMC::SaveEntityParameters tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.name.assign("OALKWOKOFHPIWAYPXEVJDYYPGQZJFRCORWHOWELGZGTGZJKMPOPVAGXNYHKBHJMPFYYPVHJOMCMUPZHDTLXFGHUALRJUVKZMJSTTVFDBNRSDAQCTLRWUQVUSZBNJMFCRJNEVIIKCXWHBYSTBQZAUVQVNMENMZCGCLOUEBDIRDKXTSCGLZVNURQYFQMDCWLYHXDAUPSXNLIBOAYTEIFSHUGZRGQQXTPEBWIIBBRNKCSDTI");
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::PathControlState tmp_msg_3;
    tmp_msg_3.path_ref = 1711424430U;
    tmp_msg_3.start_lat = 0.705227704464;
    tmp_msg_3.start_lon = 0.911763863128;
    tmp_msg_3.start_z = 0.924433832202;
    tmp_msg_3.start_z_units = 37U;
    tmp_msg_3.end_lat = 0.799655177454;
    tmp_msg_3.end_lon = 0.0290026363336;
    tmp_msg_3.end_z = 0.967344394665;
    tmp_msg_3.end_z_units = 7U;
    tmp_msg_3.lradius = 0.242723762303;
    tmp_msg_3.flags = 33U;
    tmp_msg_3.x = 0.916132892136;
    tmp_msg_3.y = 0.253547014558;
    tmp_msg_3.z = 0.0202344849883;
    tmp_msg_3.vx = 0.678524259247;
    tmp_msg_3.vy = 0.0821457991984;
    tmp_msg_3.vz = 0.902219653626;
    tmp_msg_3.course_error = 0.290055501939;
    tmp_msg_3.eta = 6570U;
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.563324847183);
    msg.setSource(25244U);
    msg.setSourceEntity(217U);
    msg.setDestination(32603U);
    msg.setDestinationEntity(227U);
    msg.maneuver_id.assign("ZOFWETRFGLLVEVCWLCSKPXWMAHCEKWRVUIKSUBFMDETHBPVKVFHSHHWXGXGUTCQYXNFOSUYZHYJUYSOIKGHKQVWSNYTADDJWMFOVBIFIDKQGEGJJLJRUBQJV");
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.934561425387;
    tmp_msg_0.lon = 0.455584421986;
    tmp_msg_0.speed = 0.322949164782;
    tmp_msg_0.speed_units = 17U;
    tmp_msg_0.limits = 74U;
    tmp_msg_0.max_depth = 0.768124747756;
    tmp_msg_0.min_alt = 0.613428923596;
    tmp_msg_0.time_limit = 0.88119036273;
    tmp_msg_0.controller.assign("LSXOKUUFPTTWHPWJMZXUMMBVGDXSYZELEIFFJWV");
    tmp_msg_0.custom.assign("LQSQGZBYIEIALCHGNEPCKJCGLNJLENKHDMUKAGRQLSEBNEFVRSCAPUYNJUQFWXBSPCZWHJGWHFCSWOAVWTKDDEXHIOALDFEYXYIXDZYKFRFQJFZBYPQYUOMJMFMOZIJMTUNHXKJUNGV");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.733572095076);
    msg.setSource(4016U);
    msg.setSourceEntity(70U);
    msg.setDestination(49081U);
    msg.setDestinationEntity(39U);
    msg.maneuver_id.assign("KQFPILZQRABIFXVEPSXMPMAFSCHLWHXFMRHRWBXDBQGVOLHTEHEPYWHMGPGYUXEYCRQDOVENSHKKXEKQZKIOJKVUCYGLFBUDTZKXWUQUHHYTVGDLFOYJSYBRFFAWIMAPH");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 62037U;
    tmp_msg_0.lat = 0.310100206868;
    tmp_msg_0.lon = 0.423056429152;
    tmp_msg_0.z = 0.639832907509;
    tmp_msg_0.z_units = 15U;
    tmp_msg_0.amplitude = 0.127567153068;
    tmp_msg_0.pitch = 0.404780232522;
    tmp_msg_0.speed = 0.284607099322;
    tmp_msg_0.speed_units = 59U;
    tmp_msg_0.custom.assign("QWSLMQGUAYEJMAPCBZXADOBWAAUETRCBBCGQYOXUGVPIEHDYNVBJTFRZJ");
    msg.data.set(tmp_msg_0);
    IMC::SoiCommand tmp_msg_1;
    tmp_msg_1.type = 123U;
    tmp_msg_1.command = 185U;
    tmp_msg_1.settings.assign("WUFZZVRYAKNKMIGIURHDZJPVSALPSTPUCA");
    IMC::SoiPlan tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.plan_id = 59539U;
    tmp_msg_1.plan.set(tmp_tmp_msg_1_0);
    tmp_msg_1.info.assign("NCQXNPBBQRNUAAISXWWZKILMHHGYATBCZSCJMQCBTAXZEFLNZKVNPGTSVJUJCJOUPJEVLORBMTYYZIVFSWDFWYRFSGCUAKLEDIMLOQMGHDDHJEHFPGSAROFHSZNNHKDBGUELUEQUFDGAIWMZCOHWYKRSEKYFAXIMIOWNFGBOCUVKXWCYZOLTIIXBYWJRGHTQYQRDFDLXKRKXXYLDHURQJSWVEUPCIQPNVVLMOERTZSATOJTTPPZXP");
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.822535270162);
    msg.setSource(37638U);
    msg.setSourceEntity(42U);
    msg.setDestination(19891U);
    msg.setDestinationEntity(45U);
    msg.maneuver_id.assign("SJPDAFGHLIAZKJQGFDJXPWKFXSHESRDUHAMCGNSGXNRWAUKFFORVAYZRVRHZUQBMFESMOZDEDZIQZOLZQMMNBDKVPXEDWCNYDTGJNYXBTPYXDTEZBUJHRTXUCFKEGVVTNWUMCIFKOQGHLIPLIRIOKBOGACPJQYCIPHYCXNIQHXMVYLVARJSWGIWUVYROLLUBXUKANIHYKAKHLETSSVTOOTWERTFCZSBCQSLPNNBCPPOMTJJVQFYWEQBZMMGW");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 19990U;
    tmp_msg_0.flags = 165U;
    tmp_msg_0.lat = 0.105200076724;
    tmp_msg_0.lon = 0.471051380555;
    tmp_msg_0.start_z = 0.717094618031;
    tmp_msg_0.start_z_units = 101U;
    tmp_msg_0.end_z = 0.700180139583;
    tmp_msg_0.end_z_units = 196U;
    tmp_msg_0.radius = 0.223988153983;
    tmp_msg_0.speed = 0.633821526974;
    tmp_msg_0.speed_units = 74U;
    tmp_msg_0.custom.assign("ELZDIRDPOUWYL");
    msg.data.set(tmp_msg_0);
    IMC::TrexAttribute tmp_msg_1;
    tmp_msg_1.name.assign("BYFMZTDMSIGAXUUQZRTWDBVIAUHUQSTMBJOVAGJFZVYYZTHVDOPNICOUBKPXCRORNPDNZQCBQGWMCACSGSEMKVBPOFGPCJAGZLREKUUVKBOMLGUJEVDTYXWVSBVUWFRLEHEMPKVDNIYXYMZFSAYXCTHJOYDNNWRSEGINRPKLPLIOZFTSWXKOSWIHLBWDWUFTCKEAGSXPTJEIJCBCFQHLEHXLQIAPQMLKQKJAOGYRQJYINJH");
    tmp_msg_1.attr_type = 2U;
    tmp_msg_1.min.assign("WKHANFMRAHAGCBPNBSMQSLGQJBCTFHOWDUPNHKUTYDAKIJEXUQUZCXZQNAWCJNQEGJRDJYLTVNDGAY");
    tmp_msg_1.max.assign("NUECHEDKYVNQSYPSXKLVVCULGPPODDMFDJOAIXQKIAJYQGNZLQZXIOJYTBRJUQVPYRNNTSWVFAABWMJBSGTLRWOQRPCGKJUYNEDIFHJSXRFSWOCWAICGVYAZDIZFTQIXHKHGGRKAUGDQGBUDKNSFEOOJSNCPZWPWEITEBZRPUJLMHVPOCLWOBLXRIFCTAIWRZZUEBLTMHUXKLBFGLQHFCOMHEDXJMZYHVSTMHKXRXMSEYVQNUTMVDTZACMEBK");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::PlanControl tmp_msg_2;
    tmp_msg_2.type = 148U;
    tmp_msg_2.op = 51U;
    tmp_msg_2.request_id = 19743U;
    tmp_msg_2.plan_id.assign("AFETIFSYTIYMUQAMKXHVKKYPFDPERR");
    tmp_msg_2.flags = 13321U;
    IMC::GetOperationalLimits tmp_tmp_msg_2_0;
    tmp_msg_2.arg.set(tmp_tmp_msg_2_0);
    tmp_msg_2.info.assign("UVEHLJKZYWHSRHTGLIUYWOJVIUEBARIDQEATLOFRVCDWPGOUGYDWFJRLRNNBBHDSSLBBZMKCGMLNPMDKSLWCKTQMYOTUQGOEMCQHMHZYTDTBXZYFRWAPJTYSDOEKACMNXQE");
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
    msg.setTimeStamp(0.982565395648);
    msg.setSource(8390U);
    msg.setSourceEntity(92U);
    msg.setDestination(44526U);
    msg.setDestinationEntity(56U);
    msg.source_man.assign("CXUNFULCISUOEKOITWTWESSPBHAPHIZKWBMRKPVNHWGBUBBJHLWQVDPOPPIDNUKWQZWAWLJVTDNVYARNYZBUGREVMWEMZYXCFRDXTLLOYLVGPFYFTTQTQRPAPWLRUJXSMVULIM");
    msg.dest_man.assign("PDYRQGIYAHCHVCRDKSJEEPWGNIEBMPODUKFUAMWIGLLTOZDCEHNYMHWDBSZCTKVSKUBMVELGUDVQ");
    msg.conditions.assign("INLQPSHDIRZMEQPHRXHUEXZMYEZBVBNLZHUYGNKIVNSFAVBCPNFQKYEEBWFOJYICJFEYPPVQATVKZG");

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
    msg.setTimeStamp(0.369267528179);
    msg.setSource(41953U);
    msg.setSourceEntity(149U);
    msg.setDestination(56370U);
    msg.setDestinationEntity(106U);
    msg.source_man.assign("KENNMCRMIGIGVEZSQLBSQTLLPMRNDOUMDGXYBUNNSCAAVCWCJSGYSSAHGDCZVTEWTNLXRQOWNFJSDDNTFIGCEQPJCLJXYKAUCVO");
    msg.dest_man.assign("HXDRNVMUNNTZFVRYYUDYSEZTKMRUAVAWIISWIFMHKQWSBOJKZSCDKGJGEEERIARXZAQBRSKGCAVGHPLKFBLYUCTFCPOBSLXKINSMQSAQLGWTDXVHYYNILBFTBTOAVRDEJLSPCZREOMLOUHAFXYBWFQGPCH");
    msg.conditions.assign("BYLMASYNRQTWGQINUJFMZULVCJGOHYPMDKZGXJWCBCDZFICOMZXYAUBUOPTRDPRRQFUENFTUBROHYEKLPLKBGNIZGUVASYKQNMSWQPCMFTCMDVTSVLEOKDNQWSZPEBBOSYUNQBZHEBGVIFAAJGSNXHVERFXTWIXRKGLSEXWKEHVGHYAHXMCTHLFYIGZAVIVJLMLIDDMACRDJQOCBJJXVNJIEAUDNWSKTTZHFHKRJWCKLDPWEPOOPY");

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
    msg.setTimeStamp(0.81730509315);
    msg.setSource(52171U);
    msg.setSourceEntity(124U);
    msg.setDestination(36040U);
    msg.setDestinationEntity(143U);
    msg.source_man.assign("FIAHMNDFRGIHOMBJKYSLQBDKWCAVXLHNHNKVFBCF");
    msg.dest_man.assign("RRHQJQAPYNADPNUJYSVTTOHQPOMYBPVXBXRBQDLSGKGFRCBXMADCJJRCFFHPPHCQJIEHSLPDNSPTFJUKFMFQTZHVLIKEPZYEQYARTOSBHWXDMLHXBVSARNDIKVDFIWTVCWBSTMWWLQYYVDWXZGOUSOKKLRCVSDQHRXMULOWLAJZJEBNCZKPTEJX");
    msg.conditions.assign("IRBHQGYRALTWIQMEFXZPEGNOSLOHAPUDJ");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 50131U;
    tmp_msg_0.control_ent = 54U;
    tmp_msg_0.timeout = 0.913224470031;
    tmp_msg_0.loiter_radius = 0.355864146215;
    tmp_msg_0.altitude_interval = 0.0808061105503;
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.843487945542);
    msg.setSource(19700U);
    msg.setSourceEntity(57U);
    msg.setDestination(8711U);
    msg.setDestinationEntity(125U);
    msg.command = 40U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RULPYBVXQAYIUAGUSCMXJJEZWVCRIZHIHLDWYXNQPPPDLPEJTGGQKFGZCBDWDKVAENKWHXQGLGUFFVBQZJDIEOOSBFYAYMSAWKLMIKU");
    tmp_msg_0.description.assign("YEQMNHKYFKDINYSVCDMZTNQWPGT");
    tmp_msg_0.vnamespace.assign("IGKEZGGDEFUVIUEXOCOTPKDM");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RSNDQWODEBKDEAWROKPFOCMZDQNYRQSFOWEGYVDFBBLLDXTTPGVERBXAVUXNHVVACHZPWUAYPKMMEYOVXGBPXOSCIKHBMCKZLQIXIBYPSJF");
    tmp_tmp_msg_0_0.value.assign("MXTXISFKBOLBJREZC");
    tmp_tmp_msg_0_0.type = 52U;
    tmp_tmp_msg_0_0.access = 195U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("AGGJJMBJXBMGVSOKKCLRAMYIMDDQJVCRYXFIJOWGYFTMBGCAHXNPFJWROOSIUOURVMFXBFPVHNTEWSRWJAKNEZVQKSMUZSIZF");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("TCENWAWJEEGHBXAUGKBVZMJLZPBQJFUVC");
    IMC::Land tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.514426221196;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.721313674616;
    tmp_tmp_tmp_msg_0_1_0.z = 0.512371609974;
    tmp_tmp_tmp_msg_0_1_0.z_units = 200U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.580668721509;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 31U;
    tmp_tmp_tmp_msg_0_1_0.abort_z = 0.28661812033;
    tmp_tmp_tmp_msg_0_1_0.bearing = 0.712043428592;
    tmp_tmp_tmp_msg_0_1_0.glide_slope = 51U;
    tmp_tmp_tmp_msg_0_1_0.glide_slope_alt = 0.472886795547;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("SMDCMBRECDEUVYOMVXEOVZQUVYFISPBZYHFSMTWLQMQGNBLTMZFIAGKHBHOVQPQZDSDARGJSRAAZGBUZWIBRIZZNSRISAJTXBKFPJVRG");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("IXCBYUDUKTQEJEIFKFEVXPZJJXWOEOWSQGGPKJLBXBXFWTXQVWHRGCPYSHSAXZHQGNAMYNVFUVIZUKRWAKZSOKYLGBWRDVOKYXFZPBDPRENQYVRFHYJBDKMLEBOGPCAWQMGUITS");
    tmp_tmp_msg_0_2.dest_man.assign("JICLSIYRJVQBQSLQIRIZQXNTUIGKDAYWUWRTOQLSAFSGMBLKOJFTAJKBRPPGZKENIJKFDTDMHJJBBEMZTZBENJXDDYEZVDVWXWROMZNUMBCWCBPHYUAMSZLACVGRSXWIPJYGSHRSODFOKVOCZQTKGWXANMFEHPHLWCPAMZQRCUKOVCHFVGHWEY");
    tmp_tmp_msg_0_2.conditions.assign("SRHBEEZSZWGWRVNJGJEBTDOLQPANSKFZCVETKCRBCKSRMWHKXSMDYXDZIXUVFYINTTFLZNUHQKLJCWDMMOIHJQPVCKYTPMRIRMJJIMKLSGFLYQUOYVCLVLBMUEWJNKLZYBRPCLQNWHNQNHDIWZUBGYGVIMOCGXSXXCHJKPPYADTQABGDDBAVBIZQHSWRAQIOOFQOVEITFOEYCOEFAJZPGUWARATTXO");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::MonitorEntityState tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.command = 120U;
    tmp_tmp_msg_0_3.entities.assign("HLTRSHWTICQOZJWMFBOMNTGPZTUIMDAKTSQBVHIRUGJOSTVJVZDHWBEXZOMNROGTKGLSQPQLQRAMUXUNAYHNDQIGCMVVLJMXENRPBQGGFPZARIJSKGCFFQCYBKKAEQKVESYWUEWAYDPPGWFUCWOVVLHNFLRTJVPDAZIUBEEDWIFXFZMZJIXWMDACFKHGBIYAHCUQSYOECWUCIOHRDFNJDBXBBTOSXYSZOCALEPJSDYPXYHUVLKKZXEPLR");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.0464214821375);
    msg.setSource(10210U);
    msg.setSourceEntity(148U);
    msg.setDestination(48959U);
    msg.setDestinationEntity(36U);
    msg.command = 28U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("AOZCDSFLVLKEUCQVRRUXCABCFZIUITYMAPIDOHRJGGYBQVSGGEKUVNTRMUAEDKTJLIDPZHHSKQOUHQFKBOOKOQTEYVDOKRLHYCPYLZIDMOCCLTPSNNVZAGTHNTLASFDZBAYUQSCMEHFPPXLFJCWMBKYYPWMPQSUUZABYEMXXEEMMSZDXHBJTWIWFXMI");
    tmp_msg_0.description.assign("AVVYARWRYDIGRCTQKUQOMJLFNVTISDFNPNZQSXCKXABLUIVHUVOBPZRHUGEFDCVTAAXWIVJMPXNODROAZPZSKPQKSJNWUHXMYYBMWOCPPUWFEATRQKSIDFTIELUXWNBSASOWBNQZ");
    tmp_msg_0.vnamespace.assign("WAQZUYEFTVVJKTQJNHXEVUGDVTYULDENVMAMBCQKXZCSIWEMSMYDVKLRWYBIKLAJSGIQETRFGBWUFCSOPFGPMCGOKGSZCVRITGCPZAUIQLJHGYHTCOKLRWNWVUETCDXMRXPQQPPLBRXPWBSKVLZFNGNBMSEUJPHZODUWXXURZDALNIFIAMHLRAFJYPBNQTHRYDFAPWASFTXRXIHNZMFHMEXOBEYADJODDCKSZJNOHVJKNHBKUYTOGSQIEOZ");
    tmp_msg_0.start_man_id.assign("RYQEEUKCKZOXOTHSYFCGTKANMJJMURFKAKBBQMXCXCFPDLJVINJDBSSQXAFPDQOUSIBMMCPSDSWNWGPHPQCGTCVDKZHYATWIUNGQSLARZNIVYWHZGIRZLCLHPDJJONEMQRWRYLURHAPABPUGIAILHY");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("WZDCGVGAACMITPLEULYWEJJLFYVJKDECZIUDPRBZTSFJZLUAGHHFXDWALCAOLEBEBTTUJSRWECNVEKLRAVRKQOBXWWQQSNSFQGKEDAADCSZYVNNMKWBNPJLDQBGHRUQIMZKOQUGIZFYXSWZNLGKRFNHJWOHYBUHCUSOSWXQGILGXDMIOTEOTHSPMZYKNXTRRRXCAXUHFASMPIIPVBPPGMOOHPMNJHXVRUMCIEJDKQJ");
    tmp_tmp_msg_0_0.dest_man.assign("GFWXWUZTKMCDHSKXONJASUGFGFARMZIDZMHDWNXQGYOXUEWDEYERRCQGECIKTZKWSALFFVOVOHBTPEXSAVLOMNMIZFJXUNPFFZOYYDCQSPBENJCLGETMQRNHBWQUFVCTJEGUKALSWIYNUDQIAICMSXHBEHQVTKJLKIOJXL");
    tmp_tmp_msg_0_0.conditions.assign("OJKRTRCSKGPZUVQRSJQALDGCPTPYAVNZDIGTKTVWKDMBFVEPQTHBORLMLOELHG");
    IMC::AcousticLink tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.peer.assign("ANDEIRSHUGUBEASCFHQPYHHMZDAJQEWTBVGFKYWCHVZSYUHQTUDYXVSDZKSUTTXLIIEACSOMJTANDAFFHWNG");
    tmp_tmp_tmp_msg_0_0_0.rssi = 0.527263724069;
    tmp_tmp_tmp_msg_0_0_0.integrity = 30154U;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::LogBookEntry tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.type = 92U;
    tmp_tmp_msg_0_1.htime = 0.171571327952;
    tmp_tmp_msg_0_1.context.assign("MHUNMLQNMHFVVTCIWOZOCMVQBDVGMVCPKKLONHDKKROSTFDFRRNRABUXITBCRNJPQOZXWZYSYYYHJOADPIITWTOJBNJQSLJ");
    tmp_tmp_msg_0_1.text.assign("CLWDLBKETMWSWLIHRSYLZNMCELBWVOP");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.307130204191);
    msg.setSource(9867U);
    msg.setSourceEntity(40U);
    msg.setDestination(51668U);
    msg.setDestinationEntity(84U);
    msg.command = 211U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DERKVMLJRWJLORKGLUDCEOPLBYPLQBIJSHGPDGTBIZWKEHVXTZJYOJZTCCANMKTSQCBUFOBBSDYGFHMPMCAIDDLVXS");
    tmp_msg_0.description.assign("LGAWCLEMRGWJGGHAXHRPREMFWQHICARWRFPALSVBSPZYRPZIOQMMBSJUMLIECPZTVMKTJYGQGOWSWXUPKGQBMKTJCVFCKIFQCOTPJSZIXHKDTGTUJHYVLEXS");
    tmp_msg_0.vnamespace.assign("BBTVGRSLKYXAYGOQXUFMSDFJJZPDYTFDENWWNVECQGHSDGZAMUPKYDZYYFETOQPKCHTZVQIUCSRXFLWTQVEMSLPFMAUNKACIJGZTENVRXMRQEBTJBNJICRDVEZBLKBRPOFOXCOKIRCYXCMGDHAJWPNLCGHWDUVKZIHZMHXKIJINRHUOLOZMFVAPIHLPFOGSASOTCSWRWUWKAMUGBAPBEYWKLHDOBJTQVHYXQ");
    tmp_msg_0.start_man_id.assign("UESNWHZHAACJBZDCWMYHPWCHRQFWGQNHZRRVUTKQFZHIYTQBJMRMNCFMBSSUSGFVIZXBOSWPZJOBNDCFPCYYNISPHEEDMPWUZIZFALCT");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("USXWMVFVZMWCYICWBAFKNBNQMBAEUOVNMJFGQZJKHPTHHGEOFSPGCSRCTWILNMZPMWIQHLLJOIUJNWBSWVQSULDFQXZIEFJRAIBYDXIBOPFCYMTJSDOSRDAOUSPEMNDDPRCAVGYQAHZRLHYXYHIEIYAPQLGCDXPOZEXMHTEITRRWHKNBFKLANJCVXRAYADXTKBKBUZVMTVGUX");
    IMC::RowsCoverage tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.537463895295;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.0457655798453;
    tmp_tmp_tmp_msg_0_0_0.z = 0.740113236931;
    tmp_tmp_tmp_msg_0_0_0.z_units = 44U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.886243569848;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 60U;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.378598663809;
    tmp_tmp_tmp_msg_0_0_0.cross_angle = 0.409791497294;
    tmp_tmp_tmp_msg_0_0_0.width = 0.214916342964;
    tmp_tmp_tmp_msg_0_0_0.length = 0.969338275937;
    tmp_tmp_tmp_msg_0_0_0.coff = 62U;
    tmp_tmp_tmp_msg_0_0_0.angaperture = 0.57679365804;
    tmp_tmp_tmp_msg_0_0_0.range = 26131U;
    tmp_tmp_tmp_msg_0_0_0.overlap = 1U;
    tmp_tmp_tmp_msg_0_0_0.flags = 104U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("ZVXSAGAQTMNDIQZAFZWZIICUXQJOUMWLRHRKXSEFXFAYYX");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Voltage tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.159912906665;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::PlanControl tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.type = 132U;
    tmp_tmp_tmp_msg_0_0_2.op = 212U;
    tmp_tmp_tmp_msg_0_0_2.request_id = 2386U;
    tmp_tmp_tmp_msg_0_0_2.plan_id.assign("VPZZEIBZAEDGYHBEOASGMJNCDUBSBHWHGUBPERLWGEOCRRAZIOXTTELVCTINESISMQOFLXJQZWHBAKMRLHKJDXYNFHFJBTIAXQYVYLARQXJAGYODKUFVSCAMXNESPCSUNLTKNXKRTQM");
    tmp_tmp_tmp_msg_0_0_2.flags = 21257U;
    IMC::Elevator tmp_tmp_tmp_tmp_msg_0_0_2_0;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.timeout = 42201U;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.flags = 196U;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.lat = 0.265036094789;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.lon = 0.279065453493;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.start_z = 0.825455210815;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.start_z_units = 161U;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.end_z = 0.566794143507;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.end_z_units = 159U;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.radius = 0.533523330664;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.speed = 0.0587366688163;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.speed_units = 57U;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.custom.assign("FOXAVGBLZKFDLLVUWPKB");
    tmp_tmp_tmp_msg_0_0_2.arg.set(tmp_tmp_tmp_tmp_msg_0_0_2_0);
    tmp_tmp_tmp_msg_0_0_2.info.assign("REDNVETLHQNIXSUFPQFEXZSAUMQQUXA");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::Phycoerythrin tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.968474528715;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::ClockControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 227U;
    tmp_tmp_msg_0_2.clock = 0.857514455977;
    tmp_tmp_msg_0_2.tz = -124;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.620966632489);
    msg.setSource(26939U);
    msg.setSourceEntity(237U);
    msg.setDestination(36305U);
    msg.setDestinationEntity(60U);
    msg.state = 65U;
    msg.plan_id.assign("LWJBDNCIWDMJWBORHYSEXLNCRJVKERFJQINOIEQTGBDGEMNHIOAXBNIHWINHFYNSDPCZQOKQ");
    msg.comm_level = 246U;

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
    msg.setTimeStamp(0.381899359952);
    msg.setSource(55134U);
    msg.setSourceEntity(46U);
    msg.setDestination(24660U);
    msg.setDestinationEntity(89U);
    msg.state = 209U;
    msg.plan_id.assign("ANLTQHBZEWZNUKVXZBGJFLLUORQZMCKKEJYJMGSWUPXCBLAPGVRACCVEHPNLIDFSIIUVBQODKVZVDMWKJJVOLTTGJPASRFJLDUBQCYWESMCXTPRHQBGCJAIKUNCTWINWQSZAHBLEGYTOMVYPYXNBHPSEMPKGNRAQQMOOONSRDQDGFZUQHIYIYSRDCXMFRSHFWRCAYYHIXFFHJTDGRJTXAW");
    msg.comm_level = 186U;

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
    msg.setTimeStamp(0.166905086129);
    msg.setSource(63940U);
    msg.setSourceEntity(183U);
    msg.setDestination(22804U);
    msg.setDestinationEntity(78U);
    msg.state = 170U;
    msg.plan_id.assign("BOPTYCFWTOKCMCVSJERGDCHZALIJZPPXOTYYFUHEFJJBDGZZEUPTWHNDLDFNNTGNQDSLKQNVJKXUQKHBORCOFHBXSUCEEINXELRRPGQIAVPOVXMHYMQAMXUJYZCJXXBVUPVWEMRLHXASLLNRWFGLYICACZFSIPSHYWHBULPSGARIDWQTTENFVYYBKWEDJDFQCQZMDTVNQUGOSIMKYGASAMMIRBLOFEQVZDAZBGKUKG");
    msg.comm_level = 30U;

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
    msg.setTimeStamp(0.966658060453);
    msg.setSource(45316U);
    msg.setSourceEntity(41U);
    msg.setDestination(52652U);
    msg.setDestinationEntity(194U);
    msg.type = 141U;
    msg.op = 118U;
    msg.request_id = 27051U;
    msg.plan_id.assign("ZBBNCWLHSVCMHOWDLTSNCZNDTRMEIAIKYWRUEANIPSLSZQPJ");
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 35095U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ALIEYWRSAFWHKHHPFMEXQUFSIMSKZIMXDQRCQFZWNETM");

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
    msg.setTimeStamp(0.0056623817386);
    msg.setSource(9426U);
    msg.setSourceEntity(56U);
    msg.setDestination(17278U);
    msg.setDestinationEntity(26U);
    msg.type = 158U;
    msg.op = 13U;
    msg.request_id = 46281U;
    msg.plan_id.assign("PXCDAKAMNGEEZBMLZTDCHTSHUPWUMYLBNTSFOTQWSIMVJCPDNOAVIKUQSUCYCYPZEUNAQATGPGSGIJZGOFGEDENZFOFKQBJZIDKTIHEUVNMRRWHQQMWOZSXOHGQUWLCUUEWWEVVPYYLEOSZRYRLCMLMVKXPXQBVROGKLKYHFFDENRBCJBIXTTADZWFIPDJNHXDXJFFQKJAMONRBYJWHZPWNIXDIRJYRY");
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 214U;
    tmp_msg_0.error.assign("VPNUUNNXTJJUOCLUXTKLQUTYVSLFEMMWCPJODMYIGRFDYYSJEIJCXMEACXADPEGWMPSRVFNNVKJCIFPTIZPETVN");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CGQEKHANFIJVHLETCWIY");

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
    msg.setTimeStamp(0.489604838097);
    msg.setSource(15396U);
    msg.setSourceEntity(95U);
    msg.setDestination(41690U);
    msg.setDestinationEntity(231U);
    msg.type = 100U;
    msg.op = 52U;
    msg.request_id = 64187U;
    msg.plan_id.assign("JAHLXLKKAOYTVAWPCDADJYE");
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 40916U;
    tmp_msg_0.sys.assign("GUVMVLASQHTQJZOPHANNJRDRUUWBZKUPNMDTVSECZIDFIKJWZUKMNRONIRCSFYIBGPRKEOGMAIRXMCGIXTHJLAXNTKRUF");
    tmp_msg_0.value = 0.756868534934;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZXVVECHONWFUNBHTWTSSJPUWNSZQPLJDMPYKOJRYEFYWPHYRLGADFHRHPTCVDKCFKT");

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
    msg.setTimeStamp(0.103309771667);
    msg.setSource(46987U);
    msg.setSourceEntity(228U);
    msg.setDestination(50326U);
    msg.setDestinationEntity(65U);
    msg.plan_count = 9433U;
    msg.plan_size = 3414103234U;
    msg.change_time = 0.341894600123;
    msg.change_sid = 45488U;
    msg.change_sname.assign("PBWHXCDAIKKWTPNLPXEQVLGYEIYHCGLGUSJIDVAHRODLRWFQLEYVVHLHUMLYAIXXHGKSCCMNBEFDYNAYUCZFORSAHMNQEJGSSJFQUVCOBBGOPOMAXKIREHDCRNBEXVFSVJMGNOUUXRPJZFRWYAXZSNISTBDBQTHZAYMOPJDGJMBQTQVFIJOWESVDSHWGBWRINLDKAPQNXEBQCJDPRNTTTKKRUZZUZEUJCU");
    const char tmp_msg_0[] = {81, 22, 70, -116, 55, -17, -111, 39, -95, 35, 110, 43, -20, 104, 121, -27, -44, 3, 53, -47, 36, -119, -119, -64, 97, -69, -50, -41, -3, 3, -33, 3, 7, -41, -70, -107, 38, -55, -93, -21, 69, 105, -45, -77, -58, -56, 103, -2, 97, 78, 122, -90, 35, 85, 126, -26, 47, -38, -8, 31, 2, 123, 114, -113, 40, -3, -40, -117, -4, 7, -28, 126, -46, 34, 102, -99, 49, -83, -46, -109, -111, 124, 100, -83, 69, -49, -93, 50, -74, 9, 20, -99, 89, 9, 45, -104, 45, -52, 13, -75, 108, 6, 54, 126, -61, -25, 112, 65, 13, 34, 117, 60, -85, -125, -15, 2, -46, 36, -46, 48, -34, 42, 118, -117, 116, -64, 55, 75, 101, -25, -25, -96, -69, 22, -112, 32, -21, -90, -3, 118, -26, -34, 18, -52, -90, -42, -73, -54, -82, -68, 83, 68, 111, -56, 110};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.815325379699);
    msg.setSource(15706U);
    msg.setSourceEntity(86U);
    msg.setDestination(44393U);
    msg.setDestinationEntity(107U);
    msg.plan_count = 19575U;
    msg.plan_size = 2068483651U;
    msg.change_time = 0.0319110606444;
    msg.change_sid = 25364U;
    msg.change_sname.assign("ZWVDOCXWCYMSVKYHKNAMUUSBUSNNALQJGOEBKVJWUBVTWYUBNDREZHLJJRFGOXQLKVGGZEZBUFFCOEIPJDRKPOTKLRPSDYUFHMVZTGSHXIFKWAMFDNMIXJNWGGJRRHEAEQWHYXTSANQOBUZPSFZBPPTPPSTFMYMVIEIMWVOCUGOXIGYLRQBKJLYMCKZXIDRZCCXILOZTVAJUYLCHHTLDPLANBQ");
    const char tmp_msg_0[] = {-95, 103, 36, -15, 23, -32, -84, -36, -9, -123, 1, -110, -50, -118, 110, 82, -62, 4, -50, 33, -50, -102, 83, -103, -6, -38, 62, 118, -42, -61, 8, 74, 20, -118, -33, 85, 29, 0, -17, 47, -14, 55, 35, -110, -127, 4, 50, -19, 72, -95, -9, 122, 76, 40, -69, -46, 27, 44, -86, -107, -24, 111, 105, 120, 63, -124, -4, -90, -76, 13, -14, -21, -46, 98, -54, 96};
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
    msg.setTimeStamp(0.887987669331);
    msg.setSource(64771U);
    msg.setSourceEntity(6U);
    msg.setDestination(28210U);
    msg.setDestinationEntity(129U);
    msg.plan_count = 45862U;
    msg.plan_size = 181533287U;
    msg.change_time = 0.425827786634;
    msg.change_sid = 10089U;
    msg.change_sname.assign("SHVLLZDEVEEPPUKDQFHNYIG");
    const char tmp_msg_0[] = {-24, 105, 93, -62, -122, 120, 29, -110, -117, 84, 34, -121, -50, 81, -39, 62, 74, -51, 65, -72, -118, -90, 61, -79, -77, 103, 12, -2, 49, -97, 104, -67, -62, -57, -117, -44, 107, 16, 88, 84, -121, -16, 90, -23, -11, 39, 44, 40, -110, 19, 103, 102, 55, -14, -16, 108, 86, 2, 89, -80, -28, 75, -114, 79, -54, -72, 2, 32, -6, -109, -16, 68, -115, 120, -106, 93, -91, -80, -21, 22, 18, -126, 121, -56, 39, 92, -32, -108, 62, -92, 27, 54, 43, -2, 91, 83, -42, 62, 54, -117, 47, 42, -2, 63, -80, -20, 97, -79, -71, 125, 22, 29, 1, -3, 96, 113, -99, -97, -39, 51, 76, -109, -124, 44, -61, 80, -125, 59, -86, -61, 86, -41, -47, -34, 62, -99, 123, 22, 110, -44, 97, -64, -90, -11, -99, -106};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.629745192412);
    msg.setSource(9388U);
    msg.setSourceEntity(60U);
    msg.setDestination(40259U);
    msg.setDestinationEntity(164U);
    msg.plan_id.assign("WSVSQCAUDNKAAFRUBEPIOBIIFRDMMKYSOFLUSQBHTZBPFJRHYTEPGUULVVRIJRLQZPVCW");
    msg.plan_size = 32752U;
    msg.change_time = 0.168567856518;
    msg.change_sid = 31616U;
    msg.change_sname.assign("IJWVJQBFPSWLXRFOVJMDERFHGJPPKCABRJFGQKCXAREEGQOJSUVHORKNWLIJNMJSUUGFOVZDVOQBZHBKZHWWXZPUBGNBEMSGFHTUOQCEVDQZRCSXQNAZTMDDBUWPBEWKIYRLBMIQAAGYL");
    const char tmp_msg_0[] = {-84, 78, 58, -43, -9, 16, -62, 20, -109, 28, -3, 115, -47, -4, -41, -74, 69, 88, 46, 98, -63, 25, -10, -97, 14, -16, -11, -90, -49, 80, -61, 114, 95, -39, -86, 89, 28, 63, -43, 12, -34, 81, 120, -127, -106, -9, -8, -77, 77, 107, 16, 85, -33, -38, -64, -75, 118, -35, 64, -21, -68, -105, 71, -27, -44, 89, 109, -105, 90, -81, -31, 26, 76, -41, 24, 13, -52, 36, -21, -7, 53, 111, -6, 33, 34, -34, 125, -21, 23, 12, 35, 49, -123, -117, -1, 35, -65, -5, 22, 105, 21, -5, 16, -51, 99, -59, 22, 68, 118, 83, 82, 56, 72, -18, 54, 42, 0, -87, -55, -19, -36, -1, -70, -32, -119, 102, 68, 32, -82, 22, 6, 82, -104, 14, 78, 39, 88, -115, 71, 107, -101, -28, -116, 30, -80, 78, -120, -26, 66, -59, -55, 10, -10, -87, -61, -50, 74, 110, 106, -89, -88, -20, 41, 51, 122, 125, 41, -77, -55, 66, 13, 9, 75, 36, -62, -79, 48, 98, 95, 23, -35, 20, -116, 125, 36, 62, -20, 88, -64, 106, 9, -56, 82, -86, -41, -107, -31, -97, -26, 2, -1, 98, -27, -43, -79, 10, -89, 0, 16, 63, 14, 75, -17, -105, 15, -46, -49, 74, -94, 33, -70, 43, 71, -40, -71, -10, 15, 9, -84, 20, 110};
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
    msg.setTimeStamp(0.185048483739);
    msg.setSource(40120U);
    msg.setSourceEntity(176U);
    msg.setDestination(59314U);
    msg.setDestinationEntity(155U);
    msg.plan_id.assign("RFFRNOOUYTAWMHSBKLJGSSLFGCQOTVMKVBXRLOFGZIVLEPYEGQVCZQMZEJCSDZONNPDERCSVSXBXWAHRNYVIOIUHPDTRKLUBJBOEONKAPSRX");
    msg.plan_size = 37871U;
    msg.change_time = 0.161481600385;
    msg.change_sid = 21490U;
    msg.change_sname.assign("KQRRQYUXULZGJ");
    const char tmp_msg_0[] = {0, -18, 26, -57, -20, 123, 67, -23, -50, -22, 16, 94, 79, -2, -110, 99, 36, 110, 99, -21, 52, 108, -46, -95, -41, 38, 8, 10, 80, 125, 53, -90};
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
    msg.setTimeStamp(0.602103634298);
    msg.setSource(51570U);
    msg.setSourceEntity(73U);
    msg.setDestination(48806U);
    msg.setDestinationEntity(21U);
    msg.plan_id.assign("VKHSTVLJGKUNSOOTMXHAIZEKCHFVNLSVXHFFSQNUBXXLZJPMPJWRDLBJEWABAJGAHZIDWTYYLJEYQIQNKDUOD");
    msg.plan_size = 49869U;
    msg.change_time = 0.409122345811;
    msg.change_sid = 8035U;
    msg.change_sname.assign("XFZVWZINNRXNZVIKBKGEGAVQRKCMBBSQPOOQDSHOSYLVBHUMVOWLWMFCXLADAPKK");
    const char tmp_msg_0[] = {-92, 3, -95, 16, -98, 78, -62, -118, 110, -22, -68, -60, 0, -70, 53, -14, 95, -45, 94, 92, 47, -124, -41, 11, -36, 44, -77, -69, -32, 37, -18, 105, 58, -122, 75, -124, -68, -29, 68, -48, 20, -119, -94, -8, -11, 113, -87, -66, 64, 11, 17, -82, 63, 28, -28, 100, -33, -78, 85, -4, -122, 121, -64, -56, -88, -94, 50, -3, -98, -63, -74, -125, 105, 35, 64, -98, -53, 84, -70, -86, 111, 41, 5, 15, 8, -124, 113, 82, 13, -91, -50, 111, -93, -8, -84, -102, 66, -21, -20, 23, 75, -75, 29, 37, -64, 60, -77, 119, 86, 123, 126, -63, 100, -73, -13, 43, 81, 117, 113, 54, 38};
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
    msg.setTimeStamp(0.414056939728);
    msg.setSource(19405U);
    msg.setSourceEntity(79U);
    msg.setDestination(26868U);
    msg.setDestinationEntity(102U);
    msg.type = 212U;
    msg.op = 168U;
    msg.request_id = 6707U;
    msg.plan_id.assign("FAIOSMVVRISPGTLTTFIOEVGQNUZSYOWKBISDKJCBSCVBFBWCABDAHGOQSIGEJRKAKVZYFANTWRPLZJCKURDHXTHMKNWONGCXJEZJXVZWTYHABMEYXMLROSMAJZUILQPCYXHIEZVNHFUVYDPCQXPHMYLPKNDQLKSISYETDLKLFMOZXLWUIGDQYBNJXPQEFRXNFGBXMAZPCIKGBVFEOOAVHOMRPEYRWDPWCNRQDUDAC");
    msg.flags = 21076U;
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 235U;
    tmp_msg_0.max_depth = 0.0254213298748;
    tmp_msg_0.min_altitude = 0.779183873767;
    tmp_msg_0.max_altitude = 0.24598565053;
    tmp_msg_0.min_speed = 0.197337820568;
    tmp_msg_0.max_speed = 0.852605275196;
    tmp_msg_0.max_vrate = 0.832503267003;
    tmp_msg_0.lat = 0.82263181921;
    tmp_msg_0.lon = 0.417586387566;
    tmp_msg_0.orientation = 0.561328322628;
    tmp_msg_0.width = 0.134056360152;
    tmp_msg_0.length = 0.552114797374;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LNBJQKSLCWQOCDAIXRBVTZENATYGIUNVMQVYNIZNTQSUKURMETECYFMAKLIJDSHFZXHDBGYCCOKNWGUGKWWVPTVPHRUAEDZPKMMPOZMFNDOBCETYFSYAGXYAKTYXLOTJJBVXVYDXBUZILGEZV");

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
    msg.setTimeStamp(0.894300514213);
    msg.setSource(64118U);
    msg.setSourceEntity(78U);
    msg.setDestination(56106U);
    msg.setDestinationEntity(83U);
    msg.type = 77U;
    msg.op = 47U;
    msg.request_id = 14286U;
    msg.plan_id.assign("TKBKTZFMUHJCYHDDLVHNVROSIZCSETMGBVCZJHWLACUOFNIONGZXJLRAISDYAUIZVXGPMYOOFABXQEE");
    msg.flags = 11302U;
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 189U;
    tmp_msg_0.error.assign("OTBJHPSYHXMTKLGOJJNRGKZVZDRHFOZHFAMYSWFIHWRLDXJPCCZXXUKBRYGZCFSDKLKSAGTPLUBPMJCZLBDPZRXZLVUWRVSQAEMLXCNATTPOJKBQQYXGMVVCOZOUILNMNYKMIRLG");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TNXDSLEEFWOROQRMRWHLAUSZEZEQXLWZCSZZVCHIYECLVJCWMOKJXSYVFQXPQZNTAYBMYPBIYVYRINNGDWATOHOBEOGVZHRXWKZCOLPHS");

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
    msg.setTimeStamp(0.0410321236328);
    msg.setSource(55225U);
    msg.setSourceEntity(90U);
    msg.setDestination(25983U);
    msg.setDestinationEntity(79U);
    msg.type = 210U;
    msg.op = 243U;
    msg.request_id = 61537U;
    msg.plan_id.assign("TNQBOSBGZFTEVJUFPPYBEGNVTHPAGFVGZIEYCJEXUHMSSXWIFCXZNRBDTOWVXMAAMNNPIGLWFKAMTIBSEKHODXUJXJHGLFYJZMCPQRRFOUTYFGPICCERGIKHZCLADGHZBDURVTYFSWNBOIPNLMTDDLLQYSJ");
    msg.flags = 47996U;
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("SHCTDWSWFVSJGDBGCRHCZOTKTNUQCZMDQTMEJSJCORDPPLKWRFXYZLKZSNVIBKPJVXERRQCUYOQLORASQPPEKDYIOIOOXGKODEHYTWUDYLVQHBGJUMYAHQGBNDXRXECJSXAALVVOGYKWYCLFUPXNISNEKHTGTPAMZFNTM");
    tmp_tmp_msg_0_0.lat = 0.544549751669;
    tmp_tmp_msg_0_0.lon = 0.125823703729;
    tmp_tmp_msg_0_0.depth = 0.841426927714;
    tmp_tmp_msg_0_0.query_channel = 141U;
    tmp_tmp_msg_0_0.reply_channel = 214U;
    tmp_tmp_msg_0_0.transponder_delay = 154U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.0365809786253;
    tmp_msg_0.y = 0.951356307506;
    tmp_msg_0.var_x = 0.0489875618889;
    tmp_msg_0.var_y = 0.160396268125;
    tmp_msg_0.distance = 0.44914668601;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AUMLRPARJDZNMMMHWZIEXEVLMAXSEUQHSTHIHNRRNTRWMJUMFOFFDWLPUOGTFYYJINUYQBJVZZPKGGTOFBCDRCNEUIHSHMBSPOLVOLBLK");

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
    msg.setTimeStamp(0.0839480204499);
    msg.setSource(46755U);
    msg.setSourceEntity(159U);
    msg.setDestination(42354U);
    msg.setDestinationEntity(163U);
    msg.state = 123U;
    msg.plan_id.assign("OQGGASMLTJJPCHRRAVTZQYHFCNRAMJNUSPCEVTSGIGIHRMFEMWBGDAZMVRRFXBTLGMXUKEYHCDJBPLHDYTLYDNDXYBHCAVRPUTFTIWWSEJKPUEUXVLVLIODQNJXBLUPEWBJOKGSYNOZMPHIFTWOPNOSYIPAGQQDNEFIMCASLDGERCKLJBLZXMKBWYZQHOUUAKUFQAGAEDKECOVXQZRJQZFBYFHXSNNOIKQYVCZXFDOVWMPWHTWZKCBN");
    msg.plan_eta = -492060061;
    msg.plan_progress = 0.520911116657;
    msg.man_id.assign("VMKCUYKLQVXPPBHBRBMVQDLJCOAJPZJDGQLOPUKVVQSJOARMSEJTIEWPYTNZHKMYTWWMBZBIWRFVCFJEEMHRULUDNUQHQOKYBLRNFISTDTNENBUURJDDVHYDPABEUFQYRHFHJLDISICZXVDRLWXFCLSYFWUGVNQEZTHPBKPVGSOHKKOKZAIWAIAMWZXGXINCATTJFQLMAIQZXGYUSCRGZGA");
    msg.man_type = 38848U;
    msg.man_eta = 1897050374;
    msg.last_outcome = 25U;

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
    msg.setTimeStamp(0.579895826397);
    msg.setSource(3373U);
    msg.setSourceEntity(20U);
    msg.setDestination(16991U);
    msg.setDestinationEntity(12U);
    msg.state = 90U;
    msg.plan_id.assign("FIGZQDIVSBWTTCJMZDEEOCKHAOEIDLZJPYNFCSVXXVSLOVYZDKFTGCMEBRFMRCTIQVTOKVHDLYXOUPBSMOOPIIYXSWLXBUREXWHPZDHGKDNHQJYRSJMLMRANFWTEZIGYBRHLBNJNKVKUGACPSSLECQMCQQUHWHYJMHTOKXEYSKGSPLQUPJZNWDZWNIQVAZ");
    msg.plan_eta = -2013975838;
    msg.plan_progress = 0.463965472644;
    msg.man_id.assign("LITONNEMHKJMFWHBEOPXMTRFFVOCUDXJPIIYFCKESQHTVXBKELLTBSFZGHREBIJBNGHWGYEHYQZLVQXLVOWGJXYUPBQMQUDOTBMRPREAAHFAMGXNZKMNGZUNLDMOWUNBLLQQZDFOCDPVCWFQDCAXRJIBYUKZYWVERWDOSSAILYKGIYSNSZAIRTQCMSKHEJUVSRCATMUDPPGGCPJYQVKXZGHJNSUXATWTWCEBXVPFWKAKOFOHADNVRZIJL");
    msg.man_type = 20712U;
    msg.man_eta = -325566737;
    msg.last_outcome = 3U;

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
    msg.setTimeStamp(0.906614732341);
    msg.setSource(22747U);
    msg.setSourceEntity(138U);
    msg.setDestination(20390U);
    msg.setDestinationEntity(55U);
    msg.state = 101U;
    msg.plan_id.assign("WRKTJDYFUQEEAANUOZKDWULMRBDTOJYMWXIHRBHIDDYHLVTLUTSXVMYQVXQJXGXRZXBCPGPJVSNVKGBQOZARSCQCLAWOYKJODXZYKTWVSTTYIPESPCWEWRIAKAHGNEIDERPCEFZIVQSNORURIDBVNSGQMLKGHGDHNQEZUCGBAFCTMYHKYNPPMJBSITFWSQJCHFBLCQHLFVTBHVIMWNFUEFJILFJBMXWZPONCKGFALOKDOAOSALZYRMUEPUUPG");
    msg.plan_eta = -1969686253;
    msg.plan_progress = 0.101129584638;
    msg.man_id.assign("VAYUICIFLPIWSPBWVNQQLTUKP");
    msg.man_type = 9849U;
    msg.man_eta = -61325904;
    msg.last_outcome = 253U;

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
    msg.setTimeStamp(0.137968415297);
    msg.setSource(55181U);
    msg.setSourceEntity(247U);
    msg.setDestination(55038U);
    msg.setDestinationEntity(91U);
    msg.name.assign("RNXOXTBXQQEEHLYUIURWIKDYMNPXPBCHBCQEDFNVYOJIBRLJCTIKNVSMGPVVYIRLAQOUJRKTDTA");
    msg.value.assign("WGNRCQTOZRPDYPSOHCGMOXMVIFDENCPABKBKXZBETQBWVOFUXWDCSQHVCIIXYQOPFKJHLFOPJTNPLUKSCRFKCYIDXEAMYVKSDGHOZGCANNNUBQKRQLJNLHUMBGYXALBAEFTWPQLAJNJPGLGFFWEAZYJZISTKXUKWVNRIJUMEEBWNWGLGRORVDZHCPSMVZQJDJTDMDXKITZTMSOSZWHBES");
    msg.type = 122U;
    msg.access = 163U;

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
    msg.setTimeStamp(0.724035218329);
    msg.setSource(54526U);
    msg.setSourceEntity(201U);
    msg.setDestination(11724U);
    msg.setDestinationEntity(8U);
    msg.name.assign("BMCGWIIKEPBOPAUCQTWEDZZFPXVSJTGRCUEIGPUNDDHKCIJYKRGSLKCTTXMFZWTOGBZWGVOYAWICNLUSUWWSGASVULCQUOWJJJDWQYQNPUYMLKRFIP");
    msg.value.assign("CAOXGOXMGVSWXCKMPGKKQEGBECJMTYNQAJBDPIIVNVXUPDPRFIUMUSHQQDKFTYRYTBCRSWMFJUVZEZHJIHCGGWLRJGNFQDHRZWYTCLHYHKFTLTHBOVZPMFZYLOXIDWVASEZFBFLSXUFHGCTRSAKBDXQNAWZFWPNUMQABEDEBNAQPRYZLWNNLBXOXOTQCHPIAHYUPUVJWLZZTEKMCEMJKSG");
    msg.type = 94U;
    msg.access = 246U;

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
    msg.setTimeStamp(0.314332131979);
    msg.setSource(29154U);
    msg.setSourceEntity(20U);
    msg.setDestination(14080U);
    msg.setDestinationEntity(15U);
    msg.name.assign("HLLCYEFOMQDXGDSOCMJKJFHQHAFKVUMOBOWLBJLNXYPFVDOWBQEDCQPXBAKSRRHNOXAVJGUOYMLCWGRUEHXAZBITFNTRIUVSNFSWSLEBXDWEU");
    msg.value.assign("QLRFWKOECVMCFCDYLSSWU");
    msg.type = 31U;
    msg.access = 197U;

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
    msg.setTimeStamp(0.52584927732);
    msg.setSource(17928U);
    msg.setSourceEntity(121U);
    msg.setDestination(16107U);
    msg.setDestinationEntity(151U);
    msg.cmd = 226U;
    msg.op = 109U;
    msg.plan_id.assign("BIURQPIODFCPAKMIMNNDLFMIWPXKXGCHVDGDQQYPBLQPYEHADSCIPFXOGLNTUXRUZTYYDNOAHAVYBEVDWUJTATOCCZCGTWJLGXXKTRZHIHHXHJSAOUMHVZMCFCRXGMILJEVELFNVKWNENRYAYZXQMEVEJQFZWZTFYGGYDPURIKYKLIBMRGQPOVWOWKTDFVLSBGBHUSSNAZVPQSOLBSZNRDTQJSCSWLFUSECBKQWEPBKWRRZJ");
    msg.params.assign("ZHBAQLRSEYYK");

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
    msg.setTimeStamp(0.886910553097);
    msg.setSource(56618U);
    msg.setSourceEntity(179U);
    msg.setDestination(44178U);
    msg.setDestinationEntity(74U);
    msg.cmd = 76U;
    msg.op = 15U;
    msg.plan_id.assign("VBFRQUUJQYCHLAZHSOJXKCOGZDCOUZEUNECGXPPLUMVNWJTKMTSYCLSAVWOGPLLTENLGKDJHGCKQNYWCOFRUTFNGGBMXPWKGHDKYPSMSSJQXZTXHBOILEVEZ");
    msg.params.assign("ABGEDMBASGXKDDWBQ");

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
    msg.setTimeStamp(0.295215031351);
    msg.setSource(39063U);
    msg.setSourceEntity(229U);
    msg.setDestination(53116U);
    msg.setDestinationEntity(22U);
    msg.cmd = 121U;
    msg.op = 122U;
    msg.plan_id.assign("CKFYHQUMJWIRDAVLISKSBOETMHQVUBBCXSRKNAEPTGPRVKFPGHSBMEKDJSIZBNVEAWXYXGYXRMHQCXRDQLGOEHCCFKJKLMMPOPNFSQUIRLITIKSQZDUDAMFVFBNYQMFQVLXTVEDTFWPICJEQURREXZGYAAHTMLLGCV");
    msg.params.assign("SGBMEGBXMFJLEIVAIRBCTCRQWDJYZCZSSSAQPNYMDEJKMP");

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
    msg.setTimeStamp(0.766797730035);
    msg.setSource(9595U);
    msg.setSourceEntity(55U);
    msg.setDestination(31248U);
    msg.setDestinationEntity(91U);
    msg.group_name.assign("ZNUPNCOWIPQDWOPLPMZNDSFWLADMMPJEJPSWIDCELRNHXQBDFRBKNJYVXYAONVMKTBKTWOFKNJZAMSDGSKYQSIIKBSBOHVTXVNTZTYWMHCCDGKVFRLVDIOMBKGFAGAXGTIXHNRJHAHSU");
    msg.op = 206U;
    msg.lat = 0.731161380189;
    msg.lon = 0.807289231878;
    msg.height = 0.523813244493;
    msg.x = 0.421842596265;
    msg.y = 0.781468302828;
    msg.z = 0.0969505923085;
    msg.phi = 0.809899642107;
    msg.theta = 0.534556802914;
    msg.psi = 0.641081838501;
    msg.vx = 0.796203387078;
    msg.vy = 0.835585779939;
    msg.vz = 0.056088083747;
    msg.p = 0.120474150329;
    msg.q = 0.185117001834;
    msg.r = 0.813076472833;
    msg.svx = 0.578020780547;
    msg.svy = 0.11416129169;
    msg.svz = 0.987136225499;

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
    msg.setTimeStamp(0.883219073676);
    msg.setSource(4403U);
    msg.setSourceEntity(44U);
    msg.setDestination(2468U);
    msg.setDestinationEntity(231U);
    msg.group_name.assign("BNYRIKPOAHGGCMECCDPMMMLGEKFBCODVXQCVJOLTZUSWBVCAANBBTALNYONEUCNKSGMWKGNQJQPOBIYJZJEARHPORAZMVDQTKVKLVGYQIEUUPEYZDBHYSEHSSMPDNXSXRXOQMHOVLIVFURWZTHTRJKTAPQSHDMWITDHLKXAYGCTJVLLIRDGJYQYLQCEFPBFZTP");
    msg.op = 182U;
    msg.lat = 0.120264609405;
    msg.lon = 0.659385468103;
    msg.height = 0.348383423159;
    msg.x = 0.50241221723;
    msg.y = 0.36004500319;
    msg.z = 0.695369569267;
    msg.phi = 0.773915353289;
    msg.theta = 5.8529200383e-06;
    msg.psi = 0.645887090588;
    msg.vx = 0.0595086234879;
    msg.vy = 0.350532560193;
    msg.vz = 0.288707269215;
    msg.p = 0.152175084945;
    msg.q = 0.327745599658;
    msg.r = 0.472066366027;
    msg.svx = 0.0800618952716;
    msg.svy = 0.810030395179;
    msg.svz = 0.63311542957;

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
    msg.setTimeStamp(0.996478692759);
    msg.setSource(9768U);
    msg.setSourceEntity(111U);
    msg.setDestination(11185U);
    msg.setDestinationEntity(91U);
    msg.group_name.assign("DPXTGPTLCGGZWSCZISUCRMVQPQUJASCGZPLMEJYHWEJWFFEOOITOVAWTLLFUKKZRKQALXDTYACFVOBABQMUAVLPOYBWCUVDUSRMCLXYEFIXDYZWXHKDVAYMIHBRKXNZEPQHNBNZIHQEJTKAKGNISWQWHSCTMVQEYRXPMKGHFBVGNTLJIDKIGUZ");
    msg.op = 138U;
    msg.lat = 0.384305743649;
    msg.lon = 0.14159241366;
    msg.height = 0.390266831117;
    msg.x = 0.636960738099;
    msg.y = 0.0650745951066;
    msg.z = 0.2874983961;
    msg.phi = 0.99331463986;
    msg.theta = 0.984224547269;
    msg.psi = 0.727239278687;
    msg.vx = 0.778247926831;
    msg.vy = 0.501032613886;
    msg.vz = 0.852531414557;
    msg.p = 0.12751372099;
    msg.q = 0.964458455165;
    msg.r = 0.205690940184;
    msg.svx = 0.288332099619;
    msg.svy = 0.803998475099;
    msg.svz = 0.379880832637;

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
    msg.setTimeStamp(0.893611602195);
    msg.setSource(26572U);
    msg.setSourceEntity(177U);
    msg.setDestination(56369U);
    msg.setDestinationEntity(150U);
    msg.plan_id.assign("CGFRNQSEHPXJPWQCJOTIXTOZBXZMAVUZYCUVNBKWIVLPNDFYFIKROPQFCFQHRNWDNCJCHY");
    msg.type = 84U;
    msg.properties = 75U;
    msg.durations.assign("YWNRFBWTCGUIAXFWKQHUWQOAIXGULBAGQUFDXAXYHNZET");
    msg.distances.assign("ODVSZISPSXFSYYGNSLJHUMPFUWIWOAUDNGFGOBJUQCJWTVSVYLQXYPTMIIEJRZIAIOHCKRLRDHGHJORRUAVCOIBSWDUYWABZTXLICDNGGWPQVLLFGPMKKAZVDJBIDLAEPRPNWZBOEEEUF");
    msg.actions.assign("PEBVUDOXTZZQNVJZIXMHOMBPGAVEYYCXHMJCTBCFRJZBANOEQGPAVSUCUWLWQEBCZFKRBFQDIFSSDLXZLXIDBPRVIQREJFPIMHYAMIVRMMKSUKXXKOMUQOJWHSDZSHSRYYCWTKBEVUPYBYIRNITAMNWNELFQLATDOUHKXWAZLNBQNGVSSCSGAILUFTENTEATNH");
    msg.fuel.assign("ZKBCHJRWPNDQOGWPVZNEYHLXYMTXKRAUQRNWEJFAULZVGPLUVRLMXALOODCXJZXFUXQVDH");

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
    msg.setTimeStamp(0.0544382460937);
    msg.setSource(48043U);
    msg.setSourceEntity(37U);
    msg.setDestination(36533U);
    msg.setDestinationEntity(161U);
    msg.plan_id.assign("QSOFDOSRDWEYFOVRZZEULFTYIJJAURTODKKGXUANRGLICPVFZSNIGWJZHXRIBATZTQYJCZOIIBCSMAVNBWAVKMQFEXVETEBCMYPCPNWUETJXHIPWPFSWLBDLENPKPHSHZGJTEPPBLOLVMZSQYMZPQHCKJXDJFQALMHXYGDVALSRYNOWDCOFVXUSLLQIOAUGSKBGYAZMXJTWOCGNKHCNUNUW");
    msg.type = 77U;
    msg.properties = 183U;
    msg.durations.assign("PHKOVJRIAXNQWNGWVRMLFSTOSUQIZTFYCQJDWKQAEEAXJJYIPGBMBOCGIQJDWYLPUYVMOXQHULBZMGUQBGACHXXCAJBTEAIPORTDINLFXVPZOOTCVFGINSAUDDHWPBDVHHQZJITKGFGAUUCCHZPFFASRSLYSRLTDFMWKSCUSTNLXUMEHEZEDWZKITRYWUSAKCTKGBEXYWRCPMSFR");
    msg.distances.assign("FXTCWZFWWBTPIZYCLHBSVYWDUJRUADBMBVQSVDMPGLPMGU");
    msg.actions.assign("URBNZATZVDQRXWFAOCYVBTVKJVSABRVHMKYMELQIDOFLNUSDXBGKULVMBEHHMPNWWPTPPYDGEGCCDPLUHOHFDJLSYQMYRRCR");
    msg.fuel.assign("QFBEFWZILXQNVMYNPWYWQBYOGAXVEZYRJTIXKWIUDSLQDFBJEBBMOIKMQGDGLQOQBUERCIQRAYSZUEAKFWIRMHWVSPJOYKZLZKHJDQNKYMJDOGETLTDPPLRVRNIHJTSDHTGSHSABFIEZPOIOUHRE");

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
    msg.setTimeStamp(0.19160831411);
    msg.setSource(36179U);
    msg.setSourceEntity(192U);
    msg.setDestination(18005U);
    msg.setDestinationEntity(141U);
    msg.plan_id.assign("CDARIKKTIDAAGCCUZEFMYTNVYOWESSRJENPBGSZZWMVJGJOHFVEZBFLTWXIPYUGWHNYRNDZHAUSAWGQIKHPSOOYEPAPNZYIMAQHGLMMKSTVYLUXLTHIVOBHDVMFPHTMSLOLJCRIBFTDBXFSWUGEDQRCCAPPORX");
    msg.type = 139U;
    msg.properties = 202U;
    msg.durations.assign("NRBOIQCYLQZGKHTBHZEVWSFQXXBZQHGMPFERLQJAYRQCVCNVKZVUDFRHQIGLXSUMCPXAAHMOHTAOGYFPYVZJGNXPIMWXDSAMGVTGWXUVKFESCPYTEPYJNMIKCMDKTQOO");
    msg.distances.assign("JEGAKQYLSGSDNBKTJUPQIGDZKCYJAOIPRDZWHKUJIYVLFBGATSLBOLSIXPPTGUFWSGEZNENAXZMPDUAQBORMDWGVUXIMIKCNBDGXRXALCQFUWCZVBVBHNMPNNMJVROVUBFSQCTWBQDXOKMQMDEHECAHIPWYHLWDPEUPIXREKVDANXYOLFSSHQMJRULCQHPSEHRFOLRYOEJONHQVWVTIZHZXGKZFFJTRWCYZTFTLITMANKKYXMABZTJS");
    msg.actions.assign("WCENZOKEDTTOAYMAWWCXLVCINHRJCGDHHXUOWEVUGPCXTKHIQDZTVPMVQEKKEUTBRHBSJEPPSDKAALOZKDCYXFYDKBZULRZYQRRMSQZEYMSGJHPJDISQTAPFVIIGOVXFHWSYFMNFB");
    msg.fuel.assign("YOKPIWDNDVWEJYWTGZOJRTOLGNUQJDARKUNDZRJPLDITXMPOTFBVGZIANHQGQBAMCADRQULVSRMWNLYWUUNVRVKHFYSMCPEIBOQPUWMCYJLKKPRENLSI");

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
    msg.setTimeStamp(0.400478545439);
    msg.setSource(5192U);
    msg.setSourceEntity(233U);
    msg.setDestination(3961U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.286066959577;
    msg.lon = 0.361170629938;
    msg.depth = 0.507210533921;
    msg.roll = 0.948028000934;
    msg.pitch = 0.990845365098;
    msg.yaw = 0.237171222442;
    msg.rcp_time = 0.825827552181;
    msg.sid.assign("ECUSMIIQJXLYPZPOFKPWZCLFSIFGUVYEOUHTNVARPILSLYMBNJREILAOYDQDFKOBMJQDGHGVKZYNSTIQSAXTIPPGPCUWCFUWVDNCXCNDQFIBICXHSLDUJERHGMOAKWXIWPYDMJYGMRJBVPCUBAJVLXFAERCQKUQETSQXRMZWYRNJHOLRAWBWNEHTZUTRDGYZSS");
    msg.s_type = 59U;

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
    msg.setTimeStamp(0.712976362953);
    msg.setSource(18534U);
    msg.setSourceEntity(92U);
    msg.setDestination(26666U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.328368304245;
    msg.lon = 0.291857345437;
    msg.depth = 0.938896882807;
    msg.roll = 0.525331372354;
    msg.pitch = 0.460297506151;
    msg.yaw = 0.0876057631291;
    msg.rcp_time = 0.262007216681;
    msg.sid.assign("ALCGTKYZWCKFTVCVBKRFADJWJAYOFTHACEDECJLBVXDUPWSHLNESYMJLDCCJQLPRMORFFKGUBOWRRNPLLHPSSVBYLPGAPZAVMZQQMQWQDHXQPAXBNNUMBOSIKFARQYBBNMHSZIYYJYUEOEKJUXWZKIVOYKPKGADRAZIRXZVNRMLDIFIMVJEOPUBZETTDOHHVKHJITIUFNFDN");
    msg.s_type = 232U;

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
    msg.setTimeStamp(0.462264467355);
    msg.setSource(10405U);
    msg.setSourceEntity(34U);
    msg.setDestination(51597U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.0757285036868;
    msg.lon = 0.690594749797;
    msg.depth = 0.983314494182;
    msg.roll = 0.731409752774;
    msg.pitch = 0.577588062932;
    msg.yaw = 0.66431074292;
    msg.rcp_time = 0.271622310796;
    msg.sid.assign("XLYXGQCJAVLDYRJPCYCETIYURWTFZEGXOLSRXZMPGEBNVQHQVKFEVNGMZCJTMOSGTCHETYRCBUZRLMJGPIVAQFANAQSVBCFUSEWWNIDCTYKPEBKDDGLHTUSVQGJDIVQZHXYIALAWRWBMOCKIFSMWIQPUBSHDURKILXFJHJOZKNWHHZOPPSHJ");
    msg.s_type = 138U;

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
    msg.setTimeStamp(0.261862912549);
    msg.setSource(56155U);
    msg.setSourceEntity(17U);
    msg.setDestination(30966U);
    msg.setDestinationEntity(86U);
    msg.id.assign("RBUMUKJCNKNJQDZPFARPUSHTUURDJSTFGKVYHTZEVGXANRKYTOWUKJIVEJEOBQHMZGMQJFMFYRXEZVCLLWQXRMTCVVGABHKCSADCJKDIIWHNCRNPBMHOQLIVEASENZFZMLPVWIWPOLBEFBHAFAUSVNLDRYEXBATPIGVTTFGDYYQZWDFXCJKZLRWLSHI");
    msg.sensor_class.assign("ZZZBAXOTDKPGRDKIRAYZGCKHQWOBHYETPWKV");
    msg.lat = 0.390487863813;
    msg.lon = 0.84330531155;
    msg.alt = 0.894409435079;
    msg.heading = 0.679489484653;
    msg.data.assign("JLWFNTUJQZIVONEVIXWNNQOKIVBLUIYXMFGNXHAXVTQDYSHPWBJPPNUYFYLFGOEWOQYASZDMDAZOBCZTHONSQSJLLMSVUYDCGXLHERUEALURZ");

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
    msg.setTimeStamp(0.0721239834832);
    msg.setSource(14241U);
    msg.setSourceEntity(27U);
    msg.setDestination(36401U);
    msg.setDestinationEntity(243U);
    msg.id.assign("JUKFKEWXQPABSETOJRIQKRLRWLTMHMYYSHNHIZWRSOMEORTFWDMTSQFUYGDWNTQFEVHDBELPCHILQYUXOQHYFHXEBBASHOKBCKYMEPVWMIRJBTTNBUIACLCUXCCIIRELGNOMBCCEJFVFVYZGUDQVXPLOGEYDQG");
    msg.sensor_class.assign("RPSUZXMKGVLHDRGBWMMJJLOPZRAWOSLODOQXLAJTHLAFSNEGCGQETF");
    msg.lat = 0.605459780616;
    msg.lon = 0.596829924452;
    msg.alt = 0.868061684846;
    msg.heading = 0.192863103432;
    msg.data.assign("HOPUWSBVKHGQTECGEKIRKGSYNOZMICJBUFKBLUNMYLFBVCDRFJWATTCWQNNIOASJIJLXKLIWYIMHVPJWYMUTTAQKLSXUWZPZHLUCFHRRXDDEHHNVHWKYSDGIWXRKXCGQBY");

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
    msg.setTimeStamp(0.96715142935);
    msg.setSource(49948U);
    msg.setSourceEntity(183U);
    msg.setDestination(50779U);
    msg.setDestinationEntity(131U);
    msg.id.assign("OVXBAWXMFIIDHGDUPUYMZFPHBQOBNEMBAOLLXMIXTIEPCAYVJXIYOQPLKWDCSULGKZMHFDYLNSSJGVNGJPC");
    msg.sensor_class.assign("XGQJOPWSOYAAWPHUBYREMNKVFKQALAAYTKZXUUBLSEWBRGAAMDMTOBSQBXUDMBEJFJYBZWKMAZQTDVADFZJHCSINRQGIRDFFGETPVC");
    msg.lat = 0.0703013242506;
    msg.lon = 0.0841535902287;
    msg.alt = 0.461975821086;
    msg.heading = 0.618455117337;
    msg.data.assign("HQFBTVPAYJMJZALSEFIKO");

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
    msg.setTimeStamp(0.168789863184);
    msg.setSource(19315U);
    msg.setSourceEntity(234U);
    msg.setDestination(45557U);
    msg.setDestinationEntity(74U);
    msg.id.assign("QJCAAPPZWKHYVBHDRUFJMPIWSNBRZ");

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
    msg.setTimeStamp(0.214541184658);
    msg.setSource(35425U);
    msg.setSourceEntity(17U);
    msg.setDestination(63004U);
    msg.setDestinationEntity(38U);
    msg.id.assign("XFFMZLZXSATWRYSFPBQCXJQHAUCNWNOLJVKJDUPGPKKFEJZVWJTCSNGVAYEKIPEKHINKIRRYQDGDISCDMRQJTPIOW");

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
    msg.setTimeStamp(0.152119789894);
    msg.setSource(53521U);
    msg.setSourceEntity(72U);
    msg.setDestination(34732U);
    msg.setDestinationEntity(66U);
    msg.id.assign("TQITCCMYIVHIMOSHOSAWNYMIJIHRHWUAYNQWLOHQMREQMSFYVGKLPXDHLQKBPCUDSTPVNULUNXEUGDDIFQHRZEFMJGTGQSNPFGPMGVXLLTKEDEECJBQUSVXFUZJHWZBDLNYXRUOGNAIACP");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("QAOFNUODUBEDHCODVMAQDHZKXNFUZZQCOTOZWFNXFSRKEMNYUTWCJJRXYQWNKPBUDZXYYKLZAOWTWJGEVCXRFLRRRMCMXWNPVISB");
    tmp_msg_0.feature_type = 97U;
    tmp_msg_0.rgb_red = 121U;
    tmp_msg_0.rgb_green = 202U;
    tmp_msg_0.rgb_blue = 165U;
    msg.features.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.577334647969);
    msg.setSource(36840U);
    msg.setSourceEntity(119U);
    msg.setDestination(33011U);
    msg.setDestinationEntity(77U);
    msg.id.assign("SVMKCMTHGLLUEPHPRWCFJCNLQBDEDGVHUGKVN");
    msg.feature_type = 140U;
    msg.rgb_red = 117U;
    msg.rgb_green = 50U;
    msg.rgb_blue = 7U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.0972341260258;
    tmp_msg_0.lon = 0.233902987045;
    tmp_msg_0.alt = 0.538375650888;
    msg.feature.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.807205072989);
    msg.setSource(60389U);
    msg.setSourceEntity(1U);
    msg.setDestination(54918U);
    msg.setDestinationEntity(108U);
    msg.id.assign("WRRTCPQOOBXKVUFTUIYXQMAPGLZQLHXMUHLMWPDLZPVBFGCWCQWIQVKAWVSCUFNEGKDRMGABGSAKJCDBCSNISYHRKLCYYYGPRAHXZJDEYZUADYH");
    msg.feature_type = 161U;
    msg.rgb_red = 90U;
    msg.rgb_green = 146U;
    msg.rgb_blue = 99U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.253821819306;
    tmp_msg_0.lon = 0.832779163148;
    tmp_msg_0.alt = 0.170251486494;
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
    msg.setTimeStamp(0.974246798004);
    msg.setSource(15309U);
    msg.setSourceEntity(209U);
    msg.setDestination(20546U);
    msg.setDestinationEntity(254U);
    msg.id.assign("PLQKSPZENCYSRLNWIBNHBSANAZQRPJHRLVWZMUAILDIFYVJJVVTEAYJQQOLBQMSFDWEFKHKSYOKIKUHPTZOCGYEGROFMADCHSIVXSNTBAIMCCCITASTDKXJNWLCUUETWCMGPJMRVDMWRDHLGUWVYQBEJFYQKUTPYQEHCBFITMJIKXGOOTNGPXOLGWOFNPOJZBPGZGUMMWX");
    msg.feature_type = 206U;
    msg.rgb_red = 91U;
    msg.rgb_green = 112U;
    msg.rgb_blue = 122U;

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
    msg.setTimeStamp(0.895590582164);
    msg.setSource(5551U);
    msg.setSourceEntity(126U);
    msg.setDestination(15424U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.803165022865;
    msg.lon = 0.437197233183;
    msg.alt = 0.304287564565;

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
    msg.setTimeStamp(0.473220834551);
    msg.setSource(37112U);
    msg.setSourceEntity(195U);
    msg.setDestination(48765U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.918476200795;
    msg.lon = 0.938676900146;
    msg.alt = 0.55531227793;

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
    msg.setTimeStamp(0.254768677813);
    msg.setSource(16172U);
    msg.setSourceEntity(21U);
    msg.setDestination(48740U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.0625560642976;
    msg.lon = 0.344518648434;
    msg.alt = 0.612796928479;

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
    msg.setTimeStamp(0.161240732583);
    msg.setSource(37316U);
    msg.setSourceEntity(69U);
    msg.setDestination(4382U);
    msg.setDestinationEntity(218U);
    msg.type = 79U;
    msg.id.assign("RXEBGEJNUVOXTHCLKYGJ");
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.0746455699801;
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
    msg.setTimeStamp(0.163961920234);
    msg.setSource(2745U);
    msg.setSourceEntity(169U);
    msg.setDestination(48828U);
    msg.setDestinationEntity(89U);
    msg.type = 122U;
    msg.id.assign("YMCLDXMSPOEJGOLJIUEVADNZT");
    IMC::TelemetryMsg tmp_msg_0;
    tmp_msg_0.type = 187U;
    tmp_msg_0.req_id = 1032327767U;
    tmp_msg_0.ttl = 20083U;
    tmp_msg_0.code = 78U;
    tmp_msg_0.destination.assign("EFKYCRVUOSBFWIMMKXXLOSBIXOQAZSKGTPKPDXZINVWUWSSJVZWYUNFRSMCOETHJQMCNGOSGLYXIPVRRGNQWVMAQQHIHDXJQVXPEQFCATRJTAWMJHSFXJBLRAUCAEOFYJIVMZMCMKK");
    tmp_msg_0.source.assign("UMGQZRDPLGYVOYBFXQPUNABAPMPINFOBDDNJYQBMVHZRHSFOLEKUMJRNLDGHYMMTKPFPLZPNRWKXHXRUCTJADFQVEXGHQZAHOSOXIWTTTWCCJYWEIZOJBZKKCTAMCSDUJMEYICJCZCWBEOIQEDZULDHWFXCWUBUMGFHLHVZZUQDPWIGLARVVCXKSAITAJTEIHBOVVSYFKFKOVMAINTSKNVRWSALNIDFPQSPLBEKER");
    tmp_msg_0.acknowledge = 21U;
    tmp_msg_0.status = 27U;
    const char tmp_tmp_msg_0_0[] = {-25, -38, -96, -69, -64, 65, -55, -106, -79, -58, -11, 62, 95, -63, -121, -69, -47, -6, -113, -31, -107, 20, 40, -20, -17, -89, 37, -68, -120, 56, 78, 116, -68, -7, -121, -72, -5, 28, -32, -47, -13, 65, 111, 109, 102, 73, -113, -37, -98, -2, 46, -9, 8, 65, 89, 98, 95, 23, 93, 50, -72, 98, -74, -53, 6, -22, -79, -17, 27, -90, 19, -100, 69, 41, -79, -127, -18, -34};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.784869972922);
    msg.setSource(41484U);
    msg.setSourceEntity(19U);
    msg.setDestination(41020U);
    msg.setDestinationEntity(82U);
    msg.type = 252U;
    msg.id.assign("TJBJESETEQ");
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.330482835606;
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
    msg.setTimeStamp(0.783443707045);
    msg.setSource(50619U);
    msg.setSourceEntity(211U);
    msg.setDestination(37962U);
    msg.setDestinationEntity(158U);
    msg.localname.assign("QZEOIMBACLUKT");

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
    msg.setTimeStamp(0.200134861739);
    msg.setSource(9265U);
    msg.setSourceEntity(21U);
    msg.setDestination(8610U);
    msg.setDestinationEntity(116U);
    msg.localname.assign("ESBCJCLZKKILLBKOWHLTKUVQHZDNNOIQAOGTXMGGRXZLNXWSGVYTHYNCOTKMUDMFAUCGEXPAWVSZKFPKYMCRPMXHBPJBBAIQMWQMHAUIXEPXJNMTNQMCRTIGFDQDISCUGXVLEVYHBWCTVJGWDSFUASVAROAKSDYBRPYUFWNSWJONKVQERRLPHYHZGHIUPQDFXUFJPXZEOGVAYLKONDWTZUDCB");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("AUXVSXLJVAMQRWQZIRLKJABOOEMZGPTKBGGWSZGNQWHQMUXEFYACHEIIRMZYPPGJWDBKDQTHPCLZROYUURAHMJTFFDUDNCKSXOQVOPMNLLXKKFMZNGRFVSKUJLEUYPCZGOHNBSLNTHEQKMKPPVLPN");
    tmp_msg_0.sys_type = 142U;
    tmp_msg_0.owner = 12693U;
    tmp_msg_0.lat = 0.616454786618;
    tmp_msg_0.lon = 0.93772168742;
    tmp_msg_0.height = 0.553599684361;
    tmp_msg_0.services.assign("ICEMSPTDRVHYMLQKUGCMANQMEYDDVGGBNGAFDLXIFLSKHQIZHTCSARJBIWVNNWVLXLVXJYVELYQWYVEEGKLSUJSFYGJUQIHPARRFGWQOTBETDSFWTXMNQFHXPKVKHWAQNJJBHAUPDBYWDKARELEPCTRGPPEJRGJSOZZRTSCSIMXNSLTBKYIIMIJXRFLJTZARNCAOOYMHOFUKEYAMZPPDU");
    msg.links.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.341637713621);
    msg.setSource(53959U);
    msg.setSourceEntity(248U);
    msg.setDestination(52661U);
    msg.setDestinationEntity(127U);
    msg.localname.assign("FNPTHCTTFBIMBDLWCOJAUMOAVHKQRSSRQFKLBJBEUNXNZAHKIJEQCEGNR");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("UKJCEBJNMZGQWAHKMFMKCMPUSNIWPASHPVTYCXRXWFWJDAQOHDIAWDTYFLLXLAEAIHVYYVVTXNKSEAVHZG");
    tmp_msg_0.sys_type = 199U;
    tmp_msg_0.owner = 43582U;
    tmp_msg_0.lat = 0.909515837891;
    tmp_msg_0.lon = 0.31881733531;
    tmp_msg_0.height = 0.964150830392;
    tmp_msg_0.services.assign("DSXCAPKZTJZCEMJPXZIPRVMEQSUFSDIQOKIFSCUOAVOIHDSXPDVVIWROVIPXJRIZRHJGYWSJWKQTLKBRB");
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
    msg.setTimeStamp(0.00219603918155);
    msg.setSource(7143U);
    msg.setSourceEntity(49U);
    msg.setDestination(17926U);
    msg.setDestinationEntity(67U);
    msg.timeline.assign("WPNKBNSCRFHHUHDSQFFMMCNOIYORTEOJBVERBWLAACGGDPYDAEIKANAZKMPBYPPSGRFKZJTTZLLHRBKCIJOFETBOIPPVRRKZJCHMYRWWGUZN");
    msg.predicate.assign("VCEVFCXBKSDKXLJFIHILYJCUYQSMRNYPLTNMERHFZQLZEGRUCAMMPXJSMTSBDWPKQOTFXTUCOHOBXGWDPLJFQBGOPEIFHCSQZMEYJLHAWUPLIWRNXWQMZEAJADBCZYNUKWTKDZFP");
    msg.attributes.assign("FTBXAWDOEUPJGNQRDYUBGMEIAWVOYRFPPCYPYAWYRDCTQKQZBKHVEONSLCLTBSULOYCFKXWQMMTUHSJTRAKLOKFXVHFTLDXRJNGTVEZWWJKEMNHZYHPCZBEKZHFSOUCIKZVVH");

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
    msg.setTimeStamp(0.703047208457);
    msg.setSource(28267U);
    msg.setSourceEntity(62U);
    msg.setDestination(34486U);
    msg.setDestinationEntity(165U);
    msg.timeline.assign("PPDHHEBQKTOSXQKASZSCTXGAQUAWMJZLQRAJQJUOCTJFYVXMIEPIVTLNADFSNJMPPYEZTODWWSKCCGCRXXQRNOJFXMBBNZMFEYDFWYLLRYNYYEUGUMTWE");
    msg.predicate.assign("KRMLNRSSXZDDXGEAYYVXAGCLIVBPAJKFWHXBDHGZGJRQWCKRWMRFVMCRJKVNMPFJUDDSVXIIWNTUYLZCMKIOCFUZQNEAUDOKHVQATQVFNOFGXWEKJSWWWMORFQFTSCIIXWEYLJEUJPORUZHOTOGMEMQONUVCSLCAETOZMOGNBPPX");
    msg.attributes.assign("OMHCGDGMREWOGCAPTIOKZAWKMFCY");

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
    msg.setTimeStamp(0.568514115776);
    msg.setSource(38603U);
    msg.setSourceEntity(195U);
    msg.setDestination(790U);
    msg.setDestinationEntity(90U);
    msg.timeline.assign("ZOVMOOGOFAWCGPXFMMVPVUEVCKSBNJWIZDANULJEZYKCAJRLSAUBFRVEXGXEJBHJXBAJLHTBXOXVIQIYJMGSTXQLASROQLQLBYGHWPVCRPNKFWYUQODASWZFDDEFJXSXEYYWOQBYUDLZZCOEHTEKDERZDFCAGN");
    msg.predicate.assign("ISIZWTDPPPMWZGHQNEIKFABWMRYJSOFQZCAOTXWUXIYSPZRFDNAJJBMXCHKPONELNNCIVQLLJYABFDXJLMMYFTHWPYSUDRXWESGVQKKZVDEYNTHSWBOYOLATVLFRQKJZCAFKBICRGAWQASXEHUQZKVGPHWBXLDJBSUNPDLECQGRMNEHGZAMGQYDUSDUGDHYCHIXYMTTTPVGKTOROZCMRUNJUMWIRCAPVSLCEEXRGQBKBOTKZOHI");
    msg.attributes.assign("WWZDJHDBDZXJCXZWWCVTFFLGLBSTVCEKXKRPMDFAJKIWDKCNZEPNHYQFTZSQNMMGTUNOSLYDKJSVPZIHZPYGSZOFKBRNRRQMMDUHUNGGWQKUUVCOBYKWEAHSCANTLLVCKSSNAVUIBBJMIQLRHEMVHFXOTVDQXKLXXOETIREQ");

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
    msg.setTimeStamp(0.578039213262);
    msg.setSource(36664U);
    msg.setSourceEntity(129U);
    msg.setDestination(7865U);
    msg.setDestinationEntity(48U);
    msg.command = 36U;
    msg.goal_id.assign("CFHDIKBHCRMANVDXIJUHOXFDVIGWCPZQJBYGXQYCTQYJQYUNOBSAIKUAPXHHYOSGBZRZQWCAHPDEKHUOXEBWNBOGGEQYAJMVDUXIZMKKAVWUFNUPJMHENTTOPMVDIVWCZSGXTSDWRLCSLSIEGZBSMNTYZQJRQLCSZATFPFGNLLDEFCIUPRRFHHWGSDCWLVPAJVNRYNRLPRYKOTBEUMMOLUXEXELSJE");
    msg.goal_xml.assign("FPXPBPBHPAZRGOPRXWZACCVTVKQZGHKQDWDDGMRFMXDBXVJEMMEABVOULFLSTHOGFNBDNLQSAKCSIZNVHJDMDPPEEBASQLEOXUGCSZUKCCYMXJYTROOIJRMHNLZVGZZIBELBCUJCWKYTRMICOWSJAWKMXIQVATVEBHXIQSNPTLHJQYOEMRKNYIKUREFOHNGULLAUIOQCERYHKNPFDSLZFTNURKW");

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
    msg.setTimeStamp(0.227665018475);
    msg.setSource(7132U);
    msg.setSourceEntity(98U);
    msg.setDestination(17866U);
    msg.setDestinationEntity(211U);
    msg.command = 25U;
    msg.goal_id.assign("KITGFPUECKQMSXQODHAHSAWKGECFNBACXHNRUZZVFLKWUZJFYEIDIXQYMQMKVYHKROCVRZNAMBWRQPWKALPTZZUKGKEJJYYHHPJSVLXUCMOZNLCRXCNYBLIMHXNIODXODGOQWUJGNWEHEJPVQAETCMOPFWCBWOYGRLBXVHQYBPLTSUPCSAIWBFRJQSZFKOEJTIQFBAWZXGDHYVIGJMOGFYSGFBULSRVAMTTDXTISN");
    msg.goal_xml.assign("WQSBUDQIHTFJIMRDWABOIWPSPNSKKTYDKPKVXTHAGJZNFQRPHEZIWDZXKOWCQFZKNFCVLLALFXNSCLNIYENJUQDJMGXYDTQBOABSXGRJLOFFTULRZZWHEPGIXG");

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
    msg.setTimeStamp(0.571170603714);
    msg.setSource(31704U);
    msg.setSourceEntity(147U);
    msg.setDestination(58133U);
    msg.setDestinationEntity(4U);
    msg.command = 36U;
    msg.goal_id.assign("KZNSSSRXRGKWRLREUWZMWQCHJVJGPMFBRYWGQGTYDDLOBLVVUNWEEPUCQTJFCVAKABGOKXJVBAMJOTRFHOOTSIWMQXQLPYJIMFXMDUPKGYBMHLWDUCXUYTPNFDP");
    msg.goal_xml.assign("BIRPEFSOQVVTDZWKCNSMEXTWGJAOIPLQILTSTKHTRXAHIPVPQNMXUMFEOGKBHLOOEAKDBRDYNGMMWNVFFMJMECZAGYLCUAJIJQHNIWKHQCDXELUVBSVLPNFJDVCZSKIAIUDMFXUHZFHOLRTYPYZXAG");

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
    msg.setTimeStamp(0.188545706136);
    msg.setSource(63621U);
    msg.setSourceEntity(58U);
    msg.setDestination(33818U);
    msg.setDestinationEntity(141U);
    msg.op = 13U;
    msg.goal_id.assign("IAEAIHOBXCJZFGVVZCRRVOURQTSJSJCPZBAKZLGELQBVKGFRSKXQZMDEFLTYCFGDRLJUYWKDROTIFDJGHIOJHBILWVEVEQLAMDHTJKXLWEHDRUDBIUSWZPOMSYJTAZUNNGTOXZPISPFHCHXTPWGUUKNVBYYEEXNZPCGZMMKTLVOPXWPNSBUFHDYRGDFRQYWFOQAKNMCANP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DZKZOLNOAQIEGJBFAKWQLNLUDTQRVRPKLHTCNYOOVJSYCOWHGBIWUESGLNAKUZXH");
    tmp_msg_0.predicate.assign("ILKNUJKQJRGHCVEXHVXLQGJTNPIRQDYMSF");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BFKLRHLUSEFAGTNWSCWTGEZBOIVENRCOOKDOQJSWKDVFTUBVFZMWQIUMFMDDXXWGUNIZDIUCNEQCWYHQCFWZDPFRWZAQLRRQCXUHPVXJWCVZRXKATBVVDZJFLOGIJPRBKYNEHAYZSGNEUKDZYXJBNLMTSISHIDBJNAXMFZOGIPRQLHYLHABUALNTPHCVGOJGXSEOMPQHJWYBSUTLAPYLXSQIVRYJAMOEKHPVT");
    tmp_tmp_msg_0_0.attr_type = 148U;
    tmp_tmp_msg_0_0.min.assign("KAHFXICMRBFQBULSFNVKWXCFZXUEOBFFLIWNGUNTAUVVDSKLMEZADHNHLDYOLIWRFWBTKYSZBLWUGZTXGCZMOWTIGGXIVVIBPTEHJZJCVVPYREGYRQCREXMIDCSYQOVDLKBZDYAUTXIWRAIMKDKGIV");
    tmp_tmp_msg_0_0.max.assign("NRGPSGAMXIRWNWRXBQ");
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
    msg.setTimeStamp(0.316202016433);
    msg.setSource(56814U);
    msg.setSourceEntity(23U);
    msg.setDestination(57953U);
    msg.setDestinationEntity(194U);
    msg.op = 23U;
    msg.goal_id.assign("GEISJFBGELQQZCRSUQAAFAJBGNWOZDBTOSCPBPSKKGHPALXPOWDN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FVKDQGTYVZAPUSZKPRNMLCIZXYXPZPPUBIBRCRGJJOFMTQEJQSEXAJYXCTZSFQOBRHABRZDYMIOHWJZLOCWGRJBGMBJMFAYLQAUAVKXTIZTHGLOBSAGEUCQEDPMGNEFRNCSOLDKUHFWRBSHNFUKPGJOGNKQFDTGVXCZLXITAUOVJXKLNHDXHVPBBMTNMEAQCWWILYEEKLSICVVK");
    tmp_msg_0.predicate.assign("ZTWJDKWRGYBYQVCSKLXBVEQKMURASZWQZFIGMKUEREADIWNILGLNPCOIPLRILZRDVQXSWFNLSNSFKAQRQEHZNBGAFCZVGDOKZJQDHCEEZGJXTWUHPRMPKIHJJBDOHNYJJOOUTFAMKBEWHARHMFCUVVXBUJNOPUFMAKLXFPOTVJBPGTQVITMSMDX");
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
    msg.setTimeStamp(0.551826261498);
    msg.setSource(23080U);
    msg.setSourceEntity(103U);
    msg.setDestination(43069U);
    msg.setDestinationEntity(119U);
    msg.op = 132U;
    msg.goal_id.assign("WWXKOOJUFSINRLLCGUQBTSVZWYPMXDHARKYJVKBKZCCQXQVKSVVOGPDGEEDEBMZNRMGLGDCABFJTYHFYYPQGSWJNIGAKMQCVTPXQDZFGADYWQQHLMKPUFLLQCKZLSAYINXIPRIFIEHKVAHFHUZATZHBNGBNJVYPQTTMJIGHNFSYLOBAROWIWJDURXDMRUWUCJOSNOBZKJRCCESUXBUYMTMELERVRXAEPXOBFHOHFZITOMUWDTEICVLDPZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KGEAGOZPWWXORQUMCILEGIQUCNWMNZJOAGABVWNKCZQCBALPBJYADTTTZHNONPFDXSZRCQWBFOFOSRHXKYRYACSFLLUWWSIXHJSSIBTPSVSZEMVFRLLDXHWWQGPOPBNZVXTFCXGLHYOKUEEDZHLIJEDKBHBKAGHRSVYYGNYKBTMKQUQYAWODNRCRGFDEMPCJUYOFEUXKVIMZFTVHIAVJTKPXZIURDV");
    tmp_msg_0.predicate.assign("DMUYLGXCKSWNTZXEITANNSVQSFTDPYYKVZINLHNIEZGPUXXHCPOEHJGTQCPCMEWHUSDARJVEUFVDAQQBZJAOGCSG");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IWCVQJICJPRABMOLBWNNRGGFMQVKBXRKQKLTZZMJQRTIYTNZYNWJYPVDUOHLFDUCWHMRWLQBKOLVTXEZTDBXOENDFLURMNXBUODQZF");
    tmp_tmp_msg_0_0.attr_type = 156U;
    tmp_tmp_msg_0_0.min.assign("RZVDPJFFWBXUARXKCBALMAPVRLUIGGTRYYDOSRFJSOPYMXOCXMTWQYSFFMSITSQDNEGIVIUTAPJEZPZRADPQEJQURBEPKFTJGDSCDTNHKTOGVBSGQCLGZNYICRWQBODNHLHCFJFBVNVZIXEHQZKHYHAEHQIHVFWXUYMZWQVJWMMODCOBZUUIGRNVFLAYZELSWAX");
    tmp_tmp_msg_0_0.max.assign("ADRQTQLNSMLEOUQTMCQTATCYTOKLFAVRCVXORQXCPQPGQANCXVPMSMKOSVHZRFBVZRFLFEMPZNUEWQQDBBDBUPZHTRIPENXINBJHCFWYMKRWKGVAYWTGODWGAOKZXIQWUZFGJZRYRXDFNYLHSJLKURIWAHESUJXOMGHUNCSAYXCCSSTFBCLODJFIJJNBVIPKWMJPKHMKUPDZUDH");
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
    msg.setTimeStamp(0.512255189612);
    msg.setSource(57572U);
    msg.setSourceEntity(25U);
    msg.setDestination(17807U);
    msg.setDestinationEntity(102U);
    msg.name.assign("YQMMPUCOLSNHVQUKELTYGTQQUMIGMNMNAELVUGMPIMAMFHEPGCHZNUWOEBTXWHJDIGJIJHFEMYAABFZKFVFVLYDOXCSTFGRAHXJQKGGNAAZQDQSPBIBZSILPHRPOLTVWXXRDKYEICWPSXZRCDYTNEEVLFHUVNUZQJKVBBBSDWAZGWIOUWWWPKYQCEBZISZUOXUNPADWYD");
    msg.attr_type = 197U;
    msg.min.assign("GYWFNRBESOVSWWXFDBOIZHCRDIUZUUXPEAPUMTVZZCYJHVBTPMNJRSWWGR");
    msg.max.assign("ZJTPMXVCCNJLIPOHXFKWODURKBLFGWKLSZHJCCHZNXRSZVNAYDDGKFQOWJBAHPHBYEBJWAXQUOHRKWCCEOZGAXMHZTZJKJFFGSQTSXNINMPMVUPSERRQVGIQATKSHWRMONNKPGDGYMIUITRBKFNVVACUJDVUYEQLORLQTPBFPOYMTYEIFPXEQXNDKMLIBLDY");

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
    msg.setTimeStamp(0.219997783214);
    msg.setSource(18966U);
    msg.setSourceEntity(1U);
    msg.setDestination(19873U);
    msg.setDestinationEntity(110U);
    msg.name.assign("BKRAUTQAQHIXYRPUITDIHLAJXBGYMWZJJNFUODS");
    msg.attr_type = 35U;
    msg.min.assign("KQHDXGAZUDFLKBZYRBNTJZBIPMSSRYHMKIHMABICOBNDLVFETWDXOCQATVYHKDUXOMLZJLWZHHNOYGWHAKMOEZEMCWQALAXPXFPSGVZXGETCEFPSNQGOERJLTRIVQWDVONVWMBBRHCVKBICJVFZBJWTRGWPZRHNWUSFQYRJELGJNTWSUGQPAPJULUIYRZCXKACEIPEJLTXFRQVMTCXMXUDNCIDG");
    msg.max.assign("HQNEHWVANXOPJNKGMTLDWURDQCRTQJWOOMZYPVVEWYEETBPSJCDDXGRHTONNBUALLSAU");

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
    msg.setTimeStamp(0.981846442296);
    msg.setSource(48540U);
    msg.setSourceEntity(49U);
    msg.setDestination(44571U);
    msg.setDestinationEntity(4U);
    msg.name.assign("TBTNVMXWHZOWXESNGGEGHIVPUWQPUJKERSIWRYDFKEAGRSFOOQQNCALCMJTUPSMMFUUVLYMPPBCNHRFMCCJAADYJNLDKDYDBMIIMRPKUWBLLVULNITWEVQXGFTJCGZZQBOPEHDKMSYNHDDCQJEGBGILCVFQXGWXEZRRFSVKAOYFTWHXYJRXZUTZABPJKGLVWBCQAFPFIJXXTLIDBRQZZIIOEHKYSQSOYAAZUOVKDXAYB");
    msg.attr_type = 2U;
    msg.min.assign("ZMGHGPRTRUDUDUVMXITAAHFFEUBAQUEWCQJISBISCQSHMEUVDOJOMAKNYFNQQNFRLOQYNDCPXQZKJRUVNTEBWZOFZVEYLWFSXUFBRZXBOXLOTSLIZFRCIRZAIOVYPXLDYXHANEFXCUZJTLWKVMKEMWENOPSVPENWDLPTCAVSKPTJBJSTGCWCWYHJJKWCGIMIHYVBLRDWKRTCYEDHBLGZXGIPNDMQHMAKHYOGRGLBXAIDKSGTV");
    msg.max.assign("FBUNRPJEJLADNYKUVLTMHHHMEFVXLYDGXGZRRBJCQOAXUFCOUEFBXSTUIFFBRWSTDSBYZOWAXHJYJKDIDAEBJXPNZGOCJVQXEWYXJYEOLCUCRGSQTRXHHSGRVKJMPQBTVWZAFDFCELSUWMIMKAQWMQMNRLWQZKPOLYSZDCNKBYKXEQILQRIGOCNNNSZDIZSFEVVVAKLIAHTWTMOISY");

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
    msg.setTimeStamp(0.108699642995);
    msg.setSource(64771U);
    msg.setSourceEntity(122U);
    msg.setDestination(11116U);
    msg.setDestinationEntity(125U);
    msg.timeline.assign("GGJTUVZHWKDDNFUCRBSZAIDITNMOZLBOMWTGWAIPRYSEBOXRNCHFLTGEDHBEPFCGCSYYTCNOLLCJRYQNDOMELDGFPNFKYDZKZPOURKRWYXNAVHSVUPAJHSWRXUCWBPVPAXE");
    msg.predicate.assign("YDZEXMTXWOQWJTDDOCFBJOWOECWVHWJAZOEZLWKCBKEVYSAYGYPTFDDMQREPBFJBBCCFVXVKPGPHDZXKJXIEIMSEJSGUNLMLLYHQBNODCGORIMKWWRPNQYMUYDKJSQSCPTLSCZLLNQZMKNXBHNPRTVKVZO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("CWKQTZRJUFWJBEMIEKOFMXUFKAFOSTWCPVDGGEOCJAQBLJSUGJKRNAHCMABYPUXDHLBDABUNTTPJVYDPKXSCZIVESLUL");
    tmp_msg_0.attr_type = 248U;
    tmp_msg_0.min.assign("ZSZKMJVHLBIQITCPCJVZIRNPDJAOSDGFLOXINJXLCMXTARUUPPBGSIOEEYQIVZHRVEXMJEHCZDQCYKFJGZDQMFKDFXOGTCGFOIHEJQWSXYAVLPANESJRABECPQVWCZOCYSHVYJZBVQNDTGKMYRYPKXHVDBPKUAMNREWPVJAOOLHQKWDGEGBYDHWIGAGBQLMTUWYWTPWLTAQFDZSOMNEBFXILSKHBWNFRBRFNXRFTRYSALKZMXKLHMUUUWIUNU");
    tmp_msg_0.max.assign("JDODLJUNQZUWKIKTWXQBT");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.0410495501732);
    msg.setSource(42610U);
    msg.setSourceEntity(128U);
    msg.setDestination(11488U);
    msg.setDestinationEntity(130U);
    msg.timeline.assign("FVLPVHAJQOJTOOSQPBXPGCQRCRWZTPNWPRKODRMGBCDXECUKGAYOWMGTXQUDYKLNQETNKCJUUHAPHGQQMEBSBCBNXMHDVDMXZNKSFRSTZOFWYAFBZSSKICSUBESUYBRDIVLJJGRDCPQZLAPWEDOHOKWVTVNUBQYYZFCAFWFKIUAEBZHGLKMFWFUMLVIXVNSTRQRWFINVCLTMSELAHTGHLJYTEYRJJMKXYANJ");
    msg.predicate.assign("TJNXXVTSUWXCNMFENUKZBIIOHZKR");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("DSWWFYKECYP");
    tmp_msg_0.attr_type = 192U;
    tmp_msg_0.min.assign("CFAXFOLAJSNEUDGPIBJEDPRCZYUXYDXEVFOBTRW");
    tmp_msg_0.max.assign("ELZBWQSPJXVUGL");
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
    msg.setTimeStamp(0.608316566963);
    msg.setSource(13907U);
    msg.setSourceEntity(113U);
    msg.setDestination(58455U);
    msg.setDestinationEntity(130U);
    msg.timeline.assign("LZLRDHTYMYPTRDQVZMZRACCJEHINNAOXJQENCPPCAPIIOBDDJHTYDFLKYNGUEKUMLVXXSMTSFZRZGEHSVMKAYYNWMGYFDESCNYBUQPWINHJZKWMZCGVMQRYIJEKTEXTCLQWZGFSANFPWFLNKXAHBUFCXHWUXGHJSQKUCWUPAXOALJHPLOPWOBDQXRVOQZY");
    msg.predicate.assign("MUATBZMCPKNYHVXAGDTXHNEODJCSKTKDOKFYQKVNVLMEFUWFZZVDLXMKKOQCIGQXBRTYCYTNIWVJPJODVWMVQGFTAAVXYZJSDUXKIGDBQAJQXROMYWPJBFXNUMYFGRELOZISQWNHPFWQJPWOXTZRLGPQGWACBLIELRCEASABIXHPCCZROEZNEUFNV");

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
    msg.setTimeStamp(0.962364922238);
    msg.setSource(51116U);
    msg.setSourceEntity(69U);
    msg.setDestination(10533U);
    msg.setDestinationEntity(160U);
    msg.reactor.assign("BKXGWHHGGZCXJMFLYUMBIIMSTSAMZTTOCNHOWNIROTDSVVOFFWNTJUHYKXDJDQTOZRLHAXRNSQAPAAIYISVHAUQTFPMKNUDCFCKNLUMKQMOGZVBVVHFEPSDWPUEXEKFZTTEQOYIFHZGAJJPHLZVIKJRQUIIBUZGWGKVSRELSPYCMGCWJJBURERFFDCWEEPUBDYELAL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QEPNHCHEUFHGCKB");
    tmp_msg_0.predicate.assign("YBQFERBBKZMKTNQQDVYVSIMHYDJJNSKPPF");
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
    msg.setTimeStamp(0.418973656588);
    msg.setSource(32667U);
    msg.setSourceEntity(180U);
    msg.setDestination(32801U);
    msg.setDestinationEntity(89U);
    msg.reactor.assign("MSWODDRPTPSKMPTMMXGQHFHWOTEIAGGIKPOUBQZDGGFPLTRXBAZHESNHQBKYANLDCWTJGFXWGIAJUBEVYJOMJHNEQCCIHNUUANQFLZNDNWDKELOFZHSMXQJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MHHCGZDRDOFWJNRUPSTDEEGMJTSFBYQAQQKGIELADDXPYOGWDTEKDCJVTSBWFGIHZARKLAXJMPSYJPGPLCPJRCVXIPVOOWNIVMPZYKBRDTHJUSOFWSWGNLYAUZLHNFHOOBPRTYELWVKLZOFMFCUIAMOQTYHKXCQAMDRDEUENKXEMEHSWBVHUNIKGUBGCSBVKPIVABFBRGFHMCANUQSITVQZTYVWZLXKCXNXOTYWMYXZ");
    tmp_msg_0.predicate.assign("MKUZYWATDZIXZGRRJOFISPQNYAVMFFVPSQGTCRDF");
    msg.tokens.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.382865165975);
    msg.setSource(34442U);
    msg.setSourceEntity(147U);
    msg.setDestination(32186U);
    msg.setDestinationEntity(60U);
    msg.reactor.assign("XCQFDGBHKRJYVLWXOGDVREDIPZIR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JYYRPDEZOLSPHOWIGWSWFPRFDIYHHKATNXXEXZUZEUMKIAOQDWIUAQJSTMOLHJMQYFALARGJDGIUNNFSSPUKDJPFTVQBLTUXRTCIZSXOESVCHPDUCIQKCZMCDRSWVAHN");
    tmp_msg_0.predicate.assign("KNHQAEKLRVIURBBUK");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HSIANYHLOVCQGMCQUIRRWTBQWYNQHHIIUKJKCEIPQPFITKUKFPZAJLAONCBGDSBFPFIDQJNUHRIYOHATFAFLNZFFKLQWVBBPZTTDCPWEDTSDSJAEVHHKIJUDMXLBCSOBMRLXFSULZYRYDMZHPALOWSJVJMPVPKGSOOMYATGWGFKGCYXEWEOMTAPRVXJJSCRXXUQGVUKCZIVBN");
    tmp_tmp_msg_0_0.attr_type = 50U;
    tmp_tmp_msg_0_0.min.assign("BSXARWNPWPUBYJHCIUNTOERIEXTVTIJXHLFDNDTACPLGJBPLANKILQEXLKYUMSCRBSZOVDDSNTFROYGZPYGFSMMWUJFMFSEMISHHBLTYDFZKPUHXGNOSHGSB");
    tmp_tmp_msg_0_0.max.assign("MLOKKTPJPQJBWVTZEEPHHICIKOBANJRAXNHHOIOMALGRZNFBASBQLBQWIOOHGICLYZCYKSRWRWANQLRVTXKOPEFYHWKPNUSNNVDWMJPTJSLTMCYJWOKXFFSQGCTXQTFYXUNEBQTTVBLVDCRMUMYJX");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.482455573993);
    msg.setSource(7375U);
    msg.setSourceEntity(222U);
    msg.setDestination(42480U);
    msg.setDestinationEntity(217U);
    msg.topic.assign("HCVMBRBYBPQYZJDGSIRKIPDSCVTE");
    msg.data.assign("ARUHDMYCHKSKEPYQDQXRAEFOOLILVYOKHBLDKVVEGGDASQJZETWSYEUSZLRTSZIRDGNZWRJRVVTIEUUCCHWAJMTGMLSAURPXVHPNUHBMTYDIISOCVZFNOIXSNDFBBJTYNAFGVPNISLFMRCCIJMLJBTWCQCPHKBKLYAMXYM");

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
    msg.setTimeStamp(0.864502230943);
    msg.setSource(7297U);
    msg.setSourceEntity(245U);
    msg.setDestination(9913U);
    msg.setDestinationEntity(179U);
    msg.topic.assign("HNRKUMTZHLXMHCNUWQLFPVSUMRXYLKYKPIFEXKYBSWIEJYGGTDNROOZNQBCWQJOBDWFQGCJOPHNTQAODUPCIAIDXATWVSPKLPZMCSGJSVUETKDPRNLBLEYTQOJCFSEFAEEXYQVQTDPXKUBSUNOHJMVRXX");
    msg.data.assign("MWIVNDQDHKYHFYWAKOGTBJBHCBBTBOGGVLNVHPEDCUMAMOYQTYASZSPVAZFXNNSFW");

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
    msg.setTimeStamp(0.0856538651275);
    msg.setSource(48248U);
    msg.setSourceEntity(168U);
    msg.setDestination(31080U);
    msg.setDestinationEntity(33U);
    msg.topic.assign("SYWNPLAAADQTCZWRZHXYRNXCGJELFDWYKJIXSPGCHQOVZTXBNMFTGJUHTGWSXQYJOKDDQPSCPSCZZKDEXZVINAJWFMURDEEA");
    msg.data.assign("KVKJNWFMRGLWCOMUEARXJWOGVHVUDMQQMQMFCCUOEYDDZIAGPBKTQYYGSMWEWJHCSGCVJAGDR");

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
    msg.setTimeStamp(0.0724262339897);
    msg.setSource(47956U);
    msg.setSourceEntity(193U);
    msg.setDestination(33808U);
    msg.setDestinationEntity(44U);
    msg.frameid = 54U;
    const char tmp_msg_0[] = {-8, -43, 100, -36, 35, -93, -40, -117, -9, 16, -99, 71, -16, -97, 28, 121, -56, -84, 11, 60, 5, 12, 55, 116, 18, -47, 41, 58, -58, -78, 30, -8, 44, -115, -1, 8, -66, -13, -59, 85, -76, -51, -53, -102, 69, -65, -82, -48, -32, -52, 33, 108, -111, 2, 108, -57, 8, 47, 125, -103, -106, 10, 22, 98, 41, -126, 109, -11, -71, 61, -120, -52, -4, -47, 74, -91, -68, -83, 38, -92, 107, 60, 90, -106, 105, 11, 59, 23, -123, 9, 69, -103, 38, -105, -3, -44, -119, -90, -80, 42, 91, 79, -22, -68, 72, -4, 67, 71, -56, -78, -94, 11, -36, 79, -111, -82, 55, -30, 14, 103, -90, 50, -74, -109, -117, 76, -86, 36, -57, 7, -105, -85, -99, -114, -72, -119, -14, -7, -85, 73, -16, -6, 81, 56, -27, 65, 95};
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
    msg.setTimeStamp(0.816027044932);
    msg.setSource(37418U);
    msg.setSourceEntity(143U);
    msg.setDestination(19446U);
    msg.setDestinationEntity(248U);
    msg.frameid = 158U;
    const char tmp_msg_0[] = {91, 74, -128, 61, 101, -106, 3, -68, 102, -16, 38, 40, -125, -21, 123, 76, 118};
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
    msg.setTimeStamp(0.219027170282);
    msg.setSource(8475U);
    msg.setSourceEntity(151U);
    msg.setDestination(4459U);
    msg.setDestinationEntity(231U);
    msg.frameid = 145U;
    const char tmp_msg_0[] = {0, -100, 67, 32, -36, -84, 94, 27, 45, -19, 48, 97, 61, 2, -22, -1, 56, 98, 118, -70, -5, 1, 111, 24, 88, 6, 55, 45, 21, 84, 24, 100, 82, -114, -27, -98, -73, 121, -42, -77, 92, 85, -27, -108, 57, -103, 74, 53, -109, -36, 96, 42, 34, 48, -2, -50, -30, -128, 63, 39, -100, 34, 95, 56, -53, 68, 79, -80, -77, 48, -124, -108, -105, 84, -98, 86, 114, 75, 1, 7, 116, 111, -105, -63, 98, -126, 64, 92, 65, -29, 14, 82, 43, -99, 40, 51, -5, -11, -118, -28, -37, -25, -111, -31, -13, -120, 38, 84, 52, 94, 1, 113, -25, 61, 88, -18, 17, 29, 74, 13, -6, 60, -58, -1, -109, 27, -43, -10, -48, -66, -88, 56, -103, 123, -31, -82, 30, -18, -31, 99};
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
    msg.setTimeStamp(0.529131275433);
    msg.setSource(42630U);
    msg.setSourceEntity(47U);
    msg.setDestination(4957U);
    msg.setDestinationEntity(74U);
    msg.fps = 198U;
    msg.quality = 193U;
    msg.reps = 61U;
    msg.tsize = 97U;

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
    msg.setTimeStamp(0.669115849555);
    msg.setSource(45009U);
    msg.setSourceEntity(217U);
    msg.setDestination(26300U);
    msg.setDestinationEntity(238U);
    msg.fps = 203U;
    msg.quality = 131U;
    msg.reps = 143U;
    msg.tsize = 152U;

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
    msg.setTimeStamp(0.072738933362);
    msg.setSource(27520U);
    msg.setSourceEntity(115U);
    msg.setDestination(63872U);
    msg.setDestinationEntity(100U);
    msg.fps = 173U;
    msg.quality = 123U;
    msg.reps = 81U;
    msg.tsize = 128U;

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
    msg.setTimeStamp(0.206142616691);
    msg.setSource(19410U);
    msg.setSourceEntity(238U);
    msg.setDestination(24603U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.70883807312;
    msg.lon = 0.254115712422;
    msg.depth = 238U;
    msg.speed = 0.355468137824;
    msg.psi = 0.576498889919;

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
    msg.setTimeStamp(0.167281230762);
    msg.setSource(32452U);
    msg.setSourceEntity(118U);
    msg.setDestination(20540U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.319391616865;
    msg.lon = 0.292507808375;
    msg.depth = 90U;
    msg.speed = 0.662444849969;
    msg.psi = 0.0481248466613;

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
    msg.setTimeStamp(0.95585820075);
    msg.setSource(44700U);
    msg.setSourceEntity(207U);
    msg.setDestination(1805U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.961334187212;
    msg.lon = 0.38229867816;
    msg.depth = 250U;
    msg.speed = 0.0942497194048;
    msg.psi = 0.0652604094084;

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
    msg.setTimeStamp(0.17807236589);
    msg.setSource(18436U);
    msg.setSourceEntity(42U);
    msg.setDestination(55259U);
    msg.setDestinationEntity(176U);
    msg.label.assign("IALHUFRHUHRZIVFOLVQSWCPQDRNCFLJQZNXHXNTLNHJUIIIITACJGFYQVSCXPGUGACDAESITZYKYSMOWNQRTPJQGYGKEHDNKELUSKKWPPQOOKNRGLKNUAABBMNPFEOHDPWHYMXMZPBLRGDLTHACXQMYQCYUCKMMNJDBZGJZIATVPOFRBYSFDJECBWOGSBTIVSJJVFXZMXLWZAPVAHEUMEBSVFBDEEOUFKO");
    msg.lat = 0.5280076345;
    msg.lon = 0.78877778916;
    msg.z = 0.57122737546;
    msg.z_units = 137U;
    msg.cog = 0.712521877614;
    msg.sog = 0.77071401957;

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
    msg.setTimeStamp(0.785737816787);
    msg.setSource(15298U);
    msg.setSourceEntity(34U);
    msg.setDestination(53507U);
    msg.setDestinationEntity(202U);
    msg.label.assign("OSAWTBKPFBKCUREJNFBAAESDFTRIIWWBGXVAIBNLFDPYFHMVYTKTWZFMHNYRDBIBZZUJTRDHVYWSMSGHGVQCTLPEGZAJLGPGEZKEHQJXOXLISFQB");
    msg.lat = 0.296534904144;
    msg.lon = 0.114825187494;
    msg.z = 0.162756561084;
    msg.z_units = 161U;
    msg.cog = 0.419027877854;
    msg.sog = 0.304410630969;

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
    msg.setTimeStamp(0.310441129318);
    msg.setSource(15204U);
    msg.setSourceEntity(252U);
    msg.setDestination(38712U);
    msg.setDestinationEntity(74U);
    msg.label.assign("RGUVXKAKUCMXDVOEOEQCKAZVWVAJTIKOJUNHGVINHXECWCLQNTJWQXWCKHHRFILRZUENSTJDIRVMHFFINTEUBURDCQWGZSGDUSPUDPIRLBWKSZPYDRAPJGHLYSQFFJLYQENBXMXTLBXDVHWTDYEHOTAXXMPABCZPFZCGJBQRIEPNMLYL");
    msg.lat = 0.530287298086;
    msg.lon = 0.259429854569;
    msg.z = 0.980539567355;
    msg.z_units = 169U;
    msg.cog = 0.467270189576;
    msg.sog = 0.591904412232;

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
    msg.setTimeStamp(0.285029362685);
    msg.setSource(11095U);
    msg.setSourceEntity(102U);
    msg.setDestination(24124U);
    msg.setDestinationEntity(67U);
    msg.name.assign("YPLHIVCBQIDVWQVXBIUOWZJSOEHUFZZRRHCPIYUHMYYTVTFCOWTMKGMEBGXFPMSVARZBIYSKINOIFNJQNPLTNYPGSOGJXDHVLWXRYIMJPDRGCQDXLSOLXUEZPTOMXQLCGOAADHYDZEGWJXEEZKYQKANULKFZAQFSBYCRHWNUMOKFIACPAPTWSBBUDWHNUWNKRALIBUGQUKBDSMSDRXATTVMQ");
    msg.value.assign("XPXGZDHJOFGBADBSCSSAFQINRXWXPJRAYSVWNUTGQUOMODMNJCQFZVZRNLBAQOMWWPGLUGDFRHVBMJYRVTTIPKAGOYQTKNXIKULXKTKCWVVTGOSIJLZWNZANHESXYHLJOFDNZEPRLCYIZCPBCMWTU");

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
    msg.setTimeStamp(0.864530234957);
    msg.setSource(61588U);
    msg.setSourceEntity(120U);
    msg.setDestination(52843U);
    msg.setDestinationEntity(207U);
    msg.name.assign("BLPDLKYNRFGOYLUMHYPSQYMCKCQAZOTJNAMTNSJDJICFXSEXBRACSQDQWMLHSJHKZCAVUENSEYLVZTWTMJRZKVRGBBSMIGLYIERSIAOGJXDLNGSETBBHVFOHUIHCWXEAKDIUZCPDDOGVZQTWWUFCEWGONUFYNYVTUKKHOKQEPPWFRRMZFZPEURDEDOOHDMOPQXJSYXXIUGGMMNVLAFLQTXXCNJRATKAJIRHPWZYWFPCXFJLVVBBT");
    msg.value.assign("EKCZODBSYLHXUJEPQJYNMCKGDUFMB");

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
    msg.setTimeStamp(0.748844641546);
    msg.setSource(15444U);
    msg.setSourceEntity(79U);
    msg.setDestination(45046U);
    msg.setDestinationEntity(32U);
    msg.name.assign("GVJAZWXXMIAWQSZFTVNGHZUIVZPGHBCBPZUPQOHSDSBNZQSYRRYTYDWHFQEMLGOQQFLRECXRXWZZUDROHWEKOCAZXLTFDWMHVRBMWKLKYCGCAKKPYJIULANTGLMIYAHPBKMOEKHSFNCDQBDRJCRSUKWATXCMOYDIBIERXAPIHJEFFAZNPBTXKVCSWYEJJUTOFVLTIWJIOREYONHVTLVCUBMNLDEGJFJXLNGIJGVSQUK");
    msg.value.assign("WJCSZASILARWLMVTLVJCQXIFZCFOMOMPVRZXWIZHPUFXFVRUFGFIHCPWKVZQMBGILGWDVKPJSSUQSIVUPAENKHBRLGRCJJGUUFGJZHXYEC");

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
    msg.setTimeStamp(0.588995931553);
    msg.setSource(54368U);
    msg.setSourceEntity(74U);
    msg.setDestination(28547U);
    msg.setDestinationEntity(64U);
    msg.name.assign("HHYOLXXYANQYHWIOTJYKUPRTZDNDNMQFAASAKNHPJRVHPGLBXVSRBCLESMKZCQJJUAYMGLAXKPFTCTRDHTVDKQEEJSULNTZQLBEIKTBCZCVXPEJOPYOFTUPGJFDWMZIVZRWBJMAOGLHSWBPWVBYOUUDFNTMPCSXYZYIVWMHXGFDWKMWIIMRFYHFKQGSKXCZIXAINILENWEOQJTOSRRFQMBBLGRCZEVPADUUERWGAZGXVQSJIVFEQH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YUCZKLWGOOEUXNABNQEEGJCLKEZDVKWUKCISUXOQARCOBIFYUIXWLWSZVDETLBPVPJH");
    tmp_msg_0.value.assign("NMOKAADMRDKJLWSRMNYBJIQDTEZJLUGAFQWPHNBOEVQDHFPJJUQTBLCJOXHKJUSYRNNIHPMQQVPUDCEFDBCBOTORSMHELLPPSWTEUFMAWGHLAZEWTXFTSCLX");
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
    msg.setTimeStamp(0.0830715591351);
    msg.setSource(1522U);
    msg.setSourceEntity(202U);
    msg.setDestination(46658U);
    msg.setDestinationEntity(121U);
    msg.name.assign("JPHUFZQWFNRKFZEYOCGCOVCNMAPGDJJQCHNHUMPEVCIDUGLLAIAGLBTMURVBKXEMSKLFFKNV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MCUZRFHBANDUQNFZWFIOZRPEMSUDYQYQTVNUTIKJELXNGSCTLEURUHBWUKPLNHPOYMAMQGCMWOSJLHFKWPFVNMHYCKBXMZCDIRIXLKVIBEPAUFYYWGQFJCLLQOYBGAWWITVJ");
    tmp_msg_0.value.assign("SPOIYFGFVFXHPUVDNDQRTXLCLTMZSCNVXPTJ");
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
    msg.setTimeStamp(0.65705201162);
    msg.setSource(55927U);
    msg.setSourceEntity(67U);
    msg.setDestination(50622U);
    msg.setDestinationEntity(29U);
    msg.name.assign("IGNRVLEBUGRBWKDPLQUZGICSWOKVUMWPLPZLEJXCZTAXWOLATUGVFZTOBRIKJSVSCJMCZHYYPLILQIHHWQFTQMDVQAVPYHDCWMKKNHBRSJCMDFXGRCDEOCISMHRPFZZENBKRUOQOGYEKJDMXEUBJUPMNVUFGQWOAEWITSHXAAVCXSISBTDXQOHYVZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MNHXWMECPFSWEFDXQLHOLNGFFFQOMSWPRJQCTVSZGINEAUIUTLODQVPIMNVWTGVQXKNEXTTFZRBAFVXHOBLGSSUQDVEEGZDWILCBYKFEUMABIHVPWPGDPPNZAYXJYWFOSCGBKVCNCPGM");
    tmp_msg_0.value.assign("TAEEMFDJZJBUPLVSADGZIRUPSGLVQKXEQJGQJHNVOQLFKGLWXGTUWDCSSAKZTLNGXYONNUSODAFPSAFTGVHHMWXFSBUQVYAHUOXGANQFJERYIENZIWWCQZBRTHKPEYVOCFBDDBUAOWZZCUHDILCIYTFUERYCYNHAKVDEBQCCUSRLMQMRYEZVZMWIASNHDBKYPMNHXLJTIRLCRZQWMOJIFCOIJMYKBRPPWXDMPPMBBXSGKOOVIKP");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.0212744230322);
    msg.setSource(26692U);
    msg.setSourceEntity(7U);
    msg.setDestination(37079U);
    msg.setDestinationEntity(235U);
    msg.name.assign("GJCPWMUIAFUNZZNJBCZCLTNRVSNSEMJJYVXLRHQNWAAHCFWVEGMWDCOZWEGBNPFZRAIYHDQVDRSVJNXEHSQZQSOYHLVUBIKYCKQOROGLDAPBEOBAIMPWXDRJFVOBPIYEQVTKQTODAMXURFEDFRUPMUOFHNCSKYEIBLOJCXMBVTYCAACJJIDKRVZRWNSDTTKPXTPBIKFDWIGSQWZSTYXGKAKZGELWGSKHXJFQPMTZYHIOBYUELLXFHUX");
    msg.visibility.assign("TPVHGZINROFATLXAKOUFJDAZQKNAOZDTRUOKLTGNURYEYHZLENWSWIDOMDDBAVSBUYHQAKJXXGGRMAQEWCJURCPFMIFQZHLGDVFPRTBTAZQYYXHUEAXXCFOLOFCGKYOCQBSJESLPSQESFMTENXEDGVNYWJD");
    msg.scope.assign("CSYQDOHZMYMGSBILNVAAFXHHWBFFKNDVAAAYVBETRJITORNNOXZPSAVJOQEJZDNUMLWMUMXBYCVAWOKFCHHQGVDPGPEEPZRNGSRUXJCDSXHJWZYLPLBCUNQDNJXZKOGWZTEJBTVIQBDMLFMPTPKSYEBZCSICRRFHUQDEIGTOUKPYLQLGSWIEOFFUIQJHWGWUDYYOKRLODMFCXUKWVITRBTHR");

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
    msg.setTimeStamp(0.338361891496);
    msg.setSource(40983U);
    msg.setSourceEntity(68U);
    msg.setDestination(64779U);
    msg.setDestinationEntity(46U);
    msg.name.assign("SRACKMVXSIQIMAPWLHIIXBTBTMISNHZRNTTXVWJDRQJBPDULCWDBSHMFFDQOROXANZGEUJJCNANBWSWOAIVVCHPZDUUHKBZQSQJEGOHXUSGTEWXVSHVQUNGTFLCZVYQRWTKPWXOJAEGNDTYSPEOBFNFLGQDYGNDDYCCMXIKRBVFPUGJJCVFQXKUGJEXPEBIWMH");
    msg.visibility.assign("OZCQOCKELGQKBOZMOBZSPNPAUYMMUXCJIRXYPJFIIQZMVHTPDIIKHALOUNBVQBOILSKRXKWHHETTEUUYNNISSA");
    msg.scope.assign("TUOJLAXPEKOKPSYUVVYCPSBUEVPQCGHHYOFTRGDPCXBYXSJOQQNZTADTSIEZBTYXCJQVSBFWULVUWBIAJAKDNJWIKGJFKDEGWRWHUGZFFHNLVPFOUSVMTCIOUHWAWYRMLYNSGZDRICFNOMGGIKKMEDAZC");

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
    msg.setTimeStamp(0.438547565065);
    msg.setSource(29442U);
    msg.setSourceEntity(145U);
    msg.setDestination(33751U);
    msg.setDestinationEntity(14U);
    msg.name.assign("VZQSODYYFLKJCJCZUJIHILUWMBBVPWTRDXIXJTOK");
    msg.visibility.assign("OMDGVEEQTRXARWZFREHUBILQNMBNNRDDPBZUULIZUGUPBCRLHYVKYICKCQZWIMWAXRYUTZLOZADSQWDDBTJWKRJCYPREMGZKAONOYFTKKDWTCJGBXLAJOYARHHQSDTYJSDPVOTJCIDSHPVTXPIBFFQEQMBFSBKOWCEVOQLSNPEXWVSLGFHTJINMSPMWNXFKYKQH");
    msg.scope.assign("IRQAGHIUGWLBMNHTHZGQPHYRPEGOOXVEFPBTNNRVGSPRJIZRYCBWIVANOZUOQJMEFSGKEPLKIDUZEQBADUBPWKZNAVQFZNCTVTJSRARSTWLSMRQTMXGKBYLCPCXXDQDWXVFFNUOJKEUUYBVDCADLEIYIINHMQYMOL");

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
    msg.setTimeStamp(0.513928833877);
    msg.setSource(69U);
    msg.setSourceEntity(218U);
    msg.setDestination(45127U);
    msg.setDestinationEntity(0U);
    msg.name.assign("ZYHDKIIXVMWUMENBPMMOBLXAEPSJMXPNWCEUYHSNFOKFJVUCYRAZRIDXYWZSCKUUYKHRJWANDIFRGPPKZAPJORGRDKXFILZVHJQBTZXJIQUHHYDEQEDACFQXCCXLONITBKQNPAWTRYGUZMFTTTZQGUQOEMAWOIVOHKALIBMCLDUPSSGHRSHGQVDVCCGBFBNHGJEDZFSTYSSPWFEESOABQTLGCJM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WIWFBXHGKNEPVYAPHVL");
    tmp_msg_0.value.assign("RMKIAPIHJEILFTOVOMSZWOMXTLLUSIKZSEVWQYTKVGDUAKLZQBDXJWDJBXTSMGUSDQVYGXRXYLRUFJIFVUZNNWEAVXAFADLGJMWOZY");
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
    msg.setTimeStamp(0.300733459055);
    msg.setSource(10533U);
    msg.setSourceEntity(100U);
    msg.setDestination(51172U);
    msg.setDestinationEntity(223U);
    msg.name.assign("HJMGSBAKUTBCNNZMRCGPDAGCYPIHFNRTWXARZKMDDIYDEWHHBUJPDAKAOYMQRVGNXBFSPEVYNXJWYIPVXQGUNLRWLAESGEQDLFTYUTOA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WYAAIZZFQGCOYLCJISGTBEKLXKGRMEGSRDDPNEJRXVKDZWBBDXTRGYQHWMJPFPGIQVAHUIUSJDPAWDKENEHQZBIUYHCQYYWJMGEPLABSPHPFTUOAXYMKNTDZCXFAFMOJLQZUIAFCPYCZOYVORWBMSCIJREVLWLFCCQNULBUWSBIKNOTVMELKRJUXHHFYUXVRQZWXADEVWTSHCEQOIJLRXDVQLVTTJHKBTPGFIRPBMSOSZ");
    tmp_msg_0.value.assign("YGQNDSTIBSEMUZAJZKSWEILNTCZQYWICBBRNLYRMMHCYNWGAWMDVFKMOIGRQXSUPWMANJXQYPGHOEPVICCLOYBHCYMIYPAGHSCAADTDJROZJMFBNXHEJKEQWQRBWDCNAPKFLDGNRHQLHPVTFEOAASNTVGUZUVBIVUSYOJHSDXUGXGPXRCEBHFBOIDKLFSTUGJKOKDPLXRJUTQKLP");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.887272440452);
    msg.setSource(55672U);
    msg.setSourceEntity(195U);
    msg.setDestination(48912U);
    msg.setDestinationEntity(77U);
    msg.name.assign("MXLGWPMLMORWJLOWHCLVWOLAECNRABWNKYLYQDPZXKGHVYDNZAIQHFFBIDLHMPRPRICLNJSHQFURNOYYHMJTTRKDAZF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BFPKNWORULQXBJIGIWUJCFPSEQVVKQZXLAKQRIOXWNTFUQLNJDPONFYSRENHYVJZHCBTGXKWCXEIHWDDBMGAGWFSOGIACMUAVJMKNDATZRESQBWHMSJPWAZGOLMVZIRYQVVAIZDRJDBEGCTUPIJTCOMXLVYXKKLQAFRTSFEEXVBGLGFBYXEFYRUASHHCYZKCXECPYDDDSOT");
    tmp_msg_0.value.assign("HXJNSVUWOMAAUDFRMEIUUXQRBWVEQGCHGA");
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
    msg.setTimeStamp(0.40087708718);
    msg.setSource(31541U);
    msg.setSourceEntity(22U);
    msg.setDestination(25609U);
    msg.setDestinationEntity(186U);
    msg.name.assign("HXUHUEACDOUUKMXTLMADJEFNYKXULQDEYCRWXHVBPPUYAWQTVAVVVNFCSMHIHWGJLLCGSOVZNMYCL");

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
    msg.setTimeStamp(0.355047134076);
    msg.setSource(1289U);
    msg.setSourceEntity(49U);
    msg.setDestination(40715U);
    msg.setDestinationEntity(117U);
    msg.name.assign("FQHIHBEQPQBJBJXWGAIAOYNJIVZZYVUTNSMBFB");

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
    msg.setTimeStamp(0.152702084027);
    msg.setSource(52467U);
    msg.setSourceEntity(219U);
    msg.setDestination(45123U);
    msg.setDestinationEntity(240U);
    msg.name.assign("WFSCDIBXMWYCXQATNJUVWPHAEXQRVJARNMWOGZOSUAUZTZSSBRYDOFFBKUDOILRHYRBTVKZTDPDYPDFKEPNEGCSTPJVNAXKVJGFXBEQLMBRKAJMXWQAVUWNGIVHOCBCYQFGRPWFTTKELHMNHYNQSLELEAGPYEOOHZCQAMDBFOKZRNFIICPOJDJUYMVHLKBZGHTJSVOLMTQNBMCKSXCYXZXIGUWJRUHDAIQIQXJIYUKEFIRVS");

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
    msg.setTimeStamp(0.515907874836);
    msg.setSource(22968U);
    msg.setSourceEntity(173U);
    msg.setDestination(60387U);
    msg.setDestinationEntity(70U);
    msg.timeout = 2759286210U;

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
    msg.setTimeStamp(0.65297600352);
    msg.setSource(30393U);
    msg.setSourceEntity(6U);
    msg.setDestination(57674U);
    msg.setDestinationEntity(149U);
    msg.timeout = 2772126471U;

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
    msg.setTimeStamp(0.200211848234);
    msg.setSource(36869U);
    msg.setSourceEntity(196U);
    msg.setDestination(49540U);
    msg.setDestinationEntity(163U);
    msg.timeout = 3815589181U;

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
    msg.setTimeStamp(0.502881480282);
    msg.setSource(30943U);
    msg.setSourceEntity(235U);
    msg.setDestination(48982U);
    msg.setDestinationEntity(109U);
    msg.sessid = 796435649U;

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
    msg.setTimeStamp(0.361059104422);
    msg.setSource(24079U);
    msg.setSourceEntity(121U);
    msg.setDestination(2958U);
    msg.setDestinationEntity(194U);
    msg.sessid = 1508845659U;

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
    msg.setTimeStamp(0.309891204899);
    msg.setSource(4858U);
    msg.setSourceEntity(212U);
    msg.setDestination(15292U);
    msg.setDestinationEntity(66U);
    msg.sessid = 740715365U;

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
    msg.setTimeStamp(0.197524145323);
    msg.setSource(29471U);
    msg.setSourceEntity(228U);
    msg.setDestination(32782U);
    msg.setDestinationEntity(64U);
    msg.sessid = 848971406U;
    msg.messages.assign("BEORHNLSIOPRYRIHZNUSWQNYVYNADWOXKGXPYFIFAJJPQWNCREBMDSEBFTDZCHGZAJLLVKOPKBXSZMXSGQQJHYAHDTPDSIRTZQYKCYYJFVMAEIOCLFTWTONLVGMGFBHBZUWOMZAKGLGHJPSOQPOUPRUXLIWMYVPWYJDNSAFAZVTFGEDUCCKHQPTERUERBVXXQOXK");

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
    msg.setTimeStamp(0.796811997899);
    msg.setSource(41057U);
    msg.setSourceEntity(247U);
    msg.setDestination(7786U);
    msg.setDestinationEntity(153U);
    msg.sessid = 2055386553U;
    msg.messages.assign("GQUEVTVTTGASHGZRGEZZIIKWGKHBPBYZQUJXMSSALJHTIPCYXGMKLTDFDRNFRDLCMGQFSVBISPJIWDQQWFNNWMEHTDTQAQYVFCJVJIBVWMEOPDUVXZOICPUAGXIVUQWYDMZMCJLPGWKYFUGIESRKMRLSBTAOPRBXXLTARCXELBSNJVSYQOHBRDUYRHDLYT");

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
    msg.setTimeStamp(0.900884165148);
    msg.setSource(22434U);
    msg.setSourceEntity(197U);
    msg.setDestination(59329U);
    msg.setDestinationEntity(152U);
    msg.sessid = 1911639372U;
    msg.messages.assign("TBNYYBLFYKGPPNMXIMHDNEPHUAEVDWRTGQCOANKZGWQIDPZWSASOLAALCWPZXSRTJFJJGMJNPIGITTTIMXANUGCPFWECBZSUWZRCUBDENHLKHUNYHPJCSYVSIGXKAEUMVQLKZGEQRCRFAFZEXESE");

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
    msg.setTimeStamp(0.0790962862075);
    msg.setSource(13515U);
    msg.setSourceEntity(125U);
    msg.setDestination(15091U);
    msg.setDestinationEntity(137U);
    msg.sessid = 1412806415U;

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
    msg.setTimeStamp(0.659992739629);
    msg.setSource(9011U);
    msg.setSourceEntity(161U);
    msg.setDestination(35240U);
    msg.setDestinationEntity(8U);
    msg.sessid = 4050134123U;

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
    msg.setTimeStamp(0.690026143525);
    msg.setSource(9953U);
    msg.setSourceEntity(144U);
    msg.setDestination(4038U);
    msg.setDestinationEntity(81U);
    msg.sessid = 709368326U;

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
    msg.setTimeStamp(0.501986911737);
    msg.setSource(12554U);
    msg.setSourceEntity(234U);
    msg.setDestination(28587U);
    msg.setDestinationEntity(78U);
    msg.sessid = 1237698244U;
    msg.status = 28U;

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
    msg.setTimeStamp(0.583285458813);
    msg.setSource(38056U);
    msg.setSourceEntity(0U);
    msg.setDestination(17896U);
    msg.setDestinationEntity(85U);
    msg.sessid = 182347400U;
    msg.status = 30U;

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
    msg.setTimeStamp(0.693406477574);
    msg.setSource(11439U);
    msg.setSourceEntity(177U);
    msg.setDestination(31587U);
    msg.setDestinationEntity(149U);
    msg.sessid = 103130812U;
    msg.status = 155U;

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
    msg.setTimeStamp(0.143543526989);
    msg.setSource(50099U);
    msg.setSourceEntity(104U);
    msg.setDestination(59473U);
    msg.setDestinationEntity(111U);
    msg.name.assign("WQGDRFEAFPBCSZFHJLNNLEZCVHXYALLMFFENODDGUVDPDQCYPKJMJDWSPNYOZGOABBURGMKIYQLIQXNQMIQVEKIYCSJSHUEBJIWSYGBTKICYEZRKYEFBOTHPRUTBKTMUPQXEZYSLORCOWJKHEQIHXJKKTZWF");

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
    msg.setTimeStamp(0.184342184485);
    msg.setSource(29302U);
    msg.setSourceEntity(42U);
    msg.setDestination(28495U);
    msg.setDestinationEntity(122U);
    msg.name.assign("BWAGMOTAQRBOAFQSCTXQPEGLXFHEIQKLNNYSKTAMCBPUTCCWGIIESIWCCRTQBLBMQCDYXXIKDYPPWRULMZZLGIFONMHHAZNZKYNKSVLEGDSKDEUCTPODROFUWQJEKFKJNHWHZVTVDBRDVVXZYMFEBXDTSFRYHKPJMOYACY");

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
    msg.setTimeStamp(0.304165713126);
    msg.setSource(31312U);
    msg.setSourceEntity(93U);
    msg.setDestination(17051U);
    msg.setDestinationEntity(143U);
    msg.name.assign("ZEGUCCYAYVVQRVUCSTKCPIGQIXFQFGMSCUOEELGWDSVHEGSJGPCKFEIRRVQTXKDMOSGOLZKAPBVZVFFDISZLPUWCUIGLURTEBZGBYBIWTZHAMQBXFAHSUJDTNQOKHWRMRPBWWYZWDKLUIQPQRYMOXORNNQBJDZPZYDLIRKNEATSNBKNMSDXXCIEAJJTJUHHHDMLKINZATJBMXFJJHMVLQFVEAPVNLCOJPW");

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
    msg.setTimeStamp(0.783590320846);
    msg.setSource(22196U);
    msg.setSourceEntity(50U);
    msg.setDestination(35886U);
    msg.setDestinationEntity(151U);
    msg.name.assign("MXTRABFPSDIEGLETFPMIAHLGDRBRLHKFWZLYTFUXJNUSPEIWXQNJUGTFYAZCIRSZGWLJSCJVVOTBGADOVXQKFSVDKWTRDAANENOVFDWTKKKYGUJIUFBQZQSDCHSPOXGDWTEHCJLRVXUOLRIJFZ");

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
    msg.setTimeStamp(0.435570018882);
    msg.setSource(15700U);
    msg.setSourceEntity(253U);
    msg.setDestination(9066U);
    msg.setDestinationEntity(211U);
    msg.name.assign("VEYGICBCJYVTNIFGOSLLKZNYGMJHAPKPCLJRCGHXWVOUEIEWWTOEHXJBSWTZZMCPJHDQURZURQRHXATEMOKLDSEPTRBWQWJCNUTTNTODQQYADIYBSHNCXRGXPLKSCXNMZSAQJSBOGVQLSPBHLUWJEVYFRIVWUDAIIQKDYIDNFGCIXGLFLDPKSGMYMDZNFROKCBFMMVLOWFFEEXXWXAOKVPPRVZTNMIFPHBQAGH");

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
    msg.setTimeStamp(0.606228476733);
    msg.setSource(62728U);
    msg.setSourceEntity(108U);
    msg.setDestination(57104U);
    msg.setDestinationEntity(180U);
    msg.name.assign("EEGVVLPFLDLCMVRMEKSOFECXGOILQJBEJCRIQYESPYLCTZRJFBWJYHUSDYDFZEWIYGRUUOWAVKQXSGUNCSTLQPITZNILYKCKKPWVLFEWGIBNOTBZXUIVRBHPZJMVDVMBHNXWDDMERTXSVRJZZKGXJPAUPJQKHIYGGIPMWSONAFMALFTZNNNHSFBCQJOYDXUG");

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
    msg.setTimeStamp(0.835424314153);
    msg.setSource(13162U);
    msg.setSourceEntity(236U);
    msg.setDestination(37291U);
    msg.setDestinationEntity(191U);
    msg.type = 53U;
    msg.error.assign("QNIMLNBPWPWGHHYEEDBFJVHIOQKZQ");

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
    msg.setTimeStamp(0.889243658505);
    msg.setSource(57704U);
    msg.setSourceEntity(86U);
    msg.setDestination(10204U);
    msg.setDestinationEntity(220U);
    msg.type = 241U;
    msg.error.assign("RJYTOIIHLMBNGSCCWNRDMKFVBXHLHAHEWTPBTFEBEHDYQXYGMVNNLGRGFMLYCSCCALJGWMXMNTXQRKDGSROURHTJPWYQXTIBIFRQCXSTJSFCOL");

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
    msg.setTimeStamp(0.696394312503);
    msg.setSource(24420U);
    msg.setSourceEntity(22U);
    msg.setDestination(8076U);
    msg.setDestinationEntity(140U);
    msg.type = 47U;
    msg.error.assign("YNLRLGGHBIBUYYDOCELORBQGRCBYWETBFEVFZRILGZREOHECTJSNFMGTMAWQJJOHGCWHNUXCVAGDUWQWBBXBXS");

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
    msg.setTimeStamp(0.92973278603);
    msg.setSource(40234U);
    msg.setSourceEntity(79U);
    msg.setDestination(7053U);
    msg.setDestinationEntity(11U);
    msg.seq = 40992U;
    msg.sys_dst.assign("SGHPEQZRBKSILYUNJKHRWVMTUGNNKZBRFDSPYUWZXEQXREHPVSZRARPGRHFZNDXAETBDUTBSJJVLGQAOLFTQMTCRTGFDXWBEKQKLYRKTIAIYASSVAMXNCWYVWMQNULOGDJMRMVALWVWDWIDKGYOECGXFVSDQBFIHBPIDZOIUYEFHOZZPOXMQIENP");
    msg.flags = 148U;
    const char tmp_msg_0[] = {25, -21, -56, 105, -43, 76, 100, -107, -20, -9, 121, -58, 35, 72, -71, 10, -83, -39, -28, -35, -115, -64, 100, -110, 4, -1, -123, 97, -3, -59, -13, -67, -69, -13, 20, 89, -105, 40, -80, -113, 25, -105, -95, 30, -46, 64, 1, 12, 25, 95, -3, -5, -35, 32, -72, -15, -5};
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
    msg.setTimeStamp(0.563525686419);
    msg.setSource(52534U);
    msg.setSourceEntity(254U);
    msg.setDestination(61796U);
    msg.setDestinationEntity(101U);
    msg.seq = 4685U;
    msg.sys_dst.assign("GWEITXDVPQGFJGPFCTSHTRKXGFHLLGWAINGGKUYABEMQXWCHJYATFEYKO");
    msg.flags = 17U;
    const char tmp_msg_0[] = {-122, 26, -59, 93, -61, -27, -66, -122, 26, -8, -12, -57, -25, -44, -41, -100, 98, -105, 85, -48, 123, -3, -120, -45, 23, -102, 51, -34, 42, -85, 112, 27, -2, -46, -51, 17, 120, 90, -41, 101, -38, 73, 0, -110, -115, -120, -47, -17, 95, 56, -59, 110, -127, 3, -122, -115, 86, 36, 95, 32, 41, 17, -110, 25, 126, -24, -39, -12, 98, 6, -27, -85, 3, 93, 73, 0, 85, 3, 17, -25, 83, 35, 90, -69, 111, -6, -26, -67, 29, 1, -28, 96, 68, 38, -6, 6, -79, 45, -91, 45, -64, 94, -45, 38, 118, 54, -127, -89, 113, 21, 101, 26, -76, -61, -43, 75, -87, -92, 92, -74, 26, -77, -59, -124, 48, -20, -63, 9, 46, -90, -38, 4, -51, 60, -50, -17, 29, 8, 9, -28, -49, -18, 105, 59, -31, -22, 6, -49, -123, -46, -27, 76, 100, 32, -43, -54, 30, -89, -18, 7, 112, 77, 12, -97, 55, 58, 95, -28, 41, 116, 23, 110, 38, 40, -3, -8, -67, 111, 58, -87, 110, -63, -46, -26, 17, -2, 42, 121, 124, 63, 100, 0, -72, 104, -81, -83, 1, -63, 6, 37, -34, -28, -88, -125, -21, -40, 115, 32, -92, -10, 64, 42, 54, -93, 33, -3, -43, -51, 93, -7, -97, -2, 44, 117, 112, 25, 111, -31};
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
    msg.setTimeStamp(0.846209858637);
    msg.setSource(22651U);
    msg.setSourceEntity(189U);
    msg.setDestination(57963U);
    msg.setDestinationEntity(199U);
    msg.seq = 62978U;
    msg.sys_dst.assign("QOGCLAFBWXXSIOVBEHDPOVLYWTXHFQNUMKJMRIWRWTBTCPNEDCIVBPQFTMHVKSKPAPSVOSXJQFTTFJRGKMZCCEMHKGSULGZMZUFFNBQQJYHMGCXWIXJRWEVERAMEELDZHGYSREBNNYQHHJBFPJREAPKTKMUNJPHZYWYLAVZLKWGROKOSHGYCAUXIFIIBQNIDD");
    msg.flags = 101U;
    const char tmp_msg_0[] = {-124, 13, -101, 62, 53, -40, 86, 69, -14, 35, 118, -6, 3};
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
    msg.setTimeStamp(0.181571430521);
    msg.setSource(30866U);
    msg.setSourceEntity(83U);
    msg.setDestination(14012U);
    msg.setDestinationEntity(254U);
    msg.sys_src.assign("KGVPTMEMQMVLLCXLEQNMUYKGWFJBPHGMBCUSVFWZEGYPDWHHKCPSYFJRZBRFNSBOGEIXTSTUZAKZHMQBFRUONCQENRYPLNUHHSONBAXJCKJTWDLLOXYBZMKOCCSOUBDKTUFNGD");
    msg.sys_dst.assign("RVBMIMUUZFOMHPSRKACEGXZBAWTHXEHDXLQCJWBVZYVAKCYMTSWLLPDPKJQRMHXWQOJGBNHSCOSAXABETOKBDI");
    msg.flags = 182U;
    const char tmp_msg_0[] = {10, 3, -14, 85, -91, 3, -90, -62, 51, -105, -25, -128, 83, -76, -52, -58, -29, -101, 109, -34, 45, 54, -9, 34, 32, 28, -79, 12, -69, 77, -64, -106, 126, -61, 107, 109, 44, -97, 78, -117, -77, 114, 93, -121, -101, 64, -100, -18, -95, 5, 72, -85, -106, -11, 112, 7, 20, 29, 99, -15, 120, 45, -2, 101, 42, -92, -90, 15, -99, 68, 30, 80, 117, -99, 19, -92, 6, -79, -35, -24, 49, 85, -91, 54, 126, -28, 123, -114, 116, -21, -2, 35, 72};
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
    msg.setTimeStamp(0.236378106843);
    msg.setSource(43606U);
    msg.setSourceEntity(18U);
    msg.setDestination(58261U);
    msg.setDestinationEntity(134U);
    msg.sys_src.assign("BJFEFZPHOSGDEVNNHWLXZCASYAJAIYXPYZEPRUKLOQGHNMYNOPZTMDPTIBWSFLXJMQCVBCLWDBMKZAODUQCNMJKLODZOOBALUBRXGRSLWGZAFMPUMRXXOLAKHTNVDFNUEKRBDDTUIWKSICLCMZCFZWVXPUREAVHGQFVPUOGXNIYQSJCXDFRQGDEEHIAQ");
    msg.sys_dst.assign("EUFYJIGOGBMZKDCUEQHERVOXCAVYGDJZRMFXLXRTTIILVREECKSBGPRAROWLJZXSJIVGPKUSUUCKQUJRQJDQAKMBNYLHSAGPSHFABHMBRACTWCDPOPSFMXTFNAXYQCZHLDWYVFAKPWUCWZJHIOBDQOGPQYYLGVTCHHLQMNKLYQFEUNKNAHIBBPELVROMWNHUVMNDZOSZ");
    msg.flags = 156U;
    const char tmp_msg_0[] = {-67, 116, 41, 105, 73, 87, 93, 115, -22, -54, -19, -74, -3, -117, -113, 23, 37, 17, -49, -108, 111, 10, 119, -89, -18, 101, 60, -19, -80, -106, -89, 87, 9, 72, -13, -86, 45, 33, 117, -45, 8, -42, 82, 110, -53, 52, 66, -4, -41, 29, 120, 124, 120, -4, 8, 26, -47, -16, -73, 106, 101, 83, -92, -2, 31, -119, 107, 64, -53, -113, -49, -16, -96, -19, -31, -45, -63, -40, -41, 73, -119, -65, 6, 81, 84, 41, 112, 12, 124, 35, 119, 100, 73, 27, -70, -37, -123};
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
    msg.setTimeStamp(0.665814880295);
    msg.setSource(53981U);
    msg.setSourceEntity(15U);
    msg.setDestination(1358U);
    msg.setDestinationEntity(51U);
    msg.sys_src.assign("ZNPDEZLKCOLMNMWMDYOWZDAJYMTTSPGVHOWCUEFGETKIBESVJUWXFWXORUZJLYGKQHKIETOOAYSJWZIGZKRNDZBEUSQBCFKCRZSCTRBNUUBHRQUYHWFPPHWTEWFAJVTQ");
    msg.sys_dst.assign("IRYBZQQLMVPJJHFUYKIVHCCOGLRRVIDOLLCDPSXCFOJBWJORQGCQFYTLKYATPDTNDBMPNSIUQIRBLQAWIKDAXFVWMEQNLSKSOFGAGTMDBPUXJHUKVUYCWHEUKUAXVZ");
    msg.flags = 185U;
    const char tmp_msg_0[] = {63, 57, -31, 15, 114, 92, 123, -24, -45, 57, 29, 110, 107, 76, -7, 11, -127, -52, -88, -13, 77, 67, 76, 79, 118, 86, -47, -48, 0, -17, 73, 121, 70, -29, -30, -121, -11, -45, -1, -15, -108, 7, -35, -40, -82, 39, -113, -72, 70, -97, 17, -94, -126, 111, -99, 18, -45, 36, -108, 44, 21, -9, -20, -120, 65, 41, 79, -58, 107, -44, 93, 59, -98, -106, 37, 77, -48, -126, 4, 106, -62, -78, -80, 22, 57, -118, 24, -69, -119, -86, -47, -118, -83, -114, -118, 7, -1, -68, -116, 80, 53, -37, -111, -2, 8, -122, -104, -118, 85, -55, -126, -113, 15, 98, -88, -70, -46, 45, 38, -87, 67, -122, -65, 8, 0, -35, -113, 74, -23, -128, -28, -24, -97, -89, 70, 99, -2, 112, 34, 33, 90, -67, -68, -74, 48, -92, -16, 119, -32, -73, -40, -28, -118, -63, -75, -94, -79, 122, 71, -87, -31, -127, -33, 19, -86, -122, -124, -83, 117, -11, 61, 12, 88, -73, 58, -35, 4, 61, 123, 101, -81, -77, -115, 64, 113, -26, -22, 124, 94, 28, 40, 4, -89, 43, -27, 70, -77, 101, -126, 67, 89, 90, 39, -12, -57, 119, -9, 16, -14, 62, -96, -69, -128, -66, 80, 44, 91, 112, 72, -82, -50, -10, -2, -119, -52, 29, 98, -100, 34, -62};
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
    msg.setTimeStamp(0.159444643256);
    msg.setSource(47582U);
    msg.setSourceEntity(132U);
    msg.setDestination(50752U);
    msg.setDestinationEntity(178U);
    msg.seq = 3738U;
    msg.value = 254U;
    msg.error.assign("VFOKWERTUEGWLZJFYMNHVAPILQAYLUQOJUOFYPQONZGBKMEWIMODVDPNFHPARYHWTOISAJHWDSGVKMMDGYKUZFJACCKQORJXYUIWETYSPCHECRWYCNIRSPSPBTRBTCVXMVXRQBBFZDSXLVNDZEKTKAJBXHBXIWSUKLTWAXCFROEKHGHAUCBUIGTRJYBAPFFLOTSEQSGIVWLNLELGXPGXNQAMKVNZS");

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
    msg.setTimeStamp(0.0345141802441);
    msg.setSource(18460U);
    msg.setSourceEntity(131U);
    msg.setDestination(16045U);
    msg.setDestinationEntity(21U);
    msg.seq = 7513U;
    msg.value = 19U;
    msg.error.assign("DOUQCXILKQAVTQRQOZOYNUZAGMVAXYWUGPKBUGSJXEZOETFSXJUTCTIHIONRPEJIGEVUTYTTZCGVWYEWLNCACZEJMGHHMXVBJDJLELDASCWCDROQXKXJBHXMNFPVBY");

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
    msg.setTimeStamp(0.116308217422);
    msg.setSource(43308U);
    msg.setSourceEntity(13U);
    msg.setDestination(19398U);
    msg.setDestinationEntity(103U);
    msg.seq = 28470U;
    msg.value = 29U;
    msg.error.assign("RBOBJTTBQYIDTNWFEVUFDZXEWXCZKMICWCJDPPWYTDVEUQECCFILFGZVJSAOOBQXNNPRBXKTVYSAKLULOTLRUYOHMVUGIBGIATWQK");

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
    msg.setTimeStamp(0.0874821267899);
    msg.setSource(28341U);
    msg.setSourceEntity(187U);
    msg.setDestination(31585U);
    msg.setDestinationEntity(144U);
    msg.seq = 50389U;
    msg.sys.assign("DNHHRMUVOMBKYUZ");
    msg.value = 0.241862972782;

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
    msg.setTimeStamp(0.108044391909);
    msg.setSource(65258U);
    msg.setSourceEntity(120U);
    msg.setDestination(8141U);
    msg.setDestinationEntity(213U);
    msg.seq = 16020U;
    msg.sys.assign("NDFLDXRBOIGKSNGUDUKCVBWTXMVOHURLPEOBPAXVYJPZJMPGEBBANJVQLUYBZRJDOUVGAXQYZZFNIHRDMPOEXZISKSQOAYLWNSWFHLAEWZUTBYVHGSCWFWVZPQRNESM");
    msg.value = 0.648646346422;

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
    msg.setTimeStamp(0.389373260392);
    msg.setSource(33244U);
    msg.setSourceEntity(85U);
    msg.setDestination(18608U);
    msg.setDestinationEntity(21U);
    msg.seq = 63425U;
    msg.sys.assign("LTRILVYBQGEDNTWPGRAUISBLRXIVGZGJEUHGHMKHAJLDOJKFENLXUIYIZLICTKPGCLQBDZCCEOQDFOJMNRKJCYYWFXAWDAS");
    msg.value = 0.0579308636654;

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
    msg.setTimeStamp(0.234654023135);
    msg.setSource(14130U);
    msg.setSourceEntity(243U);
    msg.setDestination(62176U);
    msg.setDestinationEntity(87U);
    msg.seq = 18777U;
    msg.sys_dst.assign("LMJOPZJWJIPZSWXHPLTXIWNODXRHYHYOZBSYBDFQNKAWTGMWNNPEGUXFMBUEHGIBYDWZCUQUGVWGMDNTXSBZHXHKPTAIYKIOQYCWMPIHGNCADOKCVLKYEPXTNFQFMRKTBKAVEZCDIDBSKZLQSAPETRCSVQVAFECLJEVDMMQUYULONKROZBMLGUVXDTL");
    msg.timeout = 0.551749412057;

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
    msg.setTimeStamp(0.41578333682);
    msg.setSource(35531U);
    msg.setSourceEntity(152U);
    msg.setDestination(19250U);
    msg.setDestinationEntity(19U);
    msg.seq = 38663U;
    msg.sys_dst.assign("RSMXLNJUMPEBHNXEWGCAFPBGUMZHDTCTMYDEWLBEJMKTNFROYAWDQFHPUBGVOHDQAZBVOOGQSTAHFQUIIWKRBRBGHJDKPJBSLLLKUEYFOTZBMAZZILLNYXKVFNMPIVSXFYIKYXOVVYJWNUREJPOJTKILLAUEMWCDXPCZKAYSJVDVXCJESHIFSSZCRZWKHAENRZMCSGCXUCQYGM");
    msg.timeout = 0.620556593089;

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
    msg.setTimeStamp(0.992992047417);
    msg.setSource(49347U);
    msg.setSourceEntity(254U);
    msg.setDestination(6521U);
    msg.setDestinationEntity(133U);
    msg.seq = 8266U;
    msg.sys_dst.assign("VNFMBTCOKPFSEQAUCLVHSGWWLIDXYENHZLBFWLIGZWUJYRDKYOGGXVSYPV");
    msg.timeout = 0.209848856103;

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
    msg.setTimeStamp(0.280405266031);
    msg.setSource(14698U);
    msg.setSourceEntity(12U);
    msg.setDestination(46379U);
    msg.setDestinationEntity(71U);
    msg.action = 241U;
    msg.longain = 0.127017086012;
    msg.latgain = 0.963728176712;
    msg.bondthick = 890261261U;
    msg.leadgain = 0.86768022689;
    msg.deconflgain = 0.489623787222;

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
    msg.setTimeStamp(0.418289005166);
    msg.setSource(7210U);
    msg.setSourceEntity(13U);
    msg.setDestination(5169U);
    msg.setDestinationEntity(109U);
    msg.action = 73U;
    msg.longain = 0.183127350629;
    msg.latgain = 0.731631935257;
    msg.bondthick = 780020737U;
    msg.leadgain = 0.996120462397;
    msg.deconflgain = 0.911605490924;

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
    msg.setTimeStamp(0.512236718531);
    msg.setSource(7368U);
    msg.setSourceEntity(167U);
    msg.setDestination(64292U);
    msg.setDestinationEntity(78U);
    msg.action = 13U;
    msg.longain = 0.942695192686;
    msg.latgain = 0.55571977081;
    msg.bondthick = 1529532435U;
    msg.leadgain = 0.491412131562;
    msg.deconflgain = 0.545386135038;

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
    msg.setTimeStamp(0.956745262471);
    msg.setSource(29592U);
    msg.setSourceEntity(24U);
    msg.setDestination(35478U);
    msg.setDestinationEntity(45U);
    msg.err_mean = 0.0427036111382;
    msg.dist_min_abs = 0.920422937228;
    msg.dist_min_mean = 0.401407551524;

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
    msg.setTimeStamp(0.512307812527);
    msg.setSource(34027U);
    msg.setSourceEntity(139U);
    msg.setDestination(62467U);
    msg.setDestinationEntity(140U);
    msg.err_mean = 0.51297200707;
    msg.dist_min_abs = 0.82698886574;
    msg.dist_min_mean = 0.613031439975;

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
    msg.setTimeStamp(0.631338236206);
    msg.setSource(39738U);
    msg.setSourceEntity(222U);
    msg.setDestination(43479U);
    msg.setDestinationEntity(69U);
    msg.err_mean = 0.937614906945;
    msg.dist_min_abs = 0.0984735593719;
    msg.dist_min_mean = 0.767118823237;

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
    msg.setTimeStamp(0.121815809825);
    msg.setSource(30256U);
    msg.setSourceEntity(159U);
    msg.setDestination(28237U);
    msg.setDestinationEntity(154U);
    msg.action = 125U;
    msg.lon_gain = 0.915013079584;
    msg.lat_gain = 0.0712309260614;
    msg.bond_thick = 0.430994226008;
    msg.lead_gain = 0.710232973326;
    msg.deconfl_gain = 0.788699330193;
    msg.accel_switch_gain = 0.772624933703;
    msg.safe_dist = 0.281958684501;
    msg.deconflict_offset = 0.196926037784;
    msg.accel_safe_margin = 0.849019589984;
    msg.accel_lim_x = 0.788661000141;

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
    msg.setTimeStamp(0.873842433806);
    msg.setSource(49194U);
    msg.setSourceEntity(15U);
    msg.setDestination(49467U);
    msg.setDestinationEntity(162U);
    msg.action = 163U;
    msg.lon_gain = 0.589287824645;
    msg.lat_gain = 0.872856306486;
    msg.bond_thick = 0.655144167621;
    msg.lead_gain = 0.713766871334;
    msg.deconfl_gain = 0.340750005781;
    msg.accel_switch_gain = 0.279058065491;
    msg.safe_dist = 0.403398247098;
    msg.deconflict_offset = 0.912864210319;
    msg.accel_safe_margin = 0.689940839215;
    msg.accel_lim_x = 0.47749134318;

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
    msg.setTimeStamp(0.394265216218);
    msg.setSource(30207U);
    msg.setSourceEntity(22U);
    msg.setDestination(3326U);
    msg.setDestinationEntity(32U);
    msg.action = 35U;
    msg.lon_gain = 0.966064003127;
    msg.lat_gain = 0.927651921223;
    msg.bond_thick = 0.0193234654519;
    msg.lead_gain = 0.125081213042;
    msg.deconfl_gain = 0.767641278474;
    msg.accel_switch_gain = 0.470834981244;
    msg.safe_dist = 0.406123167005;
    msg.deconflict_offset = 0.308431391648;
    msg.accel_safe_margin = 0.533739933639;
    msg.accel_lim_x = 0.216238707292;

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
    msg.setTimeStamp(0.822249808296);
    msg.setSource(1528U);
    msg.setSourceEntity(209U);
    msg.setDestination(48125U);
    msg.setDestinationEntity(222U);
    msg.type = 210U;
    msg.op = 224U;
    msg.err_mean = 0.61755717686;
    msg.dist_min_abs = 0.214377351796;
    msg.dist_min_mean = 0.615188054812;
    msg.roll_rate_mean = 0.709913858793;
    msg.time = 0.902759310947;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 178U;
    tmp_msg_0.lon_gain = 0.880704853021;
    tmp_msg_0.lat_gain = 0.269081119504;
    tmp_msg_0.bond_thick = 0.153575709483;
    tmp_msg_0.lead_gain = 0.867871506838;
    tmp_msg_0.deconfl_gain = 0.62667652935;
    tmp_msg_0.accel_switch_gain = 0.373966986324;
    tmp_msg_0.safe_dist = 0.664740084382;
    tmp_msg_0.deconflict_offset = 0.667655894875;
    tmp_msg_0.accel_safe_margin = 0.0447755962998;
    tmp_msg_0.accel_lim_x = 0.612885047897;
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
    msg.setTimeStamp(0.768226901238);
    msg.setSource(52729U);
    msg.setSourceEntity(63U);
    msg.setDestination(7615U);
    msg.setDestinationEntity(18U);
    msg.type = 19U;
    msg.op = 4U;
    msg.err_mean = 0.568833744926;
    msg.dist_min_abs = 0.962677325856;
    msg.dist_min_mean = 0.0803890577865;
    msg.roll_rate_mean = 0.429123764572;
    msg.time = 0.060252751961;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 116U;
    tmp_msg_0.lon_gain = 0.0914808719015;
    tmp_msg_0.lat_gain = 0.746028348059;
    tmp_msg_0.bond_thick = 0.530543430317;
    tmp_msg_0.lead_gain = 0.123504080615;
    tmp_msg_0.deconfl_gain = 0.471396339971;
    tmp_msg_0.accel_switch_gain = 0.157326998991;
    tmp_msg_0.safe_dist = 0.556844381062;
    tmp_msg_0.deconflict_offset = 0.444145934511;
    tmp_msg_0.accel_safe_margin = 0.723427308284;
    tmp_msg_0.accel_lim_x = 0.223701460357;
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
    msg.setTimeStamp(0.389491806313);
    msg.setSource(40327U);
    msg.setSourceEntity(11U);
    msg.setDestination(30826U);
    msg.setDestinationEntity(138U);
    msg.type = 101U;
    msg.op = 96U;
    msg.err_mean = 0.233059507847;
    msg.dist_min_abs = 0.669845491052;
    msg.dist_min_mean = 0.913520140285;
    msg.roll_rate_mean = 0.186528559731;
    msg.time = 0.106839550204;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 220U;
    tmp_msg_0.lon_gain = 0.0768387420893;
    tmp_msg_0.lat_gain = 0.146721964194;
    tmp_msg_0.bond_thick = 0.630976847333;
    tmp_msg_0.lead_gain = 0.884761272654;
    tmp_msg_0.deconfl_gain = 0.866905498582;
    tmp_msg_0.accel_switch_gain = 0.880339587909;
    tmp_msg_0.safe_dist = 0.425601322432;
    tmp_msg_0.deconflict_offset = 0.850146368955;
    tmp_msg_0.accel_safe_margin = 0.945663657221;
    tmp_msg_0.accel_lim_x = 0.895274261202;
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
    msg.setTimeStamp(0.984551962245);
    msg.setSource(37243U);
    msg.setSourceEntity(36U);
    msg.setDestination(42775U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.517348818944;
    msg.lon = 0.75458230689;
    msg.eta = 1595741248U;
    msg.duration = 8147U;

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
    msg.setTimeStamp(0.123984290238);
    msg.setSource(52359U);
    msg.setSourceEntity(188U);
    msg.setDestination(52982U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.252168793831;
    msg.lon = 0.46577389297;
    msg.eta = 3832881364U;
    msg.duration = 55899U;

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
    msg.setTimeStamp(0.751256402043);
    msg.setSource(33938U);
    msg.setSourceEntity(31U);
    msg.setDestination(18508U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.135676385142;
    msg.lon = 0.814879384634;
    msg.eta = 4169809684U;
    msg.duration = 52231U;

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
    msg.setTimeStamp(0.142952242136);
    msg.setSource(62328U);
    msg.setSourceEntity(70U);
    msg.setDestination(11019U);
    msg.setDestinationEntity(73U);
    msg.plan_id = 47336U;

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
    msg.setTimeStamp(0.0732012857041);
    msg.setSource(16519U);
    msg.setSourceEntity(193U);
    msg.setDestination(41787U);
    msg.setDestinationEntity(42U);
    msg.plan_id = 19511U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.51018568689;
    tmp_msg_0.lon = 0.682384127842;
    tmp_msg_0.eta = 2673114349U;
    tmp_msg_0.duration = 3920U;
    msg.waypoints.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.149522407658);
    msg.setSource(51396U);
    msg.setSourceEntity(109U);
    msg.setDestination(742U);
    msg.setDestinationEntity(181U);
    msg.plan_id = 29408U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.0188644224881;
    tmp_msg_0.lon = 0.732034672994;
    tmp_msg_0.eta = 2543287976U;
    tmp_msg_0.duration = 11676U;
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
    msg.setTimeStamp(0.279666914677);
    msg.setSource(6531U);
    msg.setSourceEntity(84U);
    msg.setDestination(46734U);
    msg.setDestinationEntity(53U);
    msg.type = 218U;
    msg.command = 220U;
    msg.settings.assign("KRMAZCRTXUJNZDLLLRJVREURHRCKGGAZWQPWJDMZBHICFIQCKYFGACNJNAXXVNXZWEGDDSMQTDICTKFPWCLQMMXZXFLIDPDMHFZVYLFVYWPTSBSIGHJNUT");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 9822U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.589934794888;
    tmp_tmp_msg_0_0.lon = 0.306196515477;
    tmp_tmp_msg_0_0.eta = 4202207319U;
    tmp_tmp_msg_0_0.duration = 40917U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("AKDEJSUYFFZAQPVMOJAVOUTYLJFIVJRYPNPTHZJOXAWPUUNNHTQRZXWZQGPMEZJYSINEIMKUFSQOYRHJAHUXEDSXHPWENGGIEMYBIAROETWBONSEZNQWCXDHWVROLPXLHCJVIWDUDPVFOVOKBWVUMLTRDSCHXFQSTWCBXAKHUWDRCVGKCGDDXMSBCLBBKAURGFZKJQCFLIZXLQZGCINPFVFQONTYQLKYPLASMIJLETZGAERNBTTMBMYRI");

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
    msg.setTimeStamp(0.143731399131);
    msg.setSource(22934U);
    msg.setSourceEntity(148U);
    msg.setDestination(5955U);
    msg.setDestinationEntity(63U);
    msg.type = 142U;
    msg.command = 130U;
    msg.settings.assign("MPULVSAWUEFPPSTAVGCMSRDSDIAQICZQZRWJZJCEIUVJGLTTOBWWRJXILJGYX");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 40622U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("EMAHKKEYUTUAMPHRSNBVVWHJGVGWYQAOCYBTUNUPJTEAXSNYXELGNYIFBOSEPRFOJPLODIHOJHKXGQMLOMSSZKVIEUZSDXWQQGFLZCUPROFEWDXUMIWDGTHIJBZLRR");

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
    msg.setTimeStamp(0.628780486396);
    msg.setSource(2209U);
    msg.setSourceEntity(131U);
    msg.setDestination(43404U);
    msg.setDestinationEntity(134U);
    msg.type = 11U;
    msg.command = 254U;
    msg.settings.assign("IRBXDCFVFJTGQESALVNFAMCSBPYWDBRFQULWYFVKXBBVSCLGDPREVOMTKBUGKPIZLGAGYABWKPUEDEHUMGRZSTWWULECVZZQTNROJKVIIVSRPLOCFFTCZJZFJXEUCCJPNHKEHYRPQUETSIRMMAEXUPRDHFAEZLTIIQPMTMNINYFDNXBQZ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 15347U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.937275608429;
    tmp_tmp_msg_0_0.lon = 0.0382083862127;
    tmp_tmp_msg_0_0.eta = 1213413298U;
    tmp_tmp_msg_0_0.duration = 56929U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ILUMRAQJRAXBCKTJCGMIJUNFWIVAXAPFMYVFLHPAOGVSLXFDTRVCQBEICRYSWVUFJBYTKEVUOKYIHOHNQFSNXTLLERJDIUFSQDPSCEDGCOVIHZHKIBOTQMBXGEZOIYSNFEQVQHARWMZBWZLGVNSODACMQETIHXDKBLLNPGWRADZDYKEPXWYEGYMFQWWHUZLMYJXG");

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
    msg.setTimeStamp(0.333989635027);
    msg.setSource(24691U);
    msg.setSourceEntity(129U);
    msg.setDestination(6407U);
    msg.setDestinationEntity(173U);
    msg.state = 48U;
    msg.plan_id = 58139U;
    msg.wpt_id = 9U;
    msg.settings_chk = 44278U;

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
    msg.setTimeStamp(0.452514969403);
    msg.setSource(11631U);
    msg.setSourceEntity(119U);
    msg.setDestination(14050U);
    msg.setDestinationEntity(54U);
    msg.state = 77U;
    msg.plan_id = 52148U;
    msg.wpt_id = 179U;
    msg.settings_chk = 29420U;

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
    msg.setTimeStamp(0.801272666553);
    msg.setSource(31080U);
    msg.setSourceEntity(177U);
    msg.setDestination(59612U);
    msg.setDestinationEntity(70U);
    msg.state = 248U;
    msg.plan_id = 5435U;
    msg.wpt_id = 68U;
    msg.settings_chk = 18971U;

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
    msg.setTimeStamp(0.0563460315676);
    msg.setSource(52955U);
    msg.setSourceEntity(132U);
    msg.setDestination(30867U);
    msg.setDestinationEntity(102U);
    msg.uid = 246U;
    msg.frag_number = 100U;
    msg.num_frags = 34U;
    const char tmp_msg_0[] = {-78, -79, -47, 44, 82, 41, -12, -22, -113, -53, 88, -90, -72, 67, -126, -53, 21, -58, -121, 41, -76, 108, 86, 108, 40, 33, -63, -120, 22, 113, 30, -67, -86, -12, -117, 93, 112, -22, 107, 81, 50, -115, -95, -70, -119, 1, 84, 100, -33, 24, -87, 80};
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
    msg.setTimeStamp(0.149655004306);
    msg.setSource(21275U);
    msg.setSourceEntity(214U);
    msg.setDestination(27138U);
    msg.setDestinationEntity(206U);
    msg.uid = 117U;
    msg.frag_number = 169U;
    msg.num_frags = 125U;
    const char tmp_msg_0[] = {73, -83, 29, 1, -24, 107, -87, 30, -42, -61, -90, 0, -96, -13, -103, -22, -41, 108, -92, -49, 31, 75, -11, -27, 10, -63, -53, 21, 82, 24, 125, 33, 89, 62, -24, 20, -115, 114, 29, -93, -11, 43, 15, 0, 63, -35, 24, 92, -17, 10, 64, -75, 97, 54, -32, 74, -11, -128, -114, -98, -89, -101, -67, -117, 21, -21, -73, 82, -26, -121, -118, -55, 21, -106, 96, 60, -69, -95, -60, -51, 91, -14, 17, 82, -41, -94, 20, -112, -122, -91, -100, -104, 72, 116, -28, 110};
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
    msg.setTimeStamp(0.729291496529);
    msg.setSource(7417U);
    msg.setSourceEntity(20U);
    msg.setDestination(15006U);
    msg.setDestinationEntity(38U);
    msg.uid = 52U;
    msg.frag_number = 60U;
    msg.num_frags = 163U;
    const char tmp_msg_0[] = {-26, 14, 69, 116, 122, -75, -44, -110, -98, 46, 59, 30, -111, 104, 68, -73, -74, -66, 82, -13, 77, -56, -69, 115, -45, -126, -21, 104, 68, -63, 52, -98, 81, 29, 0, -37, 59, 73, -49, -37, 94, 26, -99, -94, 79, 112, -2, 43, -114, 92, -42, 118, 27, -117, -13, -45, 36, -39, -19, 120, -112, 98, -52, 124, 100, 9, -96, 126, 33, 9, -9, -72, 1, -115, 32, 57, -60, 101, 68, 95, 23, 21, 52, 51, -82, -125, 41, 31, -126, 3, -92, -108, -90, -89, 2, 31, 77, 71, -77, -75, -105, -94, 55, -16, 27, -126, 100, -24, -68, 13, 32, -42, -113, -57, -126, 24, -99, 74, 18, 106, 126, 16, -15, 20, -55, -49, -108, 24, 87, -7, -75, 112, -86, 1, -56, 59, -26, 13, 1, 6, 66, 108, -103, 48, -24, -120, -20, 41, -18, 52, -101, 110, -59, -107, 53, -85, 58, 93, 33, -38, -52, -112, -87, 40, -113, -54, -94, 12, -27, 50, -125, -8, -44, 25, 88, 8, -58, 112, 120, 91, -76, -62, -124, -40, -122, 76, -102, -72, 19, 120, 53, -122, -106, -50, 43, 60, 10, -70, -90, 10, -56, 7, 41, -108, 36, -61, -93, -31, -26, 8, -83, -43, 66, -119, -60, 72, -28, -40, -124, -53, -4, -28, 33, -111, -7, 25, 95, -28, -63, -91, 109, 92, -67, -89, -116, 15, 83, 27, -38, 115, 34, 2, -47};
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
    msg.setTimeStamp(0.692452317944);
    msg.setSource(8334U);
    msg.setSourceEntity(78U);
    msg.setDestination(4858U);
    msg.setDestinationEntity(112U);
    msg.content_type.assign("MGWILHDYZUJCLGODCHAOOFLKJWTDPIIMKFGCDQEPEWTVVKYXLIXIQTXLZWKVUBPMUSRSEADTFHXHNQUIBUUEBSBFYXFYDOXTGKJASJELPELNIVAOQNGFRRYWAGPVWTKAMNOOOZIACQRUYNONCVBLFQWAZDRBRKQHE");
    const char tmp_msg_0[] = {23, -70, 39, 124, -25, 124, -117, 67, 117, 103, -5, 40, -119, -94, -102, -3, 83, -121, 44, 106, -108, 12, -97, -11, 88, 118, -70, 55, -10, -117, 36, -71, -108, 53, -123, -28, 62, 64, 65, -44, 114, 33, 81, -94, 53, 70, 59, -24, -56, -35, 19, 109, 23, 81, 95, 94, 57, -76, -26, -101, 125, 65, -9, -57, 89, -48, 31, -78, 17, 81, 63, 0, 86, 31, 84, 102, 92, -85, -67, 95, -117, 91, 115, 120, -15, 54, 99, 121, 66, -18, -124, 73, -73, 122, 11, 19, -118, -94, 109, -76, -1, 78, 98, -67, -18, -56, 96, 25, 66, 63, 20, 89, 35, 8, 35, 92, 57, 29, 64, 54, -106, -75, 55, 68, -3, -35, -128, 5, 3, 100, -62};
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
    msg.setTimeStamp(0.0630352998702);
    msg.setSource(58829U);
    msg.setSourceEntity(135U);
    msg.setDestination(15857U);
    msg.setDestinationEntity(95U);
    msg.content_type.assign("GBJRQHXOBCZPRIPIEQSBJZMHIPLYSKFNRKCZUHXLWHEIOGRCKXMFXIFELIATVOVKVOYQQCNXDOTREHDISYBWPCZEBNHRJJMEKUAOLRZCADTOT");
    const char tmp_msg_0[] = {-61, -60, 38, -101, 58, 112, -97, -63, 21, 44, 5, -102, 58, -122, -26, -2, 18, -68, 123, -27, 6, -128, -107, -60, -94, -46, -26, 50, -72, -112, -35, -38, -36, 18, -71, 7, 0, 14, 70, -47, 17, 81, 3, -49, 50, -36, 54, 124, -7, 79, -25, -73, -74, 110, 109, -19, 46, -80, 79, 63, -26, -101, -67, 10, 55, -41, 101, -38, -61, 96, 64, -118, 36, 6, -24, -126, 44, -10, -99, -38, 80, -70, -60, 5, -102, -61, -12, 19, 18, -109, 103, -82, -104, 33, -122, 45, -123, 102, 46, 81, 86, -113, -20, 81, 63, 74, -124, 117, 121, 101, -38, -56, 90, -19, 78, -40, -8, 63, 44, 52, -15, -58, 107, 32, 55, -6, -16, -65, 122, -31, 114, -96, -13, -89, -61, -69, -57, 0, -32, 73, -119, 90, 116, 36, 6, -41, 56, -82, 36, 90, 47, 61, 54, -62, -109, 56, -57, 81, -101, 85, 44, -18, 122, 86, -103, -52, -66, -100, -117, 92, -97, -33, 110, -61, 79, -47, 65, 60, 119, 8, -76, -76, -101, -4, 5, 22, -28, -26, 96, -78, 100, -62, -112, 27, -126, 16, -43, 81, 119, 118, 119, -72, -30, -31, 42, -70, 106, 84, -6, 80, -17, 124, 24, -27, 79, -78, 112, -73, -99, 61, -76, -94, 107, -2, 65};
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
    msg.setTimeStamp(0.86117614606);
    msg.setSource(10888U);
    msg.setSourceEntity(20U);
    msg.setDestination(29001U);
    msg.setDestinationEntity(23U);
    msg.content_type.assign("YQXYQPBLNQNIYCRAVRZL");
    const char tmp_msg_0[] = {108, -6, -67, -107, -59, -46, 31, 122, 92, -16, -11, -42, 95, -88, -67, -1, -33, -84, -77, 9, -47, 83, -7, -1, 37, -107, -62, -7, 39, -59, -92, 37, 81, -53, 79, 3, 35, 126, -24, 43, -40, 119, -14, 69, -101, 43, -66, -52, 25, -19, 115, -97, 63, 35, -22, 109, -110, -21, -107, 35, -78, 111, -7, 4, 39, 12, 108, 68, -58, 56, 111, 104, -34, -98, -66, 61, -57, 78, -15, -121, 20, -108, -118, -31, 21, -18, 45, 6, -61, -9, -116, 69, 47, 48, -90, 106, 119, 56, -21, 39, -60, -18, -70, 64, -97, -109};
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
    msg.setTimeStamp(0.938458757288);
    msg.setSource(47224U);
    msg.setSourceEntity(216U);
    msg.setDestination(46491U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.949449384784);
    msg.setSource(65235U);
    msg.setSourceEntity(46U);
    msg.setDestination(31853U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.338960764911);
    msg.setSource(408U);
    msg.setSourceEntity(237U);
    msg.setDestination(29369U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.31366206396);
    msg.setSource(34429U);
    msg.setSourceEntity(26U);
    msg.setDestination(40416U);
    msg.setDestinationEntity(84U);
    msg.target = 13267U;
    msg.bearing = 0.0623349941659;
    msg.elevation = 0.512865008994;

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
    msg.setTimeStamp(0.481273553391);
    msg.setSource(36080U);
    msg.setSourceEntity(184U);
    msg.setDestination(11666U);
    msg.setDestinationEntity(170U);
    msg.target = 12939U;
    msg.bearing = 0.491242475917;
    msg.elevation = 0.846760127158;

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
    msg.setTimeStamp(0.173627024413);
    msg.setSource(31453U);
    msg.setSourceEntity(43U);
    msg.setDestination(59885U);
    msg.setDestinationEntity(70U);
    msg.target = 51754U;
    msg.bearing = 0.685199794165;
    msg.elevation = 0.430480620634;

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
    msg.setTimeStamp(0.605639765915);
    msg.setSource(30783U);
    msg.setSourceEntity(53U);
    msg.setDestination(37878U);
    msg.setDestinationEntity(10U);
    msg.target = 3033U;
    msg.x = 0.584828145916;
    msg.y = 0.19847674872;
    msg.z = 0.597080953006;

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
    msg.setTimeStamp(0.0521125333544);
    msg.setSource(21398U);
    msg.setSourceEntity(116U);
    msg.setDestination(11422U);
    msg.setDestinationEntity(140U);
    msg.target = 60583U;
    msg.x = 0.669413546136;
    msg.y = 0.953460497221;
    msg.z = 0.10492869518;

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
    msg.setTimeStamp(0.483478527324);
    msg.setSource(782U);
    msg.setSourceEntity(80U);
    msg.setDestination(52356U);
    msg.setDestinationEntity(60U);
    msg.target = 40942U;
    msg.x = 0.104776960549;
    msg.y = 0.860851320055;
    msg.z = 0.548917246682;

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
    msg.setTimeStamp(0.955022508603);
    msg.setSource(48222U);
    msg.setSourceEntity(37U);
    msg.setDestination(16830U);
    msg.setDestinationEntity(165U);
    msg.target = 40384U;
    msg.lat = 0.386224756165;
    msg.lon = 0.234386096816;
    msg.z_units = 26U;
    msg.z = 0.236737405258;

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
    msg.setTimeStamp(0.170764333289);
    msg.setSource(20122U);
    msg.setSourceEntity(61U);
    msg.setDestination(13181U);
    msg.setDestinationEntity(178U);
    msg.target = 36915U;
    msg.lat = 0.547564698467;
    msg.lon = 0.384059403558;
    msg.z_units = 209U;
    msg.z = 0.244439061652;

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
    msg.setTimeStamp(0.0588050404484);
    msg.setSource(4775U);
    msg.setSourceEntity(92U);
    msg.setDestination(8433U);
    msg.setDestinationEntity(41U);
    msg.target = 63092U;
    msg.lat = 0.0254870266399;
    msg.lon = 0.150116610872;
    msg.z_units = 202U;
    msg.z = 0.191300518496;

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
    msg.setTimeStamp(0.934644881429);
    msg.setSource(51568U);
    msg.setSourceEntity(206U);
    msg.setDestination(3516U);
    msg.setDestinationEntity(68U);
    msg.locale.assign("QLONKTGROTDUXVBADKAMZAQSGYJGYLXYDFOPATILJADLVPVMCFHEWQMEBUNKERCRXLRWRTSSULUBNSOBWMJ");
    const char tmp_msg_0[] = {62, 126, -125, -51, -16, 47, -71, -56, 59, 1, -48, -60, 75, -93, -83, 89, 82, -12, 123, 56, -51, -98, -6, -109, -87, 120, 15, 122, 69, 82, 82, -49, -107, -108, 122, 98, 112, 60, 60, -30, 77, -92, -126, -87, 73, -109, -10, -15};
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
    msg.setTimeStamp(0.894865754833);
    msg.setSource(59516U);
    msg.setSourceEntity(38U);
    msg.setDestination(13871U);
    msg.setDestinationEntity(186U);
    msg.locale.assign("RQRCJVSOUEFLNAGDHZZWFMUPUBYHFMHFCNRTTOXSTSSMZVSTWPLBOOXCYAAHDGVFJZUHSAWJPLSSVKLWTDBPOOINJDXQNCICEKEFIKIHXYNOEETLFZCHVQACZZEMYPRNQTOADIRIXWRFRALFYAKGNJPDLDXTBXJEMWPXCQRIEEABGDM");
    const char tmp_msg_0[] = {-125, -2, 13, 35, 107, -128, 47, -96, -45, -39, -11, -113, 53, 5, -39, -30, -37, 58, -81, -41, -19, 72, -73, 14, -66, -69, -7, -99, 58, -23, 22, -78, -90, 34, 68, 111, -116, -122, 86, -71, -88, 111, 58, -34, 126, 124, -22, -10, -13, -87, 15, -46, -117, -67, -6, -62, -65, -117, 113, 65, 53, 124, 64, 16, 102, 84, -3, -121, 58, 123, -15, -54, -89, 117, -26, 96, -108, 100, -66, 30, 99, -75, -11, 106, 105, 44, -1, -43, 3, -52, -4, -120, 95, -33, 121, -93, -122, -16, -87, 109, -10, 54, -67, -87, 60, -12, -40, -105, -55, -33, -96, -3, -117, 69, 72, -73, -2, -87, -86, 27, -36, 28, -69, 125, -30, 23, -37, 12, -86, -25, -92, -113, -1, -84, -11, -38, 86, 80, 2, 5, -121, -70, 38, 10, -106, 17, 25, -127, -77, 32, -76, -7, 18, -41, 5, 60, 49, 3, 52, 109, 25, -92, 100, -65, 116, -7, 49, -64, 9, -8, 107, 103};
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
    msg.setTimeStamp(0.737021542574);
    msg.setSource(18789U);
    msg.setSourceEntity(249U);
    msg.setDestination(52776U);
    msg.setDestinationEntity(12U);
    msg.locale.assign("TRFXAXUBIFZJLPJMYIVHSKEZLMWRBHXLRTCLJNSXJQNDUHXDCIWJZOGUQASVPOWTCCDZIAXVGPREOQQZSFAFXSJGFLCRAODPVDLUZXOHUJGLHREROSFTYNCVIOXKNUJZMXCBPGODZYJDHHBPMNCIQTSUIQEGKNMHVNSLQRTWRWYBNCQZPSMDZESEPWBRYDYAUVP");
    const char tmp_msg_0[] = {76, -46, -95, 59, -19, 119, 0, -3, -100, -100, 24, -33, 25, 34, -14, 21, -50, 12, 33, -39, 82, -33, -78, 108, 85, -5, 27, -63, -104, 9, -99, 12, 61, -70, 31, -5, 66, -67, -38, 40, 79, -65, -89, 35, 126, -118, -32, -87, 63, -97, -45, 74, 119, 120, -67, 33, -8, 25, -38, -76, -70, -14, 79, -18, -15, 110, -2, -90, 120, -76, 72, -38, 93, -38, -48, 46, 43, -7, 58, 1, 117, 2, -65, 3, 119, 109, -23, -68, 80, 81, -19, 12, -118, -78, 55, 90, -89, -92, 84, 6, -3, 84, 106, 44, -37, -63, 25, 77, 6, -104, -32, -99, 64, 58, 14, -109, -119, -81, -8, 98, -103, -15, 16, -119, -39, 57, -84, -51, -115, 83, 59, 100, 59, 100, 31, 70, 36, 64, -52, 114, 14, 88, -29, -31, -69, 19};
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
    msg.setTimeStamp(0.101203747314);
    msg.setSource(50325U);
    msg.setSourceEntity(213U);
    msg.setDestination(11968U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.907032777644);
    msg.setSource(56021U);
    msg.setSourceEntity(155U);
    msg.setDestination(35297U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.289555117673);
    msg.setSource(55119U);
    msg.setSourceEntity(245U);
    msg.setDestination(16449U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.453679264957);
    msg.setSource(4740U);
    msg.setSourceEntity(0U);
    msg.setDestination(17413U);
    msg.setDestinationEntity(153U);
    msg.camid = 153U;
    msg.x = 60061U;
    msg.y = 4042U;

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
    msg.setTimeStamp(0.0851697757817);
    msg.setSource(58185U);
    msg.setSourceEntity(175U);
    msg.setDestination(22593U);
    msg.setDestinationEntity(155U);
    msg.camid = 153U;
    msg.x = 4144U;
    msg.y = 25723U;

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
    msg.setTimeStamp(0.041908212735);
    msg.setSource(33064U);
    msg.setSourceEntity(27U);
    msg.setDestination(15348U);
    msg.setDestinationEntity(28U);
    msg.camid = 64U;
    msg.x = 47744U;
    msg.y = 63506U;

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
    msg.setTimeStamp(0.177106934955);
    msg.setSource(12105U);
    msg.setSourceEntity(234U);
    msg.setDestination(8255U);
    msg.setDestinationEntity(35U);
    msg.camid = 10U;
    msg.x = 47076U;
    msg.y = 48238U;

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
    msg.setTimeStamp(0.660317543228);
    msg.setSource(47854U);
    msg.setSourceEntity(29U);
    msg.setDestination(6436U);
    msg.setDestinationEntity(59U);
    msg.camid = 248U;
    msg.x = 38440U;
    msg.y = 11091U;

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
    msg.setTimeStamp(0.619295661045);
    msg.setSource(61853U);
    msg.setSourceEntity(121U);
    msg.setDestination(20985U);
    msg.setDestinationEntity(120U);
    msg.camid = 3U;
    msg.x = 57778U;
    msg.y = 60679U;

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
    msg.setTimeStamp(0.395589372383);
    msg.setSource(55661U);
    msg.setSourceEntity(3U);
    msg.setDestination(39000U);
    msg.setDestinationEntity(91U);
    msg.tracking = 191U;
    msg.lat = 0.567230999514;
    msg.lon = 0.971012866922;
    msg.x = 0.31202938138;
    msg.y = 0.677973127195;
    msg.z = 0.488123313909;

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
    msg.setTimeStamp(0.0743950076921);
    msg.setSource(60283U);
    msg.setSourceEntity(92U);
    msg.setDestination(37782U);
    msg.setDestinationEntity(176U);
    msg.tracking = 68U;
    msg.lat = 0.176936981438;
    msg.lon = 0.491208143711;
    msg.x = 0.058954197585;
    msg.y = 0.580569656313;
    msg.z = 0.232735036351;

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
    msg.setTimeStamp(0.885763902037);
    msg.setSource(8142U);
    msg.setSourceEntity(60U);
    msg.setDestination(11339U);
    msg.setDestinationEntity(37U);
    msg.tracking = 17U;
    msg.lat = 0.470040077031;
    msg.lon = 0.67049081457;
    msg.x = 0.274542145345;
    msg.y = 0.631420450878;
    msg.z = 0.580199879156;

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
    msg.setTimeStamp(0.274879767971);
    msg.setSource(64991U);
    msg.setSourceEntity(13U);
    msg.setDestination(4712U);
    msg.setDestinationEntity(80U);
    msg.target.assign("PREQVYSOQBHTYCECNOPXXQXYKMHSARUPELWIJPCTJPIBIMVPQLCOCERUZLBHUWZVFRKOVMZGKEDUJCEDSBUNRDNVRYXPNUAODVGKBXVSDBCDDMOHVFSFAMLIRAPHIUMOSDQSUTYKINVOBQMGBGKDZJLNHECOZ");
    msg.lbearing = 0.704476202484;
    msg.lelevation = 0.168311655771;
    msg.bearing = 0.927973175903;
    msg.elevation = 0.882668655183;
    msg.phi = 0.843970903329;
    msg.theta = 0.739725408407;
    msg.psi = 0.376231365388;
    msg.accuracy = 0.360577167371;

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
    msg.setTimeStamp(0.285565794671);
    msg.setSource(48970U);
    msg.setSourceEntity(24U);
    msg.setDestination(22128U);
    msg.setDestinationEntity(89U);
    msg.target.assign("WEMMXQICPCHRYNJNUEVUMXYMIGQOYTTNHTF");
    msg.lbearing = 0.250328708371;
    msg.lelevation = 0.28320012661;
    msg.bearing = 0.237702544709;
    msg.elevation = 0.0560821815969;
    msg.phi = 0.613194467807;
    msg.theta = 0.104253141338;
    msg.psi = 0.0398358865727;
    msg.accuracy = 0.730814842391;

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
    msg.setTimeStamp(0.472869059106);
    msg.setSource(29035U);
    msg.setSourceEntity(65U);
    msg.setDestination(22773U);
    msg.setDestinationEntity(222U);
    msg.target.assign("MEROIXTJXTOGVHFTBZUTUMVKMHYBERESXNNWFEJSKFWXMDEXKKALJNNUFKGWZGQXLGMIWSPDMKYPCKIDXROFUDVGRWHSELOZDIZUCQRAPRQGTCNAHYDBEMGIXJUJWYFTVQHVILVKZUUARPDLTZNMWASAVSPLTQFPYBOBQWYNLHBOBB");
    msg.lbearing = 0.353293448387;
    msg.lelevation = 0.910286492571;
    msg.bearing = 0.924665092876;
    msg.elevation = 0.237235506764;
    msg.phi = 0.409898727986;
    msg.theta = 0.181534196145;
    msg.psi = 0.0449592120581;
    msg.accuracy = 0.86352018734;

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
    msg.setTimeStamp(0.669262654778);
    msg.setSource(32591U);
    msg.setSourceEntity(149U);
    msg.setDestination(36019U);
    msg.setDestinationEntity(147U);
    msg.target.assign("UHBSIAZDEDCGLAFRUGVZNCYRFMQPNAYEOIMKOFQSEQUFNB");
    msg.x = 0.193557526404;
    msg.y = 0.953903928679;
    msg.z = 0.965239671478;
    msg.n = 0.378146712213;
    msg.e = 0.689063729951;
    msg.d = 0.856631953224;
    msg.phi = 0.675447897264;
    msg.theta = 0.427518959389;
    msg.psi = 0.148893857548;
    msg.accuracy = 0.255208993196;

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
    msg.setTimeStamp(0.969170901563);
    msg.setSource(31460U);
    msg.setSourceEntity(206U);
    msg.setDestination(24897U);
    msg.setDestinationEntity(124U);
    msg.target.assign("WJTBDPJPHYWARELSUIMGWHHCSJMBXXYDUGWOVTMBZWLGDIQRPJWHQZNNNULKDEHERWWXMDXLIKNGRULDSCQTMFJBKOCYVRCHT");
    msg.x = 0.0564838821204;
    msg.y = 0.0805468367371;
    msg.z = 0.738241162397;
    msg.n = 0.321163160238;
    msg.e = 0.0735786048862;
    msg.d = 0.210638886092;
    msg.phi = 0.651667185146;
    msg.theta = 0.35174627809;
    msg.psi = 0.475950513378;
    msg.accuracy = 0.166652749131;

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
    msg.setTimeStamp(0.33926900915);
    msg.setSource(64236U);
    msg.setSourceEntity(56U);
    msg.setDestination(52403U);
    msg.setDestinationEntity(210U);
    msg.target.assign("MOISYGYFZHUKHSDTLLYEP");
    msg.x = 0.687386414173;
    msg.y = 0.654489614897;
    msg.z = 0.667130852421;
    msg.n = 0.903821093326;
    msg.e = 0.718144522652;
    msg.d = 0.714974200969;
    msg.phi = 0.506172576663;
    msg.theta = 0.0291568839802;
    msg.psi = 0.70812443457;
    msg.accuracy = 0.244164927357;

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
    msg.setTimeStamp(0.0662882312719);
    msg.setSource(16759U);
    msg.setSourceEntity(205U);
    msg.setDestination(49145U);
    msg.setDestinationEntity(29U);
    msg.target.assign("GKGLXCAHJEVYBVQFUOBKVJIDNMHCSUQPGOKABZMZVWMGGILCKOKNWMHWNIHDCEJLSCAQDQPTOP");
    msg.lat = 0.4766966613;
    msg.lon = 0.200698138382;
    msg.z_units = 72U;
    msg.z = 0.562570590802;
    msg.accuracy = 0.511040155385;

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
    msg.setTimeStamp(0.655320083418);
    msg.setSource(6369U);
    msg.setSourceEntity(19U);
    msg.setDestination(27242U);
    msg.setDestinationEntity(99U);
    msg.target.assign("RWWRZGFWXZFCCSIIATMVDKKEOIQAPOBMNKJSQXQZYANBGBGFRCRAHTRRZDXCBXRRMBSQETCCCYWSNLCLNNPFLYIHVIGBHDBXPMUUMHYFVZQHLBAHGDTEQZJDTMAXMPOUYCXLHUFTEQCQHVERNLNVFLHJAQTTNNBJWSPFODUODSMMYAVFJVOKBALEWUUPSHPZROWSPGIGUJXTPPIDIYJEOYVGGKXEFSUDVVZAQJJKENZYSLWDUJKMLEY");
    msg.lat = 0.777629499954;
    msg.lon = 0.952608139855;
    msg.z_units = 202U;
    msg.z = 0.438806840529;
    msg.accuracy = 0.510315663385;

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
    msg.setTimeStamp(0.196186179067);
    msg.setSource(40308U);
    msg.setSourceEntity(92U);
    msg.setDestination(40817U);
    msg.setDestinationEntity(77U);
    msg.target.assign("BXNRDRZJHGALFCZVIIPOMLQABVFLCYULZPUVJVQKKABXZAPXIRDHXTGDLHFTTGRQBMSNMDRMUSXQGFNPJJPRSEJLYHWUQTSBCWGVOBBXMHGOLDEXOKQHZKWAVREEJOL");
    msg.lat = 0.513148854038;
    msg.lon = 0.718467374262;
    msg.z_units = 14U;
    msg.z = 0.88516424471;
    msg.accuracy = 0.552606039042;

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
    msg.setTimeStamp(0.962731943976);
    msg.setSource(56960U);
    msg.setSourceEntity(96U);
    msg.setDestination(39618U);
    msg.setDestinationEntity(236U);
    msg.name.assign("VQKASEONWFRHSRLRCRYVZUADGMTCZQVRJMDWRLPTMVWYDBDWKYAPBOJZXWSUCJHAOIKKUWMNPJBXZTGRKTTDVYBMEVHIUJEMNPTSUGFGYWULXDZPOZSSVPRLJQCQZEQKXPSDNEOELCLHUGQOHXMWPCABLTQVSENFWIFJAGDQJMLABLLKNCHDSGQSKHBTBBYKUXPIRJOJNICQXGUIEIYMFAINZPFCYVNTZGAW");
    msg.lat = 0.424690346966;
    msg.lon = 0.808825882116;
    msg.z = 0.873293271383;
    msg.z_units = 18U;

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
    msg.setTimeStamp(0.0609317689897);
    msg.setSource(41183U);
    msg.setSourceEntity(170U);
    msg.setDestination(46695U);
    msg.setDestinationEntity(226U);
    msg.name.assign("RUKSJQDJGRCIZZBFWDPCLLBOJVKPKTBCEGKTXVRBHEBZCVWKFKTGAHMHI");
    msg.lat = 0.942908182449;
    msg.lon = 0.0709019049344;
    msg.z = 0.972373944837;
    msg.z_units = 192U;

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
    msg.setTimeStamp(0.616543932056);
    msg.setSource(5037U);
    msg.setSourceEntity(60U);
    msg.setDestination(46734U);
    msg.setDestinationEntity(190U);
    msg.name.assign("SEEUCXVJRGX");
    msg.lat = 0.392950000546;
    msg.lon = 0.336140935704;
    msg.z = 0.48546273451;
    msg.z_units = 46U;

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
    msg.setTimeStamp(0.589801311201);
    msg.setSource(59141U);
    msg.setSourceEntity(245U);
    msg.setDestination(18904U);
    msg.setDestinationEntity(121U);
    msg.op = 226U;

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
    msg.setTimeStamp(0.676024257312);
    msg.setSource(11175U);
    msg.setSourceEntity(38U);
    msg.setDestination(57948U);
    msg.setDestinationEntity(36U);
    msg.op = 32U;

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
    msg.setTimeStamp(0.77091735265);
    msg.setSource(966U);
    msg.setSourceEntity(100U);
    msg.setDestination(20243U);
    msg.setDestinationEntity(194U);
    msg.op = 239U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("NYVZQMAECSCDQWZR");
    tmp_msg_0.lat = 0.804931249568;
    tmp_msg_0.lon = 0.736285125996;
    tmp_msg_0.z = 0.900876590836;
    tmp_msg_0.z_units = 229U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.129078494495);
    msg.setSource(47043U);
    msg.setSourceEntity(52U);
    msg.setDestination(774U);
    msg.setDestinationEntity(213U);
    msg.value = 0.527191634297;
    msg.type = 170U;

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
    msg.setTimeStamp(0.66859802569);
    msg.setSource(61336U);
    msg.setSourceEntity(189U);
    msg.setDestination(46316U);
    msg.setDestinationEntity(193U);
    msg.value = 0.759353250946;
    msg.type = 105U;

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
    msg.setTimeStamp(0.610551694295);
    msg.setSource(47063U);
    msg.setSourceEntity(150U);
    msg.setDestination(59060U);
    msg.setDestinationEntity(53U);
    msg.value = 0.198837228511;
    msg.type = 27U;

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
    msg.setTimeStamp(0.594378595084);
    msg.setSource(53311U);
    msg.setSourceEntity(23U);
    msg.setDestination(55937U);
    msg.setDestinationEntity(189U);
    msg.value = 0.371568512687;

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
    msg.setTimeStamp(0.249599308935);
    msg.setSource(4448U);
    msg.setSourceEntity(71U);
    msg.setDestination(17425U);
    msg.setDestinationEntity(210U);
    msg.value = 0.35749038842;

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
    msg.setTimeStamp(0.805523354565);
    msg.setSource(17729U);
    msg.setSourceEntity(60U);
    msg.setDestination(10294U);
    msg.setDestinationEntity(107U);
    msg.value = 0.991478388944;

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
    msg.setTimeStamp(0.0206090283551);
    msg.setSource(43666U);
    msg.setSourceEntity(185U);
    msg.setDestination(27370U);
    msg.setDestinationEntity(193U);
    msg.timestamp_last_service = 0.170993358925;
    msg.time_next_service = 0.295749700009;
    msg.time_motor_next_service = 0.0965584338133;
    msg.time_idle_ground = 0.776470409592;
    msg.time_idle_air = 0.995087759162;
    msg.time_idle_water = 0.261938860296;
    msg.time_idle_underwater = 0.955009677532;
    msg.time_idle_unknown = 0.212742283754;
    msg.time_motor_ground = 0.634093059562;
    msg.time_motor_air = 0.653567246907;
    msg.time_motor_water = 0.520501355865;
    msg.time_motor_underwater = 0.110976288177;
    msg.time_motor_unknown = 0.0882743314895;
    msg.rpm_min = -30380;
    msg.rpm_max = 32331;
    msg.depth_max = 0.770156368907;

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
    msg.setTimeStamp(0.386816713586);
    msg.setSource(24200U);
    msg.setSourceEntity(65U);
    msg.setDestination(45923U);
    msg.setDestinationEntity(175U);
    msg.timestamp_last_service = 0.826667461548;
    msg.time_next_service = 0.456499975718;
    msg.time_motor_next_service = 0.780839879825;
    msg.time_idle_ground = 0.352644011337;
    msg.time_idle_air = 0.953186390999;
    msg.time_idle_water = 0.101301670963;
    msg.time_idle_underwater = 0.0259007710788;
    msg.time_idle_unknown = 0.529709641576;
    msg.time_motor_ground = 0.528891060633;
    msg.time_motor_air = 0.766594396331;
    msg.time_motor_water = 0.164043219192;
    msg.time_motor_underwater = 0.188650575925;
    msg.time_motor_unknown = 0.22914983769;
    msg.rpm_min = -28301;
    msg.rpm_max = 1663;
    msg.depth_max = 0.856790635207;

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
    msg.setTimeStamp(0.986155813887);
    msg.setSource(40543U);
    msg.setSourceEntity(140U);
    msg.setDestination(35981U);
    msg.setDestinationEntity(237U);
    msg.timestamp_last_service = 0.937810105397;
    msg.time_next_service = 0.428971868067;
    msg.time_motor_next_service = 0.0812518043047;
    msg.time_idle_ground = 0.493409094006;
    msg.time_idle_air = 0.829687797548;
    msg.time_idle_water = 0.458811192744;
    msg.time_idle_underwater = 0.35439029546;
    msg.time_idle_unknown = 0.697718227035;
    msg.time_motor_ground = 0.333164087779;
    msg.time_motor_air = 0.581425569252;
    msg.time_motor_water = 0.730338234127;
    msg.time_motor_underwater = 0.493472510755;
    msg.time_motor_unknown = 0.289582498027;
    msg.rpm_min = 6564;
    msg.rpm_max = 17912;
    msg.depth_max = 0.864279112607;

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
    msg.setTimeStamp(0.567331555987);
    msg.setSource(45139U);
    msg.setSourceEntity(16U);
    msg.setDestination(18933U);
    msg.setDestinationEntity(22U);
    msg.severity = 154U;
    msg.text.assign("NTKJHPBTSCDFBRWRDZKHYNGGNNOHWAUSYIDXNCNVZXVUEYDCGXGOZUOEXSWIAULOFZOWICLUZRTPGWQGEOBCWOECJQPLTFLXSVZVHASEGTTQEZMIXFIQRRMJODVCUPYVBQAYAUKVAATZTJMHBMLEHQPPKGSXNIMKCRQBVSFCJKTVRBOM");

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
    msg.setTimeStamp(0.538961813328);
    msg.setSource(57980U);
    msg.setSourceEntity(175U);
    msg.setDestination(25228U);
    msg.setDestinationEntity(33U);
    msg.severity = 206U;
    msg.text.assign("YSCFHNOKOHOAKKOEZZPCOCDYKMNYRTOCUMGCBFLXMDHWNLIJDHHZAGRPJHJEGGTQXSUSXALWYQRYDYVVUEKNRFXIDLLGKMEFABIAYDLYXEECORDSLPFMIVWDURTSBVCJAEKMUSMZQKCLVXZWTDIJ");

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
    msg.setTimeStamp(0.710227565175);
    msg.setSource(57303U);
    msg.setSourceEntity(85U);
    msg.setDestination(781U);
    msg.setDestinationEntity(202U);
    msg.severity = 249U;
    msg.text.assign("MLWGEDDHNBNYONIUZAXYJGUBPVHBPAWZYSDPKJZJONRMPSSMWXUQFTZAKECNYKLTNBXVNTCUNLCOECVPVTGBVIWFEARXHLPGHUSFHTIDRUQVSLAFVMXRKWQWGROGQZFZBNMDMWUJDHAMBTIQSJBYLYMVPUOCVXAIGTUBJSLNYIMZ");

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
    msg.setTimeStamp(0.151438200259);
    msg.setSource(15092U);
    msg.setSourceEntity(173U);
    msg.setDestination(21303U);
    msg.setDestinationEntity(62U);
    msg.channel = 33;
    msg.value = -45726269;
    msg.gain = 121U;

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
    msg.setTimeStamp(0.268332735885);
    msg.setSource(20195U);
    msg.setSourceEntity(45U);
    msg.setDestination(54601U);
    msg.setDestinationEntity(10U);
    msg.channel = -43;
    msg.value = -947607092;
    msg.gain = 50U;

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
    msg.setTimeStamp(0.830109566568);
    msg.setSource(5113U);
    msg.setSourceEntity(154U);
    msg.setDestination(12160U);
    msg.setDestinationEntity(140U);
    msg.channel = -11;
    msg.value = -22707254;
    msg.gain = 156U;

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
    msg.setTimeStamp(0.99999944154);
    msg.setSource(3618U);
    msg.setSourceEntity(11U);
    msg.setDestination(42542U);
    msg.setDestinationEntity(185U);
    msg.ch01 = 0.412253333253;
    msg.ch02 = 0.304804761832;
    msg.ch03 = 0.355575452854;
    msg.ch04 = 0.968664643745;
    msg.ch05 = 0.931006194708;
    msg.ch06 = 0.339462496777;
    msg.ch07 = 0.477696565941;
    msg.ch08 = 0.587088185021;
    msg.ch09 = 0.854825965404;
    msg.ch10 = 0.369332753332;
    msg.ch11 = 0.895842300009;
    msg.ch12 = 0.454072417056;
    msg.ch13 = 0.765925702459;
    msg.ch14 = 0.490180147238;
    msg.ch15 = 0.577212111039;
    msg.ch16 = 0.390092566819;

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
    msg.setTimeStamp(0.0926678641428);
    msg.setSource(42651U);
    msg.setSourceEntity(112U);
    msg.setDestination(7509U);
    msg.setDestinationEntity(100U);
    msg.ch01 = 0.596823638111;
    msg.ch02 = 0.746996744421;
    msg.ch03 = 0.376008531485;
    msg.ch04 = 0.183318359177;
    msg.ch05 = 0.274025954637;
    msg.ch06 = 0.360765106045;
    msg.ch07 = 0.995159617054;
    msg.ch08 = 0.292732242171;
    msg.ch09 = 0.991342547278;
    msg.ch10 = 0.613927238203;
    msg.ch11 = 0.161273051603;
    msg.ch12 = 0.693223384841;
    msg.ch13 = 0.0318115002257;
    msg.ch14 = 0.912492406227;
    msg.ch15 = 0.990095802281;
    msg.ch16 = 0.101368452271;

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
    msg.setTimeStamp(0.696997985902);
    msg.setSource(34252U);
    msg.setSourceEntity(251U);
    msg.setDestination(39810U);
    msg.setDestinationEntity(78U);
    msg.ch01 = 0.866754181301;
    msg.ch02 = 0.360849614577;
    msg.ch03 = 0.86509291139;
    msg.ch04 = 0.194054157089;
    msg.ch05 = 0.648304978657;
    msg.ch06 = 0.869818491635;
    msg.ch07 = 0.371532161844;
    msg.ch08 = 0.628693805976;
    msg.ch09 = 0.879583674421;
    msg.ch10 = 0.816391579546;
    msg.ch11 = 0.855127588144;
    msg.ch12 = 0.815127382223;
    msg.ch13 = 0.0068559284287;
    msg.ch14 = 0.93989846738;
    msg.ch15 = 0.335939527931;
    msg.ch16 = 0.741092802565;

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
    msg.setTimeStamp(0.432057773091);
    msg.setSource(63514U);
    msg.setSourceEntity(79U);
    msg.setDestination(63521U);
    msg.setDestinationEntity(111U);
    msg.value = 0.0930244383822;

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
    msg.setTimeStamp(0.283403327747);
    msg.setSource(37490U);
    msg.setSourceEntity(227U);
    msg.setDestination(24105U);
    msg.setDestinationEntity(33U);
    msg.value = 0.601382373068;

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
    msg.setTimeStamp(0.476785842723);
    msg.setSource(13886U);
    msg.setSourceEntity(131U);
    msg.setDestination(10516U);
    msg.setDestinationEntity(20U);
    msg.value = 0.998033920699;

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
    msg.setTimeStamp(0.907801658823);
    msg.setSource(41535U);
    msg.setSourceEntity(3U);
    msg.setDestination(41872U);
    msg.setDestinationEntity(221U);
    msg.op = 51U;
    msg.lat = 0.452858962754;
    msg.lon = 0.61027066492;
    msg.height = 0.851545786125;
    msg.depth = 0.0905889955321;
    msg.alt = 0.642499703036;

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
    msg.setTimeStamp(0.897104305423);
    msg.setSource(38565U);
    msg.setSourceEntity(180U);
    msg.setDestination(48531U);
    msg.setDestinationEntity(248U);
    msg.op = 179U;
    msg.lat = 0.953602856322;
    msg.lon = 0.438245722292;
    msg.height = 0.788814083668;
    msg.depth = 0.267473062888;
    msg.alt = 0.766172182712;

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
    msg.setTimeStamp(0.455665585786);
    msg.setSource(10696U);
    msg.setSourceEntity(158U);
    msg.setDestination(31958U);
    msg.setDestinationEntity(9U);
    msg.op = 46U;
    msg.lat = 0.518723547117;
    msg.lon = 0.599891629492;
    msg.height = 0.812089208247;
    msg.depth = 0.504797878707;
    msg.alt = 0.223133426138;

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
