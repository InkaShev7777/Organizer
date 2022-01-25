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
public:
	Kol_Task()
	{
		this->head = nullptr;
	}
	void Add(Task* task)
	{
		Node* tmp = this->head;
		if (tmp == nullptr)
		{
			tmp = new Node(task);
			this->head = tmp;
		}
		else
		{
			while (tmp->next!=nullptr)
			{
				tmp = tmp->next;
			}
			tmp->next = new Node(task);
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
	/*bool str_str(std::string title)
	{
		Node* tmp = this->head;
		Task* task;
		int f = 0;
		const char* ch1 = title.c_str();
		const char* ch2 = task->getTitle().c_str();
		while (tmp!=nullptr)
		{
			for (int i = 0;i < title.length();i++)
			{
				if (ch1[i] == ch2[i])
				{
					f++;
				}
			}
			tmp = tmp->next;
		}
		if (f == title.length())
		{
			return true;
		}
		else
		{
			return false;
		}
	}*/
	void Dell(std::string title)
	{
		Node* iter = this->head;
		if (iter->name->getTitle() == title)
		{
			this->head = iter->next;
		}
		else
		{
			while (iter->next!= nullptr)
			{
				if (iter->name->getTitle() == title)
				{
					iter->next = iter->next->next;
				}
				if (iter->next->name->getTitle() == title)
				{
					iter->next = nullptr;
				}
				iter = iter->next;
			}
		}
	}

};

