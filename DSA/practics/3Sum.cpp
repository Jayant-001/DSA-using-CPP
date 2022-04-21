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

void solve()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	sort(arr.begin(), arr.end());
	set<vector<int>> ans;
	
	for(int i = 0; i < n-2; i++) {
		vector<int> res;
		
		int j = i+1;
		int k = n-1;
		while(j < k) {
			int data = arr[i] + arr[j] + arr[k];
			if(data == 0) {
				res.push_back(arr[i]);
				res.push_back(arr[j]);
				res.push_back(arr[k]);
				ans.insert(res);
				res.clear();
				j++;
				k--;
			}
			else if(data > 0)
				k--;
			else
				j++;
		}
	}
	vector<vector<int>> t;
	for(auto i : ans)
		t.push_back(i);
	debug(ans.size());
}

int32_t main()
{
    solve();
    return 0;
}