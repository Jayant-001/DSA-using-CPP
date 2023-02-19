#include <bits/stdc++.h>
using namespace std;

int main() {

	int n; cin >> n;

	int dp[n+1] = {0};

	for(int i = 1; i <= n; i++) {

		// check steps for i to make it zero
		int temp = i, steps = 1e6+9;
		while(temp > 0) {
			int digitToRemove = temp % 10;
			temp /= 10;
			if(digitToRemove == 0) continue;
			steps = min(steps, 1 + dp[i-digitToRemove]);
		}
		dp[i] = steps;
	}

	// for(int i = 0; i <= n; i++) cout << dp[i] << " ";

	cout << dp[n];

	return 0;
}