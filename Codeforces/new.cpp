#include<iostream>

using namespace std;
void reverse(char *arr,int n)
{

for(int i=0;i< n/2; i++)
{
    char temp;
    temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
}

}


int main()
{
    int n;
    scanf("%d",&n);
    char array[n];

    // printf("enter the array elements");

    for(int i=0;i<n;i++) {
        cin >> array[i];
    }

// printf("reversing array");

reverse(array,n);


for(int i=0;i<n;i++)
{
    printf("%c ",array[i]);
}

    return 0;
}