#pragma once
#include "NodeType.h"
#include "Iterator.h"

template <typename Type>
class linkedList
{
private:
	void copyList(const linkedList<Type>&);
protected:
	int count;
	nodeType<Type> *first;
	nodeType<Type> *last;
public:
	const linkedList<Type>& operator =(const linkedList<Type>&);
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
	Iterator<Type> begin();
	Iterator<Type> end();
	linkedList();
	linkedList(const linkedList<Type>&);
	~linkedList();
};