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

int countA(string s) {
	int ct = 0;
	for(auto i : s) 
		if(i == 'a')
			ct++;
	return ct;
}

long long power(int a, int b) {
	long long ans = 1;
	while(b--)
		ans *= a;
	return ans;
}

void solve()
{
	string s, t;
	cin >> s >> t;

	int a = countA(s);
	int b = countA(t);
	// cout << b << endl;
	if(t == "a")
		cout << 1 << endl;
	else if(b != 0)
		cout << -1 << endl;
	else {
		cout << power(2, s.length()) << endl;
	}

}

int32_t main()
{
	w(t) {
	    solve();
    }
    return 0;
}