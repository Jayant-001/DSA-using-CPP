#include <iostream>
using namespace std;

// second method
void rotate(int arr[], int n, int d) {
    
    if(d == 0) {
        return;
    }
    int temp = arr[0];
    for (int i = 0; i < n; i++) {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
    for(int i = 0; i < n; i++) {
        cout << arr[i];
    }
    rotate(arr, n, d--);

    }


int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;
    int d = 3;

//  <<<<-----    using 2 for loop      ----->>>>
    // for (int i = 0; i < d; i++) {
    //     int temp = arr[0];
    //     for (int j = 0; j < n; j++) {
    //         arr[j] = arr[j+1];

    //     }
    //     arr[n-1] = temp;
    // }

    rotate(arr, n, d);

    for(int i = 0; i < n; i++) {
        cout << arr[i];
    }

    return 0;
}