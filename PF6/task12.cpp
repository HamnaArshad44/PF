#include <iostream>
using namespace std;
float income(int row, int column,string type);
float ans;
int row, column; string type;
main()
{
    cout<<"Enter the screening type (Premiere/Normal/Discount): ";
    cin>> type;
    cout<<"Enter the number of rows: ";
    cin>> row;
    cout<< "Enter the number of columns: ";
    cin>> column;
    ans = income (row, column, type);
    cout<<ans<<endl;

}
float income(int row, int column,string type)
{
    if(type == "Premiere")
    {
        ans = row*column*12.00;
    }
    if(type == "Normal")
    {
        ans = row*column*7.50;
    }
    if (type == "Discount")
    {
        ans = row*column*5.00;
    }
    return ans;

}
