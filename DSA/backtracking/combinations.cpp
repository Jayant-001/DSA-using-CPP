// Given two integers n and k, return all possible combinations of k numbers out of the range [1, n].
// You may return the answer in any order.

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

void getCombinations(int n, int k, int idx, vi res, vvi &ans) {
	
	if(res.size() == k) {
		ans.pb(res);
		return;
	}
	if(idx == n+1)
		return;
	
	for(int i = idx; i <= n; i++) {
		res.pb(i);
		getCombinations(n, k, i+1, res, ans);
		res.pop_back();
	}
	
	// res.pb(idx);
	// getCombinations(n, k, idx+1, res, ans);
	
	// res.pop_back();
	// getCombinations(n, k, idx+1, res, ans);
	
}

void solve()
{
	
	int n, k;
	cin >> n >> k;
	vvi ans;
	vi res;
	
	getCombinations(n, k, 1, res, ans);
	
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