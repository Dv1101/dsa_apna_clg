#include <bits/stdc++.h>
#include <iostream>
#include <climits>
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

    //print
    for(int j=0; j<n; j++)
    {
        cout<<"Data at index : "<<j<<" is "<<a[j]<<endl;
    }

    int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for(int i=0; i<n; i++)
    {
        // if(a[i]>maxNo)
        // {
        //     maxNo=a[i];
        // }
        // if(a[i]<minNo)
        // {
        //     minNo=a[i];
        // }
        //we can optimize it by
        maxNo= max(maxNo,a[i]);
        minNo= min(minNo,a[i]);
    }
    cout<<endl;
    cout<<"Max No in array is : "<<maxNo<<" | "<<"Min No in array is : "<<minNo;
    return 0;
}