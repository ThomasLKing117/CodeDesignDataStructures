#pragma once
#include "linkedListType.h"

template <typename Type>
class UnorderedlinkedList : linkedList<Type>
{
public:
	bool search(const Type&) const;
	void pushFirst(const Type&);
	void pushLast(const Type&);
	void deleteNode(const Type&);
};