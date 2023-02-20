#include <bits/stdc++.h>
using namespace std;

int main() {

	int l, r;
	cin >> l >> r;

	int dp[l+1][r+1];
	// 	initializing
	for(int i = 1; i < l+1; i++) {
		for(int j = 1; j < r+1; j++) {
			if(i == j) dp[i][j] = 0;
			else if(i == 1 || j == 1) dp[i][j] = abs(i-j);
			else dp[i][j] = 1000000;
		}
	}

	for(int row = 1; row < l+1; row++) {
		for(int col = 1; col < r+1; col++) {
			if(row == col) continue;
			int val = INT_MAX;
			// row
			for(int i = 1; i < row; i++) {
				val = min(val, dp[row-i][col] + dp[i][col]);
			}
			// col
			for(int i = 1; i < col; i++)
				val = min(val, dp[row][col-i] + dp[row][i]);

			// cout << row << " " << col << " -> " << val << endl;
			dp[row][col] = val+1;
		}
	}

	// for(int i = 1; i < l+1; i++) {
	// 	for(int j = 1; j < r+1; j++) {
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	cout << dp[l][r];

	return 0;
}