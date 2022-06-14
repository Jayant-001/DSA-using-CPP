#include<iostream>
#include <vector>
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
#define debugarr(arr) for(auto i : arr) cout << i << " ";
 
void solve()
{
	int n, k;
	cin >> n >> k;
	vector<int> a1(3001, 0);
	vector<int> a2(3001, 0);
	for(int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		a1[a] += b;
	}		
	
	int cur = 0;
	int ans = 0;
	int prev = 0;
	for(int i = 0; i < 3001; i++) {
		cur = a1[i] + prev;
		// if(cur == 0) {
		// 	ans += prev;
		// 	prev = 0;
		// }
		 if(cur > k) {
			ans += k;
			prev = min(cur-k, k);
		}
		else {
			ans += cur;
			prev = 0;
		}
	}
	
	if(prev)
		ans += min(prev, k);
	cout << ans;
}
 
int32_t main()
{
	// w(t) {
	    solve();
    // }
    return 0;
}