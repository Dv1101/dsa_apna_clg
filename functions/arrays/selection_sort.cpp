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

int selectionSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                swap(&arr[j],&arr[i]);
            }
        }
    }
    return 1;
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
    int n, key;
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

    selectionSort(arr, n);
    cout<<endl;
    cout<<"SOrted Array is : ";
    printArray(arr, n);

}