#include <iostream>
using namespace std;

int binarySearch(int arr[], int len, int key) {
    int startPoint = 0;
    int endPoint = len;
    cout << len << endl;

    while(startPoint <= endPoint) {

        int mid = (startPoint + endPoint) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] > key) {
            endPoint = mid -1;
        } else {
            startPoint = mid + 1;
        }
    }
    return -1;

}

int main() {

    int arr[] = {1,2,3,4,6,8,9,23,46,58,77,93};
    int len = sizeof(arr) / sizeof(arr[0]);
    int key = 936;

    cout << binarySearch(arr, len, key);

    return 0;
}