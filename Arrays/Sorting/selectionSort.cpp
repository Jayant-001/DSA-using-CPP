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

    for ( int i = 0; i < n-1; i++) {
        int min = i;
        for (int j = i+1; j < n; j++) {

            // finding minimum number
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        // swaping elements
        if (min != i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    // Printing array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}