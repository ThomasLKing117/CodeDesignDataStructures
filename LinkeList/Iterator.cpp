#include "Iterator.h"

template<typename Type>
linkedListIterator<Type>::linkedListIterator()
{

}

template<typename Type>
linkedListIterator<Type>::linkedListIterator(nodeType<Type>)
{

}

template<typename Type>
Type linkedListIterator<Type>::operator*()
{
	return this->current->info;
}

template<typename Type>
linkedListIterator<Type> linkedListIterator<Type>::operator++()
{
	return current = current->link;
}

template<typename Type>
bool linkedListIterator<Type>::operator==(const linkedListIterator<Type>& other) const
{
	return this->current == other.current;
}

template<typename Type>
bool linkedListIterator<Type>::operator!=(const linkedListIterator<Type>& other) const
{
	return this->current != other.current;
}