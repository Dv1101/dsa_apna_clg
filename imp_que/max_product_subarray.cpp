#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int a[n];
    cout << "Enter the elements you want to insert into the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int currentProduct = 1;
    int maxProduct = INT_MIN;
    int start = 0;
    int end = 0;
    int maxStart = 0; // Starting index of the subarray with max product
    int maxEnd = 0; // Ending index of the subarray with max product

    for (int i = 0; i < n; i++)
    {
        currentProduct *= a[i];

        if (a[i] == 0)
        {
            currentProduct = 1;
            start = i + 1;
        }
        else if (currentProduct > maxProduct)
        {
            maxProduct = currentProduct;
            maxStart = start;
            maxEnd = i;
        }
        else if (currentProduct == maxProduct && i - start > maxEnd - maxStart)
        {
            // If there are multiple subarrays with the same max product,
            // consider the one with the longest length
            maxStart = start;
            maxEnd = i;
        }

        if (currentProduct == 0)
        {
            start = i + 1;
        }
    }

    cout << "Max product of subarray is: " << maxProduct << endl;
    cout << "Subarray elements: ";
    for (int i = maxStart; i <= maxEnd; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
