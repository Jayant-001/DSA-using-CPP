#include <iostream>
using namespace std;

int getPair(int arr[], int n, int k) {

    int c = 0;
    for(int i = 0; i < n-1; i++) {

        for(int j = i+1; j < n; j++) {

            if(arr[i] + arr[j] == k)
                c++;
        }
    }

    return c;

}

int main() {

    int n, sum;
    cin >> n >> sum;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << getPair(arr, n, sum);

    return 0;
}