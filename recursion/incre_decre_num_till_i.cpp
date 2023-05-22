#include<iostream>
using namespace std;

void decreasing(int n)
{
    if(n==0)
    {
        return;
    }

    cout<<n<<endl;
    decreasing(n-1);
}

void increasing(int n)
{
    if(n==0)
    {
        return;
    }

    increasing(n-1);
    cout<<n<<endl;
}

int main()
{
    int n, choice;
    bool flag = true;

    

    while(flag)
    {
        cout<<"Enter a Choice !! "<<endl;
        cout<<"\n  1) Increasing number till"<<endl;
        cout<<"  2) Decreasing number till"<<endl;
        cout<<"  3) Exit"<<endl;
        cin>>choice;
        cout<<endl;

        switch(choice)
        {
            case 1:
                cout<<"Enter a number till you want a numbers from 0 : ";
                cin>>n;
                increasing(n);
                break;
            case 2:
                cout<<"Enter a number from you want a numbers from 0 : ";
                cin>>n;
                decreasing(n);
                break;
            case 3:
                flag = false;
                break;
        }
    }
    
    return 0;

}