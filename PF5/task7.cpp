#include<iostream>
#include<cmath>
using namespace std;
int checksymmetry(int n1);
main(){
        int n1 ; string Tf;
	cout<<"Enter a three-digit number: ";
	cin>> n1;
    Tf = checksymmetry (n1);
    cout<< Tf;
}
int checksymmetry(int n1)
{
    int digit1, digit2, digit3; string Tf;
    digit1 = n1/100;
    digit2 = (n1%100)/10;
    digit3 = (n1%100)%10;
    if (((digit3*100)+(digit2*10)+(digit1)) == n1){
        Tf = "The number is symmetrical.";
    }
    if(!(((digit3*100)+(digit2*10)+(digit1)) == n1)){
        Tf = "The number is not symmetrical.";
    }
}
