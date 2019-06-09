#pragma once
#include <string>
#include <iostream>
#include "Slot.h"
using namespace std;

class Asset : public Slot
{
protected:
	string m_city;
	string m_asset_name;
	int buy_price;
	int rent_price;
	int free_flag;

public:
	Asset::Asset(int num = 0, string city = "", string asset_name = "");
	Asset::~Asset();
	Asset::Asset(const Asset& other);
	bool Asset::play();
	string Asset::get_name();


};


