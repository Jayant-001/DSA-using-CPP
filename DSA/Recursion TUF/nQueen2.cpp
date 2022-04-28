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

    bool isSafe(vector<string> board, int row, int col, int n) {
        
        int row1 = row;
        int col1 = col;
        // diagonal
        while(row>=0 && col >= 0)
            if(board[row--][col--] == 'Q') return false;
        
        row = row1;
        col = col1;
        // column
        while(col >= 0)
            if(board[row][col--] == 'Q') return false;
        
        row = row1;
        col = col1;
        while(row < n && col >= 0)
            if(board[row++][col--] == 'Q') return false;
        
        return true;
    }
    
    void nQueen(int col, vector<string> board, vector<vector<string>> &ans, int n) {
        if(col == n) {
            ans.push_back(board);
            return ;
        }
        for(int row = 0; row < n; row++) {
            if(isSafe(board, row, col, n))
            {
                board[row][col] = 'Q';
                nQueen(col+1, board, ans, n);
                board[row][col] = '.';
            }
        }
    }

void solve()
{
	
	int n = 4;
	vector<vector<string>> ans;
    vector<string> board(n);
    string s(n, '.');
    for(int i = 0; i < n; i++)
        board[i] = s;
    
    nQueen(0, board, ans, n);
    
    
    for(auto i : ans){
    	for(auto j : i)
    		cout << j << " " ;
    	cout << endl;
    }
    
	// for(auto i : board)
 //        cout << i << " ";
}
 
int32_t main()
{
    solve();
    return 0;
}