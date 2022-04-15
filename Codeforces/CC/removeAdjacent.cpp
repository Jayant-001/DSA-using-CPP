#include<bits/stdc++.h>
using namespace std;

#define ll             	long long
#define vi              vector<int>
#define pb              push_back
#define pii             pair<int,int>
#define mp              make_pair
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1e9+7
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define debug(x) cout << #x << " " << x << endl;
 
bool checkEqual(vector<int> v) {
	
	for(int i = 0; i < v.size()-1; i++) {
		if(v[i] != v[i+1])
			return false;
	}
	return true;
}

void operation(vector<int> &v, int i) {
	
	v[i+1] = v[i] + v[i+1];
	v.erase(v.begin() + i);
}

void solve()
{
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> arr(n);
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		
		// corner cases
		if(n == 1) {
			cout << 0 << endl;
			continue;
		}
		if(n == 2) {
			cout << 1 << endl;
			continue;
		}
		
		int ct = 0;
		int mx = INT_MIN;
		for(int i = 0; i < n; i++)
			if(mx < arr[i])
				mx = arr[i];
		
		while(!checkEqual(arr)) {
		
			for(int i = 0; i < n-1; i++) {
				
				if( (arr[i] + arr[i+1]) == mx) {
					operation(arr, i);
					ct++;
				}
			}
		}
		
		cout << ct << endl;
	}
	
	
}

int32_t main()
{
    solve();
    return 0;
}