#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number to check whether it's PRIME or Not PRIME."<<endl;
    cin>>n;

    int i;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            cout<<"It is non-PRIME."<<endl;
            break;
        }
    }
    if(i==n)
    {
        cout<<"It is PRIME."<<endl;
    }
    return 0;
}