#include <bits/stdc++.h>
#include <iostream>
#include <climits>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, key;
    cout<<"Enter the size of the array."<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements you want to insert into array !!!!"<<endl;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the element key u want to search"<<endl;
    cin>>key;
    cout<<"The element is found at index no : "<<linearSearch(arr,n,key)<<endl;
    // //print
    // for(int j=0; j<n; j++)
    // {
    //     cout<<"Data at index : "<<j<<" is "<<a[j]<<endl;
    // }
}