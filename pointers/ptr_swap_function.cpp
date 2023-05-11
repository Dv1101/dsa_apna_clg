#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    cout<<"Enter values of A & B : ";
    cin>>a>>b;
    cout<<"\n A : "<<a<<" B : "<<b<<endl;

    int *ptra = &a;
    int *ptrb = &b;
    swap(ptra, ptrb);
    cout<<"After swapping : "<<endl;
    cout<<"\n A : "<<a<<" B : "<<b<<endl;
    return 0;
}