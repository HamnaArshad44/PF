#include <iostream>
using namespace std;
bool parity(int num);
int number;
main()
{
    cout << "Enter a 3-digit number: ";
    cin >> number;
    bool EO = parity(number);
    cout << EO;
}
bool parity(int num)
{
    int d1, d2, d3, tf;
    d1 = num / 100;
    d2 = (num % 100) / 10;
    d3 = (num % 100) % 10;
    int sum = d1 + d2 + d3;
    int P1 = (num % 2);
    int P2 = (sum % 2);
    if (P1 == 0)
    {
        if (P2 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    if (P1 != 0)
    {

        if (P2 != 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}