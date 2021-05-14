#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while(t-- != 0) {
        
        int n;
        cin >> n;
        
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        
        int start = n/2;

        for(int i = 0, j = n-1; i < start; i++, j--) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        
        
        
        
        for(int i = 0; i < n; i++ ) {
            cout << arr[i] << " ";
        }
        cout << endl;
        
        
        
    }
    
	return 0;
}