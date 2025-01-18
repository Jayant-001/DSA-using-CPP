
/*
	https://www.youtube.com/watch?v=2yAEj-0A8bk&list=PLb3g_Z8nEv1hB69JL9K7KfEyK8iQNj9nX&index=2

	Given three positive integers L, R and Y, the task is
	to count the numbers in the range [L, R] whose sum of digits is equal to Y

	ans for => range [L, R] = range [0, R] - range [0, L-1]

	eg: 2468 5

*/
#include <bits/stdc++.h>
using namespace std;

// [number of digits in number][x upto][flag]
int dp[100][500][2];
int solve(string &s, int cur, int x, int flag) {
	if(cur >= s.size() || x < 0) 
		return x == 0;
	if(dp[cur][x][flag] != -1) return dp[cur][x][flag];

	int ans = 0;
	// flag is used to check upper bound if cur digit to keep it in range
	int maxi = flag ? s[cur] - '0' : 9;
	for(int i = 0; i <= maxi; i++) {

		if(flag == 1 && i == maxi)
			ans += solve(s, cur+1, x-i, flag);
		else
			ans += solve(s, cur+1, x-i, 0);
	}

	return dp[cur][x][flag] = ans;
}

int main() {
	
	int n, x;
	cin >> n >> x;
	memset(dp, -1, sizeof(dp));
	string r = to_string(n);
	cout << solve(r, 0, x, 1);


	return 0;
}