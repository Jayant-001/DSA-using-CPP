#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	int n; cin >> n;
	int t = n*(n+1) / 2, mod = 1e9 + 7;

	if(t&1)
	{
		cout << 0 << endl;
		return 0;
	}

	t /= 2;
	// cout << t << endl;
	int dp[n][t+1];
	memset(dp, 0, sizeof(dp));

	// for(int i = 0; i <= t; i++) 
	// 	dp[0][i] = 0;
	// for(int i = 0; i <= n; i++)
	// 	dp[i][0] = 1;

	dp[0][0] = 1;

	for(int i = 1; i < n; i++) {
		for(int j = 0; j <= t; j++) {

			if(i <= j) {
				dp[i][j] = (dp[i-1][j] + dp[i-1][j-i]) % mod;
			}
			else
				dp[i][j] = dp[i-1][j];
		}
	}

	// for(int i = 0; i <= n; i++) {
	// 	for(int j = 0; j <= t; j++) 
	// 		cout << dp[i][j] << " ";
	// 	cout << endl;
	// }

	cout << dp[n-1][t];

	return 0;
}