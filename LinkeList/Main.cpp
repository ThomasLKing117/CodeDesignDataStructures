#include "UnorderedLinkedList.h"

int main()
{
	//Start of Test Cases


	//Test Case 1
	{
		nodeType<int>* N1 = new nodeType<int>;
		nodeType<int>* N2 = new nodeType<int>;
		nodeType<int>* N3 = new nodeType<int>;

		N1->info = 1;
		N2->info = 2;
		N3->info = 3;

		N1->next = N2;
		N2->next = N3;
		N3->next = nullptr;

		Iterator<int> Iterate(N1);
		for (int i = 0; i < 3; i++)
		{
			++Iterate;
		}
	}

	//Test Case 2
	{
		UnorderedLinkedList<int> FirstList;
		FirstList.initalizeList();

		FirstList.insertFirst(1);
		FirstList.insertLast(2);
		FirstList.insertFirst(3);
		FirstList.insertLast(4);
		FirstList.insertFirst(5);

		UnorderedLinkedList<int> SecondList;
		SecondList.initalizeList();

		SecondList.insertLast(6);
		SecondList.insertFirst(7);
		SecondList.insertLast(8);
		SecondList.insertFirst(9);
		SecondList.insertLast(10);

		SecondList = FirstList;

		SecondList.insertLast(6);
		SecondList.insertFirst(7);
		SecondList.insertLast(8);
		SecondList.insertFirst(9);
		SecondList.insertLast(10);

		SecondList.isEmptyList();
		SecondList.destroyList();
		SecondList.isEmptyList();

		UnorderedLinkedList<int> ThirdList;
		ThirdList.initalizeList();

		ThirdList = FirstList;

		ThirdList.insertFirst(0);
		ThirdList.insertLast(117);
		ThirdList.search(117);
		ThirdList.print();

		ThirdList.deleteNode(117);
		ThirdList.search(117);
		ThirdList.print();

		ThirdList.insertFirst(117);
		ThirdList.search(117);
		ThirdList.print();

		ThirdList.begin();
		ThirdList.front();

		ThirdList.end();
		ThirdList.back();

		ThirdList.length();


		UnorderedLinkedList<int> FourthList(ThirdList);
		
		FourthList.search(117);
		FourthList.destroyList();
		FourthList.search(117);
		FourthList.insertFirst(117);
		FourthList.search(117);

		FirstList.destroyList();
		ThirdList.destroyList();
		FourthList.destroyList();

		FirstList.isEmptyList();
		ThirdList.isEmptyList();
		FourthList.isEmptyList();
	}

	//End of Test Cases

	return 0;
}