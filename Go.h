#pragma once
#include <string>
#include <iostream>
#include "Slot.h"
using namespace std;

class Go : public Slot
{
protected:
	string m_text;
	int m_size;

public:
	Go::Go(int size = 0, string text = "");
	bool Go::play();
	string Go::get_name();


};
