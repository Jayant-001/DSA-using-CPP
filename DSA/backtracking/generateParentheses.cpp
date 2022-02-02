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
 
void generate(int o, int c, string ros, vector<string> &ans) {
	
	if(o == 0 && c == 0) {
		ans.pb(ros);
		return;
	}
	if(c > o) {
		ros.push_back(')');
		generate(o, c-1, ros, ans);
		ros.pop_back();
	}

	if(o > 0) {
		ros.push_back('(');
		generate(o-1, c, ros, ans);
		ros.pop_back();
	}

}

void solve()
{
	int n;
	cin >> n;
	vector<string> ans;
	
	generate(n, n, "", ans);
	
	for(auto i : ans)
		cout << i << ", ";
	
}
 
int32_t main()
{
    solve();
    return 0;
}