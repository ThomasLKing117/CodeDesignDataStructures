#pragma once
#include "NodeType.h"

template <typename Type>
class Iterator
{
private:
	nodeType<Type> *current;
public:
	Iterator();
	Iterator(nodeType<Type>);
	Type operator *();
	Iterator<Type> operator ++();
	bool operator ==(const Iterator<Type>&) const;
	bool operator !=(const Iterator<Type>&) const;
};