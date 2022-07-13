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

// top-down

int fun(vector<int> arr, int i, int t) {

	if(t == 0) return 1;
	if(t < 0 || i >= arr.size()) return 0;
	// debug(t);
	if(t >= arr[i]) 
		return fun(arr, i+1, t) + fun(arr, i, t-arr[i]);

}

void solve()
{
	int n, t;
	cin >> n >> t;
	vector<int> arr(n);
	for(int i = 0 ;i < n;i++)
		cin >> arr[i];

	int dp[n+1][t+1] = {0};
	for(int i = 0; i < t+1; i++)
		dp[0][i] = 0;
	for(int i = 0; i < n+1; i++) 
		dp[i][0] = 1;

	// i = coin to make 's' sum
	for(int i = 1; i < n; i++) {

		for(int s = 0; s <= t; s++) {

			// option 1 for including Ith coin
			int op1 = (arr[i] >= s) ? 0 : dp[i][s-arr[i]];
			int op2 = (i == 0) ? 0 : dp[i-1][s];
			dp[i][s] = op1+op2;
		}
	}

	for(int i = 0; i < n+1; i++) {
		for(int j = 0; j < t+1; j++)
			cout << dp[i][j] << " ";
		cout << endl;
	}
	
	// cout << fun(arr, 0, t);
	// cout << get(t, arr);

}
 
int32_t main()
{
	fast_io;
    solve();
    return 0;
}