#include<iostream>
using namespace std;
main() {
	float kg = 0.45;
	float pounds;
	float convertedvalue;
	cout<< "Enter weight in pounds: ";
	cin>> pounds;
	convertedvalue=pounds*kg;
	cout<< pounds<<" pounds is equal to "<<convertedvalue<<" kilograms."<<endl;
}