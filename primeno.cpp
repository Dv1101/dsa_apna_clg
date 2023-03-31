#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    std::cout<<"Enter number to check whether it's PRIME or Not PRIME."<<std::endl;
    cin>>n;

    int i;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            std::cout<<"It is non-PRIME."<<std::endl;
            break;
        }
    }
    if(i==n)
    {
        std::cout<<"It is PRIME."<<std::endl;
    }
    return 0;
}