#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"Enter a string: ";
    getline(cin, word);
    cout<<"String with vowels removed: ";
    for(int x = 0 ; word[x] != '\0'  ; x++)
    {
        if(word[x] != 'a' && word[x] != 'e' && word[x] != 'i' && word[x] != 'o' && word[x] != 'u' && word[x] != 'A' && word[x] != 'E' && word[x] != 'I' && word[x] != 'O' && word[x] != 'U')
       { 
        cout<<word[x];
    }
    }
}