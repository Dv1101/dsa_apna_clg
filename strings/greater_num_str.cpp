#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str = "456987545";
    cout<<str<<endl;

    sort(str.begin(), str.end(), greater<int>());
    cout<<str<<endl;
    
    int len = str.length();
    cout<<"Max no is : "<<str[0]<<" & Min no is : "<<str[len-1];

    
    return 0;

}