#include <iostream>
using namespace std;
int sum(int elements[][3], int rowSize);
main()
{
    int rowSize;
    const int colSize=3;
    cout<<"Enter row size: ";
    cin>>rowSize;
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
    int ans=sum(elements, rowSize);
    cout<<"The sum of elements in the matrix is: "<<ans<<endl;
}
int sum(int elements[][3], int rowSize)
{
    int add=0;
  for(int row=0; row<rowSize; ++row)
    {
         for(int col=0; col<3; ++col)
    {
        add=add+elements[row][col]; 
    }     
    }   
    return add;
}