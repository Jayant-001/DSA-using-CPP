#include <bits/stdc++.h>
using namespace std;

void solve(string s, int i, string res, int &ct) {

    if(i > s.size())
    return ;

    if(res.size() == 3 && res == "007") {
        ct++;
        return;
    }

    if(res.size() > 3)
        return;
    
    res.push_back(s[i]);
    solve(s, i+1, res, ct);
    res.pop_back();

    solve(s, i+1, res, ct);

}

int main() {

    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        int ct = 0;
        string res;
        solve(s, 0, res, ct);

        cout << ct << endl;
    }

       return 0;
}