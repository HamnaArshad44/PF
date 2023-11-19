
#include<iostream>
using namespace std;
bool isPrime(int i);
string descriptor(int num);
int check=0;
main()
{
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    string ans = descriptor(num);
    cout<<ans;
}
string descriptor(int num)
{
    string ans="";
    
    
    int digit=1;
    while(num/2>0)
    {
        if(num%2==1)

        {
            digit++;
        }
       
        num=num/2;
    }
    if(digit%2==0)
    {
        ans+="Evil";
    }
    else if(digit/2!=0)
    {
        ans+="Odious";
    }
     if(isPrime(digit))
    {
    
        ans=ans+", Prenicious";
    }

 
   
     
   return ans;
}
bool isPrime(int num)
{
    if(num <=1)
    {
        return false;
    }
    else{
    for(int i=1; i<=num; i++)
    {
        if(num%i == 0)
        {
          check++;
        }
    }
  }
if(check ==2)
{
    return true;
}
else{
    return false;
}

}