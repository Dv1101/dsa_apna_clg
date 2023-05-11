#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str, str1;
    /*cout<<"Enter string without space: "<<endl;
    cin>>str;
    cout<<"string is : "<<str<<endl;
    cout<<"length of string : "<<str.length()<<endl;*/

    cout<<"Enter string with space: "<<endl;
    getline(cin, str1);
    cout<<"string is : "<<str1<<endl;
    cout<<"length of string : "<<str1.length()<<endl;

    
    return 0;
}