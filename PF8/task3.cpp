#include<iostream>
using namespace std;
string checkPlant(string type, int water, int fert, int temp);
main()
{
    string type; int water, fert, temp;  
    cout<<"Enter type: ";
    cin>>type;
    cout<<"Water: ";
    cin>>water;
    cout<<"Fertilizer: ";
    cin>> fert;
    cout<<"Temperature: ";
    cin>>temp;
    string ans= checkPlant(type, water,fert,temp );
    cout<<ans<<endl;
} 
string checkPlant(string type, int water, int fert, int temp)
{
    string check="";
    if(temp>= 20 && temp<=30){
        for(int segment=1;segment<=water;segment++){
    for(int stem=1; stem<=water; stem++)
    {
        check +="-";
    }
    for(int group=1 ;group<=fert;group++)
    {
        check +=type;
    }
}
    }
    else{
         for(int segment=1;segment<=water;segment++){
    for(int stem=1; stem<=water; stem++)
    {
        check +="-";
    }
    }
    check += type; 
    }
return check;
}
