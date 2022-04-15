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

bool checkVowel(char c) {
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' || 
		c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y')
		return true;
	return false;
}

void solve()
{
	string s;
	cin >> s;
	
	string ans = "";
	for(int i = 0; i < s.length(); i++) {
		if(!checkVowel(s[i])) {
			ans.push_back('.');
			ans.push_back(tolower(s[i]));
		}
	}
	cout << ans;
}

int32_t main()
{
    solve();
    return 0;
}