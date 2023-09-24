#include<iostream>
using namespace std;
main() {
	int hours;
	cout<<"Enter the number of hours: ";
	cin>> hours;
	float sec;
	sec = hours*3600;
	cout<< hours<<" hours is equivalent to "<<sec<<" seconds.";
}