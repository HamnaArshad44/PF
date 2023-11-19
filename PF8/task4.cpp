
#include<iostream>
using namespace std;
bool isPrime(int i);
int primeN(int num);

main()
{
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    int ans = primeN(num);
    cout<<ans;
}
int primeN(int num)
{
    int digit=0;
     for(int i =2 ; i <= num ; i++)
     {
       
    if(isPrime(i))
    {
    
        digit++;
      
    }

     }
    return digit;
}
bool isPrime(int num)
{
    int check=0;
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
