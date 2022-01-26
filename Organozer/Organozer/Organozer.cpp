#include <iostream>
#include"Task.h"
#include"Kol_Task.h"
using namespace std;
int main()
{
	Kol_Task kt;
	Task* task;
	string taskk,address;
	int day,month,year;
	int vibor;
	int day_set;
	int index;
	int ind;
	string title;
	do
	{
		cout << "\t\tMemu\n";
		cout << "1 - Add task\n";
		cout << "2 - Shoow task\n";
		cout << "3 - Dell task\n";
		cout << "4 - Set title\n";
		cout << "5 - Set day\n";
		cout << "6 - Set month\n";
		cout << "7 - Set year\n";
		cout << "8 - Set address\n";
		cout << "0 - Exit\n";
		cout << "Vibor: ";
		cin >> vibor;
		switch (vibor)
		{
		case 1:
			system("cls");
			cout << "Enter task: ";
			cin >> taskk;
			cout << "Enter day: ";
			cin >> day;
			cout << "Enter month: ";
			cin >> month;
			cout << "Enter year: ";
			cin >> year;
			cout << "Enter address: ";
			cin >> address;
			task = new Task(taskk, day, month, year, address);
			kt.Add(task);
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
			kt.Shoow();
			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");
			cout << "Enter index: ";
			cin >> ind;
			try
			{
			kt.Dell(ind);
			}
			catch (const char* ex)
			{
				cout << ex << "\n";
			}
			system("pause");
			system("cls");
			break;
		case 4:
			system("cls");
			cout << "Enter index: ";
			cin >> ind;
			cout << "Enter title: ";
			cin >> title;
			try
			{
				kt.setTitle(title, ind);
			}
			catch (const char* ex)
			{
				cout << ex << "\n";
			}
			system("pause");
			system("cls");
			break;
		case 5:
			system("cls");
			cout << "Enter index: ";
			cin >> ind;
			cout << "Enter day: ";
			cin >> day;
			try
			{
				kt.setDay(day, ind);
			}
			catch (const char* ex)
			{
				cout << ex << "\n";
			}
			system("pause");
			system("cls");
			break;
		case 6:
			system("cls");
			cout << "Enter index: ";
			cin >> ind;
			cout << "Enter month: ";
			cin >> month;
			try
			{
				kt.setMonth(month, ind);
			}
			catch (const char* ex)
			{
				cout << ex << "\n";
			}
			system("pause");
			system("cls");
			break;
		case 7:
			system("cls");
			cout << "Enter index: ";
			cin >> ind;
			cout << "Enter year: ";
			cin >> year;
			try
			{
				kt.setYear(ind, year);
			}
			catch (const char* ex)
			{
				cout << ex << "\n";
			}
			system("pause");
			system("cls");
			break;
		case 8:
			system("cls");
			cout << "Enter ind: ";
			cin >> ind;
			cout << "Enter address: ";
			cin >> address;
			kt.setAddress(ind, address);
			system("pause");
			system("cls");
			break;
		}
	} while (vibor != 0);
	
}

