#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map<int, set<int>> m;
        for(int i= 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            m[b].insert(a);
        }

        vector<int> arr(11);
        
        for(auto i : m){
            // cout << i.first << " : " ;
            int mx = INT_MIN;
            for(auto a : i.second)
                mx = max(mx, a);
            arr[i.first] = mx;
        }
        
        bool c = false;
         for(int i = 1; i < 11; i++) {
            if(arr[i] == 0){
                c = true;
            }
        }
        
        if(!c) 
            {
        int sum = 0;
        for(auto i : arr)
            sum += i;
        cout << sum << endl;
        }
        else {
            cout << "MOREPROBLEMS" << endl;
            
    }
        }

}
