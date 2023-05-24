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

    int maxSum = INT_MIN;
    for(int i=0; i<n; i++)//starting point
    {
        for(int j=i; j<n;j++)//ending point
        {
            int sum=0;
            for(int k=i; k<=j; k++)//for printing brtween numbers of J loop
            {
                sum+=a[k];
            }
            maxSum=max(maxSum, sum);
        }
    }

    cout<<"Max sum of subarray is : "<<maxSum<<endl;
    return 0;
}