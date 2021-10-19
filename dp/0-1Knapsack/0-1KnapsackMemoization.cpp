#include <bits/stdc++.h>
using namespace std;

int static dp[1002][1002];

int knapsack(int val[], int wt[], int W, int n) {

    if(W == 0 || n == 0) 
        return 0;

    if(dp[n][W] != -1) 
        return dp[n][W];

    if(wt[n-1] <= W) {
        return dp[n][W] = max (
            val[n-1] + knapsack(val, wt, W-wt[n-1], n-1), knapsack(val, wt, W, n-1)
        );
    }

    else {
        return dp[n][W] = knapsack(val, wt, W, n-1);
    }
}

int main() {

    int n, W;
    cin >> n >> W;

    int wt[n], val[n];
    for(int i = 0; i < n; i++) {
        cin >> val[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> wt[i];
    }

    memset(dp, -1, sizeof(dp));

    cout << knapsack(val, wt, W, n);

    return 0;
}