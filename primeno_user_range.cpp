//if 2,3,4......n-1 == 0 than it is not prime

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    std::cout<<"Enter range of two number to check whether it's PRIME or Not PRIME."<<std::endl;
    cin>>a>>b;

    int i,j;
    for(i=a; i<=b; i++)
    {
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                std::cout<<i<<" is non-PRIME."<<std::endl;
                break;
            }
        }
        if(j==i)
        {
            std::cout<<i<<" is PRIME."<<std::endl;
        }
    }
    return 0;
}