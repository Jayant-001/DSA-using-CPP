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

void fun1(int n)
	{
		cout << "lac";
	}

string abc() {
	return "ahc";
}

vector<int> fun(vector<int> arr, int n) {
	for(int i = 0; i < arr.size(); i++)
		arr[i] = arr[i] + n;
	
	return arr;
}

void solve()
{
	vector<int> arr = {1,2,3,34,5};
	vector<int> ans = fun(arr, 4);
	
	fun1(4);
	
	for(auto i : ans)
		cout << i << " ";
	
	fun1(2);
}
 
int32_t main()
{
    solve();
    return 0;
}