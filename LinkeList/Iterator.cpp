#include "Iterator.h"

template<typename Type>
inline Type linkedListIterator<Type>::operator*()
{
	return Type();
}

template<typename Type>
inline linkedListIterator<Type> linkedListIterator<Type>::operator++()
{
	return linkedListIterator<Type>();
}

template<typename Type>
inline bool linkedListIterator<Type>::operator==(const linkedListIterator<Type>&) const
{
	return false;
}

template<typename Type>
inline bool linkedListIterator<Type>::operator!=(const linkedListIterator<Type>&) const
{
	return false;
}