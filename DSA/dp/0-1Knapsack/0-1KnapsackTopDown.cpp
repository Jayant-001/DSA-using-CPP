// https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1
#include <iostream>
using namespace std;

int main() {

    int n, w;
    cin >> n >> w;

    int val[n], wt[n];
    for(int i = 0; i < n; i++) {
        cin >> val[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> wt[i];
    }

    // create a dp matrix
    int dp[n+1][w+1];
    // initialize base dp
    for(int i = 0; i < n+1; i++) {
        for(int j = 0; j < w+1; j++) {
            if(i == 0 || j == 0) 
                dp[i][j] = 0;
        }
    }


    for(int i = 1; i < n+1; i++) {
        for(int j = 1; j < w+1; j++) {

            if(wt[i-1] <= j) 
                dp[i][j] = max( ( val[i-1] + dp[i-1][j-wt[i-1]] ), dp[i-1][j]);
            
            else 
                dp[i][j] = dp[i-1][j];
            
        }
    }

    cout << dp[n][w];
    // cout << endl;
    // for(int i = 0; i < n+1; i++) {
    //     for(int j = 0; j < w+1; j++) {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}