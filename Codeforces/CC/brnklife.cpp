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

bool check(string s, string key) {
	
	if(s == key)
		return true;
	
	int j = 0;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == key[j])
			j++;
		if(j == key.size()) {
			return true;
		}
	}
	return false;	
}

string fill(string s, char c) {
	for(int i = 0 ; i < s.length(); i++) {
		if(s[i] == '?')
			s[i] = c;
	}
	return s;
}

void solve()
{

	w(t) {
		int n, m;
		cin >> n >> m;
		string s, key;
		cin >> s >> key;
		char a[] = {'a', 'b', 'c', 'd', 'e'};
		string temp;

		bool c = false;
		for(int i = 0 ; i < 5; i++) {
			temp = fill(s, a[i]);
			// debug(temp);
			if(!check(temp, key)) {
				c = true;
				cout << temp << endl;
				break;
			}
			else 
				c = false;
			
		}
		if(!c)
			cout << -1 << endl;
		
	}
	
	
	
}
 
int32_t main()
{
    solve();
    return 0;
}