#include "Iterator.h"
#include "LinkedListType.h"
#include "NodeType.h"
#include "UnorderedLinkedList.h"

int main()
{
	nodeType<int> n1;
	nodeType<int> n2;
	nodeType<int> n3;
	n1.info = 1;
	n2.info = 2;
	n3.info = 3;
	n1.next = n2;
	n2.next = n3;
	return 0;
}