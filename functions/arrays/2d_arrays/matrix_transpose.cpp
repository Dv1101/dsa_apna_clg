/*Problem

Given a square matrix A & its number of rows (or columns) N,
return the transpose of a

The transpose of a matrix is the matrix flipped over it's main
diagonal, switching the row and column indices of the matrix.

constaints

1<=N <= 1000
*/
/*
        1 2 3        1 4 7
        4 5 6   =>   2 5 8
        7 8 9        3 6 9

*/

#include<iostream>
using namespace std;

int main()
{
    int arr[3][3]= {{1,2,3},{4,5,6},{7,8,9}};

    cout<<"************************* 2D array is *************************"<<endl;
    cout<<"      ";
    for(int k=0; k<3; k++)
    {
        cout<<"col"<<k+1<<" ";
    }
    cout<<endl;
    for(int i=0; i<3; i++)
    {
        cout<<"row "<<i+1<<" ";
        for (int j=0; j<3; j++)
        {
            cout<<arr[i][j]<<"   ";
        }
        cout<<endl;
    }

    for(int i = 0; i<3; i++)
    {
        for(int j=i; j<3; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    cout<<"************************* Transposed Array *************************"<<endl;
    cout<<"      ";
    for(int k=0; k<3; k++)
    {
        cout<<"col"<<k+1<<" ";
    }
    cout<<endl;
    for(int i=0; i<3; i++)
    {
        cout<<"row "<<i+1<<"  ";
        for (int j=0; j<3; j++)
        {
            cout<<arr[i][j]<<"   ";
        }
        cout<<endl;
    }
    return 0;
}