#include<iostream>
using namespace std;
string speed(float num);
float num;
string ans;
main(){
    cout<<"Enter the speed: ";
    cin>> num; 
    ans = speed(num);  
    cout<< ans;
}
string speed(float num){
    if(num <= 10 ){
        ans = "slow" ;
    }
    if(num >10 && num <= 50 )
    {
        ans = "average" ;
    }
    if(num > 50 && num <= 150 )
    {
        ans = "fast" ;
    }
    if(num > 150 && num <= 1000)
    {
        ans = "ultra-fast" ;
    }
    if(num > 1000 )
    {
        ans = "extremely-fast" ;
    }
    return ans;
}