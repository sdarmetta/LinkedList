/*list.cpp
 *
 * Salvatore D'Armetta
 *
 * list source file containing constructor and method
 * definitions in order to allow a linked list of 
 * node objects.
 */

#include "list.h"

//default constructor
List::List(){

	head = NULL;
}

//copy constructor
List::List(const List &l):List(){

	Node *lptr = l.head;
	Node *nptr = NULL;

	while(lptr){

		nptr = new Node(*lptr);
		append(nptr);
		lptr = lptr->getNext();
	}
}

//destructor
List::~List(){
	
	Node *curr = head;

	while(!curr){
		Node *next = curr->getNext();
		delete curr;
		curr = next;
	}

	head = NULL;

}

//method to sort the list in ascending order of age
void List::bubbleSort(){

	Node *prev = NULL;
	Node *curr = head;
	Node *temp = NULL;

	while(curr->getNext() != NULL){	
		//if list head student age is greater then next node student age
		if(curr->getStudent()->getAge() > curr->getNext()->getStudent()->getAge()){
			//rearrange where first in the list is placed second and second is placed at first	
			temp = curr->getNext();		
			curr->setNext(temp->getNext());	
			temp->setNext(curr);		

			if(curr == head)	//reset pointers so that head points to first item in list
				head = temp;
			else
				prev->setNext(temp);

			curr = head;		//reset prev and curr
			prev = NULL;
		}
		else{
			prev = curr;
			curr = curr->getNext();
		}
	}

}	


//method to append a node to the end of the list
void List::append(Node *n){

	Node *lptr = head;

	if(lptr){

		while(lptr->getNext() != NULL)
			lptr = lptr->getNext();

		lptr->setNext(n);
	}
	else
		head = n;


}

//method to remove a node from the list
void List::remove(int position){

	Node *prev = NULL;
	Node *curr = head;

	if(curr){
		//find node to be removed
		for(int i = 1; i != position; i++){
			prev = curr;
			curr = curr->getNext();
		}
		//remove node and rearrange list
		if(!prev){
			head = curr->getNext();
			delete curr;
			curr = NULL;
		}
		else{
			prev->setNext(curr->getNext());
			delete curr;
			curr = NULL;
		}
	}
}

//method to insert a node at a specific location in the list
void List::insert(Node *n){

	Node *prev = NULL;
	Node *curr = head;

	if(curr){
		//while inserted student age is greater than next student node
		while((curr) && (n->getStudent()->getAge() > curr->getStudent()->getAge())){
				prev = curr;
				curr = curr->getNext();
		}
		//if student age is greater than all in list, append the student node
		if(!curr)
			append(n);	
		
		//if student age is the smallest in list, insert to head of the list
		if(!prev){	
			head = n;
			n->setNext(curr);
		}
		
		//if student age is between two students, insert between students
		if(prev && curr){
			prev->setNext(n);
			n->setNext(curr);
		}
	}
	//if list is empty
	else
		head = n;
}

//method to display contents of linked list
void List::displayAscending() const{

	Node *lptr = head;

	while(lptr){

		lptr->display();
		lptr = lptr->getNext();
	}
	
}

//method to check if list is empty
bool List::isEmpty(){

	bool empty;

	if(head == NULL)
		empty = true;
	else
		empty = false;

	return(empty);
}

//method to determine number of nodes currently in list
int List::getNumNodes(){

	Node *lptr = head;
	int numNodes = 0;

	while(lptr){
		numNodes++;
		lptr = lptr->getNext();
	}
	
	return(numNodes);

}





