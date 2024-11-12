// OOP3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iostream>
#include <string>
#include "Client.h"
#include "Catalog.h"
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#ifdef _WIN32
#include <windows.h>  
#endif
using namespace std;

int Client::count = 0;

void Client::show_client(void)
{
	cout << GetId() << endl;
	cout << surname << endl;
	cout << name << endl;
	cout << pobatk << endl;
	cout << date_zamov << endl;
	cout << city << endl;
}
void Client::audit(bool a)
{
	if (a == 1)
	{
		cout << "Вибирайте серед наявних чоловічу стрижку" << endl;
	}
	else
	{
		cout << "Вибирайте серед наявних жіночу стрижку" << endl;
	}
}

void Client::audit(int age)
{
	if (age < 18)
	{
		cout << "Вартість стрижки на 20% дешевша" << endl;

	}
	else
	{
		cout << "Вартість стрижки без знижок " << endl;
	}
}

void Client::write(string sur, string nam, string pob, string dat, bool gen, string nom, int ag)
{
	ofstream student_file("INFO.DAT", ios::app);
	student_file << sur << endl;
	student_file << nam << endl;
	student_file << pob << endl;
	student_file << dat << endl;
	student_file << gen << endl;
	student_file << nom << endl;
	student_file << ag << endl;
	student_file << city << endl;

}

void Client::read()
{
	ifstream student_file("INFO.DAT");
	if (!student_file.is_open())
	{
		cout << "Не вдалося відкрити файл INFO.DAT" << endl;
		return;
	}
	
	string file_city;
	
	student_file.ignore();
	//student_file >> id;
	getline(student_file, surname);
	getline(student_file, name);
	getline(student_file, pobatk);
	getline(student_file, date_zamov);
	student_file >> gender;
	getline(student_file, nomer_phone);
	student_file >> age;
	getline(student_file, file_city);
	
	cout << "Читання з файлу" << endl;
	cout << surname << endl;
	cout << name << endl;
	cout << pobatk << endl;
	cout << date_zamov << endl;
	cout << file_city << endl;
}

void Client::Sort_Random(int count)
{
	srand(static_cast<unsigned int>(time(nullptr))); // Ініціалізація генератора випадкових чисел
	int* ages = new int[count]; // Виділення динамічної пам'яті для масиву

	for (int i = 0; i < count; ++i)
	{
		ages[i] = rand() % 100; // Генерація віку від 0 до 99
	}

	// Сортування масиву
	sort(ages, ages + count);

	// Виведення відсортованих значень
	cout << "Відсортовані значення віку:" << endl;
	for (int i = 0; i < count; ++i)
	{
		cout << ages[i] << " ";
	}
	cout << endl;

	// Звільнення виділеної пам'яті
	delete[] ages;
}
void HairDress::show_client(void)
{
	cout << surname << endl;
	cout << name << endl;
	cout << pobatk << endl;
	cout << year_vstup_work << endl;
	
}

//4. Функція поза межами класу, яка в якості параметрів використовує об'єкт класу
int Experince(HairDress& hairdress)
{
	return hairdress.year - hairdress.year_vstup_work;
}
//5. Функція, яка повертає об'єкт класу
Client CreateClient(string sur, string nam, string pob, string dat, bool gen, string nom, int ag, string& city) {
	Client newClient(dat, gen, nom, ag, city);
	newClient.setsur(sur);
	newClient.setname(nam);
	newClient.setpobat(pob);
	return newClient;
}

