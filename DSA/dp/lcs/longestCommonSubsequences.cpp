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

	// memoization
int dp1[1002][1002];
int findSeq(string &x, string &y, int n, int m) {

	if(n <= 0 || m <= 0) return 0;
	if(dp1[n][m] != -1) return dp1[n][m];
	if(x[n-1] == y[m-1]) return dp1[n][m] = 1 + findSeq(x, y, n-1, m-1);

	return dp1[n][m] = max(findSeq(x, y, n-1, m) , findSeq(x, y, n, m-1));
}

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
				dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
		}
	}

	// printing lcs............................................./////////////////
	int i = n, j = m;
	string ans = "";
	while(dp[i][j] > 0) {
		if(x[i-1] == y[j-1]) {
			ans.pb(x[i-1]);
			i--;
			j--;
		}
		else if(dp[i-1][j] > dp[i][j-1]) 
			i--;
		else 
			j--;
	}

	reverse(ans.begin(), ans.end());
	cout << ans << endl;

	// return length of lcs
	return dp[n][m];
}

void solve() {
	string x, y;
	cin >> x >> y;

	// memoization//////
	memset(dp1, -1, sizeof(dp1));
	// cout << findSeq(x, y, x.length(), y.length());


	cout << lcs(x, y, x.length(), y.length());

}
int32_t main()
{
	fast_io;
    solve();
    return 0;
}