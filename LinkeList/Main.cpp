//#include "UnorderedLinkedList.h"
//
//int main()
//{
//	//Start of Test Cases
//
//	//Test Case 1
//	{
//		//Expected: Create new nodetType of type called N1
//		//Result: A new nodeType of type is created
//		nodeType<int>* N1 = new nodeType<int>;
//
//		//Expected: Create new nodetType of type called N2
//		//Result: A new nodeType of type is created
//		nodeType<int>* N2 = new nodeType<int>;
//
//		//Expected: Create new nodetType of type called N3
//		//Result: A new nodeType of type is created called N1
//		nodeType<int>* N3 = new nodeType<int>;
//
//		//Expected: Give N1->info the value of 1
//		//Result: N1->info is assigned the value of 1
//		N1->info = 1;
//
//		//Expected: Give N2->info the value of 2
//		//Result: N2->info is assigned the value of 2
//		N2->info = 2;
//
//		//Expected: Give N3->info the value of 3
//		//Result: N3->info is assigned the value of 3
//		N3->info = 3;
//
//		//Expected: Connect N1 to N2
//		//Result: N1 is connected to N2
//		N1->next = N2;
//
//		//Expected: Connect N2 to N3
//		//Result: N2 is connected to N3
//		N2->next = N3;
//
//		//Expected: Connect N3 to nullptr
//		//Result: N3 is connected to nullptr
//		N3->next = nullptr;
//
//		//Expected: Create a Iterator of type called Iterate
//		//Result: A new Iterator of type is created
//		Iterator<int> Iterate(N1);
//
//		//Expected: Create a for loop to increment the Iterator type for each node created
//		//Result:  The for loop should run through 3 times for each nodeType
//		for (int i = 0; i < 3; i++)
//		{
//			//Expected: Increment the Iterator Type
//			//Result: The Iterator should go through each node
//			++Iterate;
//		}
//	}
//
//	//Test Case 2
//	{
//		//Expected: Create a new UnorderedLinkedList type called FirstList
//		//Result: A new UnorderedLinkedList of type is created
//		UnorderedLinkedList<int> FirstList;
//
//		//Expected: insert 1 in the first position in the list
//		//Result: 1 is now in the first position of the FirstList
//		FirstList.insertFirst(1);
//
//		//Expected: insert 2 in the last position in the list
//		//Result: 2 is now in the last position of the FirstList
//		FirstList.insertLast(2);
//
//		//Expected: insert 3 in the first position in the list
//		//Result: 3 is now in the first position of the FirstList
//		FirstList.insertFirst(3);
//
//		//Expected: insert 4 in the Last position in the list
//		//Result: 4 is now in the Last position of the FirstList
//		FirstList.insertLast(4);
//
//		//Expected: insert 5 in the first position in the list
//		//Result: 5 is now in the first position of the Firstlist
//		FirstList.insertFirst(5);
//
//		//Expected: Create a new UnorderedLinkedList type called SecondList
//		//Result: A new UnorderedLinkedList of type is created
//		UnorderedLinkedList<int> SecondList;
//
//		//Expected: insert 6 in the Last position in the list
//		//Result: 6 is now in the Last position of the Secondlist
//		SecondList.insertLast(6);
//
//		//Expected: insert a 7 in the first position in the list
//		//Result: 7 is now in the first position of the SecondList
//		SecondList.insertFirst(7);
//
//		//Expected: insert 8 in the Last position in the list
//		//Result: 8 is now in the Last position of the SecondList
//		SecondList.insertLast(8);
//
//		//Expected: insert a 9 in the first position in the list
//		//Result: 9 is now in the first position of the SecondList
//		SecondList.insertFirst(9);
//
//		//Expected: insert 10 in the Last position in the list
//		//Result: 10 is now in the Last position of the SecondList
//		SecondList.insertLast(10);
//
//		//Expected: Have the SecondList copy the FirstList
//		//Result: The SecondList and FirstList are identical and can be changed seperatly
//		SecondList = FirstList;
//
//		//Expected: insert 6 in the Last position in the list
//		//Result: 6 is now in the Last position of the SecondList
//		SecondList.insertLast(6);
//
//		//Expected: insert a 7 in the first position in the list
//		//Result: 7 is now in the first position of the SecondList
//		SecondList.insertFirst(7);
//
//		//Expected: insert 8 in the Last position in the list
//		//Result: 8 is now in the Last position of the SecondList
//		SecondList.insertLast(8);
//
//		//Expected: insert a 9 in the first position in the list
//		//Result: 9 is now in the first position of the SecondList
//		SecondList.insertFirst(9);
//
//		//Expected: insert 10 in the Last position in the list
//		//Result: 10 is now in the Last position of the SecondList
//		SecondList.insertLast(10);
//
//		//Expected: The isEmptyList method checks to see if the list is empty
//		//Result: In this case it should return false
//		SecondList.isEmptyList();
//
//		//Expected: The destroyList method deletes all the nodes in a list
//		//Result: Clears out the list
//		SecondList.destroyList();
//
//		//Expected: The isEmptyList method checks to see if the list is empty
//		//Result: In this case it should return true
//		SecondList.isEmptyList();
//
//		//Expected: Create a new UnorderedLinkedList type called ThirdList
//		//Result: A new UnorderedLinkedList of type is created
//		UnorderedLinkedList<int> ThirdList;
//
//		//Expected: Have the ThirdList copy the FirstList
//		//Result: The ThirdList and FirstList are identical and can be changed seperatly
//		ThirdList = FirstList;
//
//		//Expected: insert a 0 in the first position in the list 
//		//Result: 0 is now in the first position of the ThirdList
//		ThirdList.insertFirst(0);
//
//		//Expected: insert 117 in the Last position in the list 
//		//Result: 117 is now in the Last position of the ThirdList
//		ThirdList.insertLast(117);
//
//		//Expected: The search method looks through the list for the argument passed through
//		//Result: In this case it returns true
//		ThirdList.search(117);
//
//		//Expected: The print method prints the values of all the nodes in the lsit to the console
//		//Result: All the node values are visible on the console
//		ThirdList.print();
//
//		//Expected: The deleteNode method seaches throught the list for the node its trying to delete then deletes that node
//		//Result: The nodeType with the value 117 is now deleted
//		ThirdList.deleteNode(117);
//
//		//Expected: The search method looks through the list for the argument passed through
//		//Result: In this case it returns false
//		ThirdList.search(117);
//
//		//Expected: The print method prints the values of all the nodes in the lsit to the console
//		//Result: All the node values are visible on the console
//		ThirdList.print();
//
//		//Expected: insert a 117 in the first position in the list 
//		//Result: 117 is now in the first position of the ThirdList
//		ThirdList.insertFirst(117);
//
//		//Expected: The search method looks through the List for the argument passed through
//		//Result: In this case it returns true
//		ThirdList.search(117);
//
//		//Expected: The print method prints the values of all the nodes in the lsit to the console
//		//Result: All the node values are visible on the console
//		ThirdList.print();
//
//		//Expected: The begin method retruns the Iterator
//		//Result: In this case it returns the Iterator
//		ThirdList.begin();
//
//		//Expected: The front method returns the info of the first node in the list
//		//Result: In this case it returns the value 117
//		ThirdList.front();
//
//		//Expected: The end method retruns the nullptr
//		//Result: In this case it returns nullptr
//		ThirdList.end();
//
//		//Expected: The back method returns the info of the last node in the list
//		//Result: In this case it returns the value 4
//		ThirdList.back();
//
//		//Expected: The length method tells you how many nodes are in the list by returning mCount
//		//Result: In this case it returns 7
//		ThirdList.length();
//
//		//Expected: Create a new UnorderedLinkedList type called FourthList that takes in an argument of ThirdList
//		//Result: A new UnorderedLinkedList of type is created that is a copy of the ThirdList
//		UnorderedLinkedList<int> FourthList(ThirdList);
//		
//		//Expected: The search method looks through the list for the argument passed through
//		//Result: In this case it returns True
//		FourthList.search(117);
//
//		//Expected: The destroyList method deletes all the nodes in a list
//		//Result: Clears out the list
//		FourthList.destroyList();
//
//		//Expected: The search method looks through the list for the argument passed through
//		//Result: In this case it returns false
//		FourthList.search(117);
//
//		//Expected: The initializelist method sets the first and last ptr to nullptr and mCount to 0
//		//Result: Sets the FourthList to have first and last pointing to nullptr and mCount to 0
//		FourthList.initalizeList();
//
//		//Expected: insert a 117 in the first position in the list 
//		//Result: 117 is now in the first position of the FourthList
//		FourthList.insertFirst(117);
//
//		//Expected: The search method looks through the list for the argument passed through
//		//Result: In this case it returns True
//		FourthList.search(117);
//
//		//Expected: The destroyList method deletes all the nodes in a list
//		//Result: Clears out the list
//		FirstList.destroyList();
//
//		//Expected: The destroyList method deletes all the nodes in a list
//		//Result: Clears out the list
//		ThirdList.destroyList();
//
//		//Expected: The destroyList method deletes all the nodes in a list
//		//Result: Clears out the list
//		FourthList.destroyList();
//
//		//Expected: The isEmptyList method checks to see if the list is empty
//		//Result: In this case it should return true
//		FirstList.isEmptyList();
//
//		//Expected: The isEmptyList method checks to see if the list is empty
//		//Result: In this case it should return true
//		ThirdList.isEmptyList();
//
//		//Expected: The isEmptyList method checks to see if the list is empty
//		//Result: In this case it should return true
//		FourthList.isEmptyList();
//	}
//
//	//End of Test Cases
//	return 0;
//}