#include<iostream>
using namespace std;
main() {
	string name;	
	int rollno;
	float Ag;
	char section;
	cout<< "Enter your name: ";
	cin>> name;
	cout<< "Enter your roll number: ";
	cin>> rollno;
	cout<< "Enter your aggregate: ";
	cin>> Ag;
	cout<< "Enter your section: ";
	cin>> section;
	string info;
	cout << "Student information:"<<endl;
	cout << "Name: "<<name <<endl;
	cout << "Roll number: "<<rollno <<endl;
	cout << "Aggregate: "<<Ag <<endl;
	cout << "Section: "<<section <<endl;
}