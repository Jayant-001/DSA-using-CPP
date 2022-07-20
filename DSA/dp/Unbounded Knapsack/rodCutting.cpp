// https://practice.geeksforgeeks.org/problems/rod-cutting0840/1/
#include<bits/stdc++.h>
using namespace std;

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
#define mod             1e9+7
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define debug(x) cout << #x << " " << x << endl;

// memoization
int dp[1001][1001];
int solve(vi price, vi len, int n, int t) {
    if(t <= 0 || n <= 0) return 0;

    if(dp[n][t] != -1) return dp[n][t];
    if(len[n-1] <= t)
        return dp[n][t] = max((price[n-1]+solve(price, len, n, t-len[n-1])) , solve(price, len, n-1, t));

    return dp[n][t] = solve(price, len, n-1, t);
}

// bottom-up
int solve1(vi price, vi len, int n, int t) {
	int dp[n+1][t+1];
	for(int i=0; i < n+1; i++)
		for(int j = 0; j < t+1; j++) 
			if(i == 0 || j == 0) 
				dp[i][j] = 0;

	for(int i = 1; i < n+1; i++) {
		for(int j = 1; j < t+1; j++) {

			if(len[i-1] <= j)
				dp[i][j] = max(price[i-1]+dp[i][j-len[i-1]], dp[i-1][j]);
			else
				dp[i][j] = dp[i-1][j];
		}
	}
	return dp[n][t];
}

void solve()
{
	int n;
	cin >> n;
	vi price(n);
	for(int i = 0; i < n; i++)
		cin >> price[i];
	vi len(n);
	for(int i = 0; i < n; i++)
		len[i] = i+1;

	// memset(dp, -1, sizeof(dp));
	// cout << solve(price, len, n, n);


	cout << solve1(price, len, n, n);

}

int32_t main()
{
    solve();
    return 0;
}