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

void getPath(int sr, int sc, int dr, int dc, string res, vector<string> &ans) {
	
	if(sr >= dr && sc >= dc) {
		ans.push_back(res);
		return;
	}
	
	
	// vertically
	for(int i = 1; i <= dc-sc; i++) {
		res.push_back('v');
		char c = i+'0';
		res.push_back(c);
		getPath(sr, sc+i, dr, dc, res, ans);
		res.pop_back();
		res.pop_back();
	}
	
	// horizontally
	for(int i = 1; i <= dr-sr; i++) {
		res.push_back('h');
		char c = i+'0';
		res.push_back(c);
		getPath(sr+i, sc, dr, dc, res, ans);
		res.pop_back();
		res.pop_back();
	}
	
	// diagonally
	for(int i = 1; i <= dr-sr && i <= dc-sc; i++) {
		res.push_back('d');
		char c = i+'0';
		res.push_back(c);
		getPath(sr+i, sc+i, dr, dc, res, ans);
		res.pop_back();
		res.pop_back();
	}
	
}

void solve()
{
	int n, m;
	cin >> n >> m;
	
	vector<string> ans;
	getPath(0, 0, n-1, m-1, "", ans);
	
	ans.push_back("lkjsdf");
	for(auto i : ans)
		cout << i << endl;	
	
}
 
int32_t main()
{
    solve();
    return 0;
}