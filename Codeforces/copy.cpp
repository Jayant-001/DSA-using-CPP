#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl			"\n"
#define ll             	long long
#define lli				long long int
#define vi              vector<int>
#define vll 			vector<long long>
#define vs				vector<string>
#define pb              push_back
#define pii             pair<int,int>
#define mp              make_pair
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int>>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin >> x; while(x--)
#define debug(x) cout << #x << " " << x << endl;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define N 1000002
#define FOR(i, p) for(int i = 0; i < p; i++)
#define traverse(arr) for(auto i : arr) cout << i << " "; cout << endl;
#define sortV(arr) sort(arr.begin(), arr.end())

// this function converts something to something -> I don't even know
string convert(string s, string t) {
	int hr = stoi(s.substr(0, 2));
	int mm = stoi(s.substr(3));
	int k = stoi(t);
	int ihr = k / 60;
	int imm = k % 60;

	hr = (hr+ihr) % 24;
	mm = (mm + imm) % 60;
	// debug(hr);
	// debug(mm);

	string ans = to_string(hr) + to_string(mm);
	// debug(ans);
	return ans;
}

bool checkPalindrome(string str, int i) {

    int i2 = (str.length()-i-1);

    if(i >= (str.length() / 2)) {
        return true;
    }

    if(str[i] != str[i2]) {
        return false;
    }

    return checkPalindrome(str, ++i);

}

vector<ll> getPre(vector<ll> arr, int n) {
	vll pre(n, 0);
	for(int i = 0; i < n;i++)
	{
		if(i == 0) pre[i] = arr[i];
		else pre[i] = arr[i] + pre[i-1];
	}
	return pre;
}

vector<ll> getPost(vector<ll> arr, int n) {
	vll post(n, 0);
	for(int i = n-1; i >= 0; i--) {
		if(i == n-1) post[i] = arr[i];
		else post[i] = arr[i] + post[i+1];
	}
	return post;
}

void solve1() {
	int n; cin >> n;
	vi arr(n);
	for(int i = 0; i < n; i++) 
		cin >> arr[i];

	int cost = 0;
	int i = 1;
	while(i < n-1) {
		int a = max(0, max(arr[i+1]+1 - arr[i], arr[i-1]+1-arr[i]));
		cout << "odd "; debug(a);
		cost += a;
		i += 2;
	}
	// debug(cost);
	if(n %2 == 0) {
		i = 2; 
		int temp = 0;
		while(i < n-1) {
			int a = max(0, max(arr[i+1]+1 - arr[i], arr[i-1]+1-arr[i]));
			// cout << "odd "; debug(a);
			temp += a;
			i += 2;
		}
		cost = min(cost, temp);
	// debug(temp);
	}
	cout << cost << endl;
}

int getCost(vector<int> &arr, int i) {
	return max(0, max(arr[i-1], arr[i+1]) - arr[i]+1);
}

void solve() {

	int n; cin >> n;
	vi arr(n);
	for(int i = 0; i < n; i++) cin >> arr[i];

	map<int, int> m;
	for(auto i : arr)
		m[i]++;

	int mx = 0;
	for(auto i: m)
		mx = max(mx, i.second);


	if(n % 2 == 0) {
		if(mx > (n/2)) 
			cout << "NO" << endl;
		else 
			cout << "YES" << endl;
	}
	else {
		if(mx > (n/2)+1)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}

}

int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	w(t) {
	    solve();
    }
    return 0;
}

