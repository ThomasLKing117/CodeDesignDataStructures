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
bool UnorderedLinkedList<Type>::search(const Type &) const
{
	return false;
}

template<typename Type>
void UnorderedLinkedList<Type>::pushFirst(const Type &)
{

}

template<typename Type>
void UnorderedLinkedList<Type>::pushLast(const Type &)
{

}

template<typename Type>
void UnorderedLinkedList<Type>::deleteNode(const Type &)
{

}