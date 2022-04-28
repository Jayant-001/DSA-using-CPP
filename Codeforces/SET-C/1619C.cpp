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

void solve()
{
	string a, s;
	cin >> a >> s;
	
	string second = "";
	
	int i = a.length()-1;
	int j = s.length()-1;
	
	while(i >= 0 && j >= 0) {
		
		int first = a[i--] - '0';
		int sum = s[j--] - '0';
		
		if(sum < first) {
			int temp = s[j--] - '0';
			sum = (temp * 10) + sum;
		}
		
		if(sum > 18) {
			cout << -1 << endl;
			break;
		}
		second += to_string(sum - first);
		debug(first);
		debug(sum);
	}
	
	for(int i = second.length()-1; i >= 0; i--) {
		if(second[i] == '0')
			second.pop_back();
		else
			break;
	}
	
	reverse(second.begin(), second.end());
	debug(second);
	cout << endl;
}

 
int32_t main()
{
	w(t) {
	    solve();
	}
    return 0;
}