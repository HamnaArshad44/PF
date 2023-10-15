#include<iostream>
using namespace std;
int greatest(int n1, int n2, int n3);
int n1, n2, n3;
main(){
    cout<<"Enter the first number: ";
    cin>> n1;
    cout<<"Enter the second number: ";
    cin>> n2;
    cout<<"Enter the third number: ";
    cin>> n3;
    int ans = greatest(n1, n2, n3);
    cout<<"The greatest number among "<<n1 <<", "<< n2<<", and "<< n3<<" is: "<< ans;
}
int greatest(int n1, int n2, int n3){
    if(n1 > n2 && n2 > n3){
        return n1;
    }
    if(n2 > n1 && n1 > n3){
        return n2;
    }
    if(n3 > n2 && n2 > n1){
        return n3;
    }

}