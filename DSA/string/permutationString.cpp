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

void permutation(string s, string ros) {
	if(s.length() == 0) {
		cout << ros << endl;
		return;
	}
	for(int i = 0; i < s.length(); i++) {
		char cur = s[i];
		string temp = s.substr(0, i) + s.substr(i+1);
		permutation(temp, ros+cur);
	}
}

void solve()
{
	string s;
	cin >> s;
	string ros = "";
	permutation(s, ros);
}
 
int32_t main()
{
    solve();
    return 0;
}