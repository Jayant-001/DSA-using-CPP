class Solution {
private:
    bool isSafe(vector<string> board, int row, int col, int n) {
        
        int row1 = row;
        int col1 = col;
        while(row>=0 && col >= 0)
            if(board[row--][col--] == 'Q') return false;
        
        row = row1;
        col = col1;
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
public:
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>> ans;
        vector<string> board1(n);
        string s(n, '.');
        for(int i = 0; i < n; i++)
            board1[i] = s;
        
        nQueen(0, board1, ans, n);
        
        return ans;        
    }
};