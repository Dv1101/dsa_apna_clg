#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter range of two number to check whether it's PRIME or Not PRIME."<<endl;
    cin>>a>>b;

    int i,j;
    for(i=a; i<=b; i++)
    {
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                cout<<i<<" is non-PRIME."<<endl;
                break;
            }
        }
        if(j==i)
        {
            cout<<i<<" is PRIME."<<endl;
        }
    }
    return 0;
}