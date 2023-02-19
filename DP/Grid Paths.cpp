#include <bits/stdc++.h>
using namespace std;

int main() {

	int n; cin >> n;
	vector<string> arr(n);
	for(int i = 0; i < n; i++) cin >> arr[i];

	int mod = 1e9+7;
	int dp[n][n];
	memset(dp, 0, sizeof(dp));
	int i = 0;
	while(i < n && arr[0][i] == '.') dp[0][i++] = 1;
	i = 0;
	while(i < n && arr[i][0] == '.') dp[i++][0] = 1;

	for(int i = 1; i < n; i++) {
		for(int j = 1; j < n; j++) {
			if(arr[i][j] == '*') continue;
			int ans = 0;
			if(arr[i-1][j] != '*') ans = (ans + dp[i-1][j]) % mod;
			if(arr[i][j] != '*') ans = (ans + dp[i][j-1]) % mod;
			dp[i][j] = ans % mod;
		}
	}

	// for(int i = 0; i < n; i++) {
	// 	for(int j = 0; j < n; j++) 
	// 		cout << dp[i][j] << " ";
	// 	cout << endl;
	// }

	cout << dp[n-1][n-1];
	return 0;
}