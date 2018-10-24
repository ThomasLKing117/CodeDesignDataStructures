#pragma once
#include "LinkedListType.h"

template <typename Type>
class UnorderedLinkedList : public LinkedList<Type>
{
public:
	bool search(const Type&) const override;
	void insertFirst(const Type&) override;
	void insertLast(const Type&) override;
	void deleteNode(const Type&) override;
};

template <typename Type>
bool UnorderedLinkedList<Type>::search(const Type& item) const
{
	nodeType<Type>* test;
	test = this->first;
	for (int i = 0; i < this->mCount; i++)
	{
		if (test->info == item)
		{
			return true;
		}
		if (test->info != item)
		{
			test = test->next;
		}
	}
	return false;
}

template <typename Type>
void UnorderedLinkedList<Type>::insertFirst(const Type& item)
{
	nodeType<Type>* test = new nodeType<Type>;
	test->info = item;

	if (this->isEmptyList())
	{
		this->first = test;
		this->last = test;
		test->next = nullptr;
		this->mCount++;
	}
	else
	{
		test->next = this->first;
		this->first = test;
		this->mCount++;
	}
}

template <typename Type>
void UnorderedLinkedList<Type>::insertLast(const Type& item)
{
	nodeType<Type>* test = new nodeType<Type>;
	test->info = item;

	if (this->isEmptyList())
	{
		this->first = test;
		this->last = test;
		this->mCount++;
	}
	else
	{
		this->last->next = test;
		this->last = test;
		test->next = nullptr;
		this->mCount++;
	}
}

template <typename Type>
void UnorderedLinkedList<Type>::deleteNode(const Type& item)
{
	nodeType<Type>* ptr;
	nodeType<Type>* trailptr;

	if (this->mCount == 1)
	{
		delete this->first;
		this->initalizeList();
		return;
	}

	ptr = this->first;
	trailptr = this->first;

	for (int i = 0; i < this->mCount; i++)
	{
		if (ptr->info == item)
		{
			this->first = this->first->next;
			delete ptr;
			this->mCount--;
			return;
		}

		if (ptr->info != item)
		{
			ptr = ptr->next;

			if (ptr == this->last)
			{
				this->last = trailptr;
				trailptr->next = nullptr;
				delete ptr;
				this->mCount--;
				return;
			}

			if (ptr->info == item)
			{
				trailptr->next = ptr->next;
				delete ptr;
				this->mCount--;
				return;
			}

			trailptr = trailptr->next;
		}
	}
}

//template<typename Type>
//bool UnorderedLinkedList<Type>::search(const Type& item) const
//{
//	return false;
//}
//
//template<typename Type>
//void UnorderedLinkedList<Type>::pushFront(const Type& item)
//{
//	nodeType<Type>* test = new nodeType<Type>;
//	test->info = item;
//	test->next = this->first;
//	this->first = test;
//	this->count++;
//}
//
//template<typename Type>
//void UnorderedLinkedList<Type>::pushLast(const Type& item)
//{
//	nodeType<Type>* test = new nodeType<Type>;
//	test->info = item;
//	test->next = this->last;
//	this->last = test;
//	this->count++;
//}
//
//template<typename Type>
//void UnorderedLinkedList<Type>::deleteNode(const Type& item)
//{
//	delete item;
//}