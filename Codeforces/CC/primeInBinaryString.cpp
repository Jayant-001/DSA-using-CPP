// https://www.codechef.com/JAN221B/problems/PINBS
#include <bits/stdc++.h>
using namespace std;

int getBinary(int n);
void primeInRange(int L, int R, vector<string>& ans);

void primeInRange(int L, int R, vector<string>& ans)
{
    int flag;

    for (int i = L; i <= R; i++) {

        if (i == 1 || i == 0)
            continue;
        flag = 1;

        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            ans.push_back(to_string(getBinary(i)));
    }
}

int getBinary(int n) {

    int res = 0;
    vector<int> v;
    while(n) {
        int t = n%2;
        v.push_back(t);
        n /= 2;
    }
    reverse(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++) {
        res = (res*10) + v[i];
    }

    return res;
}

string findSubstringBinary(string s, vector<string> ans) {
    for(int i = 0; i < ans.size(); i++) {
        if(s.find(ans[i]) != string::npos) {
            // cout << ans[i] << "-" << "found" << endl;
            return "Yes";
        }
    }
    return "No";
}

int main() {

    int t;
    cin >> t;

    while(t--) {
            
        string s;
        cin >> s;

        int n = stoi(s, nullptr, 2);
        n = 1000;

        vector<string> ans;
        primeInRange(0, n, ans);
        // cout << findSubstringBinary(s, ans) << endl;
        for(int i = 0; i < ans.size(); i++)
            cout << ans[i] << endl;
    }


    // for(int i = 0; i < ans.size(); i++) {
    //     if(s.find(ans[i]) != string::npos) {
    //         cout << ans[i] << "-" << "found" << endl;
    //     }
    // }

    // cout << endl << "not found";

    // cout << getBinary(n);

    // string s1 = "jaysdant";
    // string s2 = "j";

    // if(s1.find(s2) != string::npos)
    //     cout << "found";
    // else
    //     cout << "Not found";


    // int i = std::stoi("101101", nullptr, 2);
    // cout << i;

    return 0;
}