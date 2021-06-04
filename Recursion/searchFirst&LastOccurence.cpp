#include <iostream>
using namespace std;

int firstOccurence(int arr[], int n, int i, int k){

    if (i == n) return -1;
    if(arr[i] == k) return i;

    return firstOccurence(arr, n, i+1, k);
}

int lastOccurence(int arr[], int n, int i, int k) {

    if (i == 0) return -1;

    if (arr[i] == k) return i;

    return lastOccurence(arr, n, i-1, k);

}

int lastocc(int arr[], int n, int i, int k) {

    if (i == n) return -1;
    int restArr = lastocc(arr, n, i+1, k);

    if (restArr != -1) {
        return restArr;
    }
    if (arr[i] == k)
        return i;

    return -1;
}


int main() {

    int num[] = {4,2,1,2,5,2,7};
    int n = sizeof(num) / sizeof(num[0]);
    int k = 2;

    cout << "first occurence : " << firstOccurence(num, n, 0, k);
    cout << endl;
    cout << "last occurence : " << lastOccurence(num, n, n-1, k);
    cout << endl;
    cout << "last occurence : " << lastocc(num, n, 0, k);
    return 0;
}