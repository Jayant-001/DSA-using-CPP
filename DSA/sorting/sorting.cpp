#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)                        //Function to Swap to Values
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void displayArray(int a[], int n)                //function to display array
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n\n";
}

void bubbleSort(int a[], int n)                 //Function for bubbleSort
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
                swap(&a[j], &a[j + 1]);
        }
    }
    cout << "Bubble sort:\n\n";
    displayArray(a, n);
}

void insertionSort(int a[], int n)                        //Function for insertionSort
{
    int key;
    for (int i = 1; i < n; i++)
    {
        key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    cout << "Insertions sort:\n\n";
    displayArray(a, n);
}

int partition_quickSort(int a[], int low, int high)          //Partition function for quickSort
{
    int pivot = a[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (a[j] <= pivot)
        {
            i++;
            swap(&a[j], &a[i]);
        }
    }
    swap(&a[i + 1], &a[high]);
    return i + 1;
}
void quickSort(int a[], int low, int high) //QuickSort function
{
    if (low < high)
    {
        int pi = partition_quickSort(a, low, high);
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}

void merge(int a[], int const low, int const mid, int const high) //merge function for mergeSort
{
    auto const subArrayOne = mid - low + 1;
    auto const subArrayTwo = high - mid;
    auto *leftArray = new int[subArrayOne], *rightArray = new int[subArrayTwo];
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = a[low + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = a[mid + j + 1];
    auto index_subArrayOne = 0, index_subArrayTwo = 0;
    int index_mergedArray = low;
    while (index_subArrayOne < subArrayOne && index_subArrayTwo < subArrayTwo)
    {
        if (leftArray[index_subArrayOne] <= rightArray[index_subArrayTwo])
        {
            a[index_mergedArray] = leftArray[index_subArrayOne];
            index_subArrayOne++;
        }
        else if (leftArray[index_subArrayOne] > rightArray[index_subArrayTwo])
        {
            a[index_mergedArray] = rightArray[index_subArrayTwo];
            index_subArrayTwo++;
        }
        index_mergedArray++;
    }
}
void mergeSort(int a[], int const low, int const high) //mergeSort function
{
    if (low >= high)
        return;
    int mid = low + (high - low) / 2;
    mergeSort(a, low, mid);
    mergeSort(a, mid + 1, high);
    merge(a, low, mid, high);
}

void heapify(int a[], int n, int i)                      //heapify function for heapSort
{
    int largest = i;
    int l = 2 * i + 1, r = 2 * i + 2;
    if (n > l && a[l] > a[largest])
        largest = l;
    if (n > r && a[r] > a[largest])
        largest = r;
    if (largest != i)
        swap(&a[i], &a[largest]);
    heapify(a, n, largest);
}
void heapSort(int a[], int n)                            //function for heapSort
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);
    for (int i = n - 1; i > 0; i--)
    {
        swap(&a[0], &a[i]);
        heapify(a, i, 0);
    }
     cout << "Heap sort:\n\n";                //Printing sorted array using heapSort
    displayArray(a, n);
}

int main()                                    //driver code main( ) function
{
    int n = 100;
    int a[n];
    cout << "Array is:\n\n";

    for (int i = 0; i < n; i++)               //Generating a random array
    {
        int x = rand() % 1000;
        a[i] = x;
        cout << a[i] << " ";
    }
    cout << "\n\n";

    bubbleSort(a, n);                        //This is bubbleSort call

    insertionSort(a, n);                      //This is insertionSort call

    quickSort(a, 0, n);                      //This is quickSort  call
    cout << "Quick sort:\n\n";               //Printing sorted array using quickSort
    displayArray(a, n);

    mergeSort(a, 0, n - 1);                  //This is quickSort  call
    cout << "Merge sort:\n\n";               //Printing sorted array using quickSort
    displayArray(a, n);
    
    heapSort(a,n);                          //This is heapSort  call
}