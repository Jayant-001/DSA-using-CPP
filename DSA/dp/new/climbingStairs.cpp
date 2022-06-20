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

int countR(int n) {
	if(n == 1 || n == 2) return n;
	return countR(n-1) + countR(n-2);
}

int countM(int n, vector<int> &dp) {
	if(n == 1 || n == 2) return n;
	if(dp[n] != -1) return dp[n];
	
	dp[n] = countM(n-1, dp) + countM(n-2, dp);
	return dp[n];
}

int countS(int n) {
	if(n == 1 || n == 2) return n;
	int prev1 = 2;
	int prev2 = 1;
	for(int i = 3; i < n+1; i++) {
		int cur = prev1 + prev2;
		prev2 = prev1;
		prev1 = cur;
	}
	return prev1;
}
// tabulation
int countT(int n) {
	int dp[n+1];
	dp[1] = 1;
	dp[2] = 2;
	
	for(int i = 3; i < n+1; i++) 
		dp[i] = dp[i-2] + dp[i-1];
	
	return dp[n];
}

void solve()
{
	int n; cin >> n;
	
	debug(countR(n));
	
	vector<int> dp(n+1, -1);
	dp[1] = 1;
	dp[2] = 2;
	
	debug(countM(n, dp));
	
	debug(countT(n));
	
	debug(countS(n));
}
 
int32_t main()
{
	//w(t) {
	    solve();
    //}
    return 0;
}