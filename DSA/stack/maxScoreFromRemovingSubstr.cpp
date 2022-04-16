// https://leetcode.com/problems/maximum-score-from-removing-substrings/

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

// O(n^2)
void solve1()
{
	w(t) {
		string s;
		cin >> s;
		int x, y;
		cin >> x >> y;
		
		string first, second;
		int s1, s2;
		if(x > y) {
			first = "ab";
			second = "ba";
			s1 = x;
			s2 = y;
		}
		else {
			first = "ba";
			second = "ab";
			s1 = y;
			s2 = x;
		}
		
		int ans = 0;
		auto t = s.find(first);
		while(t != string::npos) {
			s.erase(s.begin()+t, s.begin()+t+2);
			ans += s1;
			 t = s.find(first);
		}
		
		t = s.find(second);
		while(t != string::npos) {
			s.erase(s.begin()+t, s.begin()+t+2);
			ans += s2;
			 t = s.find(second);
		}
		
		cout << ans << endl;
	}
}

// O(N) using stack.............
void solve() 
{
	string s;
	cin >> s;
	int x, y;
	cin >> x >> y;
	
	char first, second;
	int s1, s2;
	if(x > y) {
		first = 'b';
		second = 'a';
		s1 = x;
		s2 = y;
	}
	else {
		first = 'a';
		second = 'b';
		s1 = y;
		s2 = x;
	}
	
	int ans = 0;
	stack<char> st;
	for(int i = 0; i < s.length(); i++) {
		
		if(!st.empty() && s[i] == first && st.top() == second) {
			ans += s1;
			st.pop();
		}
		else
			st.push(s[i]);
	}
	
	s = "";
	while(!st.empty()) {
		s.push_back(st.top());
		st.pop();
	}
	reverse(s.begin(), s.end());
	cout << s << endl;
	
	// st.clear();
	for(int i = 0; i < s.length(); i++) {
		
		if(!st.empty() && s[i] == second && st.top() == first) {
			ans += s2;
			st.pop();
		}
		else
			st.push(s[i]);
	}
	
	cout << ans;

}
 
int32_t main()
{
    solve();
    return 0;
}

