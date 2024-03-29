// game_fishlord.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "game_robcows.h"
#include "game_engine.h"
#include <net/packet_manager.h>

GAME_ROBCOWS_API void* get_game_engine()
{
	return &game_engine::instance();
}


GAME_ROBCOWS_API void* get_packet_mgr()
{
	return &packet_manager::instance();
}