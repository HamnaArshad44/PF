#include<iostream>
#include<fstream>
using namespace std;
main()
{
    int i;
    float f;
    char ch;
    fstream file_int;
    file_int.open("int.txt", ios::in);
    file_int>>i;
    file_int.close();
    cout<<i<<endl;
    fstream file_dec;
    file_dec.open("dec.txt", ios::in);
    file_dec>>f;
    file_dec.close();
    cout<<f<<endl;
    fstream file_ch;
    file_ch.open("ch.txt", ios::in);
    file_ch>>ch;
    file_ch.close();
    cout<<ch;
}