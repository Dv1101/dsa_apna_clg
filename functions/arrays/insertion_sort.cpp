#include <bits/stdc++.h>
#include <iostream>
#include <climits>
using namespace std;

// Swap utility
void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int insertionSort(int arr[], int n)
{
    

    for(int i=1; i<n; i++)
    {
        int current = arr[i];
        int j = i-1;
        while( arr[j]>current && j>=0 )
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    
    
    return 0;
    
}

void printArray(int arr[], int n)
{
    int j;
    for(j=0; j<n; j++)
    {
        cout<<"  "<<arr[j];
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array."<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements you want to insert into array !!!!"<<endl;    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<endl;
    cout<<"Your Array is : ";
    printArray(arr, n);

    insertionSort(arr, n);
    cout<<endl;
    cout<<"SOrted Array is : ";
    printArray(arr, n);

    char mystring = '123H';
    cout<<mystring;
}