#include "LinkedListType.h"

template<typename Type>
void LinkedList<Type>::copyList(const LinkedList<Type>& copy)
{
	copy = LinkedList;
}

template<typename Type>
const LinkedList<Type>& LinkedList<Type>::operator=(const LinkedList<Type>& assign)
{
	return first = assign
}

template<typename Type>
void LinkedList<Type>::initalizeList()
{

}

template<typename Type>
bool LinkedList<Type>::isEmptyList() const
{
	return (first == nullptr);
}

template<typename Type>
void LinkedList<Type>::print() const
{

}

template<typename Type>
int LinkedList<Type>::length() const
{
	return 0;
}

template<typename Type>
void LinkedList<Type>::destroyList() const
{

}

template<typename Type>
Type LinkedList<Type>::front() const
{
	return Type();
}

template<typename Type>
Type LinkedList<Type>::back() const
{
	return Type();
}

template<typename Type>
Iterator<Type> LinkedList<Type>::begin()
{
	return Iterator<Type>();
}

template<typename Type>
Iterator<Type> LinkedList<Type>::end()
{
	return Iterator<Type>();
}

template<typename Type>
LinkedList<Type>::LinkedList()
{

}

template<typename Type>
LinkedList<Type>::LinkedList(const LinkedList<Type>&)
{

}

template<typename Type>
LinkedList<Type>::~LinkedList()
{

}