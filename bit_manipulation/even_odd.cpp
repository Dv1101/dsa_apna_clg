#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{
    cout<<"Enter number to check odd or even : ";
    int n;
    cin>>n;
    if (n & 1 == 0)
    {
        cout<<"Even";
    }
    else{
        cout<<"odd";
    }
    return 0;
}