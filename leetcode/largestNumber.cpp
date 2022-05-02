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

// custom comperator
static bool comp1(string s1, string s2) {
    return (s1+s2) > (s2+s1);

}

void solve()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i = 0; i< n; i++)
		cin >> arr[i];
	
	vector<string> s;
    for(auto i : arr)
        s.push_back(to_string(i));
    
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(!comp1(s[i], s[j]))
                swap(s[i], s[j]);
        }
    }
    
    if(s[0] == "0"){
        cout << "0";
        return;
    }
    
    string ans = "";
    for(int i = 0; i < s.size(); i++) {
        ans += s[i];
    }
    
    cout << ans;
}
 
int32_t main()
{
    solve();
    return 0;
}


/*
// test case
[0,0]
[10,2]
[3,30,34,5,9]
[1,1,1,1,2,2,3,4,4]
[1]
[1,0,2,3,0]
[34323,3432]
*/