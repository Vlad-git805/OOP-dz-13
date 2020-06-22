#pragma once
#include <iostream>

using namespace std;

template<class T>
class List
{
private:
	struct Node
	{
		T value;
		Node * next;
	};
	Node* head;
public:

	List() : head(nullptr) { }

	List(const List& other)
	{
		Node* current = other.head;
		while (current != nullptr)
		{
			AddToTail(current->value);
			current = current->next;
		}
	}

	List& operator=(const List& other)
	{
		if (this == &other)
			return *this;

		while (!isEmpty())
		{
			DeleteHead();
		}
		Node* current = other.head;
		while (current != nullptr)
		{
			AddToTail(current->value);
			current = current->next;
		}
		return *this;
	}

	void FindByPosition(int index)
	{
		if (index > (ShowSizeOfList() - 1) || index < 0) return;
		else
		{
			Node* current = head;
			int counter = 0;
			while (counter != index)
			{
				current = current->next;
				counter++;
			}
			cout << current->value << endl;
		}
	}

	int ShowSizeOfList()
	{
		int count = 0;
		Node* current = head;
		while (current != nullptr)
		{
			++count;
			current = current->next;
		}
		return count;
	}

	void operator++()
	{
		AddToTail(0);
	}

	void AddToHead(T value)
	{
		Node* newElement = new Node;
		newElement->value = value;
		newElement->next = head;
		head = newElement;
	}

	void AddToTail(T value)
	{
		Node* newElement = new Node;
		newElement->value = value;
		newElement->next = nullptr;

		if (head == nullptr)
		{
			head = newElement;
		}
		else
		{
			Node* current = head;
			while (current->next != nullptr)
			{
				current = current->next;
			}

			current->next = newElement;
		}
	}

	void AddByIndex(int index, T value)
	{
		if (index > ShowSizeOfList() || index < 0)
		{
			cout << "error" << endl;
			return;
		}
		else
		{
			if (index == ShowSizeOfList())
			{
				AddToTail(value);
				return;
			}
			int count = 0;

			Node* newElement = new Node;
			newElement->value = value;

			Node* current = head;
			while (current != nullptr)
			{
				if (count + 1 == index)
				{
					newElement->next = current->next;
					current->next = newElement;
				}
				++count;
				current = current->next;
			}
		}
	}

	void DeleteByIndex(int index)
	{

		if (index > (ShowSizeOfList() - 1) || index < 0)
		{
			cout << "error" << endl;
			return;
		}
		else
		{
			if (head == nullptr) return;

			if (head->next == nullptr)
			{
				delete head;
				head = nullptr;
			}
			else
			{
				int count = 0;
				Node* current = head;
				Node*temp = new Node;
				while (current != nullptr)
				{
					if (count + 1 == index)
					{
						temp = current->next;
						current->next = current->next->next;
						delete temp;
					}
					++count;
					current = current->next;
				}
			}
		}
	}

	void DeleteHead()
	{
		if (head == nullptr) return;

		Node* temp = head->next;
		delete head;

		if (temp == nullptr)
			head = nullptr;
		else
			head = temp;
	}

	void DeleteTail()
	{
		if (head == nullptr) return;

		if (head->next == nullptr)
		{
			delete head;
			head = nullptr;
		}
		else
		{
			Node* current = head;

			while (current->next->next != nullptr)
			{
				current = current->next;
			}
			delete current->next;
			current->next = nullptr;
		}
	}

	void Print()const
	{
		Node* current = head;
		while (current != nullptr)
		{
			cout << current->value << ", ";
			current = current->next;
		}
	}

	bool isEmpty()const
	{
		return head == nullptr;
	}

	~List()
	{
		while (!isEmpty())
		{
			DeleteHead();
		}
	}

	friend class Stack<T>;

};
