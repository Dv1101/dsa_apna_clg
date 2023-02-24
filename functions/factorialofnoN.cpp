//3!=1*2*3
//5!=1*2*3*4*5

#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial=1;

    for(int i=2; i<=n; i++)
    {
        factorial=factorial*i;
        //factorial*=i;
    }
    return factorial;
}

int main()
{
    int n;
    cin>>n;
    
    int ans=fact(n);
    cout<<ans<<endl;

    return 0;
}