//find the subarray in an array which has maximum sum

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
    cout<<"Enter the elements you want to insert into array !!!!"<<endl;     
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int currentSum=0;
    int maxSum=INT_MIN;

    for(int i=0; i<n;i++)
    {
        currentSum+=a[i];
        if(currentSum<0)
        {
            currentSum = 0;
        }
        maxSum=max(maxSum,currentSum);
    }

    cout<<"Max sum of subarray is : "<<maxSum<<endl;
    return 0;
}