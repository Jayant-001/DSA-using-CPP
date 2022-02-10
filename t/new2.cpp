#include<iostream>
#include<vector>
#include<string>
#include <vector>
using namespace std;

// recursion stairs path question pepcoding
void solve(int n, string res, vector<string> &ans) {
    if(n < 0)
        return;
    if(n == 0) {
        ans.push_back(res);
        return;
    }

    for(int i = 1; i <= 3; i++) {
        res += to_string(i);
        solve(n-i, res, ans);
        res.pop_back();
    }
}

vector<string> get_stair_paths(int n){
    //Write your code here

    vector<string> ans;
    solve(n, "", ans);
    return ans;

}

int main(){
    int n;
    cin >> n;
    vector<string> ans = get_stair_paths(n);
    int cnt = 0;

    cout << '[';
    for (string str : ans){
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}