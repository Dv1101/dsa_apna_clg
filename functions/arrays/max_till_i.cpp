//Given an array a[] of size n. For every i from 0 to n-1  output max(a[0],a[1],......,a[i])

#include <bits/stdc++.h>
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    int maxNo=INT_MIN;
    cout<<"Enter the size of the array."<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements you want to insert into array !!!!"<<endl;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        maxNo = max(maxNo, a[i]);
        cout<<"The max no till index "<<i<<" is : "<<maxNo<<endl;
    }

    return 0;
}