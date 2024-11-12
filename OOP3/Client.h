#pragma once
#include <iostream>
#include <string>
#include "Catalog.h"
using namespace std;
class Client
{
	
private:
	string surname;
	string name;
	string pobatk;
	string date_zamov;
	bool gender;
	string nomer_phone;
	int age;
	
	string& city; //2. Задання поля через посилання
	static int count; //3. Статичне поле
	int id;
public:
	int GetId()
	{
		return id;
	}
	static int Getcount() //3. Статичний метод
	{
		return count;
	}
	void setsur(string surname)
	{
		this->surname = surname;
	}
	string getsur()
	{
		return surname;
	}

	void setname(string name)
	{
		this->name = name;
	}
	string getname()
	{
		return name;
	}

	void setpobat(string pobatk)
	{
		this->pobatk = pobatk;
	}
	string getpobat()
	{
		return pobatk;
	}
	//1. Конструктор з параметрами з використанням списку ініціалізації
	Client(string date_zamov, bool gender, string nomer_phone, int age, string& city) : date_zamov(date_zamov), gender(gender), nomer_phone(nomer_phone), age(age),  city(city)
	{
		count++;
		id = count;
	}
	//1. Конструктор копіювання
	Client(const Client& other) : city(other.city)
	{
		surname = other.surname;
		name = other.name;
		pobatk = other.pobatk;
		date_zamov = other.date_zamov;
		gender = other.gender;
		nomer_phone = other.nomer_phone;
		age = other.age;
		city = other.city;
		count++;
		id = count;
		
	}
	

	
	void show_client(void);
	void audit(bool a);
	void audit(int age);

	void write(string sur, string nam, string pob, string dat, bool gen, string nom, int ag);

	void read();

	void Sort_Random(int fieldIndex);
};

