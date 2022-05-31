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
	int k, n;
	cin >> k >> n;
	vector<int> arr(n);
	for(int i = 0; i < n ;i++)
		cin >> arr[i];
	
	sort(arr.begin(), arr.end());
	// for(auto i : arr)
	// 	cout << i << " " ;
	
	int cat = k;
	while(!arr.empty()) {
		int mice = k - arr[arr.size()-1];
		if(mice < cat) {
			cat -= mice;
		arr.pop_back();
		}
		else break;
	}
	
	cout << n-arr.size() << endl;
}
 
int32_t main()
{
	w(t) {
	    solve();
    }
    return 0;
}