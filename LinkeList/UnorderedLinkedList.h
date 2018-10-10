#pragma once
#include "LinkedListType.h"

template <typename Type>
class UnorderedLinkedList : linkedListType<Type>
{
public:
	bool search(const Type&) const;
	void insertFirst(const Type&);
	void insertLast(const Type&);
	void deleteNode(const Type&);
};