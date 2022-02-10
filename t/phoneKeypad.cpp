#include<iostream>
#include<string>
#include<vector>
using namespace std;

void solve(string s, string res, int idx, vector<string> &ans, vector<string> keys) {
    if(idx >= s.length()) {
        ans.push_back(res);
        return;
    }

    int n = s[idx] - '0';
    string key = keys[n];
    for(int i = 0; i < key.length(); i++) {
        res.push_back(key[i]);
        solve(s, res, idx+1, ans, keys);
        res.pop_back();
    }
}

vector<string> getKPC(string s){
    //Write your code here
    vector<string> keys = {".;", "abc", "def", "ghi", "jkl", "mno",
                            "pqrs", "tu", "vwx", "yz" };

    vector<string> ans;
    solve(s, "", 0, ans, keys);
    return ans;    
}

int main(){
    string s;
    cin >> s;
    vector<string> ans = getKPC(s);
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