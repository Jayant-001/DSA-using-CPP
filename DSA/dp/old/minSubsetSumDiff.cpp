// https://www.geeksforgeeks.org/partition-a-set-into-two-subsets-such-that-the-difference-of-subset-sums-is-minimum/
#include <iostream>
#include <vector>
using namespace std;

int getSubsetSum(int arr[], int n) {

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    bool dp[n+1][sum+1];
    for(int i = 0; i < n+1; i++) {
        for(int j = 0; j < sum+1; j++) {

            if(i == 0)
                dp[i][j] = false;
            if(j == 0) 
                dp[i][j] = true;            
        }
    }

    for(int i = 1; i < n+1; i++) {
        for(int j = 1; j < sum+1; j++) {

            if(arr[i-1] > j) 
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];

        }
    }
    
    vector<int> v;
    for(int i = n; i < n+1; i++) {
        for(int j = 0; j < sum+1; j++) {
            
            if(dp[i][j] && j <= sum/2)
                v.push_back(j);
        }
    }
    for(auto i : v)
        cout << i << " ";
    cout << endl;
    return sum-2*v[v.size()-1];
}


int main() {

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << getSubsetSum(arr, n);

    return 0;
}