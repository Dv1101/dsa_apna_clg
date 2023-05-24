//palindrom = NITIN = reverse = NITIN
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of charactes : ";
    cin>>n;
    char arr[n+1];
    cout<<"Enter Name/ Sentence to check palindrome"<<endl;
    cin>>arr;

    bool check = true;

    for(int i=0; i<n; i++)
    {
        if(arr[i] != arr[n-1-i])
        {
            check = false;
        }
    }

    if(check == true)
    {
        cout<<"It is palindrome."<<endl;
    }
    else
    {
        cout<<"It is not palindrome."<<endl;
    }


    return 0;
}