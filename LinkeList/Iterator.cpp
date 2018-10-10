#include "Iterator.h"

template<typename Type>
Type linkedListIterator<Type>::operator*()
{
	return Type();
}

template<typename Type>
linkedListIterator<Type> linkedListIterator<Type>::operator++()
{
	return linkedListIterator<Type>();
}

template<typename Type>
bool linkedListIterator<Type>::operator==(const linkedListIterator<Type>&) const
{
	return false;
}

template<typename Type>
bool linkedListIterator<Type>::operator!=(const linkedListIterator<Type>&) const
{
	return false;
}