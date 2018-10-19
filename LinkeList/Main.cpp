#include "UnorderedLinkedList.h"

int main()
{
	UnorderedLinkedList<int>* List = new UnorderedLinkedList<int>();
	UnorderedLinkedList<int>* CopyList = new UnorderedLinkedList<int>();
	List->initalizeList();
	List->pushFront(1);
	List->pushBack(2);
	List->pushFront(3);
	List->pushBack(4);
	CopyList = List;
	CopyList->search(2);
	CopyList->deleteNode(4);
	CopyList->begin();
	CopyList->end();
	CopyList->print();
	std::cout << "There are " << CopyList->length() << " nodes..." << std::endl;
	return 0;
}