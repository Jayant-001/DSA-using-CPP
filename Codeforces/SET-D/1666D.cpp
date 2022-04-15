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
	w(t) {
		string s, t;
		cin >> s >> t;
		
		
		map<char, int> mp;
		map<char, int> mp2;
		
		for(int i = 0; i < s.length(); i++) {
			mp[s[i]]++;
		}
		
		for(int i = 0; i < t.length(); i++) {
			mp2[t[i]]++;
		}
		// for(auto i : mp)
		// 	cout << i.first << " " << i.second << " ";
		// cout << endl;
		// for(auto i : mp2)
		// 	cout << i.first << " " << i.second << " ";
		// cout << endl;
		
		int c = 0;
		for(int i = 0; i < s.length(); i++) {
			
			if(s[i] == t[c] && mp[s[i]] == mp2[t[c]]) {
				// cout << "1 ";
				mp[s[i]]--;
				mp2[t[c]]--;
				c++;
			}
			else if(s[i] != t[c]) {
				// cout << "2 ";
				mp[s[i]]--;
				s[i] = '-';
			}
			else if(s[i] == t[c] && mp[s[i]] != mp2[t[c]]){
				// cout << "3 ";
				mp[s[i]]--;
				s[i] = '-';
			}
			
		}
		// cout << endl;
		// for(auto i : mp)
		// 	cout << i.first << " " << i.second << " ";
		// cout << endl;
		// for(auto i : mp2)
		// 	cout << i.first << " " << i.second << " ";
		// cout << endl;
		
		string ans = "";
		for(auto i : s) {
			if(i != '-')
				ans.push_back(i);
		}
		
		if(ans == t)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		
		
	}

}
 
int32_t main()
{
    solve();
    return 0;
}