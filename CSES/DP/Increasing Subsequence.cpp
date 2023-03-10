#include <bits/stdc++.h>
using namespace std;

int main() {

	int n; cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++) 
		cin >> arr[i];

	vector<int> dp(n+5, INT_MAX);
	dp[0] = -1;

	for(auto i : arr) {
		int id = lower_bound(dp.begin(), dp.end(), i) - dp.begin();
		dp[id] = i;
	}

	// for(auto i : dp)cout << i << " ";
	// 	cout << endl;

	int i = 0;
	while(dp[i] < INT_MAX) i++;
	cout << i-1;
}