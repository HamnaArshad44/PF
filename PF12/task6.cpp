#include <iostream>
using namespace std;
string Battleship_game(string Battleship[][5], int rowSize,string );
main()
{
    string cordinates;
    const int colSize=5;
    int rowSize=5;
    string Battleship[5][5]={
        {".",".",".","*","*"},
        {".","*",".",".","."},
        {".","*",".",".","."},
        {".","*",".",".","."},
        {".",".","*","*","."},
    };
    cout<<"Enter coordinates to fire torpedo(e.g., A1, B3, E5): ";
    cin>>cordinates;
    string ans=Battleship_game(Battleship, rowSize,cordinates);
    cout<<"Result: "<<ans<<endl;
    
}
string Battleship_game(string Battleship[][5], int rowSize,string cordinates)
{
     string result;
    int colSize;
    if(cordinates[0]=='A')
    {
        rowSize = 0;
    }
    else if(cordinates[0]=='B')
    {
        rowSize = 1;
    }
    else if(cordinates[0]=='C')
    {
        rowSize = 2;
    }
    else if(cordinates[0]=='D')
    {
        rowSize = 3;
    }
    else if(cordinates[0]=='E')
    {
        rowSize = 4;
    }
    colSize=(cordinates[1]-'0')-1;
     if(Battleship[rowSize][colSize] == ".")
     {
        result="splash";
     } 
     else if(Battleship[rowSize][colSize] =="*")
     {
        result="BOOM";
     }  
   
return result;
}