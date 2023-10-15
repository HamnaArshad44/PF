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
    float ans ;

    if(day == "Sunday"){
        if(month == "October" || month == "March" || month == "August" ){
            ans = amount - (amount*0.1);
        }
        else{
            ans = amount;
        }
    }  
    else{
        ans = amount;
    }
    return ans;
    }