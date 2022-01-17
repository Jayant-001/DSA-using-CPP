// https://www.geeksforgeeks.org/minimum-length-subarray-sum-greater-given-value/
#include <bits/stdc++.h>
using namespace std;

int main() {
  
    int n, sum;
    cin >> n >> sum;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int curSum = 0;
    int minLen = INT_MAX;
    int count = 0;
    int j = 0;
    for(int i = 0; i < n; i++) {

        curSum += arr[i];
        count++;
        while(curSum > sum) {
            minLen = min(count, minLen);
            curSum -= arr[j++];
            count--;
        }
    }
    if(minLen == INT_MAX)
        cout << "Not Possible";
    else
        cout << minLen;

    return 0;
}