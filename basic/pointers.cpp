#include <bits/stdc++.h>
using namespace std;

void print(int *arr) {

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << ", ";
    }
}

int main() {

    int arr[5];

    for (int i = 0; i < 5; i++) {
        arr[i] = i*2;
    }

    print(arr);

    return 0;
}