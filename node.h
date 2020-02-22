/*node.h
 *
 * Salvatore D'Armetta
 *
 * node header file with prototypes and constructors
 * for a node object that forms a linked list with 
 * other node objects.
 *
 */

#ifndef NODE_H
#define NODE_H

#include "student.h"

class Node{

public:

	Node();		//default constructor
	Node(Student *);	//custom constructor
	Node(const Node &);	//copy constructor

	~Node();	//destructor

	void display();		//display method

	Node *getNext() const;	//accessor method to retrieve next node in list
	Student *getStudent() const;	//accessor method to retrieve student pointer data member
	void setNext(Node *);	//mutator method to set data member next

private:

	//data members for a node object
	Student *sPtr;	//pointer to student object
	Node *next;	//pointer to next node in linked list
};

#endif
