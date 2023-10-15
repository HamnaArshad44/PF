#include<iostream>
using namespace std;
string title(int age, char gender);
int age;
char gender;
main(){
    cout<<"Enter your age: ";
    cin>> age;
    cout<<"Enter your gender (m/f): ";
    cin>> gender;
    string ans = title(age, gender);
    cout<<"Your personal title is: "<< ans;
}
string title(int age, char gender){
    string title;
    if(age >= 16 && gender == 'm'){
        title = "Mr.";
        return title;
    }

    if(age >= 16 && gender == 'f'){
    title = "Ms.";
    return title;
    }

    if (age < 16 && gender == 'f'){
    title = "Miss";
        return title;
    }
   
        if (age < 16 && gender == 'm'){
    title = "Master";
        return title;

}
return title;
}