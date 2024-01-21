#include <iostream>
using namespace std;
void printMatrix(int elements[][3], int rowSize);
bool identityMatrix(int elements[][3], int rowSize);
main()
{
    const int colSize=3;
    const int rowSize=3;
    int elements[rowSize][colSize];
    cout<<"Enter the elements of the matrix:"<<endl;
     for(int row=0; row<rowSize; ++row)
    {
         for(int col=0; col<3; ++col)
    {
        cout<< "Enter element at position ["<<row<<"]["<<col<<"]: ";  
        cin>> elements[row][col]; 
    }     
    
    } 
    printMatrix(elements, rowSize);
    bool ans=identityMatrix(elements, rowSize);
    if(ans==0)
    {
    cout<<"The entered matrix is NOT an identity matrix.";
    }
    else{
        cout<<"The entered matrix is an identity matrix.";
    }
}
void printMatrix(int elements[][3], int rowSize)
{
    int add=0;
    cout<<"The matrix you entered is:"<<endl;
  for(int row=0; row<rowSize; ++row)
    {
         for(int col=0; col<3; ++col)
    {
         cout<<elements[row][col]<<"\t";
    }     
    cout<<endl;
    }   
}
bool identityMatrix(int elements[][3], int rowSize)
{
    bool result;
    if(elements[0][0]==1 && elements[1][1]==1 && elements[2][2]==1  && elements[0][1]==0 && elements[0][2]==0 && elements[1][0]==0 && elements[1][2]==0 && elements[2][0]==0 && elements[2][1]==0)
    {
        result = true;
    }
return result;
}