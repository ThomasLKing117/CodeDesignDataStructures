#include "UnorderedLinkedList.h"

int main()
{
	UnorderedLinkedList<int>* List = new UnorderedLinkedList<int>();
	List->pushFront(1);
	List->pushFront(2);
	List->pushLast(3);
	List->pushLast(4);
	List->pushFront(5);
	List->pushLast(6);
	int front = List->front();
	int back = List->back();
	int find = List->search(4);
	return 0;
}