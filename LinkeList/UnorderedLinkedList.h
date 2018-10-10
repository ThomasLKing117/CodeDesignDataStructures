#pragma once
template <typename Type>
class UnorderedLinkedList<Type> : LinkedListType<Type>
{
	bool search(const Type&) const;
	void insertFirst(const Type&);
	void insertLast(const Type&);
	void deleteNode(const Type&);
};