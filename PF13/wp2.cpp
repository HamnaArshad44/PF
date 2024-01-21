#include<iostream>
#include<fstream>
using namespace std;
main()
{
    int i;
    float f;
    char ch;
    cout<<"Enter integer: "; 
    cin>>i;
     cout<<"Enter decimal: "; 
    cin>>f;
     cout<<"Enter character: "; 
    cin>>ch;
    fstream file_int;
    fstream file_dec;
    fstream file_ch;
    file_int.open("int.txt", ios::out);
    file_int<<i;
    file_int.close();
    file_dec.open("dec.txt", ios::out);
    file_dec<<f;
    file_dec.close();
    file_ch.open("ch.txt", ios::out);
    file_ch<<ch;
    file_ch.close();
}