#include<iostream>
using namespace std;
int calculateMoney(int age, int priceW, int priceT);
int evenMoney = 0, totalMoney=0, toyMoney=0;
main()
{
   int age, priceW,  priceT ;
   cout<<"Enter Lilly's age: ";
   cin>>age;
   cout<<"Enter Price of the washing machine: ";
   cin>>priceW;
   cout<<"Enter Unit price of each toy: ";
   cin>>priceT;
   int money = calculateMoney(age, priceW, priceT) ;
   cout<<money;
}
int calculateMoney(int age, int priceW, int priceT)
{
    for(int i = 2; i <= age; i= i+2)
    {
        evenMoney = (evenMoney + (i/2*10)) - 1;
       
    }
    for(int i = 1; i <= age; i=i+2)
    {
        toyMoney = priceT+toyMoney;
        
    }

    totalMoney = evenMoney + toyMoney;
   
    if(totalMoney >= priceW)
    {
        cout<<"Yes !"<<endl;
        totalMoney = totalMoney - priceW;        
    }
    else if(totalMoney < priceW)
    {
        cout<<"No !"<<endl;
        totalMoney = priceW - totalMoney;
    }
    return totalMoney;
}