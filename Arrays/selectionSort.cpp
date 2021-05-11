#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter length of the array" << endl;
    cin >> n;

    int arr[n];
    cout << "ENter array" << endl;

    
    // INput array from user
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Applying selection sort...............

    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }


    // Printing array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}