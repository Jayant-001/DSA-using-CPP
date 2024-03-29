#include<bits/stdc++.h>
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
#define mod             1e9+7
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define debug(x) cout << #x << " " << x << endl;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

// bottom-up
int lcs(string &x, string &y, int n, int m) {
	int dp[n+1][m+1];
	for(int i = 0; i < n+1; i++) 
		for(int j = 0; j < m+1; j++)
			if(i == 0 || j == 0) 
				dp[i][j] = 0;

	for(int i= 1; i < n+1; i++) {
		for(int j = 1; j < m+1; j++) {
			if(x[i-1] == y[j-1]) 
				dp[i][j] = 1+dp[i-1][j-1];
			else
				dp[i][j] = 0;
		}
	}

//	just print the dp matrix
	for(int i= 0; i < n+1; i++) {
		for(int j = 0; j < m+1; j++) {
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}

	// finding max length continuous subsequence
	int ans = 0;
	for(int i= 1; i < n+1; i++) {
		for(int j = 1; j < m+1; j++) {
			ans = max(ans, dp[i][j]);
		}
	}
	return ans;
}

void solve() {
	string x, y;
	cin >> x >> y;

	cout << lcs(x, y, x.length(), y.length());

}
int32_t main()
{
	fast_io;
    solve();
    return 0;
}