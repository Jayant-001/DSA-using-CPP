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

void balance(string &s, string &t) {
		if(s.length() == t.length())
			return;
		int i = s.length();
		while(i < t.length()) {
			s.push_back('0');
			++i;
		}
		i = t.length();
		while(i < s.length()) {
			t.push_back('0');
			++i;
		}
}

void solve()
{
	string s, t;
	cin >> s >> t;
	
	reverse(s.begin(), s.end());
	reverse(t.begin(), t.end());
	balance(s, t);
	debug(s);
	debug(t);
	
	string ans = "";
	int carry = 0;
	int i = 0;
	while(i < s.length() && i < t.length()) {
		int a = s[i]-'0';
		int b = t[i]-'0';
		int temp = a+b+carry;
		ans.push_back(temp%10+'0');
		carry = temp/10;
		i++;
	}
	if(carry)
		ans.push_back(carry+'0');
	reverse(ans.begin(), ans.end());
	cout << ans;
}
 
int32_t main()
{
	//w(t) {
	    solve();
    //}
    return 0;
}