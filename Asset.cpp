#include "Asset.h"
#define MIN_BUY 50
#define MAX_BUY 150
#define MIN_RENT 5
#define MAX_RENT 50

//constractor
Asset::Asset(int num=0, string city="",string asset_name = "") {
	m_city = city;
	m_asset_name = asset_name;
	Slut_Num = num;
	buy_price = rand()%(MAX_BUY - MIN_BUY + 1) + MIN_BUY;
	rent_price = rand() % (MAX_RENT - MIN_RENT + 1) + MIN_RENT;
	free_flag = 1;// the asset is free
}

//destractor
Asset::~Asset() {
}

//copy constractor
Asset::Asset(const Asset& other)
{
	m_city = other.m_city;
	m_asset_name = other.m_asset_name;
	Slut_Num = other.Slut_Num;
	buy_price = other.buy_price;
	rent_price = other.rent_price;
	free_flag = other.free_flag;
}

bool Asset::play() {
	if (free_flag == 0)
	{//asset is not free
		if (pay_rent(rent_price) == false)
			return false;
	}
	else
	{
		int a;
		cout << "do you want to buy the asset? "
			"yes (1) no(0):" << endl;
		cin >> a;
		if(a==1)
			add_asset()//jbbocjn

	}
}

string Asset::get_name() {
	return m_asset_name;
}
