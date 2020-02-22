/*sortDriver.cpp
 *
 * Salvatore D'Armetta
 *
 * Driver program to test the sorting algorithm of the list class
 * by sorting a linked list of nodes containing pointers to student
 * objects.
 *
 */

#include "list.h"

int main(){

	List list;
	Student *sptr = NULL;
	Node *nptr = NULL;
	int size = 0;

	cout << "Enter number of students to input: " << endl;
	cin >> size;
	
	for(int i = 0; i < size; i++){	//loop to create list

		sptr = new Student;
		sptr->input();
		nptr = new Node(sptr);

		list.append(nptr);
	}

	List list2(list);

	cout << "Unsorted list: " << endl;

	list2.displayAscending();	//display unsorted copied linked list

	list2.bubbleSort();	//sort linked list

	cout << "Sorted list: " << endl;

	list2.displayAscending();	//display sorted list

}
