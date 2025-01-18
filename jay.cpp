// inevitable 


/*


    $$$$$$$$       $$$      $$     $$       $$$       $$     $$     $$$$$$$$   
       $$        $$   $$     $$   $$      $$   $$     $$$$   $$        $$
       $$        $$   $$      $$ $$       $$   $$     $$ $$  $$        $$
   $$  $$        $$$$$$$        $$        $$$$$$$     $$  $$ $$        $$
   $$  $$        $$   $$       $$         $$   $$     $$   $$$$        $$
   $$$$$$        $$   $$      $$          $$   $$     $$     $$        $$


*/

/*

─▄▀▀▀▀▄─█──█────▄▀▀█─▄▀▀▀▀▄─█▀▀▄
─█────█─█──█────█────█────█─█──█
─█────█─█▀▀█────█─▄▄─█────█─█──█
─▀▄▄▄▄▀─█──█────▀▄▄█─▀▄▄▄▄▀─█▄▄▀

─────────▄██████▀▀▀▀▀▀▄
─────▄█████████▄───────▀▀▄▄
──▄█████████████───────────▀▀▄
▄██████████████─▄▀───▀▄─▀▄▄▄──▀▄
███████████████──▄▀─▀▄▄▄▄▄▄────█
█████████████████▀█──▄█▄▄▄──────█
███████████──█▀█──▀▄─█─█─█───────█
████████████████───▀█─▀██▄▄──────█
█████████████████──▄─▀█▄─────▄───█
█████████████████▀███▀▀─▀▄────█──█
████████████████──────────█──▄▀──█
████████████████▄▀▀▀▀▀▀▄──█──────█
████████████████▀▀▀▀▀▀▀▄──█──────█
▀████████████████▀▀▀▀▀▀──────────█
──███████████████▀▀─────█──────▄▀
──▀█████████████────────█────▄▀
────▀████████████▄───▄▄█▀─▄█▀
──────▀████████████▀▀▀──▄███
──────████████████████████─█
─────████████████████████──█
────████████████████████───█
────██████████████████─────█
────██████████████████─────█
────██████████████████─────█
────██████████████████─────█
────██████████████████▄▄▄▄▄█

─────────────█─────█─█──█─█───█
─────────────█─────█─█──█─▀█─█▀
─────────────█─▄█▄─█─█▀▀█──▀█▀
─────────────██▀─▀██─█──█───█

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
#define lli long long int
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define pii pair<int, int>
#define vpii vector<pair<int, int>> 
#define mp make_pair
#define mii map<int, int>
#define umii unordered_map<int, int>
#define maxHeap priority_queue<int>
#define minHeap priority_queue<int, vector<int>, greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
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
#define fr(a,b) for(auto i=a;i<b;++i)
#define frj(a,b) for(auto j=a;j<b;++j)
#define len(q) (int)(q.size())
#define traverse(arr)     \
	for (auto i : arr)    \
		cout << i << " "; \
	cout << "\n";
#define sortV(arr) sort(arr.begin(), arr.end())
// const int mod = 1e9+7;
#define max(p,q)((p)>(q)?(p):(q)) 
#define min(p,q)((p)<(q)?(p):(q)) 
#define INF (( 1LL << 62 )-( 1LL << 31 )) /*Without overflow a large number*/ 
#define MOD 1000000007
#define SUM(x) accumulate(x.begin(), x.end(), 0LL)
#define debugMp(mp) for(auto i : mp) {cout << i.first << " -> "; for(auto val : i.second) cout << val << " "; cout << endl;} 
#define fill(arr, n) 		\
	fr(0, n) {				\
		int x; cin >> x; 	\
		arr.pb(x); 			\
	}
#define fillM(arr, n, m) 		\
	fr(0, n) {					\
		vi temp;				\
		frj(0, m) {				\
			int x; cin >> x;	\
			temp.pb(x);			\
		}						\
		arr.pb(temp);			\
	}
// Traverse 2D matrix
#define debugM(arr) 					\
	fr(0, arr.size()) {					\
		frj(0, arr[0].size()) 			\
			cout << arr[i][j] << " ";	\
		cout << endl;					\
	}


 
// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================
 



// // --------------------------------------------------------------ordered_set headers
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

// // #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// // eg: ordered_set st;

// // oset<int> s: s.find_by_order(k): Kth element in 's', s.order_of_key(k): number of items strictly less than k
// template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
// // eg: oset<int> st;
// // --------------------------------------------------------------END of ordered_set headers

