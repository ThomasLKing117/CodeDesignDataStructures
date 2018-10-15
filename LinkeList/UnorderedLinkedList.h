#pragma once
#include "LinkedListType.h"

template <typename Type>
class UnorderedLinkedList : public LinkedList<Type>
{
public:
	bool search(const Type& item) const override
	{
		return false;
	}

	void pushFront(const Type& item) override
	{
		nodeType<Type>* test = new nodeType<Type>;
		test->info = item;
		test->next = this->first;
		this->first = test;
		this->count++;
	}

	void pushLast(const Type& item) override
	{
		nodeType<Type>* test = new nodeType<Type>;
		test->info = item;
		test->next = this->last;
		this->last = test;
		this->count++;
	}

	void deleteNode(const Type& item) override
	{
		
	}
};

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