#include<bits/stdc++.h>
using namespace std;

#define ll             	long long
#define vi              vector<int>
#define pb              push_back
#define pii             pair<int,int>
#define mp              make_pair
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
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
	
	int r, c;
	cin >> r >> c;
	vector<string> cake(r);
	
	for(int i = 0; i < r; i++)
		cin >> cake[i];
	
	int grid = r * c;
	
	int r1 = 0;
	int c1 = 0;
	// check for row
	bool check = true;
	for(int i = 0; i < r; i++) {
			check = true;
		for(int j = 0; j < c; j++) {
			if(cake[i][j] == 'S') {
				check = false;
				break;
			}
		}
		if(!check) {
			r1++;
		}
	}
	
	// check for column
	check = true;
	for(int i = 0; i < c; i++) {
			check = true;   		 
		for(int j = 0; j < r; j++) {	
			if(cake[j][i] == 'S') {
				check = false;
				break;
			}
		}
		if(!check) 
			c1++;
	}
	// debug(r1);
	// debug(c1);
	int ans = grid - (r1 * c1);
	cout << ans;	
}
 
int32_t main()
{
    solve();
    return 0;
}