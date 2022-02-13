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
    int n, m;
    cin >> n;
    cin >> m;
    
    vi arr(n);
    for(int i = 0; i < n; i++)
        arr[i] = i+1;
    
    int i = 0;
    
    while(1) {
        if(m == 0 || m < arr[i])
            break;
        m -= arr[i++];
        i = i%n;   
    }
    
    cout << m;
}

int32_t main()
{
    solve();
    return 0;
}