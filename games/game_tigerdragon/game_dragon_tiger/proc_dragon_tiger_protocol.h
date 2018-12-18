#pragma once
#include <net\packet_manager.h>
#include <dragon_tiger_protocol.pb.h>
#include <net\peer_tcp.h>

class i_game_player;
using namespace dragon_tiger_protocols;

void init_proc_dragon_tiger_protocol();

PACKET_REGEDIT_RECVGATE_LOG(peer_tcp, packetc2l_get_room_info, i_game_player);
PACKET_REGEDIT_SEND(packetl2c_get_room_info_result);

PACKET_REGEDIT_RECVGATE_LOG(peer_tcp, packetc2l_enter_table, i_game_player);
PACKET_REGEDIT_SEND(packetl2c_enter_table_result);

PACKET_REGEDIT_RECVGATE_LOG(peer_tcp, packetc2l_leave_table, i_game_player);
PACKET_REGEDIT_SEND(packetl2c_leave_table_result);

PACKET_REGEDIT_RECVGATE_LOG(peer_tcp, packetc2l_check_state, i_game_player);
PACKET_REGEDIT_SEND(packetl2c_check_state_result);