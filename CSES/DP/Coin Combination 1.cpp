#include <bits/stdc++.h>
using namespace std;

int main() {

	long n, t; cin >> n >> t;
	vector<int> arr(n);
	for(int i = 0; i < n; i++) cin >> arr[i];

	int mod = 1e9+7;
	long dp[t+1] = {-1};
	dp[0] = 1;

	for(long j = 1; j < t+1; j++) {
		long ans = 0;
		for(int i = 0; i < n; i++) {
			if(j >= arr[i]) ans = (ans + dp[j-arr[i]]) % mod; 
		}
		dp[j] = ans;
	}

	cout << dp[t];

	return 0;
}