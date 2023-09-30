#include<iostream>
using namespace std;
void calculatefuel(float d); 
main() {
	float dis;
	cout<< "Enter the distance: ";
	cin>> dis;
	calculatefuel(dis);

}
void calculatefuel(float d) {
	float f;
	f=d*10;
	if(f>=100){
	cout<<"Fuel needed: "<<f;
}
	if(f<100){
	cout<<"Fuel needed: 100";
}	
}