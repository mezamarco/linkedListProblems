//Create a linkedList and then solve the following problem with it.
//
#include "LinkedList.h"
#include <iostream>
#include <ctime>

void solveNthProblem(LinkedList &listReference, int n);

int main(){

	srand(time(NULL));

	std::cout << "\nHow many Node objects would you like to create for our linkedList: ";
	int size;
	std::cin >> size;

	
	
	std::cout << "\nWe will create the LinkedList with: "<< size <<" objects." << std::endl; 

	LinkedList theList;
	int randomValue;


	//Populate the list with random numbers
	for(int i = 0 ; i < size ; i++){
		//Our random value will have a range of: (1 - 100)
		randomValue = (rand() % 100 + 1);
		std::cout << "Inserting: " << randomValue;
		theList.insertNode(randomValue);
		std::cout << std::endl;
	}



	std::cout << "\n\nHow many Node objects did we create: " << theList.numOfNodes << "\n\n";




	//Problem: What is in the nth-to-last node?
	//Lets solve it, using a function
	std::cout << "We will now solve the nth-to-last node problem\n\n";

	int n;
	std::cout << "Enter the value for the nth to last problem: ";
	std::cin >> n;
	std::cout << "\nWe will get the value of the: " << n << "th-to-last Node\n\n";

	//Function that solves our problem.
	solveNthProblem(theList, n);






}

void solveNthProblem(LinkedList &listReference, int n)
{
	
	if(listReference.numOfNodes == 0) {
		std::cout << "The linkedList is empty, therefore the problem has no solution\n\n";
	}


	//We will use two pointer a current pointer and a tracking pointer
	Node* current = listReference.root;
	Node* tracker = listReference.root;

	//Shift the current pointer the correct number of times, without passing our the size boundary 
	for(int i = 0 ; i < n; i++)
	{
		if(current == nullptr)
		{

			std::cout << "The linked List is too short, therefore no solution.\n\n";
			return;
		}
		else{
			if(current->nextPtr == nullptr){
			
				std::cout << "The linked List is ONE short, therefore no solution.\n\n";
				return;
			}
			current = current->nextPtr;
		
		}
	}	
	
	//current and tracker are in their correct positions and now move both pointers as we go
	while(current->nextPtr != nullptr){
		current = current->nextPtr;
		tracker = tracker->nextPtr;
	}
	//Tracker is pointing to the Node solution
	std::cout << "The " << n <<"th-to-last Node has the following key: "<< tracker->data << "\n\n";
}	






