#include <iostream>
using namespace std;


int main() {

    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {

        int max = 0;
        for(int j = i; j < n; j++) {

            max += arr[j];
            cout << max << " ";
        }

    }


    return 0;
}