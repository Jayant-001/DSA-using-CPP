#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "bbbaaaba";
    string s2 = "aaabbbba";

    vector<int> v1(125, 0);
    vector<int> v2(125, 0);

    for(int i = 0; i < s1.size(); i++) {
        int t = (int)s1[i];
        v1[t]++;
    }

    for(int i = 0; i < s2.size(); i++) {
        int t = (int)s2[i];
        v2[t]++;
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    for(int i = 90; i < v1.size(); i++) {
        if(v1[i] != v2[i]) {
            cout << "no" << endl;
            break;
        }
    }


    cout << "yes";

    return 0;
}