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

int resolve(string s, int idx) {
	int mx = idx;
	for(int i= idx; i < s.length(); i++) {
		if(s[i] == s[idx])
			mx = i;
	}
	debug(mx);
	// int k = idx+1;
	// while(k < mx) {
	// 	for(int i = k+1; i < s.length(); i++) {
	// 		if(s[i] == s[k] && i > mx)
	// 			mx = i;
	// 	}
	// 	k++;
	// }
	return mx;
}

void solve()
{
	string s;
	cin >> s;
	cout << resolve(s, 0);
	// return;
	// vector<int> ans;
	// int i = 0;
	// while(i < s.length()) {
	// 	int temp = resolve(s, i);
	// 	ans.push_back(temp+1);
	// 	// debug(temp);
	// 	i = i+temp+1;
	// }
	// if(ans[ans.size()-1] != s.length())
	// 	ans.push_back(s.length());
	
	// for(int i = ans.size()-1; i > 0; i--) {
	// 	ans[i] = ans[i]-ans[i-1];
	// }
	
	// for(auto i : ans)
	// 	cout << i << " " ;
}

int32_t main()
{
	//w(t) {
	    solve();
    //}
    return 0;
}