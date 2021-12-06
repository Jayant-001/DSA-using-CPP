#include <iostream>
using namespace std;

int main() {

    int arr[10];
    for (int i = 0; i < 5; i++) {
        arr[i] = (i+1) * 10;
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    int pos;
    cout << "Enter position that you want to delete" << endl;
    cin >> pos;

    for (int i = pos-1; i < 5-1; i++) {
        arr[i] = arr[i+1];
    }
    free(arr[4]);

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}