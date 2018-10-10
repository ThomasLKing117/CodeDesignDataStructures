#pragma once
template <class Type>
struct nodeType
{
	Type info;
	node<Type> *link;
};