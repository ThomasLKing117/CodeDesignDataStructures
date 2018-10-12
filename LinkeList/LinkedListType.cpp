#include "linkedListType.h"

template<typename Type>
void linkedList<Type>::copyList(const linkedList<Type>& copy)
{
	copy = linkedList;
}

template<typename Type>
const linkedList<Type>& linkedList<Type>::operator=(const linkedList<Type>& assign)
{
	return first = assign
}

template<typename Type>
void linkedList<Type>::initalizeList()
{

}

template<typename Type>
bool linkedList<Type>::isEmptyList() const
{
	return (first == nullptr);
}

template<typename Type>
void linkedList<Type>::print() const
{

}

template<typename Type>
int linkedList<Type>::length() const
{
	return 0;
}

template<typename Type>
void linkedList<Type>::destroyList() const
{

}

template<typename Type>
Type linkedList<Type>::front() const
{
	return Type();
}

template<typename Type>
Type linkedList<Type>::back() const
{
	return Type();
}

template<typename Type>
Iterator<Type> linkedList<Type>::begin()
{
	return Iterator<Type>();
}

template<typename Type>
Iterator<Type> linkedList<Type>::end()
{
	return Iterator<Type>();
}

template<typename Type>
linkedList<Type>::linkedList()
{

}

template<typename Type>
linkedList<Type>::linkedList(const linkedList<Type>&)
{

}

template<typename Type>
linkedList<Type>::~linkedList()
{

}