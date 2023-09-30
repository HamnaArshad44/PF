#include<iostream>
using namespace std;
void pass(int score);
main(){
	int score;
	cout<< "Enter your score: ";
	cin>> score;
	pass(score);
}
void pass(int score){
	if(score>50){
cout<<"Pass";
}
	if(!(score>50)){
cout<<"Fail";
}
}
