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
	string s;
	cin >> s;
	
	if(s[0] == s[s.length()-1]) 
		cout << s << endl;
	else {
		string ans;	
		ans.push_back(s[s.length()-1]);
		ans += s.substr(1); 
		cout << ans << endl;
	}
	
	// int ab = 0;
	// int ba = 0;
	
	// for(int i = 0; i < s.length()-1; i++) {
	// 	if(s.substr(i, 2) == "ab")
	// 		ab++;
	// 	if(s.substr(i, 2) == "ba")
	// 		ba++;
	// }
	// string ans;
	// if(ab == ba)
	// 	ans = s;
	// else if(ab > ba) {
	// 	int t = ab-ba;
	// 	int i = 0;
	// 	while(i < s.length()-1 && t) {
	// 		if(s.substr(i, 2) == "ab") {
	// 			s[i] = 'b';
	// 			t--;
	// 		}
	// 		i++;
	// 	}
	// 	ans = s;
	// }
	// else if(ba > ab) {
	// 	int t = ba-ab;
	// 	int i = 0;
	// 	while(i < s.length()-1 && t) {
	// 		if(s.substr(i, 2) == "ba") {
	// 			s[i] = 'a';
	// 			t--;
	// 		}
	// 		i++;
	// 	}
	// 	ans = s;
	// }
	
	// cout << ans << endl;
	
	// debug(ab);
	// debug(ba);
	// cout << endl;
	
}
 
int32_t main()
{
	w(t) {
	    solve();
    }
    return 0;
}