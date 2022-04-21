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

vector<vector<int>> ans;
void getSubset(vector<int> arr, int i, int target, vector<int> res) {
	
	if(target == 0) {
		ans.push_back(res);
		return;
	}
	if(target < 0)
		return;
	
	for(int idx = i; idx < arr.size(); idx++) {
		res.push_back(arr[idx]);
		getSubset(arr, idx, target-arr[idx], res);
		res.pop_back();
	}
}

void solve()
{
	int n, target;
	cin >> n >> target;
	vector<int> arr(n);
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	vector<int> res;
	getSubset(arr, 0, target, res);
	
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