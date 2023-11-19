#include<iostream>
using namespace std;
void insertArray(int number[], int size1, int number2[], int size2);
main()
{
    int size1, size2;
    cout<<"Enter the number of elements for the first array (must be 2): ";
    cin>>size1;
    if(size1<=0)
    {
        cout<<"Invalid input. Number of elements must be greater than 0."<<endl;
    }
    else if(size1!=2)
    {
        cout<<"number must be 2."<<endl;
    }
  
        int number1[size1];
    cout<<"Enter " << size1<<" elements for the first array, one per line:"<<endl;
    for(int i=0; i<size1; i++){
    cin>>number1[i];
    }
    cout<<"Enter the number of elements for the second array: ";
    cin>>size2;
    if(size2<=0)
    {
        cout<<"Invalid input. Number of elements must be greater than 0.";
    }
  
        int number2[size2];
    cout<<"Enter " << size2<<" elements for the second array, one per line:"<<endl;
    for(int i=0; i<size2; i++){
    cin>>number2[i];
    }
    insertArray(number1,size1,number2, size2);
}
void insertArray(int number1[], int size1, int number2[], int size2)
{
    cout<<"Resulting array: ["<<number1[0]<<", ";
     for(int i=0; i<size2; i++)
     {
        cout<<number2[i]<<", ";
     }
     cout<<number1[1]<<"]";
}