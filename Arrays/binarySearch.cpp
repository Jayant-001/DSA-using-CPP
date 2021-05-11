#include <iostream>
using namespace std;

int binarySearch(int arr[], int len, int key) {
    int startPoint = 0;
    int endPoint = len-1;

    while(startPoint <= endPoint) {

        int mid = startPoint + (endPoint - startPoint) / 2;

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

int recursiveBinarySearch(int arr[], int start, int end, int key) {

    if (end >= start) {
        
        int mid = (start + end) / 2;

        if (key == arr[mid]) {
            return mid;
        } else if (key > arr[mid]) {
            return recursiveBinarySearch(arr, mid+1, end, key);
        } else {
            return recursiveBinarySearch(arr, start, mid-1, key);
        }
    }

    return -1;
}

int main() {

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(arr) / sizeof(arr[0]);
    int key = 55;

    cout << binarySearch(arr, len, key) << endl;

    cout << "Recursive implementation :----- " << endl;

    cout << recursiveBinarySearch(arr, 0, len-1, key) << endl;

    return 0;
}