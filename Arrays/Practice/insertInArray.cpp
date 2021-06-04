#include <iostream>
using namespace std;

int main() {

    int arr[10];
    int size = 5;
    for (int i = 0; i < size; i++) {

        arr[i] = i+1;
    }

    // position and data to be inserted...
    int pos = 3, data = 8;

    for (int i = size-1; i >= pos-1; i--) {
        arr[i+1] = arr[i];
    }

    arr[pos-1] = data;

    for (int i = 0; i < size+1; i++) {
        cout << arr[i] << " ";
    }



    return 0;
}