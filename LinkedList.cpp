#include "LinkedList.h"

//Define our custom constructor
LinkedList::LinkedList(){

	root = nullptr;
	numOfNodes = 0;

}


bool LinkedList::insertNode(int value)
{
	if(root == nullptr){
		//Create our new node 
		Node* newestNode = new Node(value);

		//Make the root pointer point to this new node
		root = newestNode;
		//Increment the node counter
		++numOfNodes;
		//We have successfully inserter the node so return true.
		return 1;
	}



	//The exists nodes in our linkedList so we must traverse to the end of the list 
	//and then place our newest node there. 
	

	//Starting at the root.
	Node* current = root;

	//Go to the end of the list
	while(current->nextPtr != nullptr){
		current = current->nextPtr;
	}	
	
	//The next node is empty.
	//We must place our new node in there

	//Create the new node and then place it on the follwing position
	Node* newerNode = new Node(value);
	
	current->nextPtr = newerNode;

	//We have inserted a new Node, so we must increment the node counter
	++numOfNodes;
	return 1;

}
