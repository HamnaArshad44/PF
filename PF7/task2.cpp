#include<iostream>
using namespace std;
void Fibonacci(int length);
   int length = 0;
main()
{
 
    cout<<"Enter the length of the Fibonacci series: ";
    cin>> length;
    Fibonacci(length);
    
}
void Fibonacci(int length)
{
    int first = 0, second = 1 , next = 0;
    for (int i = 1; i <= length; i++)  
    {
        cout<< next;
        if(i < length) {
            cout<< ", ";
        }
       first = second;
       second = next;
       next = first + second; 
       
    }
}