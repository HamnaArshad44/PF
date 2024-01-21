#include<iostream>
#include<fstream>
using namespace std;
int countfrequency(string fileName);
main()
{
   int ans=countfrequency("ex.txt");
 cout<<"The total number of ch: "<<ans;  
    
}
int countfrequency(string path)
{
    int count=0;
    int l;
    string line;
    char req;
     fstream file;
     file.open(path, ios::in);
       getline(file, line);
    req=tolower(line[0]);
     while(!file.eof())
    {
   getline(file, line);
   l=line.length();
   for(int j=0; j<l; j++)
   {
    char l=tolower(line[j]);
   if (l==req)
   {
    count++;
   }
   } 
    }
    file.close();
return count;
}