#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl			"\n"
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
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin >> x; while(x--)
#define debug(x) cout << #x << " " << x << endl;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define N 1000002
#define FOR(i, p) for(int i = 0; i < p; i++)

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

vector<lli> getPre(vector<lli> arr, int n) {
	vector<lli> pre(n, 0);
	for(int i = 0; i < n;i++)
	{
		if(i == 0) pre[i] = arr[i];
		else pre[i] = arr[i] + pre[i-1];
	}
	return pre;
}

vector<lli> getPost(vector<lli> arr, int n) {
	vector<lli> post(n, 0);
	for(int i = n-1; i >= 0; i--) {
		if(i == n-1) post[i] = arr[i];
		else post[i] = arr[i] + post[i+1];
	}
	return post;
}

void solve() {

	bool ans = false;
	int n; cin >> n;
	vector<int> arr(5, 0);
	for(int i = 0; i < n; i++) {
		int k = -1; 
		for(int j = 0; j < 5; j++) {
			cin >> k;
			arr[j] += k;
		}
			if(k == -1) {cout << "YES" << endl; return;}
	}

	int f = -1;
	for(int i = 0; i < 5; i++) {
		if(arr[i] >= n/2) {
			f = i;
			break;
		}
	}

	// for(auto i : arr) cout << i << " ";

// debug(f);
	for(int i = 0; i < 5; i++) {
		if(i != f && arr[i] >= n/2) ans = true;
	}

	cout << (ans ? "YES" : "NO") << endl;;
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