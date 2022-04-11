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
	
  w(t){
    int n;
    cin >> n;
    int mx=0;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
    	int x;
    	cin >> x;
      v[i] = x;
      mx=max(mx,x);
    }
    
    ll res=1e18;
    for(int i =mx; i <= mx+3;i++){
      ll two=0, one=0;
      for(auto &x:v){
        two += (i-x)/2;
        one += (i-x)%2;
      }
      
      ll all=one+two*2;
      ll days=all/3*2;
      
      if(all%3==1)
        ++days;
      
      if(all%3==2)
        days+=2;
      ll num = max(one*2-1, days);
      res = min(res, num);
    }
    cout << res << endl;
}}
 
int32_t main()
{
    solve();
    return 0;
}