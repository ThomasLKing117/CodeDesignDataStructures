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