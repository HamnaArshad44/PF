#include<iostream>
#include<fstream>
using namespace std;
int countch(string fileName);
main()
{
   int ans=countch("ex.txt");
 cout<<"The total number of characters: "<<ans;  
    
}
int countch(string path)
{
    int count=0;
    int l;
    string line;
     fstream file;
     file.open(path, ios::in);
     while(!file.eof())
    {
   getline(file, line);
    l=line.length();
    count=count+l; 
    }
    file.close();
return count;
}