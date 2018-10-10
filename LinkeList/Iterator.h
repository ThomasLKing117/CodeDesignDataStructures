#pragma once
#include "NodeType.h"

template <typename Type>
class linkedListIterator
{
private:
	nodeType<Type> *current;
public:
	linkedListIterator();
	linkedListIterator(nodeType<Type>);
	Type operator *();
	linkedListIterator<Type> operator ++();
	bool operator ==(const linkedListIterator<Type>&) const;
	bool operator !=(const linkedListIterator<Type>&) const;
};