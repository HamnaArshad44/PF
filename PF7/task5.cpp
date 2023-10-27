#include<iostream>
using namespace std;
void sum(int number);
   int number = 0, digit = 0, add = 0;
main()
{
 
    cout<<"Enter a number: ";
    cin>> number;
    sum(number);
    
}
void sum(int number)
{
    while (number > 0)
    {
        digit = number%10;
        add = add + digit;
        number = number/10;
}
cout<<"Sum of digits: "<< add;
}
