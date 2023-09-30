#include<iostream>
using namespace std;
void EO(int num);
main(){
int num;
cout<< "Enter a number: ";
cin>> num;
EO(num);
}
void EO(int num){
if((num%2)==0){
cout<<"Number "<<num<<" is even";
}
if(!(num%2==0)){
cout<<"Number "<<num<<" is odd";
}
}