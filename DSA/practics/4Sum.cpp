// // leetcode 18
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

set<vector<int>> ans;
void fourSum(vector<int> arr, int target, vector<int> res) {
	
	int n = arr.size();
	if(n <= 3)
		return;
	
	for(int i = 0; i < n-2; i++) {
		for(int j = i+1; j < n-1; j++) {
			
			// two-pointers 
			int a = j+1;
			int b = n-1;
			int data = (long long int)target-(long long int)arr[i]-(long long int)arr[j];
			while(a < b) {
				
				if(arr[a]+arr[b] == data) {
					res.push_back(arr[i]);
                    res.push_back(arr[j]);
                    res.push_back(arr[a]);
                    res.push_back(arr[b]);
                    ans.insert(res);
                    res.clear();
                    a++;
                    b--;
				}
				else if(arr[a]+arr[b] < data)
					a++;
				else
					b--;
			}
			
		}
	}
	
}

void solve()
{
	int n, target;
	cin >> n >> target;
	vector<int> arr(n);
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	sort(arr.begin(), arr.end());
	vector<int> res;
	
	fourSum(arr, target, res);
	
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