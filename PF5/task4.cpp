#include<iostream>
#include<cmath>
using namespace std;
float height(float n1, float n2);
main(){
        float n1, n2;
	cout<<"Enter the distance from the base of the tree (in feet): ";
	cin>> n1;
	cout<<"Enter the angle of elevation (in degrees): ";
	cin>> n2;
    cout<<"The height of the tree is: "<< height(n1,n2)<< " feet" ;
}
float height(float n1, float n2){
float radian, h ;
radian = (n2/57.2958);
h = tan(radian)*n1;
return h;
}


