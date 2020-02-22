/*student.h
 *
 * Salvatore D'Armetta
 *
 * student header file with constructors, member functions,
 * and data members to instantiate a student object.
 *
 */

#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
using namespace std;

class Student{

public:

	Student();	//default constructor
	Student(string, string, char, string, int);	//custom constructor
	Student(const Student &);	//copy constructor

	void input();	//input function
	void display();	//display function

	//mutator methods
	void setFirst(string);
	void setLast(string);
	void setMiddle(char);
	void setSocial(string);
	void setAge(int);

	//accessor functions
	string getFirst() const;
	string getLast() const;
	char getMiddle() const;
	string getSocial() const;
	int getAge() const;


private:
	
	//data members
	string fname, lname, social;
	char mi;
	int age;

};

#endif
