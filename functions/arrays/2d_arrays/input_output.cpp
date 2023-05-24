#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cout<<"Enter Row and COLUMN count for 2D array : "<<endl;
    cin>>n>>m;
    cout<<endl;
    int arr [n][m];

    for(int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cin>>arr [i][j];
        }
    }

    cout<<"************************* 2D array is *************************"<<endl;
    for(int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout<<arr [i][j]<<"  ";
        }
        cout<<endl;
    }



    return 0;
}