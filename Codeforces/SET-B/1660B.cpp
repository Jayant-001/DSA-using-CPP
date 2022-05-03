#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {

        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n;i++)
            cin >> arr[i];

        bool c = true;
        if(n == 1 && arr[0] > 1)
            c = false;

        // int firstMax = 0;
        // for(int i = 0; i < n; i++) {
        //     if(arr[i] > arr[firstMax]) 
        //         firstMax = i;
        // }

        // int secondMax = 0;
        // for(int i= 0; i < n; i++) {
        //     if(arr[i] > arr[secondMax] && i != firstMax)
        //         secondMax = i;
        // }
        
        int mx = INT_MIN, smax = INT_MIN;
        for(auto i : arr) {
            if(i >= mx) {
                smax = mx;
                mx = i;
            }else if(i > smax) {
                smax = i;
            }
        }

        // cout << arr[firstMax] << " " << arr[secondMax] << endl;

        // if(arr[firstMax]-arr[secondMax] > 1)
        // c = false;
        
        if(mx - smax > 1)
            c = false;

        if(c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}