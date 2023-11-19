#include <iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter the count of number: ";
    cin>>n; 
    int number[n];
 for(int count=0; count<n; count++)
 {
    cout << "Enter  number: ";
    cin >> number[count];
}
for(int count=0; count<n; count++)
 {
    cout << "The element at location number["<<count<<"] is: " << number[count] << endl;
}
}