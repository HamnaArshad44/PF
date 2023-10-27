#include<iostream>
using namespace std;
void printTable(int number);
   int number = 0;
main()
{
 
    cout<<"Enter a number: ";
    cin>> number;
    printTable(number);
    
}
void printTable(int number)
{
    int num;
    for(int i = 1; i <= 10; i++) 
    {
       num = number *i;
       cout<<number <<" x "<< i <<" = "<<num<<endl;
    }
}