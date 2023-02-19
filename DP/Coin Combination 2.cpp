#include <bits/stdc++.h>
using namespace std;

int main() {

	int n, sum; cin >> n >> sum;
	vector<int> arr(n);
	for(int i = 0; i < n; i++) cin >> arr[i];

	int mod = 1e9+7;
	int dp[n+1][sum+1];
	for(int i = 0; i < sum+1; i++) dp[0][i] = 0;
	for(int i = 0; i < n+1; i++) dp[i][0] = 1;

	for(int i = 1; i < n+1; i++) {
		for(int j = 1; j < sum+1; j++) {

			if(j >= arr[i-1])
				dp[i][j] = (dp[i][j-arr[i-1]] + dp[i-1][j]) % mod;
			else 
				dp[i][j] = dp[i-1][j];
		}
	}

	cout << dp[n][sum];

	return 0;
}