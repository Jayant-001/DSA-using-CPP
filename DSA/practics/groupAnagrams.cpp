// leetcode 49
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
	vector<string> str = {"eat","tea","tan","ate","nat","bat"};
	vector<string> temp = str;
	
	for(int i = 0; i < str.size(); i++) {
		sort(str[i].begin(), str[i].end());
	}
	
	map<string, vector<string>> mp;
	
	for(int i = 0; i < str.size(); i++) {
		mp[str[i]].push_back(temp[i]);
	}
	
	for(auto i : mp) {
		for(auto j : i.second)
			cout << j << " ";
		cout << endl;
	}
}
 
int32_t main()
{
    solve();
    return 0;
}