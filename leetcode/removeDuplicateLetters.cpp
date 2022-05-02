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

void solve2() {
	string s;
	cin >> s;

	map<char, int> lstIdx;
	map<char, bool> visited;
	
	for(int i = 0; i < s.length(); i++) 
		lstIdx[s[i]] = i;
	// for(auto i : lstIdx) {
	// 	cout << i.first << " " << i.second << endl;
	// }
	
	string ans = "";
	for(int i= 0; i < s.length(); i++) {
		if(visited[s[i]] == true)
			continue;
		
		while(!ans.empty() && ans.back() > s[i] && lstIdx[ans.back()] > i) {
			visited[ans.back()] = false;
			ans.pop_back();
		}
		ans.push_back(s[i]);
		visited[s[i]] = true;
	}
	
	
	
	cout << ans;
}

void solve()
{
	
	string s;
	cin >> s;
	map<char, int> m;
	int i = 0;
	while(i < s.length()) {
		if(m.find(s[i]) != m.end()) {
			
			int a = m.find(s[i])->second;	
			int b = i;
			
			if(s[a+1] == s[b+1]) {
				s.erase(s.begin()+a);
			}
			else if(s[a+1] < s[b+1]) 
				s.erase(s.begin()+a);
			else if(s[b+1] < s[a+1])
				s.erase(s.begin()+b);
			
			cout << a << " " << b << endl;
		}
		else {
		
			m[s[i]] = i;
			i++;
		}
	}
	cout << s;
	
}
 
int32_t main()
{
    solve2();
    return 0;
}