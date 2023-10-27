#include<iostream>
using namespace std;
int showSum();
main()
{
    int total= showSum();
    cout<<total<<endl;
}
int showSum()
{
    int sum = 0;
    for(int i=1; i<= 5; i++)
    {
        sum = sum + i;
    }
    return sum;
}