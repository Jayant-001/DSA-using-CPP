#include <iostream>
#include <vector>
#include <bits/stdc++.h>
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
#define endl "\n"
#define M 1000000007

// int search(vector<lli> arr, lli k) {
// 	if(k <= arr[arr.size()-1])
// 		return arr.size()-1;
// 	int l = 0;
// 	int r = arr.size()-1;
// 	while(l <= r) {
// 		int mid = (l+r) / 2;
// 		// cout << arr[mid] << endl;
// 		if(k == arr[mid])
// 			return mid;
// 		if(k < arr[mid] && k > arr[mid+1])
// 			return mid;
// 		// else if(arr[mid] < k && arr[mid+1] < k)
// 			// return mid+1;
// 		else if(arr[mid] > k) {
// 			l = mid+1;
// 		}
// 		else 
// 			r = mid-1;
// 	}
// 	return -1;
// }




void solve() {

	int n, c, q;
	cin >> n >> c >> q;
	string s;
	cin >> s;
	for(int i = 0; i < c; i++) {
		int a, b;
		cin >> a >> b;
		s += s.substr(a-1, b-a+1);
	}

	for(int i = 0; i < q; i++) {
		int k; cin >> k;
		cout << s[k-1] << endl;
	}

	// cout << s << endl;

	// cout << (f ? "YES" : "NO") << endl;
}

// int32_t main()
// {
// 	w(t) {
// 	    solve();
//     }
//     return 0;
// }
#include<bits/stdc++.h>
#define endl "\n"
#define M 1000000007
 
using namespace std;
 
int power(int a, int b);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    w(t) {
	    solve();
    }
 
}

int power(int x,int n){
    // write your code here
    if (n == 0)
    	return 1;
    if(n == 1)
        return x;
    
  	int pow = power(x, n/2);
  	int ans = pow * pow;
  	
  	if(n % 2 == 1)
  		ans *= x;
  	return ans;
}