/*Sort an array of 0’s, 1’s, and 2’s (Dutch National Flag Problem)
Google Translate Icon
Given an array containing only 0’s, 1’s, and 2’s, sort it in linear time and using constant space.

For example,

Input:  { 0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0 }
 
Output: { 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2 }
Practice This Problem

A simple solution would be to perform a counting sort. We count the total number of 0’s, 1’s, and 2’s and then put them in the array in their correct order. The time complexity of this solution is O(n), where n is the size of the input. However, this requires two traversals of the array.

 
We can rearrange the array in a single traversal using an alternative linear-time partition routine that separates the values into three groups:

The values less than the pivot,
The values equal to the pivot, and
The values greater than the pivot.
To solve this particular problem, consider 1 as a pivot. The following linear-time partition routine in C++, Java, and Python is similar to 3–way partitioning for the Dutch national flag problem.

*/

#include <stdio.h>
 
void swap(int A[], int i, int j)
{
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}
 
void threeWayPartition(int A[], int end)
{
    int start = 0, mid = 0;
    int pivot = 1;
 
    while (mid <= end)
    {
        if (A[mid] < pivot)         // current element is 0
        {
            swap(A, start, mid);
            ++start, ++mid;
        }
        else if (A[mid] > pivot)    // current element is 2
        {
            swap(A, mid, end);
            --end;
        }
        else {                      // current element is 1
            ++mid;
        }
    }
}
 
int main()
{
    int A[] = { 0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0 };
    int n = sizeof(A)/sizeof(A[0]);
 
    threeWayPartition(A, n - 1);
 
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
 
    return 0;
}