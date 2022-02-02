#include<bits/stdc++.h>
using namespace std;

#define ll             	long long
#define vvi 			vector<vector<int>>
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

bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> arr) {
    if((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && arr[x][y] == 1)
        return true;
    return false;
}

void findPath(vvi arr, int n, int x, int y, string res, vvi &visited, vector<string> &ans) {
	
    if(x == n-1 && y == n-1) {
        ans.push_back(res);
        return;
    }
    
    visited[x][y] = 1;
    
    // total 4 choices - R, L, T, D
    
    // UP , x = x-1, y = y
    int newx = x-1;
    int newy = y;
    if(isSafe(newx, newy, n, visited, arr)) {
        res.push_back('U');
        findPath(arr, n, newx, newy, res, visited, ans);
        res.pop_back();
    }
    
    // Down , x = x+1, y = y
    newx = x+1;
    newy = y;
    if(isSafe(newx, newy, n, visited, arr)) {
        res.push_back('D');
        findPath(arr, n, newx, newy, res, visited, ans);
        res.pop_back();
    }
    
    // Left , x = x, y = y-1
    newx = x;
    newy = y-1;
    if(isSafe(newx, newy, n, visited, arr)) {
        res.push_back('L');
        findPath(arr, n, newx, newy, res, visited, ans);
        res.pop_back();
    }
    
    // Right , x = x, y = y+1
    newx = x;
    newy = y+1;
    if(isSafe(newx, newy, n, visited, arr)) {
        res.push_back('R');
        findPath(arr, n, newx, newy, res, visited, ans);
        res.pop_back();
    }
    
    visited[x][y] = 0;
}

void solve()
{
	int n = 4;
	vvi arr = {
		{1, 0, 0, 0},
        {1, 1, 0, 1}, 
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };
    
    // visited array to save our visited path
    vvi visited = arr;
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < n; j++)
            visited[i][j] = 0;
    
    vector<string> ans;
    findPath(arr, n, 0, 0, "", visited, ans);
    
    for(auto s : ans)
    	cout << s << " ";
	
}
 
int32_t main()
{
    solve();
    return 0;
}