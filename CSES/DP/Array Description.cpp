#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

int32_t main() {

	int n, m; cin >> n >> m;
	vector<int> arr(n);
	for(int i = 0; i < n; i++) cin >> arr[i];
	
	int dp[n+1][m+1];
	memset(dp, 0, sizeof(dp));
	for(int i = 1; i < m+1; i++) {
		if(arr[0] == 0) dp[1][i] = 1;
		else dp[1][i] = arr[0] == i;
	}
	
	for(int i = 2; i < n+1; i++) {
		for(int j = 1; j < m+1; j++) {
			
			if(arr[i-1] == 0) {
				
				if(j == m) dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % mod;
				else dp[i][j] = (dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1]) % mod;
			}
			else {
				if(j == arr[i-1]){
					if(j == m) (dp[i][j] = dp[i-1][j-1] + dp[i-1][j]) % mod;
					else dp[i][j] = (dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1]) % mod;
				}
			}
		}	
	}
	
	int ans = 0;
	for(int j = 1; j < m+1; j++) ans = (ans + dp[n][j]) % mod;
	cout << ans << endl;
	
	// for(int i = 0; i < n+1; i++) {
	// 	for(int j = 0; j < m+1; j++) {
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	return 0;
}
