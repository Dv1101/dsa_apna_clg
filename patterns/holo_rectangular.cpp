#include<iostream>
using namespace std;

int main()
{
    int row, col;
    cout<<"Enter rows & columns."<<endl;
    cin>>row>>col;
    cout<<endl;

    for (int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            if(i==1 || j==1 || i==row || j==col)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
