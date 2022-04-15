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
	int t;
	cin >> t;
	
	while(t--) {
		int n;
		cin >> n;
        string s;
        cin >> s;
		
        int isOne = 0;
        for(int i = 0; i < n; i++)
            if(s[i] == '1')
                isOne = 1;
        if(isOne == 0) {
            cout << "0" << endl;
            continue;
        }

		int isAdj = 0;
		for(int i = 1; i < s.length(); i++) {
			if(s[i-1] == '1' && s[i] == '1')
				isAdj = 1;
		}
		
		if(isAdj == 1)
			cout << "2" << endl;
		else
			cout << "1" << endl;
		
	}
}

int32_t main()
{
    solve();
    return 0;
}