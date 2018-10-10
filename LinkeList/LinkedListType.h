#pragma once
#include "NodeType.h"
#include "Iterator.h"

template <typename Type>
class linkedListType
{
private:
	void copyList(const linkedListType<Type>&);
protected:
	int count;
	nodeType<Type> *first;
	nodeType<Type> *last;
public:
	const linkedlistType<Type>& operator =(const linkedListType<Type>&);
	void initalizeList();
	bool isEmptyList() const;
	void print() const;
	int length() const;
	void destroyList() const;
	Type front() const;
	Type back() const;
	bool search(const Type&) const = 0;
	void insertFirst(const Type&) const = 0;
	void insertLast(const Type&) const = 0;
	void deleteNode(const Type&) const = 0;
	linkedListIterator<Type> begin();
	linkedListIterator<Type> end();
	linkedListType();
	linkedListType(const linkedListType<Type>&);
	~linkedListType();
};