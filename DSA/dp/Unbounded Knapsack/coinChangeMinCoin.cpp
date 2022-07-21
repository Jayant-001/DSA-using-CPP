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

// recursion // in-complete code
int solve(int arr[], int n, int sum) {
    if(sum == 0){ 
        cout << "ldj" << endl;
        return INT_MAX-2;
    }
    if(n <= 0) return 0;

    if(arr[n-1] <= sum) {
        return min(solve(arr, n, sum-arr[n-1]), solve(arr, n-1, sum))+1;
    }
    else
        return solve(arr, n-1, sum);
}

void solve() {

	int n, k; cin >> n >> k;
	// int n; cin >> n;
	vi arr(n);
	for(int i = 0; i < n; i++) cin >> arr[i];

	int dp[n+1][k+1];
	for(int i = 0; i < k+1; i++) 
		dp[0][i] = INT_MAX-1;
	for(int i = 1; i < n+1; i++)
		dp[i][0] = 0;

	// initializing 2nd row
	for(int j = 1; j < k+1; j++) {
		if(j % arr[0] == 0)
			dp[1][j] = j/arr[0];
		else
			dp[1][j] = INT_MAX-1;
	}

	for (int i = 2; i < n+1; i++) {
		for(int j = 1; j < k+1; j++) {

			if(arr[i-1] <= j) 
				dp[i][j] = min(1+dp[i][j-arr[i-1]], dp[i-1][j]);
			else
				dp[i][j] = dp[i-1][j];
		}
	}

	if(dp[n][k] >= INT_MAX-1)
		cout << -1;
	else
		cout << dp[n][k];

}

 
int32_t main()
{
	fast_io;
	// w(t) {
		solve();
	// }
    return 0;
}