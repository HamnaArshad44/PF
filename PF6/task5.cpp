#include <iostream>
using namespace std;
float discount(string day, string month, float amount);
string  day, month;
float amount;
main()
{
    cout << "Enter Purchase Day: ";
    cin >> day;
    cout << "Enter Purchase Month: ";
    cin >> month;
    cout << "Enter Purchase Amount: ";
    cin >> amount;
    float afterdiscount = discount(day, month, amount);
    cout<<"Payable Amount after discount: "<< afterdiscount<<endl;
}
float discount(string day, string month, float amount){
    float ans = amount;

    if(day == "Sunday" && month == "October" ){
        ans = amount - (amount*0.1);
       
    }

     if(day == "Sunday" && month != "October" ) {
        ans = amount - (amount*0.05);
     
    }
     return ans;
}