int main()
{
#ifdef _WIN32
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
#endif
	string city = "Kyiv";
	//6. Масив об'єктів
	Client clients[2]{Client("2024-10-22", false, "", 29,  city), Client("2024-10-23", false, "", 29, city) };
	clients[0].setsur("Petrova");
	clients[0].setname("Alina");
	clients[0].setpobat("Ivanivna");
	

	clients[1].setsur("Petrova");
	clients[1].setname("Alina");
	clients[1].setpobat("Ivanivna");
	
	cout << "Виведення через масив" << endl;
	for (int i = 0; i < 2; i++) {
		clients[i].show_client();
		cout << "-------------------" << endl;
	}


	Client client("2024-10-22", false, "", 29,  city);
	client.GetId();
	client.setsur("Ivanov");
	client.setname("Ivan");
	client.setpobat("Ivanovich");
	

	Client client5("2024-10-22", false, "", 29,  city);
	client5.GetId();
	client5.setsur("Petrova");
	client5.setname("Alina");
	client5.setpobat("Ivanivna");
	
	Client client6("2024-10-22", false, "", 29, city);
	client6.GetId();
	client6.setsur("Petrova");
	client6.setname("Alina");
	client6.setpobat("Ivanivna");
	
	Client client7("2024-10-22", false, "", 29, city);
	client7.GetId();
	client7.setsur("Petrova");
	client7.setname("Alina");
	client7.setpobat("Ivanivna");
	
	Client client8("2024-10-22", false, "", 29, city);
	client8.GetId();
	client8.setsur("Ivanov");
	client8.setname("Ivan");
	client8.setpobat("Ivanovich");
	

	//6. Покажчик на екземпляр класу та розміщення об'єктів у динамічній пам'яті
	Client* client2 = new Client("2024-10-22", false, "", 29, city);
	client2->GetId();
	client2->setsur("Ivanov");
	client2->setname("Ivan");
	client2->setpobat("Ivanovich");
	
	Client* client3 = new Client("2024-10-22", false, "", 29,  city);
	client3->GetId();
	client3->setsur("Ivanov");
	client3->setname("Ivan");
	client3->setpobat("Ivanovich");
	
	Client* client4 = new Client("2024-10-22", false, "", 29,  city);
	client4->GetId();
	client4->setsur("Ivanov");
	client4->setname("Ivan");
	client4->setpobat("Ivanovich");
	
	Client* client9 = new Client("2024-10-22", false, "", 29,  city);
	client9->GetId();
	client9->setsur("Ivanov");
	client9->setname("Ivan");
	client9->setpobat("Ivanovich");
	
	Client* client10 = new Client("2024-10-22", false, "", 29,  city);
	client10->GetId();
	client10->setsur("Ivanov");
	client10->setname("Ivan");
	client10->setpobat("Ivanovich");
	


	cout << "Виведення одного екземпляра класу" << endl;
	client.show_client();

	
	cout << "\nПеревірка статі клієнта:" << endl;
	client.audit(false);

	cout << "\nПеревірка віку клієнта для знижки:" << endl;
	client.audit(29);




	client2->write(client2->getsur(), client2->getname(), client2->getpobat(), "2024-10-22", false, "", 29);
	client2->read();
	client2->Sort_Random(22);
	cout << "Загальна кількість клієнтів " << Client::Getcount() << endl;
	
	delete client2;
	delete client3;
	delete client4;
	delete client9;
	delete client10;
	Client original("2024-10-25", false, "123456789", 29,  city);

	original.setsur("Petrova");
	original.setname("Alina");
	original.setpobat("Ivanivna");
	Client copy(original);
	cout << "Копія" << endl;
	copy.show_client();
	int year_vstup_w1 = 2012;
	int year_vstup_w2 = 2019;
	HairDress hairdress1("Petrov", "Petro", "Petrovich", year_vstup_w1, 2024);
	cout << "______________________" << endl;
	cout << "Перукар " << endl;
	hairdress1.show_client();
	cout << "Досвід роботи: " << Experince(hairdress1) << endl;
	HairDress hairdress2("Sidorov", "Petro", "Petrovich", year_vstup_w2, 2024);
	hairdress2.show_client();
	cout << "Досвід роботи: " << Experince(hairdress2) << endl;
	cout << "Виклик функції яка повертає об'єкти класу Client" << endl;
	Client cl = CreateClient("Ivanov", "Ivan", "Ivanovich", "2024-10-22", true, "", 30, city);
	cl.show_client();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
