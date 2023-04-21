//You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.
//constraint : 10pow6 << a[i] >> 10pow6
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n, ans=-1;
    cout<<"Enter the size of the array."<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements you want to insert into array !!!!"<<endl;     
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    const int N = 1e6+2;
    bool check[N];

    for(int i=0; i<N; i++)
    {
        check[i]=false;
    }

    for(int i=0; i<n; i++)
    {
        if(a[i] >= 0)
        {
            check[a[i]]=true;
        }
    }

    /*bool check[n];
    for(int i=0; i<n; i++)
    {
        if(a[i]>=0)
        {
            check[i]=true;
        }
        else if(a[i]<0)
        {
            check[i]=false;
        }
    }*/ 

    for(int i=1; i<n; i++)
    {
        if(check[i]==false)
        {
            ans = i;
            break;
        }
    }

    cout<<"Missing Positive Number is : "<<ans<<endl;
   
    return 0;
}