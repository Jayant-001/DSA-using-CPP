#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        double s1 = 0;
        double s2 = arr[n-1];
        for(int i = 0; i < n-1; i++)    
            s1 += arr[i];
        
        s1 /= n-1;
        double sum = s1 + s2;
        cout << fixed << setprecision(6) << sum << "\n";
        // cout << sum << endl;
        // double a = 100;
        // double b = 3;
        // double d = a/b;
        // cout << d << endl;
        // cout << "The answer is: " << fixed << setprecision(6) << d << "\n";
    }
  
    return 0;
}