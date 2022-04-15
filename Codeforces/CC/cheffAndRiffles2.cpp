#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];
        int ans[n];

        for(int i = 0; i < n; i++) {
            arr[i] = i+1;
            ans[i] = 0;
        }

        if(n>2)
            k = k%(n-2);
        
        ll ct = 0;
        for(int z = 0; z < k; z++){
            int x = 0;
            for(int i = 0; i < n; i+=2){
                ans[x++] = arr[i];
            }

            for(int i = 1; i < n; i+=2)
                ans[x++] = arr[i];

            for(int i = 0 ;i < n; i++) {
                arr[i] = ans[i];
            }
            ct++;
        }

        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;

    }

    return 0;
}