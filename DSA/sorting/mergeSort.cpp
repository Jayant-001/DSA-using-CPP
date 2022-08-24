#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int b[high - low + 1];
    int k = low;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            b[k++] = arr[i++];
        }
        else if (arr[i] > arr[j])
        {
            b[k++] = arr[j++];
        }
        else
        {
            b[k++] = arr[i++];
            j++;
        }
    }
    while (i <= mid)
    {
        b[k++] = arr[i++];
    }
    while (j <= high)
    {
        b[k++] = arr[j++];
    }
    for (int k = low; k <= high; k++)
    {
        arr[k] = b[k];
    }
}
void merge_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
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
    for (int it : arr)
    {
        cout << it << " ";
    }

    return 0;
}