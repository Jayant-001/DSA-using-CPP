#include <bits/stdc++.h>
#define sz(q) (int)(q.size())
using namespace std;

int main() {

	string s, t; 
	cin >> s >> t;
	int n = sz(s), m = sz(t);
	int dp[n+1][m+1];
	dp[0][0] = 0;
	for(int i = 1; i <= n; i++) dp[i][0] = i;
	for(int i = 1; i <= m; i++) dp[0][i] = i;

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			if(s[i-1] == t[j-1]) 
				dp[i][j] = dp[i-1][j-1];
			else 
				dp[i][j] = 1 + min(dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1]));
		}
	}

	// for(int i= 0; i < n+1; i++) {
	// 	for(int j = 0; j < m+1; j++) cout << dp[i][j] << " ";
	// 		cout << endl;
	// }
	cout << dp[n][m] ;

	return 0;
}