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
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	map<char, int> m;
	for(auto i : s)
		m[i]++;
	
	// for(auto i : m)
	// 	cout << i.first << ":" << i.second << endl;

	// cout << endl;	
	
	map<char, int> removed;
	for(auto i : m) {
		if(k <= 0) break;
		
		if(k >= i.second) {
			k -= i.second;
			removed[i.first] = i.second;
		}
		else {
			removed[i.first] = k;
			k = 0;
		}
	}
	string ans = "";
	for(auto i : s) {
		if(removed[i])
			removed[i]--;
		else
			ans.push_back(i);
	}
	
	cout << ans <<endl;
	// for(auto i : removed)
	// 	cout << i.first << ":" << i.second << endl;
	
}
 
int32_t main()
{
	//w(t) {
	    solve();
    //}
    return 0;
}