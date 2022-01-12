#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int temp;
        int c=1;
        int rem;
        int arr[n];
        int ans[n];
        for(int p = 0; p < n; p++)
            arr[p] = p+1;

        rem = log10(n) / log10(2);
        k = k % rem;
        int h = pow(2,k);
        ans[0] = arr[0];
        ans[n-1] = arr[n-1];

        while(c<n-1) {
            temp = h%(n-1); 
            ans[c] = arr[temp];
            h = h+pow(2,k);
            c++;
        }
        for(int k=0;k<n;k++) {
            cout<<ans[k]<<" ";
        }
        cout << endl;
    }
}