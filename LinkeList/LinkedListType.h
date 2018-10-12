#pragma once
#include "NodeType.h"
#include "Iterator.h"

template <typename Type>
class LinkedList
{
private:
	void copyList(const LinkedList<Type>&);
protected:
	int count;
	nodeType<Type> *first;
	nodeType<Type> *last;
public:
	const LinkedList<Type>& operator =(const LinkedList<Type>&);
	void initalizeList();
	bool isEmptyList() const;
	void print() const;
	int length() const;
	void destroyList() const;
	Type front() const;
	Type back() const;
	bool search(const Type&) const = 0;
	void pushFront(const Type&) const = 0;
	void pushLast(const Type&) const = 0;
	void deleteNode(const Type&) const = 0;
	Iterator<Type> begin();
	Iterator<Type> end();
	LinkedList();
	LinkedList(const LinkedList<Type>&);
	~LinkedList();
};