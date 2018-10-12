#include "Iterator.h"

template<typename Type>
Iterator<Type>::Iterator()
{
	current = nullptr;
}

template<typename Type>
Iterator<Type>::Iterator(nodeType<Type> reference)
{
	current = &reference;
}

template<typename Type>
Type Iterator<Type>::operator*()
{
	return this->current->info;
}

template<typename Type>
Iterator<Type> Iterator<Type>::operator++()
{
	return current = current->link;
}

template<typename Type>
bool Iterator<Type>::operator==(const Iterator<Type>& other) const
{
	return this->current == other.current;
}

template<typename Type>
bool Iterator<Type>::operator!=(const Iterator<Type>& other) const
{
	return this->current != other.current;
}