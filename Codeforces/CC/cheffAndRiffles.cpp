#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {


        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            arr[i] = i+1;

        vector<int> temp(n);
        vector<int> t(arr);
        int ct = 1;
        while(1) {

            int j = 0;

            for(int i = 0; i < n; i+=2)
                temp[j++] = arr[i];


            for(int i = 1; i < n; i+=2) {
                temp[j++] = arr[i];
            }

            if(temp == t)
                break;

            for(int i = 0; i < n; i++)
                arr[i] = temp[i];

            // for(int i = 0; i < n; i++)
            //     cout << arr[i] << " ";
            // cout << endl;

            ct++;
        }

        cout << ct << endl;
        k = k%ct;
        for(int i = 0; i < n; i++)
            arr[i] = i+1;

        t = arr;

        while(k--) {

            int j = 0;

            for(int i = 0; i < n; i+=2)
                temp[j++] = arr[i];


            for(int i = 1; i < n; i+=2) {
                temp[j++] = arr[i];
            }

            if(temp == t)
                break;

            for(int i = 0; i < n; i++)
                arr[i] = temp[i];

            // for(int i = 0; i < n; i++)
            //     cout << arr[i] << " ";
            // cout << endl;

        }

        for(int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;



    }

    return 0;
}