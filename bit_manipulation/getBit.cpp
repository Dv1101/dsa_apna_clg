#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getBit(int n, int pos)
{
    return((n & (1<<pos))!=0);
}

int setBit(int n, int pos)
{
    return (n | (1<<pos)) ; 
}

int clearBit(int n, int pos)
{
    int mask = ~(1<<pos);

    return (n & mask) ; 
}

int main()
{
    int n, pos;
    bitset<8> bits;
    cout<<"Enter integer number and position of bit to be find : ";
    cin>>n>>pos;
    bits = n;
    cout<<"Binary number of [ "<<n<<" ] is = "<<bits<<endl;
    /*cout<<getBit(n, pos);
    cout<<setBit(n,  pos);*/
    cout<<clearBit(n,  pos);
    return 0;
}

/*
        0000 = 0
        0001 = 1 
        0010 = 2
        0011 = 3
        0100 = 4
        0101 = 5
        0110 = 6 
        0111 = 7
        1000 = 8 
        1001 = 9
        1010 = 10
        1011 = 11 
        1100 = 12 
        1101 = 13 
        1110 = 14 
        1111 = 15   */
