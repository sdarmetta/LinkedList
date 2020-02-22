/*list.h
 *
 * Salvatore D'Armetta
 *
 * header file for the list class with constructor, 
 * methods, and data members prototypes necessary for
 * creating a single linked list of nodes.
 */

#ifndef LIST_H
#define LIST_H

#include "node.h"

class List{

public:

	List();		//default constructor
	List(const List &);		//copy constructor

	~List();	//destructor

	void bubbleSort();	//sorting member function to sort list in ascending order of age
	void append(Node *);		//method to append a new node at the end of the list
	void remove(int);		//method to remove a node in the list
	void insert(Node *);		//method to insert a node in the list

	void displayAscending() const;	//method to display the contents of the list from head to tail

	bool isEmpty();		//method to indicate if list is empty

	int getNumNodes();	//method to determine number of nodes in the list

private:

	Node *head;

};

#endif

