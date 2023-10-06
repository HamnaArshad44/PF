#include<iostream>
#include<cmath>
using namespace std;
string poolstate(float volume, float frp1, float frp2, float h);
main(){
        float volume, frp1, frp2;
        float h;
	cout<<"Enter  volume of the pool in liters: ";
	cin>> volume;
	cout<<"Enter flow rate of the first pipe per hour: ";
	cin>> frp1;
    cout<<"Enter flow rate of the second pipe per hour: ";
    cin>> frp2;
    cout<<"Enter the hours that the worker is absent: ";
    cin >> h;
poolstate(volume, frp1,frp2, h);
}
string poolstate(float volume, float frp1, float frp2, float h){
    float fullP1, fullP2, totalfull;
    int percentT , percent1, percent2;
    fullP1 = frp1*h;
    fullP2 = frp2*h;
    totalfull = (fullP1+ fullP2);
    percent1 = ((fullP1/totalfull)*100);
    percent2 = ((fullP2/totalfull)) *100;
    percentT = ((totalfull/volume)*100);
    if(totalfull<=volume){
        cout<<"The pool is "<< percentT<< "% full. Pipe 1: "<<percent1<< "% full. Pipe 2: "<< percent2<<"%"; 
    }
    if (totalfull>volume){
        float overflow =  totalfull - volume;
        cout<< "For "<< h << "hours, the pool overflows with "<< overflow<< " liters.";
    }

}