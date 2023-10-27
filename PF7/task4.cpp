#include<iostream>
using namespace std;
void frequncycheck(int number, int digit);
   int number = 0, digit = 0, frequency=0;
main()
{
 
    cout<<"Enter a number: ";
    cin>> number;
    cout<<"Enter the digit to check: ";
    cin>> digit;
    frequncycheck(number, digit);
    
}
void frequncycheck(int number, int digit)
{
    while (number > 0)
    {
        if(
        (number%10) == digit)
        {
        frequency++; 
    }
      number = number/10;
}
cout<<"Frequency: "<< frequency;
}
