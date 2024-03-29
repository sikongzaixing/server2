#pragma once
#include <boost/unordered_map.hpp>
#include <vector>
struct DragonTiger_RoomStockCFGData
{
	//房间id
	int mRoomID;
	//赢钱抽水
	float mDeduct_1;
	//输钱抽水
	float mDeduct_2;
	//默认库存
	int mDefaultStock;
	//库存水位
	std::vector<int> mStock;
	//改变效果
	std::vector<int> mChangeBuff;
	//开放机器人
	int mIsOpen;
	//机器人数量
	int mRobotMinCount;
	//机器人数量
	int mRobotMaxCount;
	//机器人VIP
	int mRobotMinVip;
	//机器人VIP
	int mRobotMaxVip;
	//机器人时间
	int mRobotMinLifeTime;
	//机器人时间
	int mRobotMaxLifeTime;
	//上庄金钱
	int mRobotBankerGold;
	//系统上庄下注
	int mRobotSystemMaxBet;
	//系统上庄下注
	int mRobotSystemMinBet;
	//玩家上庄下注(百分比)
	int mRobotPlayerMinBet;
	//玩家上庄下注(百分比)
	int mRobotPlayerMaxBet;
	//机器人上庄下注(百分比)
	int mRobotRobotMinBet;
	//机器人上庄下注(百分比)
	int mRobotRobotMaxBet;
};

class DragonTiger_RoomStockCFG
{
public:
private:
	static std::auto_ptr<DragonTiger_RoomStockCFG> msSingleton;
public:
	int GetCount();
	const DragonTiger_RoomStockCFGData* GetData(int RoomID);
	boost::unordered_map<int, DragonTiger_RoomStockCFGData>& GetMapData();
	void Reload();
	void Load();
	static DragonTiger_RoomStockCFG* GetSingleton();
private:
	boost::unordered_map<int, DragonTiger_RoomStockCFGData> mMapData;
};
