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

// tabulation
int solveTab(vector<int> coins, int amount) {
    vector<int> dp(amount+1, INT_MAX);
    dp[0] = 0;
    for(int i = 1; i <= amount; i++) {
        // solve for every amount from 1 to amount
        for(int j = 0; j < coins.size(); j++) {
            if(i-coins[j] >= 0 && dp[i-coins[j]] != INT_MAX)
                dp[i] = min(dp[i], 1+dp[i-coins[j]]);
        }
    }
    if(dp[amount] == INT_MAX)
        return -1;
    return dp[amount];
}
    
void solve()
{
	int n, amount; 
	cin >> n >> amount;
	vector<int> coins(n);
	for(int i = 0; i < n; i++) cin >> coins[i];
		
	cout << solveTab(coins, amount);
}

int32_t main()
{
	//w(t) {
	    solve();
    //}
    return 0;
}