#include<iostream>
using namespace std;

void substrings(string s, string ans)
{
    if(s.length() == 0)
    {
        cout<<ans<<endl;  
        return;
    }

    char ch=s[0];
    string ros = s.substr(1);

    substrings(ros, ans);
    substrings(ros, ans+ch);    

}

int main()
{
    string s;
    string ans = "";
    cout<<"Enter a string to generate sub strings using recursion"<<endl;
    cin>>s;

    substrings(s, ans);
    return 0;
}