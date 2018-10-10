#pragma once
template <typename Type>
class UnorderedLinkedList : LinkedListType
{
	bool search(const Type&) const;
	void insertFirst(const Type&);
	void insertLast(const Type&);
	void deleteNode(const Type&);
};