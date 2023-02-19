#include <bits/stdc++.h>
using namespace std;

int dp[101][1000009];

int solve(vector<int> &arr, int i, int t) {
	if(i >= arr.size()) return 1000009;
	if(t == 0) return 0;
	if(dp[i][t] != -1) return dp[i][t];

	if(t >= arr[i]) 
		return dp[i][t] = min(1+solve(arr, i, t-arr[i]), solve(arr, i+1, t));
		return dp[i][t] = solve(arr, i+1, t);
	}

int main() {

	int n, t; cin >> n >> t;
	vector<int> arr(n);
	for(int i = 0; i < n; i++) cin >> arr[i];

	// memset(dp, -1, sizeof(dp));

	// for(auto i : arr) cout << i << " ";
	// int ans = solve(arr, 0, t);
	// cout << (ans > 1000000 ? -1 : ans);

	for(int i = 0; i < t+1; i++) dp[0][i] = 1000009;
	for(int i = 0; i < n+1; i++) dp[i][0] = 0;

	for(int i = 1; i < n+1; i++) {
		for(int j = 1; j < t+1; j++) {

			if(j >= arr[i-1]) dp[i][j] = min(1+dp[i][j-arr[i-1]], dp[i-1][j]);
			else dp[i][j] = dp[i-1][j];

		}
	}
	
	cout << (dp[n][t] > 1000000 ? -1 : dp[n][t]);

	return 0;
}