#include <bits/stdc++.h>
using namespace std;

int main() {
  
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int a, b;
    cin >> a >> b;

    int idx = 0;
    for(int i = idx+1; i < n; i++) {
        if(arr[i] <= a) {
            int t = arr[i];
            arr[i] = arr[idx];
            arr[idx] = t;
            idx++;
        }
    }


    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}