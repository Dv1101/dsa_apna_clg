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

    cout<<"\n Enter an element ypu want to search"<<endl;
    int search;
    cin>>search;
    bool flag=0;

    for(int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            if(arr [i][j]== search)
            {
                cout<<"Element "<<search<<" is found at Row : "<<i+1<<" & Column : "<<j+1<<endl;
                flag=1;
            }
            
        }
    }

    if(flag==0)
    {
        cout<<"Element "<<search<<" doesn't exist in current 2D Array."<<endl;
    }

    return 0;
}