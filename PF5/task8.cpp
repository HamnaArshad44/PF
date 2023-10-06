#include<iostream>
#include<cmath>
using namespace std;
int checkEO(int n1);
main(){
        int n1 ;
	cout<<"Enter a five-digit number: ";
	cin>> n1;
     checkEO (n1);
}
int checkEO(int n1)
{
    int digit1, digit2, digit3, digit4, digit5;
    digit1 = n1/10000;
    digit2 = (n1%10000)/1000;
    digit3 = ((n1%10000)%1000)/100;
    digit4 = (((n1%10000)%1000)%100)/10;
    digit5 = ((((n1%10000)%1000)%100)%10); 
    if((((digit1 + digit2 + digit3 + digit4 + digit5))%2) == 0){
        cout<<"Evenish";
    }
    if(!((((digit1 + digit2 + digit3 + digit4 + digit5))%2) == 0)){
        cout<<"Oddish";
    }
}
