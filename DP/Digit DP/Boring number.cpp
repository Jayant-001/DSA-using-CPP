/*

A positive number is called boring if all of the digits at even positions in the 
number are even and all of the digits at odd positions are odd. The digits are enumerated from left to right starting from 1.
For eg. the number 1478 is boring as the odd positions include the digits {1, 7} which are odd and even positions include the digits {4, 8} which are even

Given the number L and R Ron whats to count how many numbers in the range [L, R] inclusive are boring.

*/


#include <bits/stdc++.h>
using namespace std;

#define int long long



/*
INput
	3
	5 15
	120 125
	779 783
output
	6
	3
	2
*/

// [number of digits][current index][is current index is odd][tight bound to check range]
int dp[20][2][2][2];
int solve(string &r, int idx, int odd, int leading, int tight) {
	if(idx >= r.size()) return 1;
	if(dp[idx][odd][leading][tight] != -1) return dp[idx][odd][leading][tight];

	int ans = 0;
	if(leading)
		ans += solve(r, idx+1, 1, odd, 0);
	int maxi = tight ? r[idx]-'0' : 9;

	for(int i = 0; i <= maxi; i++) {
		if(odd == 1 && i&1) {
			ans += solve(r, idx+1, 0, 0, (tight&(i == maxi)));
		}
		if(odd == 0 && i % 2 == 0) {
			ans += solve(r, idx+1, 1, 0, (tight&(i == maxi)));
		}
	}
	return dp[idx][odd][leading][tight] = ans;
}

void jayant() {

	
	int l, r;
	cin >> l >> r;
	string a = to_string(l-1), b = to_string(r);
	memset(dp, -1, sizeof(dp));
	int full = solve(b, 0, 1, 1, 1);
	memset(dp, -1, sizeof(dp));
	int down = solve(a, 0, 1, 1, 1);

	cout << full - down << endl;
}

// ---------------------------------------------- MAIN AREA -----------------------------------------------------------------

int32_t main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	// fast_io;

	// if reads input from file
	// freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

	int t = 1;

	cin >> t;


	while(t--) {
		jayant();
	}
	return 0;
}
