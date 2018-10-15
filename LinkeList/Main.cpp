#include "UnorderedLinkedList.h"

int main()
{
	nodeType<int>* N1 = new nodeType<int>;
	nodeType<int>* N2 = new nodeType<int>;
	nodeType<int>* N3 = new nodeType<int>;
	N1->info = 5;
	N2->info = 10;	
	N3->info = 50;
	UnorderedLinkedList<int>* List = new UnorderedLinkedList<int>();
	List->pushFront(N1->info);
	List->pushFront(N2->info);
	List->pushLast(N3->info);
	int test = List->front();
	test = List->back();
	return 0;
}