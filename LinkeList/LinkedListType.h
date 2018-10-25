#pragma once
#include <iostream>
#include "Iterator.h"

template <typename Type>
class LinkedList
{
private:
	void copyList(const LinkedList<Type>&);
protected:
	int mCount;
	nodeType<Type> *first;
	nodeType<Type> *last;
public:
	const LinkedList<Type>& operator =(const LinkedList<Type>&);
	void initalizeList();
	bool isEmptyList() const;
	void print() const;
	int length() const;
	void destroyList();
	Type front() const;
	Type back() const;
	virtual	bool search(const Type&) const = 0;
	virtual void insertFirst(const Type&) = 0;
	virtual void insertLast(const Type&) = 0;
	virtual void deleteNode(const Type&) = 0;
	Iterator<Type> begin();
	Iterator<Type> end();
	LinkedList();
	LinkedList(const LinkedList<Type>&);
	~LinkedList();
};

template<typename Type>
void LinkedList<Type>::copyList(const LinkedList<Type>& copy)
{
	this->destroyList();
	nodeType<Type>* test = (copy.first);
	for (int i = 0; i < copy.mCount; i++)
	{
		this->insertLast(test->info);
		test = test->next;
	}
}

template<typename Type>
const LinkedList<Type>& LinkedList<Type>::operator=(const LinkedList<Type>& assign)
{
	this->copyList(assign);
	return *this;
}

template<typename Type>
void LinkedList<Type>::initalizeList()
{
	mCount = 0;
	first = nullptr;
	last = nullptr;
}

template<typename Type>
bool LinkedList<Type>::isEmptyList() const
{
	if (first == nullptr)
	{
		return true;
	}
	return false;
}

template<typename Type>
void LinkedList<Type>::print() const
{
	nodeType<Type>* Iterate;
	Iterate = this->first;
	for (int i = 0; i < mCount; i++)
	{
		std::cout << Iterate->info << " ";
		Iterate = Iterate->next;
	}
	std::cout << "\n";
	system("pause");
}

template<typename Type>
int LinkedList<Type>::length() const
{
	return mCount;
}

template<typename Type>
void LinkedList<Type>::destroyList()
{
	nodeType<Type>* test = new nodeType<Type>;
	int temp = mCount;
	for (int i = 0; i < temp; i++)
	{
		test = this->first;
		if (mCount == 1)
		{
			delete first;
			initalizeList();
			return;
		}
		else
		{
			first = first->next;
			delete test;
			mCount--;
		}
	}
}

template<typename Type>
Type LinkedList<Type>::front() const
{
	return first->info;
}

template<typename Type>
Type LinkedList<Type>::back() const
{
	return last->info;
}

template<typename Type>
Iterator<Type> LinkedList<Type>::begin()
{
	return Iterator<Type>(first);
}

template<typename Type>
Iterator<Type> LinkedList<Type>::end()
{
	return Iterator<Type>(nullptr);
}

template<typename Type>
LinkedList<Type>::LinkedList()
{
	initalizeList();
}

template<typename Type>
LinkedList<Type>::LinkedList(const LinkedList<Type>& item)
{
	this->first = new nodeType<Type>;
	nodeType<Type>* test = (item.first);
	nodeType<Type>* copy = (this->first);

	for (int i = 0; i < item.mCount; i++)
	{
		copy->info = test->info;
		this->mCount++;
		if (i == (item.mCount - 1))
		{
			break;
		}
		copy->next = new nodeType<Type>;
		copy = copy->next;
		test = test->next;
	}
	last = test;
	test->next = nullptr;
}

template<typename Type>
LinkedList<Type>::~LinkedList()
{
	destroyList();
}