// leetcode 1641

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

void getString(int i, int n, string s, string res, int &ct) {

	if(res.length() >= n) {
		// cout << res << endl;
		ct++;
		return;
	}

	for(int j = i; j < s.length(); j++) {
		res.push_back(s[j]);
		getString(j, n, s, res, ct);
		res.pop_back();
	}

}

string s = "aeiou";
int getCount(int len, char lastChar) {
	if(len == 0)
		return 1;
	
	int count = 0;
	for(auto i : s) {
		if(i <= lastChar) 
			count += getCount(len-1, i);
	}
	
	return count;
	
}

void solve()
{
	int n;
	cin >> n;
	
	int ct = 0;
	// getString(0, n, s, "", ct);
	for(auto i : s){
		ct += getCount(n-1, i);
	}
	cout << ct;
	
}
 
int32_t main()
{
	// w(t) {
	    solve();
    // }
    return 0;
}