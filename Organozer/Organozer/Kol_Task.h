#pragma once
#include"Task.h"
struct Node
{
	Node* next;
	Task* name;
	Node() {}
	Node(Task* task)
	{
		this->next = nullptr;
		this->name = task;
	}
};
class Kol_Task
{
	Node* head;
	int size;
public:
	Kol_Task()
	{
		this->head = nullptr;
		this->size = 0;
	}
	void Add(Task* task)
	{
		Node* tmp = this->head;
		if (tmp == nullptr)
		{
			tmp = new Node(task);
			this->head = tmp;
			this->size++;
		}
		else
		{
			while (tmp->next!=nullptr)
			{
				tmp = tmp->next;
			}
			tmp->next = new Node(task);
			this->size++;
		}
	}
	void Shoow()
	{
		Node* iter = this->head;
		while (iter != nullptr)
		{
			iter->name->print();
			iter = iter->next;
		}
	}
	void Dell(int ind)
	{
		if (ind > this->size || ind < 1)
		{
			throw "Error index";
		}
		Node* iter = this->head;
		int f = 0;
		if (ind == 1)
		{
			this->head = iter->next;
			size--;
			return;
		}
		else
		{
			for (int i = 1;i < ind - 1;i++)
			{
				iter = iter->next;
				f++;
			}
			iter->next = iter->next->next;
		}
		if (ind == size)
		{
			iter->next = nullptr;
		}
		size--;
	}
	void setTitle(std::string title,int ind)
	{
		int f = 0;
		Node* iter = this->head;
		if (ind < 1 || ind> this->size)
		{
			throw "Error index";
		}
		else
		{
			for (int i = 1;i < ind;i++)
			{
				iter = iter->next;
			}
			iter->name->setTitle(title);
		}
	}
	void setDay(int day, int ind)
	{
		Node* iter = this->head;
		if (ind < 1 || ind> this->size)
		{
			throw "Error index";
		}
		else
		{
			for (int i = 1;i < ind;i++)
			{
				iter = iter->next;
			}
			iter->name->setDay(day);
		}
	}
	void setMonth(int month, int ind)
	{
		Node* iter = this->head;
		if (ind < 1 || ind> this->size)
		{
			throw "Error index";
		}
		else
		{
			for (int i = 1;i < ind;i++)
			{
				iter = iter->next;
			}
			iter->name->setMonth(month);
		}
	}
	void setYear(int ind, int year)
	{
		Node* iter = this->head;
		if (ind < 1 || ind> this->size)
		{
			throw "Error index";
		}
		else
		{
			for (int i = 1;i < ind;i++)
			{
				iter = iter->next;
			}
			iter->name->setYear(year);
		}
	}
	void setAddress(int ind, std::string address)
	{
		Node* iter = this->head;
		for (int i = 1;i < ind;i++)
		{
			iter = iter->next;
		}
		iter->name->setAddress(address);
	}
};

