#pragma once
#include "LinkedListType.h"

template <typename Type>
class UnorderedLinkedList : public LinkedList<Type>
{
public:
	bool search(const Type&) const override;
	void pushFront(const Type&) override;
	void pushLast(const Type&) override;
	void deleteNode(const Type&) override;
};

template <typename Type>
bool UnorderedLinkedList<Type>::search(const Type& item) const
{
	Iterator<Type> *Iterate;
	for (int i = 0; i < this->count; i++)
	{
		if (Iterate == item)
		{
			return true;
		}
	}
	return false;
}

template <typename Type>
void UnorderedLinkedList<Type>::pushFront(const Type& item)
{
	nodeType<Type>* test = new nodeType<Type>;
	test->info = item;

	if (this->isEmptyList())
	{
		this->first = test;
		this->last = test;
		this->count++;
	}
	else
	{
		test->next = this->first;
		this->first = test;
		this->count++;
	}
}

template <typename Type>
void UnorderedLinkedList<Type>::pushLast(const Type& item)
{
	nodeType<Type>* test = new nodeType<Type>;
	test->info = item;

	if (this->isEmptyList())
	{
		this->first = test;
		this->last = test;
		this->count++;
	}
	else
	{
		this->last->next = test;
		this->last = test;
		this->count++;
	}
}

template <typename Type>
void UnorderedLinkedList<Type>::deleteNode(const Type& item)
{

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