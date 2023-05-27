#include <iostream>
using namespace std;

string removeDuplicate(string s)
{
    if (s.length() == 0)
    {
        return "";
    }

    char temp = s[0];
    string trim = s.substr(1);
    string answ = removeDuplicate(trim);

    if (s[0] == answ[0])
    {
        return answ;
    }

    return temp + answ;
}

int main()
{
    string s = "aaaaaabbbcccccdddeekkkk";
    string result = removeDuplicate(s);
    cout << result << endl;
    return 0;
}
