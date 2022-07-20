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
void solve() {
	int m = 1000000007;
	int n, diff;
	cin >> n >> diff;
	vi arr(n);
	for(int i = 0 ;i < n;i++)
		cin >> arr[i];

	int sum = 0;
	for(auto i : arr)
		sum += i;

	int s2 = (sum + diff) / 2;

	int dp[n+1][s2+1];

	for(int i = 0; i < s2+1; i++)
		dp[0][i] = 0;
	for(int i = 0; i < n+1; i++) 
		dp[i][0] = 1;

	for(int i = 1; i < n+1; i++) {
		for(int j = 1; j < s2+1; j++) {
			if(arr[i-1] <= j) {
				dp[i][j] = dp[i-1][j-arr[i-1]] + dp[i-1][j];
			}
			else
				dp[i][j] = dp[i-1][j];
		}
	}

	cout << dp[n][s2];
	
}
 
int32_t main()
{
	fast_io;
    solve();
    return 0;
}