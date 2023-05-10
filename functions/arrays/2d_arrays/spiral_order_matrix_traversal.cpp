/* Data For matrix or 2D array*/
// 1   5   7   9   10    11
// 6   10  12  13  20    21 
// 9   25  29  30  32    41
// 15  55  59  63  68    70
// 10  70  79  81  95    105

#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cout<<"Enter Row and COLUMN count for 2D array : "<<endl;
    cin>>n>>m;
    cout<<endl;
    int arr[n][m];

    for(int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"************************* 2D array is *************************"<<endl;
    cout<<"      ";
    for(int k=0; k<m; k++)
    {
        cout<<"col "<<k+1;
    }
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"row "<<i+1<<" ";
        for (int j=0; j<m; j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }

    int row_start=0, row_end=n-1, col_start=0, col_end=m-1;

    while( row_start<=row_end && col_start<=col_end)
    {
        //For row start
        for( int col = col_start; col <= col_end; col++)
        {
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;

        //for col end
        for( int row = row_start; row<= row_end; row++)
        {
            cout<<arr[row][col_end]<<" ";
        }
        col_end--;

        //for row end
        for( int col = col_end; col>=col_start; col--)
        {
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;

        //for col start
        for(int row = row_end; row>= row_start; row--)
        {
            cout<<arr[row][col_start]<<" ";
        }
        col_start++;
    }

    return 0;
}