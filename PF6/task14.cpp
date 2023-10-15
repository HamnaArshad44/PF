#include <iostream>
using namespace std;
float moneyLeft(float ppl, string type, float budget);
string type;
float budget, ppl;
float leftamount, ticketamount, remaining;
main()
{
    cout << "Enter the budget: ";
    cin >> budget;
    cout << "Enter the category (VIP/Normal): ";
    cin >> type;
    cout << "Enter the number of people in the group: ";
    cin >> ppl;
    float ans = moneyLeft(ppl, type, budget);
    if (leftamount > ticketamount)
    {
        cout << "YES! You have " << ans << " leva left.";
    }
    else if (leftamount < ticketamount)
    {
        cout << "Not enough money! You need " << ans << " leva.";
    }
}
float moneyLeft(float ppl, string type, float budget)
{

    if ((ppl >= 1 && ppl <= 4) && type == "Normal")
    {
        cout << 1 << endl;
        leftamount = budget - (budget * 0.75);
        ticketamount = ppl * 249.99;
    }

    else if (ppl >= 1 && ppl <= 4 && type == "VIP")
    {
        cout << 2 << endl;

        leftamount = budget - (budget * 0.75);
        ticketamount = ppl * 499.99;
    }
    else if (ppl >= 5 && ppl <= 9 && type == "Normal")
    {
        cout << 3 << endl;

        leftamount = budget - (budget * 0.60);
        ticketamount = ppl * 249.99;
    }
    else if (ppl >= 5 && ppl <= 9 && type == "VIP")
    {
        cout << 4 << endl;

        leftamount = budget - (budget * 0.60);
        ticketamount = ppl * 499.99;
    }
    else if (ppl >= 10 && ppl <= 24 && type == "Normal")
    {
        cout << 5 << endl;

        leftamount = budget - (budget * 0.50);
        ticketamount = ppl * 249.99;
    }
    else if (ppl >= 10 && ppl <= 24 && type == "VIP")
    {
        cout << 6 << endl;

        leftamount = budget - (budget * 0.50);
        ticketamount = ppl * 499.99;
    }
    else if (ppl >= 25 && ppl <= 49 && type == "Normal")
    {
        cout << 7 << endl;

        leftamount = budget - (budget * 0.40);
        ticketamount = ppl * 249.99;
    }
    else if (ppl >= 25 && ppl <= 49 && type == "VIP")
    {
        cout << 8 << endl;

        leftamount = budget - (budget * 0.40);
        ticketamount = ppl * 499.99;
    }
    else if (ppl >= 50 && type == "Normal")
    {
        cout << 9 << endl;

        leftamount = budget - (budget * 0.25);
        ticketamount = ppl * 249.99;
    }
    else if (ppl >= 50 && type == "VIP")
    {
        cout << 10 << endl;

        leftamount = budget - (budget * 0.25);
        ticketamount = ppl * 499.99;
    }
    if (leftamount > ticketamount)
    {

        remaining = leftamount - ticketamount;
    }
    else
    {
        remaining = ticketamount - leftamount;
    }
    return remaining;
}
