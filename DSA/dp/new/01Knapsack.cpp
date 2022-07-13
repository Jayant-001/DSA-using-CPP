#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl			"\n"
#define ll             	long long
#define lli				long long int
#define vi              vector<int>
#define vs				vector<string>
#define pb              push_back
#define pii             pair<int,int>
#define mp              make_pair
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int>>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin >> x; while(x--)
#define debug(x) cout << #x << " " << x << endl;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

int knap(vi wt, vi val, int t, int n) {
	if(n == 0 || t == 0)
		return 0;

	if(wt[n-1] <= t) {
		return max(val[n-1] + knap(wt, val, t-wt[n-1], n-1),
			knap(wt, val, t, n-1));
	}
	else
		return knap(wt, val, t, n-1);
}

int knap1(vi wt, vi val, int t, int n) {
	int dp[n+1][t+1];
	for(int i = 0 ;i <= n; i++) {
		for(int j = 0;j <= t; j++){
			if(i == 0 || j == 0) {
				dp[i][j] = 0;
			}
		}
	}

	for(int i = 1; i < n+1; i++) {
		for(int j = 1; j < t+1; j++) {

			if(wt[i-1] <= j)
				dp[i][j] = max(val[i-1]+dp[i-1][j-wt[i-1]], dp[i-1][j]);
			else
				dp[i][j] = dp[i-1][j];
		}
	}
	return dp[n][t];
}

int main() {

	int n, t;
	cin >> n >> t;
	vi wt(n);
	vi val(n);
	for(int i = 0; i < n; i++)
		cin >> wt[i];
	for(int i = 0; i < n ;i++)
		cin >> val[i];

	// cout << knap(wt, val, t, n);

	cout << knap1(wt, val, t, n);

	return 0;
}

