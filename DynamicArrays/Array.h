#pragma once

template <typename T>
class DynamicArray
{
private:
	T* data;
	int allocatedSpace;
	int usedSpace;
public:
	DynamicArray();
	void CreateArray(int initialSize);
	void InsertLast(T);
	void DeleteLast();
	T getData(T);
};

template<typename T>
DynamicArray<T>::DynamicArray()
{
}

template<typename T>
void DynamicArray<T>::CreateArray(int initialSize)
{
	data = new T[initialSize];
	allocatedSpace = initialSize;
	usedSpace = 0;
}

template<typename T>
void DynamicArray<T>::InsertLast(T newdata)
{
	if (usedSpace == allocatedSpace)
	{
		allocatedSpace *= 2;
		DynamicArray<T>* test = new DynamicArray<T>[allocatedSpace];
		test->CreateArray(allocatedSpace);

		for (int i = 0; i < usedSpace; i++)
		{
			test->data[i] = data[i];
		}
		delete data;

		data = new T[allocatedSpace];

		for (int i = 0; i < usedSpace; i++)
		{
			data[i] = test->data[i];
		}
		delete test;

		data[usedSpace] = newdata;
		usedSpace += 1;

		return;
	}
	data[usedSpace] = newdata;
	usedSpace += 1;
}

template<typename T>
void DynamicArray<T>::DeleteLast()
{
	usedSpace -= 1;
}

template<typename T>
inline T DynamicArray<T>::getData(T index)
{
	return data[index];
}
