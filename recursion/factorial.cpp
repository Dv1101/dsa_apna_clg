#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }

    return n * factorial(n-1);
}

int main()
{
    int n, p;
    cout<<"Enter number want factorial : ";
    cin>>n;
    
    cout<<"\nANS IS : "<<factorial(n);
}