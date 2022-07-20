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

int getCount(vi arr, int n, int sum) {
	if(sum = 0) return 1;
	if(sum < 0 || n <= 0) return 0;

	return getCount(arr, n, sum-arr[n-1]) + getCount(arr, n-1, sum);
	for(int i = 0; i < n; i++) {
			return getCount(arr, n, sum-arr[i]) + 
					getCount(arr, n, sum);
	}
}

// bottom-up
void solve() {
	int m = 1000000007;
	int n, t;
	cin >> n >> t;
	vi arr(n);
	for(int i = 0 ;i < n;i++)
		cin >> arr[i];

	cout << getCount(arr, n, t);

	// int dp[n+1][t+1];
	// for(int i = 0; i < t+1; i++)
	// 	dp[0][i] = 0;
	// for(int i = 0; i < n+1; i++)
	// 	dp[i][0] = 1;

	// for(int i = 1; i <= n; i++) {
	// 	for(int j = 1; j <= t; j++) {

	// 		if(arr[i-1] <= j) {
	// 			dp[i][j] = ( dp[i][j-arr[i-1]] + dp[i-1][j] ) % m;
	// 		}
	// 		else 
	// 			dp[i][j] = dp[i-1][j];
	// 	}
	// }

	// cout << dp[n][t];
}



 
int32_t main()
{
	fast_io;
    solve();
    return 0;
}