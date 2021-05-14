#include <iostream>
using namespace std;

int linearSearch(int arr[], int len, int key) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {34,3,6,43,2,55,27,45,1,67,7};
    int len = sizeof(arr) / sizeof(arr[0]);
    int key = 7;

    cout << "Index = " << linearSearch(arr, len, key) << endl;

    return 0;
}