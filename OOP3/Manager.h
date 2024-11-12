#pragma once
#include <iostream>
#include <string>
using namespace std;
class Manager
{
private:
	string surname;
	string name;
	string pobatk;
	int year_vstup_work;
	string email;

	string phone;
	string gender;
	string city;
public:
	Manager(string surname, string name, string pobatk, int year_vstup_work, string email, string phone, string gender, string city) : surname(surname), name(name), pobatk(pobatk), year_vstup_work(year_vstup_work), email(email), gender(gender), city(city)
	{

	}
};


