#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> v(n);
    int maxNum = INT_MIN;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        maxNum = max(maxNum, v[i]);
    }

    vector<int> temp(maxNum+1);
    cout << maxNum;
    
    for(int i = 0; i < temp.size(); i++) {
        temp[v[i]] = 1;
    }

    for (int i = 1; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
    



    return 0;
}