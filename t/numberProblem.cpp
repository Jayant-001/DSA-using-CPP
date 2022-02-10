// #include<bits/stdc++.h>
// using namespace std;

// #define ll             	long long
// #define lli 			long long int
// #define vi              vector<int>
// #define pb              push_back
// #define pii             pair<int,int>
// #define mp              make_pair
// #define mii             map<int,int>
// #define pqb             priority_queue<int>
// #define pqs             priority_queue<int,vi,greater<int> >
// #define setbits(x)      __builtin_popcountll(x)
// #define zrobits(x)      __builtin_ctzll(x)
// #define mod             1e9+7
// #define inf             1e18
// #define ps(x,y)         fixed<<setprecision(y)<<x
// #define mk(arr,n,type)  type *arr=new type[n];
// #define w(x)            int x; cin>>x; while(x--)
// #define debug(x) cout << #x << " " << x << endl;

// lli fact (lli x) {
//     if(x == 1) {
//         return 1;
//     }

//     return ((x % mod) * (fact(x-1) % mod));
// }


// void solve()
// {
// 	lli n, k;
// 	cin >> n >> k;
	
// 	lli f = fact(n);
// 	debug(f);
// 	int mx = 1;
	
// 	for(int i = 2; i <= 10; i++) {
// 		lli p = pow(k, i);
// 		if(f % p == 0) {
// 			debug(f);
// 			debug(p);
// 			mx = max(i, mx);
// 			// cout << i << endl;
// 		}
// 	}
// 	cout << mx << endl;
	
// }
 
// int32_t main()
// {
//     solve();
//     return 0;
// }









#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
    int t;
    cin>>t;
    while(t--)
    {
        unsigned int n,k,c=0,i,f;
        cin>>n>>k;
        for(i=k;i<=n;i++)
        {
            f=i/k;
            if(i%k==0)
            {
                
                while(f%k==0)
                {
                    f=f/k;
                    c+=1;
                }
                c+=1;
            }
        }
        cout<<c<<endl;
        
    }
    return 0;
}



