/*


    $$$$$$$$       $$$      $$     $$        $$$
       $$        $$   $$     $$   $$       $$   $$
       $$        $$   $$      $$ $$        $$   $$
   $$  $$        $$$$$$$        $$         $$$$$$$
   $$  $$        $$   $$       $$          $$   $$
   $$$$$$		 $$   $$      $$           $$   $$


*/


#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define spc " "
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define retno cout << "NO" << endl; return;
#define retyes cout << "YES" << endl; return;
#define ll long long
#define int long long
// #define lli long long int
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define pii pair<int, int>
#define mp make_pair
#define mii map<int, int>
#define umii unordered_map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define all(x) x.begin(), x.end()
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)  \
	int x;    \
	cin >> x; \
	while (x--)
#define debug(x) cout << #x << " : " << x << endl;
#define fast_io                       \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL)
#define N 1000002
#define fr(a,b) for(auto i=a;i<b;++i)
#define sz(q) (int)(q.size())
#define traverse(arr)     \
	for (auto i : arr)    \
		cout << i << " "; \
	cout << endl;
#define sortV(arr) sort(arr.begin(), arr.end())
// #define mod 1e9+7

// --------------------------------------------- SIEVE
pair<vi, vi> sieve(int n)
{
	vector<int> vis(n+1, true);
    for (ll p = 2; p * p <= n; p++)
    {
 
        if (vis[p] == true)
        {
 
            for (ll i = p * p; i <= n; i += p)
                vis[i] = false;
        }
    }
	vector<int> prime;
    for (ll p = 2; p <= n; p++)
        if (vis[p])
            prime.push_back(p);
			
	return {vis, prime};
}
// ----------------------------------------GCD
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

// ---------------------------------------------- MAX-MIN
int maxL(int a, int b) {
	return a > b ? a : b;
}

int minL(int a, int b) {
	return a < b ? a : b;
}


bool checkPalindrome(string str, int i)
{

	int i2 = (str.length() - i - 1);

	if (i >= (str.length() / 2))
	{
		return true;
	}

	if (str[i] != str[i2])
	{
		return false;
	}

	return checkPalindrome(str, ++i);
}

vi getPre(vi &arr)
{
	int n = arr.size();
	vll pre(n, 0);
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
			pre[i] = arr[i];
		else
			pre[i] = arr[i] + pre[i - 1];
	}
	return pre;
}

vi getPost(vi &arr)
{
	int n = arr.size();
	vi post(n, 0);
	for (int i = n - 1; i >= 0; i--)
	{
		if (i == n - 1)
			post[i] = arr[i];
		else
			post[i] = arr[i] + post[i + 1];
	}
	return post;
}

#define mx 1e16

int checkperfectsquare(int n)
{

	int sr = sqrt(n);

	if (sr * sr == n)
		return true;
	else
		return false;

	if (ceil((double)sqrt(n)) == floor((double)sqrt(n)))
	{
		return true;
	}
	else
	{
		return false;
	}
}

// ----------------------------------------- GET Binary (len = 32) of int
string getBinaryString(int n) {
	string binary = "";
	for(int i = 31; i >= 0; i--) {
		bool bit = n & (1<<i);
		binary.pb(bit+'0');
	}
	return binary;
}

// ------------------------------------------------------------------------------------------------------------------------------

bool checkSorted(vector<int> &arr) {

	for(int i = 1; i < arr.size(); i++) {
		if(arr[i-1] > arr[i]) return false;
	}
	return true;
}


int search(vector<ll> &arr, vector<ll> &prefix, ll cur, ll k) {

	ll low = 0, high = cur, ans = 0;

	while(low <= high) {
		ll mid = (low + high) / 2;

		ll prev = mid == 0 ? 0 : prefix[mid-1];

		ll minSum = (arr[cur] * (cur-mid+1)) -( prefix[cur]-prev);

		if(minSum <= k) {
			ans = max(ans, cur-mid+1);
			high = mid-1;
		}
		else low = mid+1;
	}

	return ans;
}

// // to lower
// cout << char('A' | (1<<5)) << endl;
// cout << char('D' | ' ') << endl;

// // to upper
// cout << char('b' & '_') << endl;
// cout << char('a' & (~(1<<5))) << endl;

// --------------------------------------------- CODING AREA -------------------------------------------------------------------
unordered_map<int, vector<int>> adj;
int vis[150005];
void dfs(int node, set<int> &st, int &ct) {

	vis[node] = 1;
	st.insert(node);
	for(auto i : adj[node]) {

		if(!vis[i]) {
		ct += adj[i].size();
		dfs(i, st, ct);
		}
	}
}

// ------------------------------------------------segment tree
// tree size will be 4 * n (n = size of array)
int seg[4*100005];
void buildSeg(vi &arr, int index, int low, int high) {
	if(low == high) {
		seg[index] = arr[low];
		return;
	}
	int mid = (low + high) / 2;
	buildSeg(arr, 2*index+1, low, mid);
	buildSeg(arr, 2*index+2, mid+1, high);
	seg[index] = minL(seg[2*index+1], seg[2*index+2]);
}

int querySeg(vi &arr, int index, int low, int high, int l, int r) {
	if(l <= low && high <= r) return seg[index];
	if(low > r || high < l) return INT_MAX;
	int mid = (low + high) / 2;
	int left = querySeg(arr, 2*index+1, low, mid, l, r);
	int right = querySeg(arr, 2*index+2, mid+1, high, l, r);
	return minL(left, right);
}
// ---------------------------------------------- END of segment tree

void jayant() {

	int i, j, k, n, m, sum = 0;
	string s, t;
	unordered_map<int, int> um;

	



}

// ---------------------------------------------- MAIN AREA -----------------------------------------------------------------

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// fast_io;

	// if reads input from file
	// freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

	int t = 1;
    
	// cin >> t;

	while(t--) {
		jayant();
	}
	return 0;
}
