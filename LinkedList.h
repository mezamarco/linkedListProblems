#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList{
public: 
	Node* root;
	int numOfNodes;

	//Default constructor
	LinkedList();

	
	//Function Protypes
	bool insertNode(int value);
};
#endif
