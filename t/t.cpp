#include<bits/stdc++.h>
using namespace std;

#define ll                 long long
#define lli                long long int
#define vi              vector<int>
#define vs                vector<string>
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
    int n; cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
        
    int start = 1;
    map<int, int> m;
    vector<pair<int, int>> p;
    for(int i = 0;i < n; i++) {
        if(!m[arr[i]]) {
            m[arr[i]] = i+1;
        }
        else 
        {
            p.pb({start, i});
            start = i+1;
            m.clear();
        }

    }
    p.pb({start, n});
    int temp = 0;
    pair<int, int> ans;
    for(auto i : p)
        if((i.second-i.first+1) > temp) 
        {
           temp = i.second - i.first+1;
            ans = i;
        }
    
    int left = ans.first-1;
    int right = n-ans.second;
    int f = min(left, right)*2 + max(left, right);
    
    cout << f << endl;
    // debug(f);
    
    // debug(temp);
    // cout << ans.first << " " << ans.second;
    // // for(auto i : p)
    // //     cout << i.first << " " << i.second << endl;
    
    // cout << endl;
}
 
int32_t main()
{
    w(t) {
        solve();
    }
    return 0;
}