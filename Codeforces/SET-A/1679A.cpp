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
	lli n;
	cin >> n;
	if(n%2 || n<4){
        cout<<"-1"<<endl;
        return;
    }
    
    if(n%4==0 && n%6==0){
        cout<<n/6<<" "<<n/4<<endl;
    }
    else 
    	cout<<(ll int)ceil(n/6.0)<<" "<<(ll int)ceil(n/4.0)<<endl;
}
 
int32_t main()
{
	w(t) {
	    solve();
    }
    return 0;
}