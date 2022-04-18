#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define lli       long long int
#define vi              vector<int>
#define vs        vector<string>
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
  w(t) {
      
      ll n;
      cin >> n;
      vector<ll> arr(n);
      for(int i = 0; i < n; i++)
          cin >> arr[i];
      ll sum = 0;
      for(auto i : arr)
        sum += i;
     // ll sum = accumulate(arr.begin() , arr.end(), 0);
     
     ll oneCount = sum/n;
     vector<ll> r(n);
     vector<ll> s(n);
     ll c = 0;
     
     for(ll i = n-1; i >= 0; --i) {
         c = c-r[i];
         
         if(oneCount) {
             c++;
             if(i-oneCount >= 0)
                 ++r[i-oneCount];
         }
         arr[i] -= c;
         if(arr[i] == i && oneCount) {
          s[i] = 1;
          --oneCount;
         }
     }
     
     for(ll i = 0;i < n; i++)
      cout << s[i] << " ";
      
      cout << endl;
  }
}
 
int32_t main()
{
    solve();
    return 0;
}