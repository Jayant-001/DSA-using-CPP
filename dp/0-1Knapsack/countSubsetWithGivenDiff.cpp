#include <iostream>
#include <vector>
using namespace std;

int getCount(int arr[], int n, int diff) {

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int s1 = (diff + sum) / 2;
    
    int dp[n+1][s1+1];
    for(int i = 0; i < n+1; i++) {
        for(int j = 0; j < s1+1; j++) {

            if(i == 0)
                dp[i][j] = false;
            if(j == 0)
                dp[i][j] = true;
        }
    }

    for(int i = 1; i < n+1; i++) {
        for(int j = 1; j < s1+1; j++) {

            if(arr[i-1] > j)
                dp[i][j] = dp[i-1][j];
            else 
                dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]];

        }
    }

    for(int i = 0; i < n+1; i++){
        for(int j = 0; j < s1+1; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    
    return dp[n][s1];
}

int main() {

    int n, diff;
    cin >> n >> diff;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    

    cout << getCount(arr, n, diff);

    return 0;
}