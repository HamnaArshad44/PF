#include<iostream>
using namespace std;
float perimeter(float side, char shape);
float side; char shape;
main(){
    cout<< "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin>> shape;
    cout<<"Enter the value: ";
    cin>> side;
    float ans = perimeter(side, shape);
    cout<<"The perimeter is: "<<ans;

}
float perimeter(float side, char shape){
    float ans;
    if(shape == 's'){
        ans = 4*side;
    }
    if(shape == 'c'){
        ans = 6.28*side;
    }
    if(shape == 't'){
        ans = 3*side;
    }
    if(shape == 'h'){
        ans = 6*side;
    }
    return ans;
    }

