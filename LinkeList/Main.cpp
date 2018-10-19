#include "UnorderedLinkedList.h"

int main()
{
	UnorderedLinkedList<int>* List = new UnorderedLinkedList<int>();
	List->initalizeList();
	List->pushFront(1);
	List->pushBack(2);
	List->pushFront(3);
	List->pushBack(4);
	List->length();
	List->search(2);
	List->deleteNode(3);
	return 0;
}