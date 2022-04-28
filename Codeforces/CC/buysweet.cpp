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

ll dp[1001][1001];
ll slv(ll i, ll j, vector<ll> sw, vector<ll> cs) {
	
	if(j == 0)
		return 0;
	if(i == 0)
		return 0;
	
	if(dp[i][j] != -1)
		return dp[i][j];
	
	if(sw[i-1] > j)
		return dp[i][j] = slv(i-1, j, sw, cs);
	
	ll a = 1 + slv(i, (j-sw[i-1]) + cs[i-1], sw, cs);
	ll b = slv(i-1, j, sw, cs);
	
	return dp[i][j] = max(a, b);
	
}

void solve()
{
	ll n, k;
	cin >> n >> k;
	
	vector<ll> sweet(n);
	vector<ll> csb(n);
	for(ll i = 0; i < n;i++) 
		cin >> sweet[i];
	for(ll i = 0; i < n ;i++)
		cin >> csb[i];
	
	dp[n+1][k+1];
	memset(dp, -1, sizeof(dp));
	
	cout << slv(n, k, sweet, csb) << endl;
	
	
}
 
int32_t main()
{
	w(t) {
    solve();
}
    return 0;
}