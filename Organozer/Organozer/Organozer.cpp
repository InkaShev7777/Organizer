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
	do
	{
		cout << "\t\tMemu\n";
		cout << "1 - Add task\n";
		cout << "2 - Shoow task\n";
		cout << "3 - Dell task\n";
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

		kt.Dell("Ilya");
			break;
		}
		
		//cout<<kt.str_str("Ilya");

	} while (vibor != 0);
	
}

