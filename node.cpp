/*node.cpp
 *
 * Salvatore D'Armetta
 *
 * node source file with constructor and method definitions
 * for instantiating a node object.
 *
 */

#include "node.h"

//default constructor
Node::Node(){

	next = NULL;
}

//custom constructor
Node::Node(Student *s):Node(){

	sPtr = s;
}

//copy constructor
Node::Node(const Node &n):Node(){

	sPtr = new Student(*(n.sPtr));
}

//destructor
Node::~Node(){

	if(sPtr)
		delete sPtr;

	sPtr = NULL;
	next = NULL;
}

//display method
void Node::display(){

	sPtr->display();
}

//accessor method for data member next
Node* Node::getNext() const{

	return(next);
}

//accessor method to access student pointer data member
Student* Node::getStudent() const{

	return(sPtr);
}

//mutator method for data member next
void Node::setNext(Node *n){

	next = n;
}


