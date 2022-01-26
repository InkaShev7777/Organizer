#pragma once
#include<iostream>
class Task
{
	std::string title;
	int day;
	int month;
	int year;
	std::string address;
	bool isAlpha(std::string str)
	{
		const char* ch = str.c_str();
		int f = 0;
		for (int i = 0;i < str.length();i++)
		{
			if (ch[i] > '0' && ch[i] < '9')
			{
				f = 1;
			}
			else
			{
				f = 0;
			}
			if (f == 1)
			{
				return true;
			}
		}
	}
public:
	Task()
	{
		this->address = nullptr;
		this->day = 0;
		this->month = 0;
		this->title = nullptr;
		this->year = 0;
		
	}
	Task(std::string title,int day,int month,int year,std::string address)
	{
		try
		{
			if (isAlpha(title) == 1)
			{
				throw "Error title";
			}
			if (day < 0 || day > 31)
			{
				throw "Error day";
			}
			if (month < 1 || month > 12)
			{
				throw "Error month";
			}
			if (year < 1900 || year > 2025)
			{
				throw"Error year";
			}
			this->day = day;
			this->month = month;
			this->title = title;
			this->year = year;
			this->address = address;
			std::cout << "\n\t\tSuccessful Addition\n\n\n";
		}
		catch (const char* ex)
		{
			std::cout << ex << "\n";
		}
	}
	void setTitle(std::string task)
	{
		try
		{
			if (isAlpha(task) == 1)
			{
				throw "Error task";
			}
			this->title = task;
		}
		catch (const char* ex)
		{
			std::cout << ex << "\n";
		}
	}
	void setDay(int day)
	{
		try
		{
			if (day < 1 || day>31)
			{
				throw"Error day";
			}
			this->day = day;
		}
		catch (const char* ex)
		{
			std::cout << ex << "\n";
		}
	}
	void setMonth(int month)
	{
		try
		{
			if (month < 1 || month > 12)
			{
				throw"Error month";
			}
			this->month = month;
		}
		catch (const char* ex)
		{
			std::cout << ex << "\n";
		}
	}
	void setYear(int year)
	{
		try
		{
			if (year < 1900 || year > 2040)
			{
				throw"Error year";
			}
			this->year = year;
		}
		catch (const char* ex)
		{
			std::cout << ex << "\n";
		}
	}
	void setAddress(std::string address)
	{
		this->address = address;
	}
	std::string getTitle()
	{
		return (std::string)this->title;
	}
	virtual void print()
	{
		std::cout <<"Title: "<< this->title << "\tDay: " << this->day << "\tMonth: " << this->month << "\tYear: " << this->year 
			<< "\tAddress: " << this->address << "\n";
	}
};

