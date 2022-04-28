#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        long n;
        cin >> n;
        vector<long> arr(n);
        for(int i = 0; i < n;i++)
            cin >> arr[i];
        
        vector<long> temp = arr;
        sort(temp.begin(), temp.end());
        
        for(int i = 1; i < n; i++)
            if(arr[i] < arr[i-1]) {
            	long k = arr[i];
            	arr[i] = arr[i-1];
            	arr[i-1] = k;
                break;
            }
            
        if(arr != temp)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    

    return 0;
}
