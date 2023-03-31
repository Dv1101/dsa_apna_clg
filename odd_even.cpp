#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    std::cout<<"Enter number to check whether it's even or odd."<<std::endl;
    std::cin>>n;

    if(n%2==0)
    {
        std::cout<<n<<" is Even."<<std::endl;
    }
    else
    {
        std::cout<<n<<" is Odd."<<std::endl;
    }
    return 0;
}