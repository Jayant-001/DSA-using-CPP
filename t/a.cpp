#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<pair<int, int>> v;
    int n;
    cin >> n;
    bool h = true;
    while(n--) {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }

    sort(v.begin(), v.end());

    // for(auto it : v)
    //     cout << it.first << " " << it.second << endl;
    //     cout << v[0].second;

    for(int i = 0; i < v.size()-1; i++) {
        if(v[i].second > v[i+1].second)
            h = false;
    }

    if(h == false)
        cout << "Happy Alex";
    else
        cout << "Poor Alex";


    return 0;
}