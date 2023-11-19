#include<iostream>
using namespace std;
void revers(int number[], int size);
main()
{
    int size;
    
    string result;
    cout<<"Enter a number of elements: ";
    cin>>size;
    if(size<=0)
    {
        cout<<"Invalid Input. Number of elements must be greater than 0.";
    }
    else{
        int number[size];
    cout<<"Enter" << size<<" number, one per line: "<<endl;
    for(int i=0; i<size; i++){
    cin>>number[i];
    }
    cout<<"Number in reverse order: ";
    revers(number,size);
    }
return 0;
}


void revers(int number[], int size)
{
    for(int i =size-1; i >= 0; i--)
    {
        cout<<number[i]<<" ";
    }
    cout<<endl;
}