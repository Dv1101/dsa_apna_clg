/*Trapping Rain Water Problem
Google Translate Icon
Trapping rainwater problem: Find the maximum amount of water that can be trapped within a given set of bars where each bar’s width is 1 unit.

For example,

 
Input: An array containing height of bars {7, 0, 4, 2, 5, 0, 6, 4, 0, 5}

Trapping Rain Water bars

The maximum amount of water that can be trapped is 25, as shown below (blue).

Trapping Rain Water*/

#include <iostream>
#include <climits>
using namespace std;
 
int max(int x, int y) {
    return (x > y) ? x : y;
}
 
int min(int x, int y) {
    return (x < y) ? x : y;
}

int trap(int heights[], int n)
{
    int water = 0;
 
    for (int i = 1; i < n - 1; i++)
    {
        int left = heights[i];
        for (int j = 0; j < i; j++)
            left = max(left, heights[j]);
 
        int right = heights[i];
        for (int j = i + 1; j < n; j++)
            right = max(right, heights[j]);
 
        water += min(left, right) - heights[i];
    }
 
    return water;
}

int main()
{
    int heights[] = { 7, 0, 4, 2, 5, 0, 6, 4, 0, 5 };
    int n = sizeof(heights) / sizeof(heights[0]);

    cout<<"The maximum amount of water that can be trapped is : "<<trap(heights, n);
 
    return 0;
}