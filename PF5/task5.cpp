#include<iostream>
#include<cmath>
using namespace std;
float determinant(float n1, float n2, float n3);
main(){
        float n1, n2, n3, d;
	cout<<"Enter the value of a: ";
	cin>> n1;
	cout<<"Enter the value of b: ";
	cin>> n2;
    cout<<"Enter the value of c: ";
    cin>> n3;
    d = determinant(n1,n2,n3);
    float root = (-(n2/2*n1));
    if(d==0){
        cout<< "Solution: x ="<< (-(n2/2*n1));
    }
    if(d>0){
        cout<<"Solutiions: x = "<< (-(n2) + (sqrt(d)))/(2*n1)  << " and x = "<< (-(n2) - (sqrt(d)))/(2*n1) ;
    }
    if(d<0){
       cout<< "Complex Solutions: x = "<< (root)<< " + "<< ((sqrt(-(d))) /(2*n1)) <<"i and x = "<< (root) <<" - "<< ((sqrt(-(d))) /(2*n1))<<"i";
       
    }
    }

float determinant(float n1, float n2, float n3){
    float d;
    d = (n2*n2)-(4*n1*n3);
    return d;

}
