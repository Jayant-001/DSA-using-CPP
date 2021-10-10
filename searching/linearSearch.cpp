#include <iostream>
using namespace std;

int ls(int arr[], int n, int target) {

    for(int i = 0; i < n; i++) {
        if(arr[i] == target){
            return i+1;
        }
    }    

    return -1;

}

int main() {

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;
    cout << "Position : " << ls(arr, n, target);

    return 0;
}

