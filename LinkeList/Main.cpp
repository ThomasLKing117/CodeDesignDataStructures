#include "UnorderedLinkedList.h"

int main()
{
	nodeType<int>* N1 = new nodeType<int>;
	nodeType<int>* N2 = new nodeType<int>;
	nodeType<int>* N3 = new nodeType<int>;
	N1->info = 5;
	N2->info = 10;	
	N3->info = 50;
	N1->next = N2;
	N2->next = N3;
	N3->next = nullptr;
	UnorderedLinkedList<int>* List = new UnorderedLinkedList<int>();
	List->pushFront(N1->info);
	List->pushFront(N2->info);
	List->pushLast(N3->info);
	Iterator<int> Iterate(N1);
	int test = *Iterate;
	for (int i = 0; i < 2; i++)
	{
		++Iterate;
		test = *Iterate;
	}
	test;
	return 0;
}