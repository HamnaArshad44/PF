#include<iostream>
using namespace std;
void v1(int age);
void v2(int age);
main() {
	int age;
	cout<< "Enter your age: ";
	cin>> age;
	if(age>=18){
	v1(age);
}
	if(age<18){
	v2(age);
}
} 
void v1(int age){
cout<< "You are eligible to vote.";
}
void v2(int age){
cout<< "You are not eligible to vote.";
}