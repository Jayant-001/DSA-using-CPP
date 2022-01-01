#include <bits/stdc++.h>
using namespace std;
int inv_count = 0;
void merge(int arr[], int low, int mid, int high) {

    int i = low;
    int j = mid+1;
    int k = low;
    int ans[high-low+1];
    while(i <= mid && j <= high) {
        if(arr[i] <= arr[j]) 
            ans[k++] = arr[i++];
        else {
            ans[k++] = arr[j++];
            inv_count = inv_count + (mid-i);
        }
    }

    while(i <= mid) 
        ans[k++] = arr[i++];
    while(j <= high)
        ans[k++] = arr[j++];

    for(int k = low; k <= high; k++)
        arr[k] = ans[k];
    
    // return inv_count;
}
void merge_sort(int arr[], int low, int high) {

    // int inv_count = 0;
    if(low < high) {
    int mid = (low+high) / 2;
         merge_sort(arr, low, mid);
         merge_sort(arr, mid+1, high);
         merge(arr, low, mid, high);

        
        // inv_count += merge_sort(arr, low, mid);
        // inv_count += merge_sort(arr, mid+1, high);
        // inv_count += merge(arr, low, mid, high);
        
    }

    // return inv_count;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    merge_sort(arr, 0, n - 1);
    cout << inv_count << endl;
    for (int it : arr)
    {
        cout << it << " ";
    }

    return 0;
}