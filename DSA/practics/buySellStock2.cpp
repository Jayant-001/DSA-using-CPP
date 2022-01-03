#include <bits/stdc++.h>
using namespace std;

int getProfit(vector<int> arr, int start, int mid) {
    int minS = arr[start];
    int profit = 0;
    for(int i = start+1; i <= mid; i++) {
        if(arr[i] < minS)
            minS = arr[i];
        else    
            profit = max(profit, arr[i]-minS);
    }
    return profit;
}

int main() {

    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) 
        cin >> arr[i];
    
    int maxProfit = 0;
    for(int i = 1; i < n; i++) {
        int pr1 = getProfit(arr, 0, i);
        int pr2 = getProfit(arr, i, n-1);

        maxProfit = max(maxProfit, pr1 + pr2);
    }

    cout <<  maxProfit;

    return 0;
}