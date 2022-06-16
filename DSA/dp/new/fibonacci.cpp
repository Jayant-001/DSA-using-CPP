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
#define debug(x) cout << #x << "-> " << x << endl;

// -------simple recursion------
int fib(int n) {
	if(n == 1 || n == 0) return n;
	return fib(n-1) + fib(n-2);
}

// ------memoization (top-down) -----------
int fib2(int n, vector<int> &a1) {
	if(n == 1 || n == 0) return n;
	if(a1[n] != -1) return a1[n];
	
	a1[n] = fib2(n-1, a1) + fib2(n-2, a1);
	return a1[n];
}

// -------tabulation (bottom-up) -----------
int fibT(int n) {
	int dp[n+1];
	dp[0] = 0;
	dp[1] = 1;
	
	for(int i = 2; i < n+1; i++) {
		dp[i] = dp[i-1] + dp[i-2];
	}
	return dp[n];
}

// -------- space optimization ----------
int fib3(int n) {
	int prev2 = 0;
	int prev1 = 1;
	if(n == 0) return 0;
	for(int i = 2; i <= n;i++) {
		int cur = prev1 + prev2;
		prev2 = prev1;
		prev1 = cur;
	}
	return prev1;
}

void solve()
{
	int n; cin >> n;
	debug(fib(n));
	
	// memoization
	vector<int> a1(n+1, -1);
	a1[0] = 0;
	a1[1] = 1;
	
	debug(fib2(n, a1));
	
	debug(fibT(n));
	
	cout << "Space optimizaiotn" << endl;
	debug(fib3(n));
	
}
 
int32_t main()
{
	//w(t) {
	    solve();
    //}
    return 0;
}