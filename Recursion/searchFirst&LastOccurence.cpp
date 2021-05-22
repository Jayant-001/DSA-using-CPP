#include <iostream>
using namespace std;

int i = 0;
int firstSearch(int arr[], int n, int k){

    // int i = 0;
    // if (n == 0) return 0;
    if(i < n && arr[i] == k) return i;
    i++;

    return firstSearch(arr, n, k);
}



int main() {

    int num[] = {4,2,1,2,5,2,7};
    int n = 6;
    int k = 5;

    cout << firstSearch(num, n, k);

    return 0;
}