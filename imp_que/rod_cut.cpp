/*Rod Cutting Problem
Google Translate Icon
Given a rod of length n and a list of rod prices of length i, where 1 <= i <= n, find the optimal way to cut the rod into smaller rods to maximize profit.

For example, consider the following rod lengths and values:

Input:
 
length[] = [1, 2, 3, 4, 5, 6, 7, 8]
price[] = [1, 5, 8, 9, 10, 17, 17, 20]
 
Rod length: 4
 
 
Best: Cut the rod into two pieces of length 2 each to gain revenue of 5 + 5 = 10
 
Cut           Profit
4                9
1, 3            (1 + 8) = 9
2, 2            (5 + 5) = 10
3, 1            (8 + 1) = 9
1, 1, 2         (1 + 1 + 5) = 7
1, 2, 1         (1 + 5 + 1) = 7
2, 1, 1         (5 + 1 + 1) = 7
1, 1, 1, 1      (1 + 1 + 1 + 1) = 4
Practice This Problem

We are given an array price[], where the rod of length i has a value price[i-1]. The idea is simple – one by one, partition the given rod of length n into two parts: i and n-i. Recur for the rod of length n-i but don’t divide the rod of length i any further. Finally, take the maximum of all values. This yields the following recursive relation:

rodcut(n) = max { price[i – 1] + rodCut(n – i) } where 1 <= i <= n*/

#include <iostream>
#include <string>
#include <climits>
using namespace std;
 

int rodCut(int price[], int n)
{
    // base case
    if (n == 0) {
        return 0;
    }
 
    int maxValue = INT_MIN;
 
    
    for (int i = 1; i <= n; i++)
    {
        
        int cost = price[i - 1] + rodCut(price, n - i);
 
        if (cost > maxValue) {
            maxValue = cost;
        }
    }
 
    return maxValue;
}
 
int main()
{
    int price[] = { 1, 5, 8, 9, 10, 17, 17, 20 };
 
    // rod length
    int n = 4;
 
    cout << "Profit is " << rodCut(price, n);
 
    return 0;
}