// --------------------------------------------- SIEVE
pair<vi, vi> sieve(int n)
{
	vector<int> vis(n+1, true);
    for (int p = 2; p * p <= n; p++)
    {
 
        if (vis[p] == true)
        {
 
            for (int i = p * p; i <= n; i += p)
                vis[i] = false;
        }
    }
	vector<int> prime;
    for (int p = 2; p <= n; p++)
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

int lcm(int a, int b) {
	return a*b / gcd(a, b);
}

// ------------------------------- custom hash
struct custom_hash
{
    static uint64_t splitmix64(uint64_t x)
    {
      
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const
    {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

int checkPalindrome(string &s, int l, int r) {
	while(l < r) {
		if(s[l++] != s[r--]) return false;
	}
	return true;
}

vi getPrefix(vi &arr)
{
	int n = arr.size();
	vi pre(n, 0);
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
			pre[i] = arr[i];
		else
			pre[i] = arr[i] + pre[i - 1];
	}
	return pre;
}

vi getPostfix(vi &arr)
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
string intToBinary(int n) {
	string binary = "";
	for(int i = 62; i >= 0; i--) {
		bool bit = n & (1LL<<i);
		binary.pb(bit+'0');
	}
	return binary;
}

int binaryToInt(string &s) {
	int ans = 0;

	reverse(all(s));

	while(s.size() && s[len(s)-1] == '0') s.pop_back();

	int i = 0;
	while(i < len(s)) {
		if(s[i] == '1') {
			ans += pow(2, i);
		}
		i++;
	}

	return ans;
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
	seg[index] = min(seg[2*index+1], seg[2*index+2]);
}

int querySeg(vi &arr, int index, int low, int high, int l, int r) {
	if(l <= low && high <= r) return seg[index];
	if(low > r || high < l) return INT_MAX;
	int mid = (low + high) / 2;
	int left = querySeg(arr, 2*index+1, low, mid, l, r);
	int right = querySeg(arr, 2*index+2, mid+1, high, l, r);
	return min(left, right);
}
// ---------------------------------------------- END of segment tree

// --------------------------------------------- CODING AREA -------------------------------------------------------------------
void pattern() {
	int n; 
	cin >> n;
	int cur = n/2;
	for(int i = 0; i < n/2+1; i++) {
		for(int j = 0; j < n; j++) {
			
			if((i == 0 || i == n-1)) {
				if(j == n/2) cout << "*";
				else cout << " ";
			}
			else if(j != n/2 && (j == ((n/2)-i)) || j == ((n/2)+i)) cout << "*";
			// else if(i > n/2 &&  ( (j == n-(i+1)) || j == n-(i-1) ) ) cout << "*";
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	for(int i = n/2; i >= 0; i--) {
		for(int j = 0; j < n; j++) {
			
			if((i == 0 || i == n-1)) {
				if(j == n/2) cout << "*";
				else cout << " ";
			}
			else if(j != n/2 && (j == ((n/2)-i)) || j == ((n/2)+i)) cout << "*";
			// else if(i > n/2 &&  ( (j == n-(i+1)) || j == n-(i-1) ) ) cout << "*";
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}


// Returns factorial of n
int fact(int n)
{
     if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}


// count vertices in DFS
void DFS(int start, vector<int> v[],vector<int> &visited, int &count)
{
  visited[start] = 1;
  count++;
  for(auto neg : v[start]) {
  	if(visited[neg] == 0)
  		DFS(neg, v, visited, count);
  }
}


long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}


/*
// The Diplomat, the fall of the house of usher, daily dose of sunshine, blue eye samurai
	
	SPIDER-MAN: ACROSS THE SPIDER-VERSE
	-- 
	Mindhunter, jamtara, ocean 11, 12, 13, 
	Movies - The pale blue eye, seven
	series - 1899, kaleidoscope
	andhadhun
	Murder in mahim
	castle
	Mentalist
	True detecative s1
	dark
	Narcos
	Lupin, Suzha - The vortex, Parking, Spycraft, Manifest (flight 828)
	Under the bridge
	sherlock, eric, hannibal
	The gentlemen, 
*/

// Mr. Robot, The Matrix, Source Code, Blackhat, Silicon Valley, The Internship

void jayant() {
	int i, j, k, n, m, sum = 0;

	string s;
	// map<int, int> mp;
	// unordered_map<int, int, custom_hash> hash;
	// unordered_map<int, vector<int>> adj;
	// copy(arr.begin(), arr.end(), std::ostream_iterator<int>(std::cout, " "));
	// cout << ((double)clock() / CLOCKS_PER_SEC) << endl;

	cin >> n >> k;
	vi arr(n);
	cin >> arr;

	sortV(arr);

	vpii brr(n);

	for(int i = 0; i < n; i++) {
		int p = (arr[n-1]-arr[i]) / (2*k);
		// p += (arr[n-1]-arr[i]) % k > 0;
		brr[i].first = (max(p, p-1) * (2*k)) + arr[i];
		brr[i].second = brr[i].first + k;
		while(brr[i].second <= arr[n-1]) {
			brr[i].first += 2*k;
			brr[i].second += 2*k;
		}
	}

	int maxi = 0;
	for(auto i: brr) maxi = max(maxi, i.first);

	// sortV(brr);

	for(int i = 0; i < n; i++) {
		if(brr[i].second <= maxi) {
			cout << -1 << endl;
			return;
		}
	}

	int ans = 0;
	for(auto i : brr) {

		ans = max(ans, i.first);
		// cout << i.first << " " << i.second << endl;
	}

	cout << ans << endl;


}


// ---------------------------------------------- MAIN AREA -----------------------------------------------------------------

int32_t main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	// fast_io;

	// if reads input from file
	// freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

	int t = 1;

	cin >> t;

	while(t--) {
		jayant();
	}
	return 0;
}
