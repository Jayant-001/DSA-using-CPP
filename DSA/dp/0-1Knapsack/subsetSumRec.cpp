// https://www.geeksforgeeks.org/subset-sum-problem-dp-25/
#include <iostream>
using namespace std;

bool isSum(int arr[], int n, int sum) {

    if(sum == 0) {
        return true;
    }

    if(n == 0) {
        return false;
    }

    if(arr[n-1] <= sum) {
        return isSum(arr, n-1, sum - arr[n-1]) || isSum(arr, n-1, sum);
    }
    else {
        return isSum(arr, n-1, sum);
    }

}

int main() {

    int n, sum;
    cin >> n >> sum;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << isSum(arr, n, sum);

    return 0;
}