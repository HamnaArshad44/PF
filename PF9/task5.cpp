#include <iostream>
using namespace std;
bool check(int number[], int size, int n);
main()
{
    int size;
    int n;
    cout << "Enter the number of elements: ";
    cin >> size;
    if (size <= 0)
    {
        cout << "Invalid input. Number of elements must be greater than 0.";
    }
    int uniquecount = 0;
    int number[100];
    cout << "Enter " << size << " numbers, one per line:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> n;
        if (check(number, i, n))
        {
            cout << "Already entered: " << n << endl;
        }
        else
        {
            uniquecount++;
        }

        number[i] = n;
    }
    cout << "Unique numbers entered: ";
    for (int i = 0; i < size; i++)
    {
        int n = number[i];
        bool found=check(number, i, n);
       
        if (found== 1)
        {
             
            cout << "";
        }
        else if(found==0)
        {
            
            cout << n << " ";
        }
    }

    return 0;
}
bool check(int number[], int size, int n)
{
    bool ans;
    for (int i = 0; i < size; i++)
    {
        if (number[i] == n)
        {
            ans = true;
            break;
        }
        else
        {
            ans = false;
        }
    }
    return ans;
}
