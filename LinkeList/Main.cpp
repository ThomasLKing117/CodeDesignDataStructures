#include "Iterator.h"
#include "LinkedListType.h"
#include "NodeType.h"
#include "UnorderedLinkedList.h"

int main()
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
	int test = *Iterate;
	++Iterate;
	test = *Iterate;
	++Iterate;
	test = *Iterate;
	return 0;
}