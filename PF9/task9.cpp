#include <iostream>
using namespace std;
double total(double change[4]);
bool canPay(double ans, double due);
main()
{
    double change[4];
    cout << "Enter quarters: ";
    cin >> change[0];
    cout << "Enter dimes: ";
    cin >> change[1];
    cout << "Enter nickles: ";
    cin >> change[2];
    cout << "Enter pennies: ";
    cin >> change[3];
    double ans = total(change);
    double due;
    cout << "Enter the total amount due: $";
    cin >> due;
    cout<<"Can you pay the amount? ";
    if(canPay(ans, due))
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}

double total(double change[4])
{
    change[0] = change[0] * 0.25;
    change[1] = change[1] * 0.10;
    change[2] = change[2] * 0.05;
    change[3] = change[3] * 0.01;

    double sum = 0;
    for (int i = 0; i < 4; i++)
    {

        sum += change[i];
    }
    return sum;
}
bool canPay(double ans, double due)
{
    if(ans >= due)
    {
        return true;
    }
    else{
        return false;
    }
}