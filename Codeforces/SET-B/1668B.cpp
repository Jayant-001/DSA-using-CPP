// #include<bits/stdc++.h>
// using namespace std;

// #define ll             	long long
// #define lli				long long int
// #define vi              vector<int>
// #define vs				vector<string>
// #define pb              push_back
// #define pii             pair<int,int>
// #define mp              make_pair
// #define mii             map<int,int>
// #define pqb             priority_queue<int>
// #define pqs             priority_queue<int,vi,greater<int>>
// #define setbits(x)      __builtin_popcountll(x)
// #define zrobits(x)      __builtin_ctzll(x)
// #define mod             1e9+7
// #define inf             1e18
// #define ps(x,y)         fixed<<setprecision(y)<<x
// #define mk(arr,n,type)  type *arr=new type[n];
// #define w(x)            int x; cin>>x; while(x--)
// #define debug(x) cout << #x << " " << x << endl;

// void solve()
// {
	
// 	w(t) {
// 		ll n, m;
// 		cin >> n >> m;
// 		vector<long> v(n);
// 		for(ll i = 0; i < n; i++)
// 			cin >> v[i];
		
// 		sort(v.begin(), v.end());
		
// 		if(m < n){
// 			cout << "NO" << endl;
// 			continue;
// 		}
		
// 		long ct = 0;
		
// 		for(int i = 1; i < n; i++) {
// 			ct += max(v[i], v[i-1]);
// 		}
		
// 		ct += v[n-1] + n;
// 		// cout << ct << ": ";
// 		if(ct <= m)
// 			cout << "YES" << endl;
// 		else
// 			cout << "NO" << endl;
// 	}
// }
 
// int32_t main()
// {
//     solve();
//     return 0;
// }


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
    ll n,m;
    cin>>n>>m;

    vi v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    if(m<n){
        cout << "NO" << endl;
    }
    else{
        sort(v.begin(), v.end());
        ll sum=0;
        for(int i=1;i<n;i++){
            sum=sum+max(v[i],v[i-1]);
        }
        sum += (n + v[n - 1]);

        if(sum>m){
            cout << "NO" << endl;
        }

        else{
cout << "YES" << endl;
        }
    }

   
}
 
int32_t main()
{
    w(t) {
    solve();
    }
    return 0;
}