#pragma once
#include <iostream>
#include <string>
#include "HairDress.h"
using namespace std;
class Work_Schedule
{
private:
	//HairDress hairdress;
	string day;
	string oklok;
public:
	Work_Schedule(string day, string oklok)
	{
		this->day = day;
		this->oklok = oklok;
	}
};

