#pragma once
#include <iostream>
#include <string>
using namespace std;
class HairDress
{
private:
	string surname;
	string name;
	string pobatk;
	const int year_vstup_work;
	int year;
public:
	HairDress(string surname, string name, string pobatk, const int year_vstup_work, int year) : surname(surname), name(name), pobatk(pobatk), year_vstup_work(year_vstup_work), year(year)
	{

	}
	void show_client(void);
	friend int Experince(HairDress& hairdress);
};

