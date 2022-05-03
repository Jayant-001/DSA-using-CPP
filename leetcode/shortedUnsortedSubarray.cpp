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
	vector<int> nums(n);
	for(int i = 0; i < n ;i++) cin >> nums[i];
	
	int a = n-1;
	stack<int> s;
    for(int i = 0; i < n; i++) {
        if(s.empty() || nums[i] >= nums[s.top()]) 
            s.push(i);
        else if(nums[i] < nums[s.top()]) {
            // cout << "min "  << nums[i]  << endl;
            while(!s.empty() && nums[i] < nums[s.top()]) {
                s.pop();
            }
            if(s.empty()){
            	a = 0;
            	break;
            }
            else {
            	a = min(a, s.top()+1);
            	s.push(i);
            }
        }
    }	
    while(!s.empty())
        s.pop();
    
    int b = 0;
    for(int i = n-1; i >= 0; i--) {
        if(s.empty() || nums[i] <= nums[s.top()]) 
            s.push(i);
        else if(nums[i] > nums[s.top()]) {
            // cout << "min "  << nums[i]  << endl;
            while(!s.empty() && nums[i] > nums[s.top()]) {
                s.pop();
            }
            if(s.empty()){
                cout << "ye " ;
                b = n;
                break;
            }
            else {
                b = max(b, s.top());
                s.push(i);
            }
        }
    }
	
	debug(a);
    debug(b);
}
 
int32_t main()
{
    solve();
    return 0;
}