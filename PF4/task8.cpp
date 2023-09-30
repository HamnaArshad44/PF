#include<iostream>
using namespace std;
void calculate(float amt,string d);
main(){
	string day;
	cout<<"Enter the day of purchase: ";
	cin>>day;
	float amount;
	cout<<"Enter the total purchase amount: $";
	cin>>amount;
	calculate(amount,day);
}
void calculate(float amt,string d){
	if(d=="Sunday"){
cout<<"Payable Amount: $"<<amt-(amt*0.1);
}
	if(!(d=="Sunday")){
cout<<"Payable Amount: $"<<amt;
}	
}