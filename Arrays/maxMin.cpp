#include <iostream>
#include <climits>
using namespace std;

int getMax(int len, int arr[]) {

    int max = INT_MIN;

    for (int i = 0; i < len; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int getMin(int len, int arr[]) {

    int min = INT_MAX;

    for (int i = 0; i < len; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {

    int arr[] = {23,4,5,3,43,1,55,32,5,2};
    int len = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Min : " << getMin(len, arr) << endl;
    cout << "Max : " << getMax(len, arr) << endl;
    
    return 0;
}
