#include<iostream>
using namespace std;
void conv(float inch);
main(){
	float inch; 
	cout<< "Enter the measurement in inches: ";
	cin>> inch;
	conv(inch);
}
void conv(float inch){
	float feet;
	feet = inch/12;
	cout<< "Equivalent in feet: "<<feet;}