#include<iostream>
using namespace std;
bool check(string word, char letter);
main()
{
    string word;
    char letter;
    cout<<"Enter word: ";
    cin>>word;
    cout<<"Enter letter: ";
    cin>>letter;
    if(check(word, letter))
    {
        cout<<letter<<" is Found in "<<word;
    }
else{
     cout<<letter<<" is not Found in "<<word;
}
}
bool check(string word, char letter)
{
    bool isFound=false;
    for(int idx=0; word[idx] != '\0'; idx++)
    {
        if(word[idx] == letter)
        {
            isFound=true;
            break;

        }
    }
    return isFound;
}