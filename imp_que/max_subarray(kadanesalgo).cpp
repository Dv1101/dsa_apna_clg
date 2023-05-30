#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array."<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements you want to insert into the array!"<<endl;    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int currentSum=0;
    int maxSum=INT_MIN;
    int start = 0; // Starting index of the subarray
    int end = 0; // Ending index of the subarray

    for(int i=0; i<n;i++)
    {
        currentSum += a[i];
        if(currentSum < 0)
        {
            currentSum = 0;
            start = i + 1; // Update the starting index
        }
        if(currentSum > maxSum)
        {
            maxSum = currentSum;
            end = i; // Update the ending index
        }
    }

    cout<<"Max sum of subarray is : "<<maxSum<<endl;
    cout<<"Subarray elements: ";
    for(int i = start; i <= end; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
