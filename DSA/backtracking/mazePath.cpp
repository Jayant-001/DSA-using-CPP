#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

// sr - source row
// sc - source column
// dr - destination row
// dc - destination column

void solve(int i, int j, int di, int dj, string res, vector<string> &ans) {
    if(i == di && j == dj) {
        ans.push_back(res);
        return;
    }

    // down
    if(i < dj) {
        res.push_back('v');
        solve(i, j+1, di, dj, res, ans);
        res.pop_back();
    }
    // right
    if(i < di) {
        res.push_back('h');
        solve(i+1, j, di, dj, res, ans);
        res.pop_back();
    }
}

vector<string> getMazePaths(int sr, int sc, int dr, int dc) {

    vector<string> ans;
    solve(sr, sc, dr, dc, "", ans);
    // sort(ans.begin(), ans.end());
    return ans;
}

void display(vector<string>& arr){
    cout << "[";
    for(int i = 0;i < arr.size();i++){
        cout << arr[i];
        if(i < arr.size() -1) cout << ", ";
    }
    
    cout << "]"<<endl;
}

int main() {
    int n,m; cin >> n >> m;
    vector<string> ans = getMazePaths(0,0,n-1,m-1);
    display(ans);

    return 0;
}