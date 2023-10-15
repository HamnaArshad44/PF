#include<iostream>
using namespace std;
int com(int n1, int n2);
int n1, n2;
main(){
cout<<"Enter the first number: ";
cin>> n1;
cout<<"Enter the second number: ";
cin>> n2;
int comparison = com(n1, n2);
cout<< comparison;

}
int com (int n1 , int n2){
    int comparison;
    if(n1 > n2){
        comparison = 1;
    }
    else{
        comparison = 0;
    }
    return comparison;
}