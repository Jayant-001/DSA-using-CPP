
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

void jayant() {
	int i, j, k, n, m, sum = 0;

	string s;
	// map<int, int> mp;
	// unordered_map<int, int, custom_hash> hash;
	// unordered_map<int, vector<int>> adj;
	// copy(arr.begin(), arr.end(), std::ostream_iterator<int>(std::cout, " "));
	// cout << ((double)clock() / CLOCKS_PER_SEC) << endl;

	vector<int> arr;
	int x; 
	while(cin >> x) {
		arr.push_back(x);
	}

	traverse(arr);
	
}

int32_t main() 
{
  
    int t = 1;

	// cin >> t;

	while(t--) {
		jayant();
	}
	return 0;
}

// 4 2 8 5 1 3 6
// 8




#include <bits/stdc++.h>
using namespace std;

#define len(q) (int)(q.size())
#define pb push_back
#define all(x) x.begin(), x.end()

int helper(string &s) {

	if(len(s) == 0) return 0;

	while(len(s) > 1) {
		int num = 0;
		for(auto i : s) {
			num += (i-'0');
		}
		s = to_string(num);
	}

	return stoi(s);;
}

string hh(string &s, int i) {
	string ans = "";

	while(i < len(s)) {
		ans.pb(s[i]);
		i += 2;
	}

	return ans;
}

int check(string s) {

	int dot = 0, c = 0;
	for(auto i : s) {
		dot += i == '.';
		c += i >= 'a' && i <= 'z';
	}

	if(dot > 1 || c > 0) return false;
	return true;
}

void jayant() {
	int i, j, k, n, m, sum = 0;

	string s;
	// map<int, int> mp;
	// unordered_map<int, int, custom_hash> hash;
	// unordered_map<int, vector<int>> adj;
	// copy(arr.begin(), arr.end(), std::ostream_iterator<int>(std::cout, " "));
	// cout << ((double)clock() / CLOCKS_PER_SEC) << endl;

	string num, name;
	cin >> num >> name;

	if(!check(num)) {
		cout << "Invalid" << endl;
		return;
	}


	bool flag = false;
	
	reverse(all(num));
	while(num[len(num)-1] == '0') num.pop_back();

	if(num[len(num)-1] == '.') {
		num.pop_back();
		flag = true;
	}
	reverse(all(num));

	string nums[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

	int total = len(num);

	i = 0;
	while(num[i] == '0') i++;

	string rest = num.substr(i+1);

	int ee = flag ? total - (len(num) - i - 1) : len(num) - i - 1;

	// debug(ee);

	string expo = flag ? to_string(ee) : to_string(ee);

	// debug(num);  
	// debug(rest);
	// debug(helper(rest));

	int a = num[i]-'0', b = helper(rest), c = helper(expo);;

	string x = nums[a], y = nums[b], z = nums[c];


	// debug(x);
	// debug(y);
	// debug(z);

	// debug("_-------");


	cout << x.substr(0, 3);
	cout << ".";
	cout << y.substr(0, 3);
	cout << "e";
	if(flag) cout << "-";
	else if(ee == 0) cout << "";
	else cout << "+";
	cout << z.substr(0, 3);

	cout << "@";


	string kk = "";
	if(ee&1) {
		kk = hh(name, 0);
	}
	else {
		kk = hh(name, 1);
	}


	
	cout << kk;
	cout << endl;


}

int main() 
{
  
    int t = 1;

	cin >> t;

	while(t--) {
		jayant();
	}
	return 0;
}












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

void jayant() {
// 	int i, j, k, n, m, sum = 0;

	string s;

	vector<int> arr;
	int x; 
	while(cin >> x) {
		arr.push_back(x);
	}

	int w = arr.back();
	arr.pop_back();
	
	sortV(arr);

// 	debug(w);
// 	traverse(arr);

	int i = 0, j = arr.size()-1, ans = 0;
	while(i < j) {
	  int sum =  arr[j];
	  while(i < j && arr[i]+sum < w) {
	    sum += arr[i];
	    i++;
	  }
	    j--;
      ans++;
	}
	
	if(i <= j) ans++;
// 	debug(i);
// 	debug(j);
	
	cout << ans;
	
}

int32_t main() 
{
  
    int t = 1;

	// cin >> t;

	while(t--) {
		jayant();
	}
	return 0;
}

// 4 2 8 5 1 3 6
// 8