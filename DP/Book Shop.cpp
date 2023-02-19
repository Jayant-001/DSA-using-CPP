#include <bits/stdc++.h>
using namespace std;

int main() {

	int n, x; cin >> n >> x;
	vector<int> price(n), pages(n);
	for(int i = 0; i < n; i++) cin >> price[i];
	for(int i = 0; i < n; i++) cin >> pages[i];
	
	int dp[n+1][x+1];
	for(int i = 0; i < n+1; i++) dp[i][0] = 0;
	for(int i = 0; i < x+1; i++) dp[0][i] = 0;

	for(int i = 1; i < n+1; i++) {
		for(int j = 1; j < x+1; j++) {

			if(j >= price[i-1]) {
				dp[i][j] = max(pages[i-1] + dp[i-1][j-price[i-1]], dp[i-1][j]);
			}
			else
				dp[i][j] = dp[i-1][j];
		}
	}

	cout << dp[n][x];

	return 0;
}