#include<iostream>
using namespace std;
bool brickFit(int a, int b ,int c, int w, int h);
main()
{
    int a, b, c, w, h;
    cout<<"Enter the brick height: ";
    cin>>a;
    cout<<"Enter the brick width: ";
    cin>>b;
    cout<<"Enter the brick depth: ";
    cin>>c;
    cout<<"Enter the hole width: ";
    cin>>w;
    cout<<"Enter the hole height: ";
    cin>>h;
    cout<< brickFit(a,b,c,w,h);
}
bool brickFit(int a, int b ,int c, int w, int h)
{
    if((a==w && b == h ) || (a== w && c == h)|| (b == w && c == h) || (b == w && a == h) || (c == w && a ==h)|| (c == w && b == h))
{
    return true;
}
else{
    return false;
}
}