#include <bits/stdc++.h>
using namespace std;

int binaryNum[32];
void decToBinary(int n)
{
    // array to store binary number
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    // printing binary array in reverse order
    // for (int j = i - 1; j >= 0; j--)
    //     cout << binaryNum[j];
}

int main() {

    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int prd = 1;
    for(auto i : arr) {
        prd *= i;
    }

    decToBinary(prd);

    for(auto i : binaryNum)
        cout << i << " ";

    return 0;
}