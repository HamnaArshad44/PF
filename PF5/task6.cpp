#include<iostream>
#include<cmath>
using namespace std;
string checkalphabet(char n1);
main(){
    char n1; string Alph ;
	cout<<"Enter a character (A/a): ";
	cin>> n1;
    Alph = checkalphabet (n1);
     cout<< Alph;
}
string checkalphabet(char n1){
    string Alph;
    if (n1 == 'A'){
        Alph = "You have entered Capital A";
    }
    if(n1 == 'a'){
        Alph = "You have entered small a";
    }
    return Alph;
}

    
