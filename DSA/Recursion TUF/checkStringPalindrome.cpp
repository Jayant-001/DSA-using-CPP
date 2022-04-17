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


// this apprach use 2 pointers
bool check(string s, int i, int j) {
	if(s[i] != s[j])
		return false;
	if(i >= j)
		return true;
	
	return check(s, i+1, j-1);
}

// using only a single pointer ------------
bool check2(string s, int i) {
	if(s[i] != s[s.length()-i-1])
		return false;
	if(i >= s.length()/2)
		return true;
	
	return check2(s, i+1);
}

void solve()
{
	string s;
	cin >> s;
	
	cout << check(s, 0, s.length()-1);
	cout << endl;
	cout << check2(s, 0);
	
}
 
int32_t main()
{
    solve();
    return 0;
}