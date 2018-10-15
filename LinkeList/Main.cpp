#include "UnorderedLinkedList.h"

int main()
{
	nodeType<int>* N1 = new nodeType<int>;
	nodeType<int>* N2 = new nodeType<int>;
	nodeType<int>* N3 = new nodeType<int>;
	nodeType<int>* N4 = new nodeType<int>;
	nodeType<int>* N5 = new nodeType<int>;
	nodeType<int>* N6 = new nodeType<int>;
	N1->info = 1;
	N2->info = 2;	
	N3->info = 3;
	N4->info = 4;
	N5->info = 5;
	N6->info = 6;
	UnorderedLinkedList<int>* List = new UnorderedLinkedList<int>();
	List->pushFront(N1->info);
	List->pushFront(N2->info);
	List->pushLast(N3->info);
	List->pushLast(N4->info);
	List->pushFront(N5->info);
	List->pushLast(N6->info);
	int front = List->front();
	int back = List->back();
	int find = List->search(N4->info);
	return 0;
}