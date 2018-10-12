#pragma once
#include "linkedListType.h"

template <typename Type>
class UnorderedlinkedList : linkedList<Type>
{
public:
	bool search(const Type&) const;
	void insertFirst(const Type&);
	void insertLast(const Type&);
	void deleteNode(const Type&);
};