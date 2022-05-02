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
// #define mod             1e9+7
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define debug(x) cout << #x << " " << x << endl;
// #define mod 1e9+7

// recursive soln
int ct = 0;
int getCombinations(int t) {
	if(t == 0)
		return 1;
	if(t < 0)
		return 0;
	
	return getCombinations(t) + getCombinations(t-1);
}


void solve()
{
	int n;
	cin >> n;
	
	vector<ll> dp(n+1, 0);
	dp[0] = 1;
	int mod = 1e9+7;
	
	for(int i = 1; i < n+1; i++) {
		
		for(int j = 1; j <= 6; j++) {
			if(j > i)
				break;
			dp[i] = (dp[i] + dp[i-j])%mod;
		}
	}
	
	cout << dp[n];
		
}

int32_t main()
{
    solve();
    return 0;
}