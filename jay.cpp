
#include <bits/stdc++.h>
#define endl "\n"
#define spc " "
#define INF_INT 2e9
#define INF_LL 2e18
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define pi pair<int, int>
#define pl pair<ll,ll>
#define plp pair<ll,pl>
#define vi vector<int>
#define vl vector<ll>
#define mli map<ll, int>
#define umli unordered_map<ll, int>
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define ins insert
#define lb lower_bound  // First element NOT LESS than val
#define ub upper_bound  // First element GREATER than val
#define sz(q) (int)(q.size())

using namespace std;
typedef long long int ll;
typedef long int li;

#define fr(a,b) for(auto i=a;i<b;++i)
#define nfr(a,b) for(auto i=a;i>=b;--i)
#define jfr(a,b) for(auto j=a;j<b;++j)
#define njfr(a,b) for(auto j=a;j>=b;--j)
#define tt ll t; cin>>t; while(t--)
#define sortV(arr) sort(arr.begin(), arr.end());
#define debug(x) cout << #x << " " << x << endl;
#define traverse(arr)     \
	for (auto i : arr)    \
		cout << i << " "; \
	cout << endl;

void swap(ll &x,ll &y){
	ll temp = y;
	y = x;
	x = temp;
}

bool checkSortedV(vector<ll> &arr) {
	fr(1, arr.size()) {
		if(arr[i] <= arr[i-1]) return false;
	}
	return true;
}

// ll powa(ll a, ll b, ll m = mod){
// 	if (b == 0)
// 		return 1ll;
// 	else if (b == 1)
// 		return a;
// 	else
// 	{
// 		ll x = powa(a, b/2, m);
// 		x *= x;
// 		// x %= m;
// 		if (b%2)
// 		{
// 			x *= a;
// 			// x %= m;
// 		}
// 		return x;
// 	}
// }

ll maxL(ll a, ll b) {
	return a > b ? a : b;
}

ll minL(ll a, ll b) {
	return a < b ? a : b;
}

struct jay {
	int id, position, weight;
};

// sort(all(arr), [] (jay a, jay b) {
// 	return a.position < b.position;
// });

void func(int x) {
	cout << x << " ";

	if(x >= 3) return;
	func(x+1);
	func(x+2);
}

string genBinary(int n) {

	if(n > 1) return genBinary(n/2);
	return "" + to_string(n%2);
}

// left rotate string index i to j
void leftRotate(string &s, int i, int j) {
	char t = s[i];
	while(i < j) {
		s[i] = s[i+1];
		i++;
	}
	s[j] = t;
}

// right rotate string index i to j
void rightRotate(string &s, int i, int j) {
	char t = s[j];
	while(j > i) {
		s[j] = s[j-1];
		j--;
	}
	s[i] = t;
}

int search(vector<pair<ll, ll>> &arr, ll k) {
	ll l = 0, r = sz(arr)-1, ans = 0;
	while(l <= r) {
		int mid = (l + r) / 2;
		if(k > arr[mid].first) {
			ans = mid;
			l = mid+1;
		}
		else
			r = mid-1;
	}
	return ans;
}

void jayant() {

	int i, j, k, n, m, ans = 0;
	
	int l, r; cin >> l >> r;

	int two = getCount(l, r, 2);
    int three = getCount(l, r, 3);
    
    int twoRange = search(l, r, 2, two);
    // debug("__---")
    int threeRange = search(l, r, 3, two);

	// debug(two); debug(three);
	// debug(twoRange) debug(threeRange);

	ans = twoRange-l+1;
	// debug(ans);
	if(two == three) {
		ans +=((threeRange-l+1) * (two-1));
	}
	cout << two << " " << ans << endl;
}

int32_t main(){

	fastio

	tt {
		jayant();
	}

	return 0;	
}

