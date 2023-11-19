#include<iostream>
using namespace std;
double total(double number[], int size); 
main()
{
    int size;
    cout<<"Enter the number of resistor in series circuit: ";
    cin>>size;
    if(size<=0)
    {
        cout<<"Invalid input. Number of resistors must be greater than 0.";
    }
  
        double number[size];
    cout<<"Enter the resistance values (in ohms) of the " << size<<" resistors, one per line:"<<endl;
    for(int i=0; i<size; i++){
    cin>>number[i];
    }
    
    double ans = total(number,size);
    cout<<"The total resistance of the circuit is: "<<ans<<" ohms."<<endl;
    return 0;
}
double total(double number[], int size)
{
    double sum = 0;
    for(int i=0; i<size; i++) {
        sum += number[i];
}
return sum;
}