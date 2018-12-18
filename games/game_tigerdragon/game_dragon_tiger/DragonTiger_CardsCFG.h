#pragma once
#include <boost/unordered_map.hpp>
#include <vector>
struct DragonTiger_CardsCFGData
{
	//房间id
	int mCardsID;
	//牌名称
	std::string mCardsName;
	//牌倍率
	int mCardsRate;
	//牌类型
	std::string mCardsTypeStr;
	//声音ID
	int mSoundID;
	//动画
	std::string mCardsAnimation;
};

class DragonTiger_CardsCFG
{
public:
private:
	static std::auto_ptr<DragonTiger_CardsCFG> msSingleton;
public:
	int GetCount();
	const DragonTiger_CardsCFGData* GetData(int CardsID);
	boost::unordered_map<int, DragonTiger_CardsCFGData>& GetMapData();
	void Reload();
	void Load();
	static DragonTiger_CardsCFG* GetSingleton();
private:
	boost::unordered_map<int, DragonTiger_CardsCFGData> mMapData;
};
