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
    cout<<"Enter n1, n2, n3 size for matrices."<<endl;
    int n1, n2, n3;
    cin>> n1>> n2>>n3;

    int m1[n1][n2];
    int m2[n2][n3];

    cout<<"Enter m1 data for matrice."<<endl;
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            cin>>m1[i][j];
        }
    }

    cout<<"Enter m1 data for matrice."<<endl;
    for(int i=0; i<n2; i++)
    {
        for(int j=0; j<n1; j++)
        {
            cin>>m2[i][j];
        }
    }

    cout<<"************************* Matrice 1 *************************"<<endl;
    cout<<"      ";
    for(int k=0; k<n1; k++)
    {
        cout<<"col"<<k+1<<" ";
    }
    cout<<endl;
    for(int i=0; i<n1; i++)
    {
        cout<<"row "<<i+1<<"  ";
        for(int j=0; j<n2; j++)
        {
            cout<<m1[i][j]<<"   ";
        }
        cout<<endl;
    }

    cout<<"************************* Matrice 2 *************************"<<endl;
    cout<<"      ";
    for(int k=0; k<n2; k++)
    {
        cout<<"col"<<k+1<<" ";
    }
    cout<<endl;
    for(int i=0; i<n2; i++)
    {
        cout<<"row "<<i+1<<"  ";
        for(int j=0; j<n1; j++)
        {
            cout<<m2[i][j]<<"   ";
        }
        cout<<endl;
    }

    int ans[n1][n3];
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n3; j++)
        {
            ans[i][j]=0;
        }
    }

    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n3; j++)
        {
            for(int k=0; k<n2; k++)
            {
                ans[i][j] = m1[i][k] * m2[j][k];
            }
        }
    }

    cout<<"************************* Matrice 3 Multiplied m1 * m2 *************************"<<endl;
    cout<<"      ";
    for(int k=0; k<n3; k++)
    {
        cout<<"col"<<k+1<<" ";
    }
    cout<<endl;
    for(int i=0; i<n1; i++)
    {
        cout<<"row "<<i+1<<"  ";
        for(int j=0; j<n3; j++)
        {
            cout<<ans[i][j]<<"   ";
        }
        cout<<endl;
    }

    return 0;
}