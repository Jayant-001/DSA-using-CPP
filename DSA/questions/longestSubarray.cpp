// Find maximum arithmetic subarray
// subarray = find maximum length of subarray whose difference is same

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    /*
        dif = difference of current subarray
        mx = maximum subarray whose difference is same
        total = maximum length of subarray whose difference is same
    */

    int mx = 2;
    int dif = arr[0] - arr[1];
    int total = mx;

    for(int i = 1; i < n; i++) {

        if(dif == arr[i] - arr[i+1])  {

            mx++;
            total = max(total, mx);
        }

        else {
            dif = arr[i] - arr[i+1];
            mx = 2;
        }

    }

    cout << total;
    

    return 0;
}