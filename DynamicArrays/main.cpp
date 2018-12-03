#include <iostream>
#include "Array.h"

int main()
{
	DynamicArray<int> MyArray;

	MyArray.CreateArray(5);

	MyArray.InsertLast(1);
	MyArray.InsertLast(2);
	MyArray.InsertLast(3);
	MyArray.InsertLast(4);
	MyArray.InsertLast(5);
	MyArray.InsertLast(6);	
	MyArray.InsertLast(7);
	MyArray.InsertLast(8);
	MyArray.InsertLast(9);
	MyArray.InsertLast(10);
	MyArray.InsertLast(11);
	MyArray.InsertLast(12);
	MyArray.DeleteLast();

	std::cout << MyArray.getData(5) << std::endl;

	return 0;
}