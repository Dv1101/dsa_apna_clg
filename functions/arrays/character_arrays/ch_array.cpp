#include<iostream>
using namespace std;

int main()
{
    char arr[100] = "Hello World !!! I'm Dhruv Varia :)";
    int i=0;
    // cin>>arr;

    while(arr[i]!='\0')
    {
        cout<<arr[i]<<endl;
        i++;
    }

    return 0;
}