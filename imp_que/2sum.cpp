//Given an unsorted array A of size N of non-negative integers, find a continuous subarray which adds to a given number S.
/*Input:
N = 5, 5 = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements from 2nd position to 4th position is 12.*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n,s;
    cout<<"Enter the size of the array."<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements you want to insert into array !!!!"<<endl;     
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the sum you want."<<endl;
    cin>>s;
    cout<<endl;

    int i=0, j=0, start=-1, end=-1, sum=0;

    while(j<n && sum+a[j]<= s)
    {
        sum+=a[j];
        j++;
    }

    if(sum == s)
    {
        cout<<i+1<<" "<<j<<endl;
        return 0;  
    }

    while(j<n)
    {
        sum+=a[j];
        while(sum>s)
        {
            sum -=  a[i];
            i++; 
        }

        if(sum == s)
        {
            start= i+1;
            end = j+1;
            break;
        }
        j++; 
    }

    cout<<start<<" "<<end<<endl;
    return 0;
}
