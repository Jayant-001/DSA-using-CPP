// leetcode 96
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
	int n;
	cin >> n;
	vector<int> numTree(n+1, 1);
        
    for(int i = 2; i < n+1; i++) {
        int total = 0;
        for(int j = 1; j < i+1; j++) {
            int left = j-1;
            int right = i-j;
            total += numTree[left] * numTree[right];
        }
        numTree[i] = total;
    }
    cout << numTree[n];
}
 
int32_t main()
{
	// w(t) {
	    solve();
    // }
    return 0;
}