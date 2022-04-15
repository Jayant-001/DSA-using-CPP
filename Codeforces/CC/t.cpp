#include <bits/stdc++.h>
using namespace std;
typedef long long lli;

int main() {

    int t;
    cin >> t;
    while(t--) {
        lli n, k;
        cin >> n >> k;

        int arr[n];
        int ans[n];

        for(int i = 0; i < n; i++) {
            arr[i] = i+1;
        }

        for(int i = 0; i < k; i++){
            int f = 1;
            int s = 2;
            int arrPtr = 1;
            while(arrPtr <= n) {
                if(arrPtr <= n/2) {
                    ans[arrPtr] = arr[f];
                    f += 2;
                }
                else {
                    ans[arrPtr] = arr[s];
                    s += 2;
                }
                arrPtr++;
            }
            if(i != k-1) {
                for(int z = 0 ;z < n; z++)
                arr[z] = ans[z];
            }
        }

        for(int i = 1; i < n; i++) {
            cout << ans[i] << " ";
        }

        cout << endl;

    }



    return 0;
}