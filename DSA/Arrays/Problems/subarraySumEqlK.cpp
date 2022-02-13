#include <bits/stdc++.h>
using namespace std;

int findSum(vector<int> arr, int k) {
    int sum = arr[0];
    int ct = 0;
    if(sum == k)
        ct++;

    for(int i = 1; i < arr.size(); i++) {
        sum += arr[i];
        if(sum == k)
            ct++;
        // if(sum > k)
        //     break;
    }
    return ct;
}

int main() {

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int ct = 0;

    for(int i = 0; i < n; i++) {
        int t = findSum(arr, k);
        if(t > 0) ct+=t;
        arr.erase(arr.begin()+0);
    }

    cout << arr.size() << endl;
cout << ct;
    return 0;
}