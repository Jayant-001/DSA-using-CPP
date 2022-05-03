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
	
	// if(s.length() == 1 || s == "ab" || s == "ba") 
	// 	cout << "NO" << endl;
	// else {
	// 			for(int i = 1; i <s.length()-1; i++) {
	// 		if(s[i] != s[i-1] && s[i] != s[i+1]) {
	// 			c = false;
	// 			break;
	// 		}
	// 	}
		
	// 	if(c)
	// 		cout << "YES" << endl;
	// 	else
	// 		cout << "NO" << endl;
	// }
	
	stack<int> st;
	bool c = true;
	if(s.length() == 1 || s == "ab" || s == "ba") 
		c = false;
	else {
		
	for(int i = 0; i < s.length(); i++) {
		if(i == s.length()-1 && s[i] != st.top()) {
			c = false;
		}
		if(st.empty()) {
			st.push(s[i]);
		}
		else if(s[i] == st.top()) {
			st.push(s[i]);
		}
		else if(s[i] != st.top()) {
			if(st.size() == 1) {
				c = false;
				break;
			}
			else  {
				while(!st.empty())
					st.pop();
				st.push(s[i]);
			}
		}
	}
	
	}
	if(c)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
	
}
 
int32_t main()
{
	w(t) {
		solve();
	}
    return 0;
}