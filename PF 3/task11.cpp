#include<iostream>
using namespace std;
main() {
	int popul;
	float rate;
	float decade;
	cout<< "Enter the current world population: ";
	cin>>popul;
	cout<< "Enter the monthly birth rate (number of births per month): ";
	cin>> rate;
	decade = popul+(rate*360);
	cout<< "The population in three decades will be: "<<decade; 
}