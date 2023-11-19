#include<iostream>
using namespace std;
int isLargest(int number[], int size); 
main()
{
    int size;
    cout<<"Enter the number of elements: ";
    cin>>size;
    if(size<=0)
    {
        cout<<"Invalid input. Number of elements must be greater than 0.";
    }
  
        int number[size];
    cout<<"Enter " << size<<" numbers, one per line:"<<endl;
    for(int i=0; i<size; i++){
    cin>>number[i];
    }
    
    int ans= isLargest(number,size);
    cout<<"The largest number entered is: "<<ans<<endl;
}
int isLargest(int number[], int size)
{
    int L_num=0;
    for(int i=0;i<size;i++)
    {
        if(number[i]>L_num)
        {
            L_num =number[i];
        }
    }
return L_num;
}
