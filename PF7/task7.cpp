#include<iostream>
using namespace std;
void percentage(int p1, int p2, int p3, int  p4, int p5, int count);
main()
{
    float number;
    int count;
    int p1=0,p2=0,p3=0,p4=0,p5=0;
    cout<<"Enter a numbers count: ";
    cin>>count;
 for ( int i = 1; i <= count; i++ )
 {
    cout<<"Enter a number: ";
    cin>>number;
    if(number< 200)
    {
        p1=p1+1;
    }
    else if(number>=200 && number<= 399 )
    {
        p2=p2+1;
    }
    else if(number>=400 && number<= 599 )
    {
        p3=p3+1;
    }
    else if(number>= 600 && number<= 799 )
    {
        p4=p4+1;
    }
    else if(number>=800)
    {
        p5=p5+1;
    }
 }
  percentage(p1,p2,p3,p4,p5,count);
}
void percentage(int p1, int p2, int p3, int  p4, int p5, int count)
{
float per1,per2,per3,per4,per5;
per1 = p1*100.00/count;
per2 = p2*100.00/count;
per3 = p3*100.00/count;
per4 = p4*100.00/count;
per5 = p5*100.00/count;
cout<<per1<<"%"<<endl;
cout<<per2<<"%"<<endl;
cout<<per3<<"%"<<endl;
cout<<per4<<"%"<<endl;
cout<<per5<<"%"<<endl;
}