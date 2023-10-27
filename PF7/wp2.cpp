#include<iostream>
using namespace std;
main()
{
    int num = 0, sum = 0;
    while(num >=0)
 {
    sum = sum + sum;
    cout<<"Enter a number: ";
    cin >> num;
}
    cout<<"Sum: "<<sum;
}