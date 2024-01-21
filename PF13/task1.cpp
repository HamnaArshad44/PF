#include<iostream>
#include<fstream>
using namespace std;
int countLines(string fileName);
main()
{
   int ans=countLines("ex.txt");
 cout<<"The total number of lines: "<<ans;  
    
}
int countLines(string path)
{
    int count=0;
    string line;
     fstream file;
     file.open(path, ios::in);
     while(!file.eof())
    {
    getline(file, line);
    count++; 
    }
    file.close();
return count;
}