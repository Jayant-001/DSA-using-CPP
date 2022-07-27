#include<bits/stdc++.h>
using namespace std;

#define endl			"\n"
#define ll             	long long
#define lli				long long int
#define vi              vector<int>
#define vll 			vector<long long>
#define vs				vector<string>
#define pb              push_back
#define pii             pair<int,int>
#define mp              make_pair
#define mii             map<int,int>
#define mci 			map<char, int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int>>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define debug(x) cout << #x << " " << x << endl;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)

/**
idea -
	just find the longest common sub sequence and 
	substract it from length of (s + k)

	Input: str1 = "abac", str2 = "cab"
	Output: 5 = "cabac"

	Input: X = abcd, Y = xycd
	Output: 6 = abxycd

**/
void solve() {

	string s, k;
	cin >> s >> k;

	int n = s.length();
	int m = k.length();
	int dp[n+1][m+2];
	for(int i = 0; i < n+1; i++) 
		for(int j = 0; j < m+1; j++)
			if(i == 0 || j == 0)
				dp[i][j] = 0;

	for(int i = 1; i < n+1; i++) {
		for(int j = 1; j < m+1; j++) {

			if(s[i-1] == k[j-1])
				dp[i][j] = dp[i-1][j-1] + 1;
			else 
				dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
		}
	}


	// print the shortest common supersequence----------------------------------------------------
	for(int i = 1; i < n+1; i++) {
		for(int j = 1; j < m+1; j++) {

			cout << dp[i][j] << " " ;
		}
		cout << endl;
	}


	// length of shortest common supersequence = 
	cout << n + m - dp[n][m];
	
}
 
int32_t main()
{
	fast_io;
	// w(t) {
		solve();
	// }
    return 0;
}