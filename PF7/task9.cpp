#include<iostream>
using namespace std;
float calculatePrice(float money, int year);
float expenses=0;
int age=18;
main()
{
    float money, required; int year;
    cout<<"Enter inherited money: ";
    cin>>money;
    cout<<"Enter year: ";
    cin>>year;
    float ans = calculatePrice(money,year);
    if(ans < money)
    {
        required = money-ans;
        cout<<"Yes! He will live a carefree life and will have "<<required<<" dollars left."<<endl;
    }   
    if(ans > money)
    {
        required = ans- money;
        cout<<"He will need "<<required<<" dollars to survive."<<endl;
    }
}
float calculatePrice(float money, int year)
{
    while(year >=1800)
    {
        if(year%2 == 0)
        {
            expenses += 12000;
        }
        else if(year%2 != 2)
        {
            expenses += 12000+(50*age);
        }
        age++;
        year--;

    }
    return expenses;
}