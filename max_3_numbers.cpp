#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter three numbers"<<endl;
    cin>>a>>b>>c;

    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<" is maximum number."<<endl;
        }
        else
        {       
            cout<<c<<" is maximum number."<<endl;
        }
    }

    else
    {
        if(b>c)
        {
            cout<<b<<" is maximum number."<<endl;
        }
        else
        {
            cout<<c<<" is maximum number."<<endl;
        }
    }
    return 0;
}