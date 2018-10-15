#pragma once
#include "LinkedListType.h"

template <typename Type>
class UnorderedLinkedList : LinkedList<Type>
{
public:
	bool search(const Type&) const;
	void pushFirst(const Type&);
	void pushLast(const Type&);
	void deleteNode(const Type&);
};

template<typename Type>
bool UnorderedLinkedList<Type>::search(const Type& item) const
{
	return false;
}

template<typename Type>
void UnorderedLinkedList<Type>::pushFirst(const Type& item)
{
	nodeType<Type>* test = new nodeType<Type>;
	test->info = item;
	test->next = first;
	first = test;
	count++;
}

template<typename Type>
void UnorderedLinkedList<Type>::pushLast(const Type& item)
{
	nodeType<Type>* test = new nodeType<Type>;
	test->info = item;
	test->next = last;
	last = test;
	count++;
}

template<typename Type>
void UnorderedLinkedList<Type>::deleteNode(const Type& item)
{
	delete item;
}