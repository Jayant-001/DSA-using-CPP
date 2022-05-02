#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int n;
    cin >> n;
    vector<int> arr(n);
    int sum = 0;
    for(int i  = 0; i< n;i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int idx = 0;
    int ans = INT_MAX;
    int begSum = 0;
    for(int i = 0; i < n; i++) {
        int a = begSum + arr[i];
        int b = sum - a;
        int j = (i+1);
        int k = n-i-1;
        // cout << "a: " << a << " i : " << j << endl;
        // cout << "b: " << b << " i : " << k  << endl;
        a = a / j;
        if(b == 0 || k == 0)
            b = 0;
        else
            b = b / k;
        int diff = abs(a-b);
        // cout << "dif: " << diff << endl;
        if(diff < ans)
            idx = i;
        ans = min(ans, diff);
        begSum += arr[i];
    }

    cout << idx;
}




        // correct soln
/*

class Solution {
public:
    int minimumAverageDifference(vector<int>& arr) {
        
        int n = arr.size();
        long sum = 0;
    for(int i  = 0; i< n;i++) {
        sum += arr[i];
    }
        long idx = 0;
    long ans = INT_MAX;
    long begSum = 0;
    for(int i = 0; i < n; i++) {
        long a = begSum + arr[i];
        long b = sum - a;
        long j = (i+1);
        long k = n-i-1;
        // cout << "a: " << a << " i : " << j << endl;
        // cout << "b: " << b << " i : " << k  << endl;
        a = a / j;
        if(b == 0 || k == 0)
            b = 0;
        else
            b = b / k;
        long diff = abs(a-b);
        // cout << "dif: " << diff << endl;
        if(diff < ans)
            idx = i;
        ans = min(ans, diff);
        begSum += arr[i];
    }
        
        return idx;
    }
};


*/

