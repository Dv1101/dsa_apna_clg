#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str = "abcgsjnjnhbjvninim";
    cout<<str<<endl;
    for(int i =0; i<str.size(); i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }
    }

    cout<<str<<endl;

    string str1 = "shjhjdbfhasgbdfhqehvbqerybvyuerbvyubvbruvinqovruivnquierlvb";
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    cout<<str1<<endl;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    cout<<str1<<endl;


    return 0;
}