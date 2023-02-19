#include <bits/stdc++.h>
using namespace std;

int dp[1000099];
int mod = 1e9+7;

int solve(int n) {
	if(n == 0) return 1;
	if(n < 0) return 0;

	if(dp[n] != -1) return dp[n];

	int ans = 0;
	for(int i = 1; i < 7; i++) {
		ans = (ans + solve(n-i))%mod;
	}

	return dp[n] = ans%mod;
}

int main() {

	int t; cin >> t;

	// memset(dp, -1, sizeof(dp));

	dp[0] = 1;
	for(int i = 1; i <= t; i++) {
		for(int j = 1; j <= 6; j++) {
			if(i >= j)
				dp[i] = (dp[i] + dp[i-j]) % mod;
		}
	}
	
	cout << dp[t];




	return 0;
}