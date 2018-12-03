#include <iostream>
#include "Array.h"

int main()
{
	//makes dynamic array
	DynamicArray<int> MyArray;

	//creates the array with the specified space
	MyArray.CreateArray(5);

	//Insert a value in the back of the array
	MyArray.InsertLast(1);

	//Insert a value in the back of the array
	MyArray.InsertLast(2);

	//Insert a value in the back of the array
	MyArray.InsertLast(3);

	//Insert a value in the back of the array
	MyArray.InsertLast(4);

	//Insert a value in the back of the array
	MyArray.InsertLast(5);

	//Insert a value in the back of the array
	MyArray.InsertLast(6);	

	//Insert a value in the back of the array
	MyArray.InsertLast(7);

	//Insert a value in the back of the array
	MyArray.InsertLast(8);

	//Insert a value in the back of the array
	MyArray.InsertLast(9);

	//Insert a value in the back of the array
	MyArray.InsertLast(10);

	//Insert a value in the back of the array
	MyArray.InsertLast(11);

	//Insert a value in the back of the array
	MyArray.InsertLast(12);

	//deltes the value in the last used index of the array
	MyArray.DeleteLast();

	//print out the value in the 5th index of the array
	std::cout << MyArray.getData(5) << std::endl;

	system("pause");

	return 0;
}