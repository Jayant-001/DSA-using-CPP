#include <bits/stdc++.h>
using namespace std;

void PascalsTriangle (int n){
    int i,j,x;  
    for(i=0;i<n;i++) 
    { 
        x=1; 
        for(j=0;j<=i;j++) 
        { 
            cout << x << " "; 
            x = x * (i - j) / (j + 1); 
        } 
        cout << endl; 
    } 
}

int main() {

    int t;
    cin >> t;
    while(t--) {
        int row;
        cin >> row;

        PascalsTriangle(row);
    }    

    return 0;
}