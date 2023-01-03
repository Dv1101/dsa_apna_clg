#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int b;

    //pre incrementer
    // b = ++a;

    //post incrementer
    b = a++;

    cout<<a<<" "<<b<<endl;
    return 0;
}