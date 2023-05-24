#include<iostream>
using namespace std;

int power(int n, int p)
{
    if(p==0)
    {
        return 1;
    }

    int prevPower = power(n, p-1);
    return n * prevPower;
}

int main()
{
    int n, p;
    cout<<"Enter number want power : ";
    cin>>n;
    cout<<"Enter power : ";
    cin>>p;
    cout<<"\nANS IS : "<<power(n, p);
}