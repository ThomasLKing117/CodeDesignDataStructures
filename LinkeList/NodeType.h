#pragma once

template <typename Type>
struct nodeType
{
	Type info;
	nodeType<Type> *next;
};