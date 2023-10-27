#include<iostream>
using namespace std;
void printcounting();
main()
{
    printcounting();
}
void printcounting()
{
    cout<<"Counting (1-10)"<<endl;
    for(int i=1; i<=10; i++)
    {
        cout<<i<<" "<<endl;
    }
}