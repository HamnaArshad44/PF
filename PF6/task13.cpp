#include <iostream>
using namespace std;
float price(float kilo ,string period);

float kilo ; string period;
main()
{
    float ans;
    cout<<"Enter the number of kilometers: ";
    cin>> kilo;
    cout<< "Enter the period of the day (day/night): ";
    cin>> period;
    ans = price(kilo , period) ;
    cout<< "Lowest price for "<< kilo << " kilometers: "<< ans << " EUR"<< endl;
    
}
float price(float kilo ,string period)
{
    float ans;
    if(kilo < 20)
    {  
         if(period == "day")
    {
        ans = (kilo*0.79)+0.70;
    }
        if(period == "night")
        {
            ans = (kilo*0.90)+0.70;
        }
    }
    
     if(kilo > 20 && kilo < 100)
    {  
        ans = (kilo*0.09);
    
    }
     if(kilo > 100)
    {  
        ans = (kilo*0.06);
    
    }
    return ans;

}
