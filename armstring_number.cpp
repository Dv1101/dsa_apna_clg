#include<iostream>
#include<math.h>
using namespace std;

// Cube of all digits and sum of it will be same number.
// 153 = 1cube + 5cube + 3cube = 1+125+27 = 153. it is armstrong number

int main()
{
    int n;
    cout<<"Enter a number check whether it is armstrong number or not."<<endl;
    cin>>n;
    int sum = 0;
    int originaln=n;
    
    while(n>0)
    {
        int lastdigit = n%10;
        sum+= pow(lastdigit,3);
        n=n/10;
    }

    if(sum==originaln)
    {
        cout<<originaln<<" is a Armstrong Number."<<endl;
    }
    else
    {
        cout<<originaln<<" is not an Armstrong Number."<<endl;
    }
    
    return 0;
}