#include<iostream>
using namespace std;
/*40 5 7 = 12*/
int divisible(int a, int b, int n)
{
    int c1 = n/ a;
    int c2 = n/ b;
    int c3 = n/(a*b);
    return c1+c2-c3;
}

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    cout<<divisible(a,b,n)<<endl;
    return 0;
}