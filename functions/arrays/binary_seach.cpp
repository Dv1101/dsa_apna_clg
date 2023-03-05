#include <bits/stdc++.h>
#include <iostream>
#include <climits>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start=0;
    int end=n;

    while(start<=end)
    {
        int mid=(start+end)/2;

        if(arr[mid]==key)
        {
            return mid;
        }
        if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
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
    cout<<"!!!!!!!!!!!!!!!!!!!!!!!  Sorted Array Required else u will get -1 xDD. !!!!!!!!!!!!!!!!!!!!!!!"<<endl;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the element key u want to search"<<endl;
    cin>>key;
    cout<<"The element is found at index no : "<<binarySearch(arr,n,key)<<endl;
    // //print
    // for(int j=0; j<n; j++)
    // {
    //     cout<<"Data at index : "<<j<<" is "<<a[j]<<endl;
    // }
}