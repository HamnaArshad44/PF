#include<iostream>
#include<fstream>
using namespace std;
main()
{
    string line;
    fstream file;
    file.open("ex.txt", ios::in);
    getline(file, line);
    file.close();
    cout<<"The line in file: "<<endl<<line;
}