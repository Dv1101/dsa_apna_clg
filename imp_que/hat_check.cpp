/*Hat Check Problem – Counting Derangements
Google Translate Icon
Given a positive number n, find the total number of ways in which n hats can be returned to n people such that no hat makes it back to its owner.

This problem is known as the hat–check problem and can be solved by counting the number !n of derangements of an n–element set. A derangement is a permutation of a set’s elements, such that no element appears in its original position.

 
For example,

Input:  2–hat set [h1, h2]
 
Output: The total number of derangements !2 is 1
 
[h2, h1]
 
 
Input:  3–hat set [h1, h2, h3]
 
Output: The total number of derangements !3 is 2
 
[h3, h1, h2]
[h2, h3, h1]
 
 
Input:  4–hat set [h1, h2, h3, h4]
 
Output: The total number of derangements !4 is 9
 
[h2, h1, h4, h3]
[h2, h3, h4, h1]
[h2, h4, h1, h3]
[h3, h4, h1, h2]
[h3, h1, h4, h2]
[h3, h4, h2, h1]
[h4, h1, h2, h3]
[h4, h3, h1, h2]
[h4, h3, h2, h1]*/

#include <iostream>

// Recursive function to count the derangements of an n–element set
int derangements(int n)
{
    // base case
    if (n <= 1) {
        return 0;
    }

    // create an auxiliary array to store solutions to the subproblems
    int T[n + 1];

    // base case
    T[1] = 0, T[2] = 1;

    // fill the auxiliary array `T` in a bottom-up manner using the recurrence relation
    for (int i = 3; i <= n; i++) {
        T[i] = (i - 1) * (T[i - 1] + T[i - 2]);
    }

    // return the total number of derangements of an n–element set
    return T[n];
}

int main()
{
    int n = 4;
    std::cout << "The total number of derangements of a " << n << " element set is " << derangements(n) << std::endl;

    return 0;
}
