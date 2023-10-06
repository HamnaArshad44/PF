#include<iostream>
#include<cmath>
using namespace std;
string timetravel(int h, int m);
main(){
    int h,m;
    cout<<"Enter Hours: ";
    cin>>h;
    cout<<"Enter Minutes: ";
    cin>>m;
    string hm = timetravel(h,m);
    cout<< hm;
}
string timetravel(int h, int m){
    int tm, hh, mm;
    tm = (h*60)+m+15;
    hh = tm/60;
    mm = tm%60;
    string hm = to_string(hh) + ":" + to_string(mm);
    return hm;

    
}