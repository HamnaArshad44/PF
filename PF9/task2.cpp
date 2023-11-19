#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"Enter a string: ";
    cin>>word;
    cout<<"Reversed String: ";
    int size = word.length();
    for(int x = size-1; x >= 0 ; x--)
    {
        cout<<word[x];
    }
}