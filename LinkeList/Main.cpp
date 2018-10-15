#include "NodeType.h"
#include "Iterator.h"
#include "LinkedListType.h"
#include "UnorderedLinkedList.h"

int main()
{
	nodeType<int>* N1 = new nodeType<int>;
	N1->info = 5;
	nodeType<int>* N2 = new nodeType<int>;
	N2->info = 10;
	UnorderedLinkedList<int>* List;
	List->pushFirst(N1->info);
	return 0;
}