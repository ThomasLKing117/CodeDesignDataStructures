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
	List->search(2);
	List->deleteNode(4);
	List->begin();
	List->end();
	List->print();
	std::cout << "There are " << List->length() << " nodes..." << std::endl;
	return 0;
}