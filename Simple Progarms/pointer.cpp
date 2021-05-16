#include <iostream>
using namespace std;

void swap(int *i, int *j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}

int main()
{
    int a = 34;
    cout << &a << endl;     // address of a variable

    int *prt = &a;
    cout << prt << endl;
    cout << *prt << endl;

    
    // Traverse array using pointer

    int arr[] = {23,3,5,62,2,15,6};

    int *arrPrt = arr;

    for (int i = 0; i < 7; i++) {
        cout << *arrPrt << " " ;
        arrPrt++;
    }
    cout << endl;
    // OR

    for (int i = 0; i < 7; i++) {
        cout << * (arr+i) << " ";
    }


    // Pointer to Pointer

    int x = 23;
    int *ptr = &x;
    int **pptr = &prt;

    cout << "pointer to pointer" << endl;
    cout << x << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    // cout << **ptr << endl;



    // Passing pointer to function
    cout << endl << "Pass by reference " << endl;
    int i = 3;
    int j = 5;

    int *iptr = &i;
    int *jptr = &j;
    swap(iptr, jptr);
    cout << i << " " << j;

    // OR
    cout << endl << "OR" << endl;
    swap(&i, &j);
    cout << i << " " << j;
    


    return 0;
}
