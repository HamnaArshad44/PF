#include <iostream>
using namespace std;
int identical(int elements[][3], int rowSize);
main()
{
    const int colSize = 3;
    int rowSize;
    cout << "Enter the number of rows for the array: ";
    cin >> rowSize;
    int elements[rowSize][colSize];
    cout << "Enter the elements of the array:" << endl;
    for (int row = 0; row < rowSize; ++row)
    {
        for (int col = 0; col < 3; ++col)
        {
            cout << "Enter element at position [" << row << "][" << col << "]: ";
            cin >> elements[row][col];
        }
    }
    int ans = identical(elements, rowSize);
    cout << "The count of identical rows in the array is: " << ans;
}
int identical(int elements[][3], int rowSize)
{
    int max=0;
    int total_count = 0;
    int element_count = 0;
    for (int r = 0; r < rowSize; ++r)
    {
        total_count =0;
        for (int row = 0; row < rowSize; ++row)
        {
            if (r == row)
            {
                continue;
            }
             element_count = 0;
            for (int col = 0; col < 3; ++col)
            {
                if (elements[row][col] == elements[r][col])
                {
                    element_count++;
                }
            }
            if(element_count == 3)
            {
                total_count ++;
            }
        }
        if(total_count >max)
        {
            max=total_count;
        }

    }
    if (max>0)
    {
        max +=1;
    }
    return max;
}