#include<iostream>
using namespace std;
void digits(int number);
   int number = 0, digit = 0;
main()
{
 
    cout<<"Enter a number: ";
    cin>> number;
    digits(number);
    
}
void digits(int number)
{
    while (number > 0)
    {
        digit = digit + 1;
        number = number/10;
    }
    cout<< "Total number of digits: "<< digit;
  
}