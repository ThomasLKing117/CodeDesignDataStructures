#include "UnorderedLinkedList.h"

int main()
{
	//Start of Test Cases

	//Test Case 1
	{
		//Expected: Create new nodetType of type called N1
		//Result: A new nodeType of type is created
		nodeType<int>* N1 = new nodeType<int>;

		//Expected: Create new nodetType of type called N2
		//Result: A new nodeType of type is created
		nodeType<int>* N2 = new nodeType<int>;

		//Expected: Create new nodetType of type called N3
		//Result: A new nodeType of type is created called N1
		nodeType<int>* N3 = new nodeType<int>;

		//Expected: Give N1->info the value of 1
		//Result: N1->info is assigned the value of 1
		N1->info = 1;

		//Expected: Give N2->info the value of 2
		//Result: N2->info is assigned the value of 2
		N2->info = 2;

		//Expected: Give N3->info the value of 3
		//Result: N3->info is assigned the value of 3
		N3->info = 3;

		//Expected: Connect N1 to N2
		//Result: N1 is connected to N2
		N1->next = N2;

		//Expected: Connect N2 to N3
		//Result: N2 is connected to N3
		N2->next = N3;

		//Expected: Connect N3 to nullptr
		//Result: N3 is connected to nullptr
		N3->next = nullptr;

		//Expected: Create a Iterator of type called Iterate
		//Result: A new Iterator of type is created
		Iterator<int> Iterate(N1);

		//Expected: Create a for loop to increment the Iterator type for each node created
		//Result:  The for loop should run through 3 times for each nodeType
		for (int i = 0; i < 3; i++)
		{
			//Expected: Increment the Iterator Type
			//Result: The Iterator should go through each node
			++Iterate;
		}
	}

	//Test Case 2
	{
		//Expected: Create a new UnorderedLinkedList type called FirstList
		//Result: A new UnorderedLinkedList of type is created
		UnorderedLinkedList<int> FirstList;

		//Expected:
		//Result:
		FirstList.initalizeList();

		//Expected:
		//Result:
		FirstList.insertFirst(1);

		//Expected:
		//Result:
		FirstList.insertLast(2);

		//Expected:
		//Result:
		FirstList.insertFirst(3);

		//Expected:
		//Result:
		FirstList.insertLast(4);

		//Expected:
		//Result:
		FirstList.insertFirst(5);

		//Expected: Create a new UnorderedLinkedList type called SecondList
		//Result: A new UnorderedLinkedList of type is created
		UnorderedLinkedList<int> SecondList;

		//Expected:
		//Result:
		SecondList.initalizeList();

		//Expected:
		//Result:
		SecondList.insertLast(6);

		//Expected:
		//Result:
		SecondList.insertFirst(7);

		//Expected:
		//Result:
		SecondList.insertLast(8);

		//Expected:
		//Result:
		SecondList.insertFirst(9);

		//Expected:
		//Result:
		SecondList.insertLast(10);

		//Expected:
		//Result:
		SecondList = FirstList;

		//Expected:
		//Result:
		SecondList.insertLast(6);

		//Expected:
		//Result:
		SecondList.insertFirst(7);

		//Expected:
		//Result:
		SecondList.insertLast(8);

		//Expected:
		//Result:
		SecondList.insertFirst(9);

		//Expected:
		//Result:
		SecondList.insertLast(10);

		//Expected:
		//Result:
		SecondList.isEmptyList();

		//Expected:
		//Result:
		SecondList.destroyList();

		//Expected:
		//Result:
		SecondList.isEmptyList();

		//Expected: Create a new UnorderedLinkedList type called ThirdList
		//Result: A new UnorderedLinkedList of type is created
		UnorderedLinkedList<int> ThirdList;

		//Expected:
		//Result:
		ThirdList.initalizeList();

		//Expected:
		//Result:
		ThirdList = FirstList;

		//Expected:
		//Result:
		ThirdList.insertFirst(0);

		//Expected:
		//Result:
		ThirdList.insertLast(117);

		//Expected:
		//Result:
		ThirdList.search(117);

		//Expected:
		//Result:
		ThirdList.print();

		//Expected:
		//Result:
		ThirdList.deleteNode(117);

		//Expected:
		//Result:
		ThirdList.search(117);

		//Expected:
		//Result:
		ThirdList.print();

		//Expected:
		//Result:
		ThirdList.insertFirst(117);

		//Expected:
		//Result:
		ThirdList.search(117);

		//Expected:
		//Result:
		ThirdList.print();

		//Expected:
		//Result:
		ThirdList.begin();

		//Expected:
		//Result:
		ThirdList.front();

		//Expected:
		//Result:
		ThirdList.end();

		//Expected:
		//Result:
		ThirdList.back();

		//Expected:
		//Result:
		ThirdList.length();

		//Expected: Create a new UnorderedLinkedList type called FourthList that takes in an argument of ThirdList
		//Result: A new UnorderedLinkedList of type is created that is a copy of the ThirdList
		UnorderedLinkedList<int> FourthList(ThirdList);
		
		//Expected:
		//Result:
		FourthList.search(117);

		//Expected:
		//Result:
		FourthList.destroyList();

		//Expected:
		//Result:
		FourthList.search(117);

		//Expected:
		//Result:
		FourthList.insertFirst(117);

		//Expected:
		//Result:
		FourthList.search(117);

		//Expected:
		//Result:
		FirstList.destroyList();

		//Expected:
		//Result:
		ThirdList.destroyList();

		//Expected:
		//Result:
		FourthList.destroyList();

		//Expected:
		//Result:
		FirstList.isEmptyList();

		//Expected:
		//Result:
		ThirdList.isEmptyList();

		//Expected:
		//Result:
		FourthList.isEmptyList();
	}

	//End of Test Cases

	return 0;
}