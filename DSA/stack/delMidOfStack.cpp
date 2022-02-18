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

void deleteMid(stack<int> &s, int ct, int n) {

	if(ct == ceil((n+1)/2)) {
		s.pop();
		return;
	}
	int t = s.top();
	s.pop();
	deleteMid(s, ct+1, n);
	s.push(t);
}

void solve()
{
	
	int n;
	cin >> n;
	stack<int> s;
	for(int i = 0; i < n; i++) {
		int t;
		cin >> t;
		s.push(t);
	}
	
	if(n % 2 == 0)
		deleteMid(s, 0, n);
	else
		deleteMid(s, 1, n);
	
	int temp = s.size();
	for(int i = 0; i < temp; i++) {
		cout << s.top();
		s.pop();
	}
	
}
 
int32_t main()
{
    solve();
    return 0;
}


