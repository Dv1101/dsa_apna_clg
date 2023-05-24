//with ptr we can modify and use arithmatic operation on variable
//on array by default with name of variabe le array pointer is generated which stores first element address of array, it cant be incremented or decremented. it stays ststic but we can make our ppointer and traverse it.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={10,2,20,30,440,45,55,66,44,88,99,44,22,25};
    cout<<"Array defaault pointer data : "<<*arr<<endl;
    cout<<"Array defaault pointer : "<<arr<<endl;
    int *array = arr;
    int len = sizeof(arr) / sizeof(arr[0]);
    //traversing using array
    for(int i=0; i<len; i++)
    {
        cout<<*array<<" "<<array<<endl;
        *array++;
    }
    return 0;
}