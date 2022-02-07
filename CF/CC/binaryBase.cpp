#include<bits/stdc++.h>
using namespace std;

#define ll             	long long
#define vi              vector<int>
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


int check(string s) {
	int n = s.length();
	int ct = 0;
	for(int i = 0; i < n/2; i++) {
		if(s[i] != s[n-i-1])
			ct++;
	}
	return ct;
}

bool checkBase(string s, int k) {
	int ct = check(s);
	int n = s.length();
	
	if(k >= ct) {
	    if( (k - ct) % 2 == 0) {
	    	return 1;
	        // break;
	    }
	    else if(n % 2 == 1) {
	    	return 1;
	    }
	    else {
	    	return 0;
	        
	    }
	}
	else 
		return 0;
}

void solve()
{

	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		
		if(checkBase(s, k))
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