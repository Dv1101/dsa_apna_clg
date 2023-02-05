#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number u want to reverse."<<endl;
    cin>>n;

    int reverse=0;

    while(n>0)
    {
        int lastdigit = n%10; //remainder of 10 is first value/
        reverse= reverse*10 + lastdigit;
        n=n/10;  //stores int value

    }

    cout<<reverse<<endl;
    return 0;
}