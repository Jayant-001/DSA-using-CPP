#include <bits/stdc++.h>
using namespace std;

int main() {
  
    int t;
    cin >> t;
    while(t--) {

        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 0; i < m; i++)
            cin >> b[i];

        vector<int> ans;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
 
        int i = 0;
        int j = 0;
        int carry = 0;
        while(i < n && j < m) {
            int sum = a[i] + b[j] + carry;
            ans.push_back(sum % 10);
            carry = sum / 10;
            i++;
            j++;
        }
        while(i < n) {
            int sum = a[i] + carry;
            ans.push_back(sum % 10);
            carry = sum / 10;
            i++;
        }
        while(j < m) {
            int sum = b[j] + carry;
            ans.push_back(sum % 10);
            carry = sum / 10;
            j++;
        }
        if(carry != 0)
            ans.push_back(carry);
        // cout << carry;
        reverse(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;

    }


    return 0;
}  