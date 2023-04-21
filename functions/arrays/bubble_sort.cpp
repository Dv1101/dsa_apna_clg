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

int bubbleSort(int arr[], int n)
{
    int counter = 1;
    while (counter<n)
    {
        for(int i = 0; i<n-counter; i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }
        counter++;
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

    bubbleSort(arr, n);
    cout<<endl;
    cout<<"SOrted Array is : ";
    printArray(arr, n);

}