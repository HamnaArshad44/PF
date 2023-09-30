#include<iostream>
using namespace std;
void sum(int n1, int n2);
void sub(int n1, int n2);
void mul(int n1, int n2);
void divi(float n1, float n2);
main() {
	int n1,n2;
	char op;
	cout<< "Enter 1st number: ";
	cin>>n1;
	cout<< "Enter 2nd number: ";
	cin>>n2;
	cout<< "Enter an operator (+, -, *, /): ";
	cin>> op;
	if(op== '+'){
	sum(n1,n2);
	}
	if(op=='-'){
	sub(n1,n2);
	}
	if(op== '*'){
	mul(n1,n2);
	}
	if(op== '/'){
	divi(n1,n2);
	}}
void sum(int n1, int n2){
cout<<"Addition: "<<n1+n2;
}
void sub(int n1, int n2){
cout<<"Subtraction: "<<n1-n2;
}
void divi(float n1, float n2){
cout<<"Division: "<< n1/n2;
}
void mul(int n1, int n2){
cout<<"Multiplication: "<<n1*n2;
}