#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{
    int ans = 0;
    int x = 1;

    while (n>0)
    {
        int y = n%10;
        ans += x*y;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int octalToDecimal(int n)
{
    int ans = 0;
    int x = 1;

    while (n>0)
    {
        int y = n%10;
        ans += x*y;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int hexaDecimalToDecimal(string num)
{
    int ans = 0;
    int x = 1;

    int s = num.size();
    for(int i=s-1; i>=0; i--)
    {
        if (num[i] >= '0' && num[i] <= '9')
        {
            ans += x*(num[i]-'0');
        }
        else if (num[i] >= 'A' && num[i] <= 'F')
        {
            ans += x*(num[i]-'A' +10);
        }
        x *= 16;
    }
    return ans;
}

int decimalToBinary(int n)
{
    int x=1;
    int ans=0;

    while(x<=n)
    {
        x *= 2;
    }
    x/=2;

    while(x>0)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /=2;
        ans =  ans*10 + lastDigit;
    }
    return ans;
}

int decimalToOctal(int n)
{
    int x=1;
    int ans=0;

    while(x<=n)
    {
        x *= 8;
    }
    x/=8;

    while(x>0)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /=8;
        ans =  ans*10 + lastDigit;
    }
    return ans;
}

string decimalToHexaDecimal(int n)
{
    int x = 1;
    string ans = "";

    while (x <= n)
    {
        x *= 16;
    }
    x /= 16;

    while (x > 0)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /= 16;

        if (lastDigit <= 9)
        {
            ans = ans + to_string(lastDigit);
        }
        else
        {
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int32_t main()
{
    int choice;
    int n;
    string num;
    
    while(1)
    {
        cout<<"Enter a Choice"<<endl;
        cout<<"-----------------------------------------"<<endl;
        cout<<"1) Binary to Decimal"<<endl;
        cout<<"2) Octal to Decimal"<<endl;
        cout<<"3) Hexa-Decimal to Decimal"<<endl;
        cout<<"4) Decimal to Binary"<<endl;
        cout<<"5) Decimal to OCTAL"<<endl;
        cout<<"6) Decimal to HEXA-DECIMAL"<<endl;
        cout<<"8) EXIT"<<endl;
        cout<<endl;
        cin>>choice;
        cout<<endl;

        switch (choice)
        {
            case 1:
                cout<<"Enter a Number you want to convert from BINARY to DECIMAL"<<endl;
                cin>>n;
                cout<<"Decimal : "<<binaryToDecimal(n)<<endl;
                cout<<endl;
                break;

            case 2:
                cout<<"Enter a Number you want to convert from OCTAL to DECIMAL"<<endl;
                cin>>n;
                cout<<"Decimal : "<<octalToDecimal(n)<<endl;
                cout<<endl;
                break;

            case 3:
                cout<<"Enter a Number you want to convert from HEXA_DECIMAL to DECIMAL"<<endl;
                cin>>num;
                cout<<"Decimal : "<<hexaDecimalToDecimal(num)<<endl;
                cout<<endl;
                break;

            case 4:
                cout<<"Enter a Number you want to convert from DECIMAL to BINARY"<<endl;
                cin>>n;
                cout<<"Decimal : "<<decimalToBinary(n)<<endl;
                cout<<endl;
                break;
            
            case 5:
                cout<<"Enter a Number you want to convert from DECIMAL to OCTAL"<<endl;
                cin>>n;
                cout<<"Decimal : "<<decimalToOctal(n)<<endl;
                cout<<endl;
                break;

            case 6:
                cout<<"Enter a Number you want to convert from DECIMAL to HEXA-DECIMAL"<<endl;
                cin>>n;
                cout<<"Decimal : "<<decimalToHexaDecimal(n)<<endl;
                cout<<endl;
                break;

            case 8:
                cout<<"Give a like and star to my master Dv1101 github repo."<<endl;
                cout<<"Insta : dv_inf.otech"<<endl;
                cout<<endl;
                exit(0);
        
    
            default:
                cout<<" ?????????    FOOL you FOOL, Look Once Again   ??????????"<<endl;
                cout<<"Give a like and star to my master Dv1101 github repo."<<endl;
                cout<<"Insta : dv_inf.otech"<<endl;
                cout<<endl;
                break;
        }
    }
    
    

    
}