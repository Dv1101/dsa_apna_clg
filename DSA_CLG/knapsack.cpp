#include <iostream>
using namespace std;


int max(int a, int b) {
    return (a > b) ? a : b;
}


int knapsack(int W, int wt[], int val[], int n) {
    
    int dp[n + 1][W + 1];

    
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (wt[i - 1] <= w)
                dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    cout << "Dynamic Programming Knapsack Matrix:\n";
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            std::cout << dp[i][w] << " ";
        }
        std::cout << "\n";
    }
    
    return dp[n][W];
}


int main() {
    int val[] = {1,2,5,6};
    int wt[] = {2,3,4,5};
    int W = 8;
    int n = sizeof(val) / sizeof(val[0]);

    int maxVal = knapsack(W, wt, val, n);
    cout << "Maximum value that can be obtained: " << maxVal << std::endl;

    return 0;
}
