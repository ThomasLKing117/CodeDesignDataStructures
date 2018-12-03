#pragma once

//templated class to make dynamic array
template <typename T>
class DynamicArray
{
private:
	//pointer for dynamic array
	T* data;

	//size of the array
	int allocatedSpace;

	//the amount of indexs' being used
	int usedSpace;
public:
	//constructor for dynamic array
	DynamicArray();

	//creates an array and sets the length of the array
	void CreateArray(int initialSize);

	//inserts a type into the next index of last index used
	void InsertLast(T);

	//removes the last index
	void DeleteLast();

	//retrieves the data from the chosen index
	T getData(T);
};

template<typename T>
DynamicArray<T>::DynamicArray()
{
}

template<typename T>
void DynamicArray<T>::CreateArray(int initialSize)
{
	//sets the array size and initializes the array
	data = new T[initialSize];
	allocatedSpace = initialSize;
	usedSpace = 0;
}

template<typename T>
void DynamicArray<T>::InsertLast(T newdata)
{
	//checks to see if the array is full
	if (usedSpace == allocatedSpace)
	{
		//extends the amount of usable space by a multiple of 2
		allocatedSpace *= 2;

		//creates another temporary Dynamic Array and sets its length to the multiplied length
		DynamicArray<T>* test = new DynamicArray<T>[allocatedSpace];
		test->CreateArray(allocatedSpace);

		//copies the old array into the temporary array and delets the old
		for (int i = 0; i < usedSpace; i++)
		{
			test->data[i] = data[i];
		}
		delete data;

		//copies the temporary array into the new array then deltes the temporary array
		data = new T[allocatedSpace];

		for (int i = 0; i < usedSpace; i++)
		{
			data[i] = test->data[i];
		}
		delete test;

		//sets the next index to the inputed value and moves to the nex index
		data[usedSpace] = newdata;
		usedSpace += 1;

		return;
	}

	//sets the next index to the inputed value and moves to the nex index
	data[usedSpace] = newdata;
	usedSpace += 1;
}

template<typename T>
void DynamicArray<T>::DeleteLast()
{
	//removes the last spot used in the array
	usedSpace -= 1;
}

template<typename T>
inline T DynamicArray<T>::getData(T index)
{
	//returns the value in the specified index
	return data[index];
}
