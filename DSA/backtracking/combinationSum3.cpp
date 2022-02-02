// Find all valid combinations of k numbers that sum up to n such that the following conditions are true:

// Only numbers 1 through 9 are used.
// Each number is used at most once.
// Return a list of all possible valid combinations. The list must not contain the same combination twice, and the combinations may be returned in any order.
// leetcode - 216

#include<bits/stdc++.h>
using namespace std;

#define ll             	long long
#define vi              vector<int>
#define vvi 			vector<vector<int>>
#define pb              push_back
#define pii             pair<int,int>
#define mp              make_pair
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1e9+7
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define debug(x) cout << #x << " " << x << endl;

void getCombinations(int idx, int n, int sum, vi res, vvi &ans) {
	
	if(sum < 0 || res.size() > n)
		return;
	
	if(sum == 0 && res.size() == n) {
		ans.pb(res);
		return;
	}
	
	for(int i = idx; i < 10; i++) {
		res.pb(i);
		getCombinations(i+1, n, sum-i, res, ans);
		res.pop_back();
	}
}

void solve()
{
	
	int k, sum;
	cin >> k >> sum;
	vvi ans;
	vi res;
	
	getCombinations(1, k, sum, res, ans);
	
	for(auto i : ans) {
		for(auto j : i)
			cout << j << " ";
		cout << endl;
	}
	
	
	
}
 
int32_t main()
{
    solve();
    return 0;
}