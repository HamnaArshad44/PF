#include <iostream>
using namespace std;
string next(char word, string alphabets);
main()
{
    string alphabets="abcdefghijklmnopqrstuvwxyABCDEFGHIJKLMNOPQRSTUVWXY";
    string word, result;
    cout<<"Enter a String: ";
    getline(cin,word);
    cout<<"Shifted String: ";
    for(int x=0; word[x] != '\0'; x++)
    {
     result=next(word[x], alphabets);
     cout<<result;   
    }
}
string next(char word, string alphabets)
{
    string ans="";

    if(word == ' ')
    {
        ans=ans+' ';
    }
    if(word == 'z')
    {
        ans=ans+'a';
    }
    if(word == 'Z')
    {
        ans=ans+'A';
    }

    for(int idx=0; alphabets[idx] != '\0'; idx++)
    {   
        if(alphabets[idx] == word)
        {
            ans = ans+alphabets[idx+1];
            
        }
}
return ans;
}
