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

void subarray(vector<int> arr, int i, vector<int> res, vector<vector<int>> &ans) {
		
	if(i >= arr.size()) {
		ans.push_back(res);
		return;
	}
	
	res.push_back(arr[i]);
	subarray(arr, i+1, res, ans);
	
	res.pop_back();
	subarray(arr, i+1, res, ans);
}

void solve()
{
	
	int n;
	cin >> n;
	vi arr(n);
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	vector<vector<int>> ans;
	vector<int> res;
	subarray(arr, 0, res, ans);
	
	debug(ans.size());
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