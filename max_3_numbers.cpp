#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    std::cout<<"Enter three numbers"<<std::endl;
    cin>>a>>b>>c;

    if(a>b)
    {
        if(a>c)
        {
            std::cout<<a<<" is maximum number."<<std::endl;
        }
        else
        {       
            std::cout<<c<<" is maximum number."<<std::endl;
        }
    }

    else
    {
        if(b>c)
        {
            std::cout<<b<<" is maximum number."<<std::endl;
        }
        else
        {
            std::cout<<c<<" is maximum number."<<std::endl;
        }
    }
    return 0;
}