//1              1 0c0
//1 1            1 1c1 1 1c1
//1 2 1          1 2c0 2 2c1 1 2c2                     WHERE 1c1 is binary Coefficient
//1 3 3 1        1 3c0 3 3c1 3 3c2 1 3c3
//1 4 6 4 1      1 4c0 4 4c1 6 4c2 4 4c3 1 4c4   

#include <iostream>
#include <math.h>
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
    int n; //rows
    cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i;j++)
        {
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
}