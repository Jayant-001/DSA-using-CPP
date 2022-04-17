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
	
	int n;
	cin >> n;
	vector<string> start(n);
	for(int i = 0; i < n;i++)
		cin >> start[i];
	int m;
	cin >> m;
	vector<string> target(m);
	for(int i = 0; i < m; i++)
		cin >> target[i];
	
	unordered_map<string, bool> mp;
	for(auto s : start) {
		sort(s.begin(), s.end());
		mp[s] = true;
	}
	
	int ans = 0;
	for(int i = 0; i < target.size(); i++) {
		string t = target[i];
		
		for(int j = 0; j < t.length(); j++) {
			string s = t;
			s.erase(s.begin()+j);
			sort(s.begin(), s.end());
			
			if(mp[s]) {
				ans++;
				break;
			}
		}
	}
	
	cout << ans ;
	
	
	// int ans = 0;
	
	// vector<bool> temp(m, false);
	
	// for(int i = 0; i < target.size(); i++) {
		
	// 	for(int j = 0; j < start.size(); j++) {
			
	// 		if(temp[i] == false) {
				
	// 			string s = start[j];
	// 			string t = target[i];
				
				
	// 			int h1[30] = {0};
	// 			int h2[30] = {0};
	// 			for(auto i : s)
	// 				h1[i-'a']++;
				
	// 			for(auto i : t)
	// 				h2[i-'a']++;
				
	// 			int ct = 0;
	// 			bool check = true;
	// 			for(int i = 0; i < 30; i++) {
	// 				if(h1[i] > 0 && h1[i] != h2[i]) {
	// 					check = false;
	// 					break;
	// 				}
	// 				if(h1[i] > 0 && h2[i] == 0)
	// 					ct++;
	// 			}

	// 			if(s.length() >= t.length())
	// 				check = false;

	// 			cout << ct << ", ";
	// 			temp[i] = check;
	// 		}
	// 	}
	// }
	
	// for(auto i : temp)
	// 	cout << i << " ";
	
	
	// // for(int i = 0; i < 30; i++) {
	// // 	cout << i << " - " << h1[i] << endl;
	// // }
	
	
	// // for(int i = 0; i < 30; i++) {
	// // 	cout << i << " - " << h2[i] << endl;
	// // }
	
	
}
 
int32_t main()
{
    solve();
    return 0;
}