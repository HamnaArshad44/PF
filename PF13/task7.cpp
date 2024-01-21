#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
void displayWords(string fileName);
main()
{
      displayWords("task7.txt");

}
void displayWords(string path)
{
    string ans="";
    string word="";
    string line;
    fstream file;
    file.open(path, ios::in);
    while (!file.eof())
    {
        getline(file, line);
        for(int i = 0; i < line.length(); i++)
        {
           
            if(line[i] !=' ')
            {
            word+=line[i];
            }
            else 
            {
              
                if(word.length()<4)
                {
                    ans =ans +" "+ word ;
                }
                word="";
               
            }

        }
        if(word.length()<4)
        {
            ans =ans +" "+ word ;
          
            }
         word="";
    }
    file.close();
cout << ans << endl;
}