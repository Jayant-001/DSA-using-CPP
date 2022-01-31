// Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.
// leetcode - 47

#include<bits/stdc++.h>
using namespace std;

#define ll             	long long
#define lli				long long int
#define vi              vector<int>
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

void permutation(vi arr, int idx, set<vi> &ans) {
	
	if(idx >= arr.size()) {
		ans.insert(arr);
		return;
	}
	
	for(int i = idx; i < arr.size(); i++) {
		swap(arr[idx], arr[i]);
		permutation(arr, idx+1, ans);
	}
	
}
 
void solve()
{
	int n;
	cin >> n;
	vi arr(n);
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	set<vector<int>> ans;
	permutation(arr, 0, ans);
	
	vector<vector<int>> res;
	
	for(auto i : ans)
		res.pb(i);
	
	for(auto i : res) {
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