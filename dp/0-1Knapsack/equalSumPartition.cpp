// https://www.geeksforgeeks.org/partition-problem-dp-18/
#include <iostream>
using namespace std;

bool isEqualSubset(int arr[], int n) {

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }    

    if(sum % 2 != 0) {
        return false;
    }

    sum /= 2;
    bool dp[n+1][sum+1];
    for(int i = 0; i < n+1; i++){
        for(int j = 0; j < sum+1; j++) {
            if(i == 0) {
                dp[i][j] = false;
            }
            if(j == 0) {
                dp[i][j] = true;
            }
        }
    }

    for(int i = 1; i < n+1; i++) {
        for(int j = 1; j < sum+1; j++) {

            if(arr[i-1] > sum) {
                dp[i][j] = dp[i-1][j];
            }
            else {
                dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
            }
        }
    }


    return dp[n][sum];
}

int main() {

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << isEqualSubset(arr, n);

    return 0;

}