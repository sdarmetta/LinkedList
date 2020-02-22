/*student.cpp
 *
 * Salvatore D'Armetta
 *
 * student source file to define constructors and methods
 * of the student class.
 *
 */

#include "student.h"

//default constructor
Student::Student(){

	fname = "John";
	lname = "Doe";
	mi = 'M';
	social = "199260000";
	age = 19;
}

//custom constructor
Student::Student(string f, string l, char m, string s, int a){

	fname = f;
	lname = l;
	mi = m;
	social = s;
	age = a;
}

//copy constructor
Student::Student(const Student &s){

	fname = s.fname;
	lname = s.lname;
	mi = s.mi;
	social = s.social;
	age = s.age;
}

//method to take user input for a student object
void Student::input(){

	cout << "Input first name, middle initial, and last name: ";
	cin >> fname >> mi >> lname;

	cout << "Input Social Security Number: ";
	cin >> social;

	cout << "Input Age: ";
	cin >> age;
}

//method to display contents of a student object
void Student::display(){

	cout << "Name: " << fname << " " << mi << " " << lname << endl;
	cout << "Social Security Number: " << social << endl;
	cout << "Age: " << age << endl;
}

//mutator methods
void Student::setFirst(string f){

	fname = f;
}

void Student::setLast(string l){

	lname = l;
}

void Student::setMiddle(char m){

	mi = m;
}

void Student::setSocial(string s){

	social = s;
}

void Student::setAge(int a){

	age = a;
}

//accessor methods
string Student::getFirst() const{

	return(fname);
}

string Student::getLast() const{

	return(lname);
}

char Student::getMiddle() const{

	return(mi);
}

string Student::getSocial() const{

	return(social);
}

int Student::getAge() const{

	return(age);
}











