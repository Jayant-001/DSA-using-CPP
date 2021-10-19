#include <bits/stdc++.h>
using namespace std;

int table[1002][1002];

// recursive approach.....................
int knapsack(vector<int> wt, vector<int> val, int W, int n) {

    if(W == 0 || n == 0) {
        return 0;
    }

    if(table[n-1][W] != -1) {
        return table[n-1][W];
    }

    if(wt[n-1] <= W) {
        return table[n-1][W] = max(val[n-1] + knapsack(wt, val, W-wt[n-1], n-1), knapsack(wt, val, W, n-1));
    }
    else {
        return table[n-1][W] = knapsack(wt, val, W, n-1);
    }

}

void knapsackDp(vector<int> wt, vector<int> val, int W, int n) {
    if(wt[n-1] <= W) {
        table[n][W] = max((val[n-1] + table[n-1][W-wt[n-1]]), table[n-1][W]);
    }
    else {
        table[n][W] = table[n-1][W];
    }
}

int main() {

    int n, w;
    cin >> n >> w;

    vector<int> wt(n);
    vector<int> val(n);

    for(int i = 0; i < n; i++) {
        cin >> wt[i];
    }
    
    for(int i = 0; i < n; i ++) {
        cin >> val[i];
    }

    // taking value in table grid
    for(int i = 0; i < 1002; i++) {
        for(int j = 0; j < 1002; j++) {
            if(j == 0 || i == 0) {
                table[i][j] = 0;
            }
        }
    }


    int t[n+1][w+1];
    for(int i = 0; i < n+1; i++) {
        for(int j = 0; j < w+1; j++) {
            if(i == 0 || j == 0) {
                t[i][j] = 0;
            }
        }
    }










    // cout << knapsack(wt, val, w, n);

    return 0;
}