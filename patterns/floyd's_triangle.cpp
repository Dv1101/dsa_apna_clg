//1
//2 3
//4 5 6
//7 8 9 10
//12 13 14 15

#include<iostream>
using namespace std;

int main()
{
    int n;
    int m=1;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<m<<" ";
            m++;

        }
        cout<<endl;
    }

}