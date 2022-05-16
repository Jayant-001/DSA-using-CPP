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
	if(s[0] == '0') 
		cout << 1;
	else if(s[s.length()-1] == '1')
		cout << 1;
	else {
		int firtZero = 0;
		while(firtZero < s.length()) {
			if(s[firtZero] == '0')
				break;
			firtZero++;
		}
			
		int lstOne = 0;
		for(int i = 0; i < firtZero; i++)
			if(s[i] == '1')
				lstOne = i;
		
		int ans;
		if(firtZero == s.length() && lstOne == 0)
			ans = s.length();
		else if(firtZero == s.length()) {
			ans = firtZero-lstOne;
		}
		else
			ans = firtZero-lstOne+1;
		// cout << ans;
		// debug(firtZero);
		// debug(lstOne);
		cout << ans;
		// debug(ans);	
	}
	cout << endl;
}

int32_t main()
{
	w(t) {
	    solve();
    }
    return 0;
}