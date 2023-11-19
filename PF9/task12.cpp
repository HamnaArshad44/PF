#include <iostream>
using namespace std;
bool isSpecial(int arr[], int size);
main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    if (size <= 0)
    {
        cout << "Invalid input. Size must be greater than 0.";
    }

    int arr[size];
    cout << "Enter " << size << " elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    if (isSpecial(arr, size))
    {
        cout << "The array is special";
    }
    else
    {
        cout << "The array is not special";
    }
    return 0;
}
bool isSpecial(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if ((i % 2 == 0 && arr[i] % 2 == 0) || (i % 2 != 0 && arr[i] % 2 != 0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
