#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {

    if (n == 1) {
        return true;
    }

    bool restSorted = isSorted(arr+1, n-1);
    return arr[0] < arr[1] && restSorted;
}

int main() {

    int num[] = {1,2,3,4,5,6};

    cout << isSorted(num, 5);
    
    return 0;
}