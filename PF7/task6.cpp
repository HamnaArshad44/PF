#include<iostream>
using namespace std;
void gcd(int num1, int num2);

   int number1 = 0, number2 = 0, g=1, l=1;
main()
{
 
    cout<<"Enter the first number: ";
    cin>> number1;
    cout<<"Enter the second number: ";
    cin>> number2;
    gcd(number1, number2);
 
    
}
void gcd(int number1, int number2)
{
    for(int i=1; i<number1 && i<number2; i++)
    if(number1%i == 0 && number2%i == 0)
    {
      g= i;   

}
l = (number1*number2)/g;
cout<<"GCD: "<<g<<endl ;
cout<<"LCM: "<<l<<endl;
}