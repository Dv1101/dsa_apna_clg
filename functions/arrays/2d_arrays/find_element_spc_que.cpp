/*Given a 2D matrix.

Write an algorithm to find that the given value exists in the matrix
or not.

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to
bottom.

Data :
1   4   7   11
2   5   8   12
3   6   9   16
10  13  14  17
*/ 

#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cout<<"Enter Row and COLUMN count for 2D array : "<<endl;
    cin>>n>>m;
    cout<<endl;
    int arr [n][m];

    cout<<"Enter data : "<<endl;
    for(int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cin>>arr [i][j];
        }
    }

    cout<<"************************* 2D array is *************************"<<endl;
    cout<<"      ";
    for(int k=0; k<m; k++)
    {
        cout<<"col "<<k+1<<" ";
    }

    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"row "<<i+1<<" ";
        for (int j=0; j<m; j++)
        {
            cout<<arr [i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<"\n Enter an element you want to search"<<endl;
    int search;
    cin>>search;

    int left = arr[n-1][0];
    int right = arr[0][m-1];
    bool found;

    int r=0; 
    int c=m-1;

    while(r < n && c>=0)
    {
        if(arr[r][c]==search)
        {
            cout<<"The element : "<<search<<" is foound at ROW : "<<r+1<<" & COL : "<<c+1<<endl;
            found = true;
            break;
        }
        if (arr[r][c]>search)
        {
            c--;
        }
        if (arr[r][c]<search)
        {
            r++;
        }
    }

    if(found == false)
    {
        cout<<"Element : "<<search<<" is not present in matrix !!!!!"<<endl;
    }
    return 0;
}
