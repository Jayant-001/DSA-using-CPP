#include<bits/stdc++.h>
using namespace std;

#define ll             	long long
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

// 1 2 3 
// 1 3 2 
// 2 1 3 
// 2 3 1 
// 3 2 1 
// 3 1 2

void permutation(vi &arr, int idx, vector<vector<int>> &ans) {
	
	if(idx >= arr.size()){
		ans.pb(arr);
		return;
	}
	
	for(int i = idx; i < arr.size(); i++) {
		swap(arr[idx], arr[i]);
		permutation(arr, idx+1, ans);
		// backtrack
		swap(arr[idx], arr[i]);
	}
	
}

 
void solve()
{
	int n;
	cin >> n;
	vi arr(n);
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	vector<vector<int>> ans;
	permutation(arr, 0, ans);
	
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