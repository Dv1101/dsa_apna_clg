//0+1=1
//1+1=2
//2+1=3

#include <iostream>
#include <math.h>
using namespace std;

void fin(int n)
{
    int t1=0;
    int t2=1;
    int nextTerm;

    for(int i=1; i<=n; i++)
    {
        cout<<t1<<endl;
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return;
}

int main()
{
    int n;
    cin>>n;

    fin(n);
    return 0;
}