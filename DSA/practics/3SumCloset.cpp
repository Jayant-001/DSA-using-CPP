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
	int n, target;
	cin >> n >> target;
	vector<int> arr(n);
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	sort(arr.begin(), arr.end());
	set<vector<int>> ans;
	int mn = INT_MAX;
	int ans = INT_MAX;
	for(int i = 0; i < n-2; i++) {
		vector<int> res;
		
		int j = i+1;
		int k = n-1;
		while(j < k) {
			int sum = arr[i] + arr[j] + arr[k];
			if(sum == target) {
				return target;
			}
			else if(sum > target) {
				if(abs(mn) > abs(t-sum)) {
					mn = t-sum;
					ans = sum;
				}
				k--;
			}
			else {
				if(abs(mn) > abs(t-sum)) {
					mn = t-sum;
					ans = sum;
				}
				j++;
			}
			
			
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