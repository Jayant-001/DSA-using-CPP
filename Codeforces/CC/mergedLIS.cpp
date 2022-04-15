#include <bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int>& a)
{
    int n = a.size();
    vector<int> len;
    for(int i = 0; i < n; i++)
    {
        auto lb = upper_bound(len.begin(), len.end(), a[i]);
        if(lb != len.end())
            *lb = min(*lb, a[i]);
        else
            len.push_back(a[i]);
    }
    return len.size();
}

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin>>n>>m;
        vector<int> a(n),b(m);
        for(int i = 0; i < n; i++) 
            cin >> a[i];
        for(int i = 0; i < m; i++)
            cin >> b[i];

        int mx1 = 1;
        int mx2=1;

        mx1 = lengthOfLIS(a);
        mx2 = lengthOfLIS(b);
        
        cout << mx1+mx2 << endl;
    }


    return 0;
}