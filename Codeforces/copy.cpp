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

string start(string s) {
	int n = s.length();
	string k = "";
	for(auto i : s)
		k.push_back('1');
	for(int i = 0; i < n; i++) {
		if(s[i] == '0')
			k[i] = '0';
		else
			break;
	}
	return k;
}

string end(string s) {
	int n = s.length();
	string k = "";
	for(auto i : s)
		k.push_back('1');
	for(int i = n-1; i >= 0; i--) {
		if(s[i] == '0')
			k[i] = '0';
		else
			break;
	}
	return k;
}

int search(vector<lli> arr, lli k) {
	if(k <= arr[arr.size()-1])
		return arr.size()-1;
	int l = 0;
	int r = arr.size()-1;
	while(l <= r) {
		int mid = (l+r) / 2;
		// cout << arr[mid] << endl;
		if(k == arr[mid])
			return mid;
		if(k < arr[mid] && k > arr[mid+1])
			return mid;
		// else if(arr[mid] < k && arr[mid+1] < k)
			// return mid+1;
		else if(arr[mid] > k) {
			l = mid+1;
		}
		else 
			r = mid-1;
	}
	return -1;
}

int get(int n) {
	int ans = 0;
	for(int k = n; k >= 1; k--) {
		if((k & (k-1)) == 0)
			return k;
	}
	return ans;
}

void solve1() {

	long n; cin >>n ;
	vector<long> arr(n+1);
	for(int i= 0; i <= n ;i++) 
		cin >> arr[i];

	vector<long> ans(3, 0);
	// debug(get(n));
	for(int i = get(n); i > 0; i/=2) {
		long d = arr[i]-arr[0];
		if(d < 0) {
			d *= -1;
			int count = d/i;
			if(count == 1){
				count = 2;
				if((ans[0]^i) <= n) {
					ans[0] = ans[0] ^ i;
					count--;
				}
				if(count && (ans[1]^1) <= n) {
					ans[1] = ans[1]^i;
					count--;
				}
				if(count > 0 && (ans[2] ^ i) <= n) {
					ans[2] = ans[2] ^ i;
				}
			}
			else if(count == 3) {
				ans[0] = ans[0] ^ i;
				ans[1] = ans[1] ^ i;
				ans[2] = ans[2] ^ i;
			}
		}
		else {
			int count = d/i;
			if(count == 1) {
				if(ans[0]^i <= n) ans[0] = ans[0] ^ i;
				else if ((ans[1]^i) <= n) {
					ans[1] = ans[1] ^ i;
				}
				else {
					ans[2] = ans[2] ^ i;
				}
			}
		}

		sort(ans.begin(), ans.end());
	}

	cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
	
	
}

void solve2() 
{
	int t;
	cin >> t;
	while(t--) {
		int n; cin >> n;
		vector<int> arr(n);
		for(int i= 0; i < n ;i++) 
			cin >> arr[i];
		int one = 0, two = 0;
		int three = 0, four = 0;
		int k = 0;
		for(int i = 0; i < n; i++) {
			if(arr[i] == 1) three++;
			else {
				if(arr[i] == 2)
					two++;
				four += arr[i];
				k++;
				if(arr[i]%2 != 0) {
					one++;
				}
			}
		}
		if(three == 1) {
			if(one %2 != 0) {
				cout << "CHEF"<< endl;
				continue;
			}
			else if(two == 0) {
				cout << "CHEFINA"<< endl;
				continue;
			}
			four -= 2;
			k--;
			if((four-k) %2 != 0) {
			cout << "CHEFINA"<< endl;
				continue;
			}
			else {
				cout <<  "CHEF"<< endl;
			}
		}
		else if(three> 1) {
			if((four-k)%2 != 0) {
				cout << "CHEF"<< endl;
				 continue;
			}
			else {
				cout << "CHEFINA" << endl;
				continue;
			}
		}
		if(one%2 != 0) {
			cout << "CHEF"<< endl;
			continue;
		}
		else {
			cout << "CHEFINA"<< endl;
			continue;
		}

	}

}

int dp[102][N];
int getCombi(vi coins, int sum, int n) {
	if(sum == 0) return 1;
	if(n < 0) return 0;
	// if(dp[n][sum] != -1) return dp[n][sum];

	if(n <= 0 && sum >= 1) return 0;
	return getCombi(coins, sum-coins[n-1], n)
		+ getCombi(coins, sum, n-1);
}

void solve() {
	int n, sum; 
	cin >> n >> sum;
	vi coins(n);
	for(int i = 0; i < n; i++)
		cin >> coins[i];

	// memset(dp, -1, sizeof(dp));

	cout << getCombi(coins, sum, n);

	// for(int i = 0; i < 10; i++) {
	// 	for(int j = 0; j < 10 ;j++) 
	// 		cout << dp[i][j] << " ";
	// 	cout << endl;
	// }


	// vector<int> dp(n+1, 0);
	// dp[0] = 0;
	// dp[1] = 1;

	// for(int i = 2; i < n+1; i++) {
	// 	dp[i] = dp[i-1] + dp[i-2];
	// }

	// cout << dp[n];

}

int32_t main()
{

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	// w(t) {
	    solve();
    // }
    return 0;
}