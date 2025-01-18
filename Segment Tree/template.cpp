#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vpii vector<pair<int, int>> 
#define all(x) x.begin(), x.end()
#define debug(x) cout<<#x<<" : "<<x<<endl;
#define fr(a,b) for(auto i=a;i<b;++i)
#define frj(a,b) for(auto j=a;j<b;++j)
#define len(q) (int)(q.size())
#define sortV(arr) sort(arr.begin(),arr.end())
#define SUM(x) accumulate(x.begin(), x.end(), 0LL)
#define MAX(x) *max_element(x.begin(), s.end())
#define retno cout << "NO" << endl; return;
#define retyes cout << "YES" << endl; return;
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))
#define smx(a, b) a = max(a, b)
#define smn(a, b) a = min(a, b)
#define INF (( 1LL << 62 )-( 1LL << 31 )) /*Without overflow a large number*/ 

// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================

const auto start_time = std::chrono::high_resolution_clock::now();
void getExecutionTime() {
auto end_time = std::chrono::high_resolution_clock::now();
std::chrono::duration<double> diff = end_time-start_time;
    cerr<<"Time Taken : "<<diff.count()<<"\n";
}

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int arr[200005], seg[4 * 200005];
// vector<int> seg(4*n, INT_MAX);
void build(int ind, int low, int high) {
	if(low == high) {
		seg[ind] = arr[low];
		return;
	}

	int mid = (low + high) / 2;
	build(2*ind+1, low, mid);
	build(2*ind+2, mid+1, high);
	seg[ind] = min(seg[2*ind+1], seg[2*ind+2]);
}

int query(int ind, int low, int high, int l, int r) {
	// completely lie
	if(low >= l && high <= r) return seg[ind];

	// no overlap
	if(high < l || low > r) return INT_MAX;

	// partially overlap
	int mid = (low + high) / 2;
	int left = query(2*ind+1, low, mid, l, r);
	int right = query(2*ind+2, mid+1, high, l, r);
	return min(left, right);
}

// set seg[p] = u
void pointUpdate(int ind, int low, int high, int p, int u) {

	if(p < low || p > high) return;
	if(low == high) {
		seg[ind] = u;
		return;
	}

	int mid = (low + high) / 2;
	pointUpdate(2*ind+1, low, mid, p, u);
	pointUpdate(2*ind+2, mid+1, high, p, u);
	seg[ind] = min(seg[2*ind+1], seg[2*ind+2]);
}

void jayant() {
 
	int i, j, k, n, m, sum = 0;
	string s;

	cin >> n >> k;
	fr(0, n) cin >> arr[i];

	build(0, 0, n-1);

	while(k--) {
		int q, l, r; cin >> q >> l >> r;

		if(q == 1)
			pointUpdate(0, 0, n-1, l-1, r);
		else
			cout << query(0, 0, n-1, l-1, r-1) << endl;
	}

}
int32_t main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t = 1; 

	// cin >> t;

	while(t--) {
		jayant();
	}	
	getExecutionTime();

	return 0;
}
