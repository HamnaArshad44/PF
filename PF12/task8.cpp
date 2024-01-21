#include <iostream>
using namespace std;
void printMatrix(int elements[][5], int rowSize);
void print_largest(int elements[][5], int rowSize);
main()
{
    const int colSize = 5;
    int rowSize;
    cout << "Enter row size: ";
    cin >> rowSize;
    int elements[rowSize][colSize];
    cout << "Enter the elements of the matrix:" << endl;
    for (int row = 0; row < rowSize; ++row)
    {
        for (int col = 0; col < 5; ++col)
        {
            cout << "Enter element at position [" << row << "][" << col << "]: ";
            cin >> elements[row][col];
        }
    }
    cout<<endl;
    printMatrix(elements, rowSize);
    cout<<endl;
    print_largest(elements, rowSize);
}
void printMatrix(int elements[][5], int rowSize)
{
    int add = 0;
    cout << "Original Matrix:" << endl;
    for (int row = 0; row < rowSize; ++row)
    {
        for (int col = 0; col < 5; ++col)
        {
            cout << elements[row][col] << "\t";
        }
        cout << endl;
    }
   
}
void print_largest(int elements[][5], int rowSize)
{
    int sum;
    int max = 0;
    int idx;
    int newArr[rowSize];

    for (int col = 0; col < 5; ++col)
    {
        sum = 0;
        for (int row = 0; row < rowSize; ++row)
        {
            sum += elements[row][col];
        }
        if (sum > max)
        {
            max = sum;
            idx = col;
        }
       
    }
     for (int row = 0; row < rowSize; ++row)
        {
             newArr[row] = elements[row][0];
            elements[row][0]=elements[row][idx];
           elements[row][idx]=newArr[row];
        }
     cout<<"Matrix after largest column moved to first:"<<endl;     
    for (int row = 0; row < rowSize; ++row)
    {
        for (int col = 0; col < 5; ++col)
        {
            cout << elements[row][col] << "\t";
        }
        cout << endl;
    }
}