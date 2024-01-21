#include<iostream>
#include<fstream>
using namespace std;
main()
{
    string line="This is a sample text";
    fstream file;
    file.open("example.txt", ios::out);
    file<<line;
    file.close();
}