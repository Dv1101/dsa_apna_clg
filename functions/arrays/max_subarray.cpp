#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array."<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements you want to insert into array !!!!"<<endl;     
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)//starting point
    {
        for(int j=i; j<n;j++)//ending point
        {
            for(int k=i; k<=j; k++)//for printing brtween numbers of J loop
            {
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}