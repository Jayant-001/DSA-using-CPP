#include <iostream>
using namespace std;

int main() {

    int n; 
    cin >> n;

    char word[n+1];
    cin >> word;

    bool flag = true;
    for(int i = 0; i < n/2; i++) {
        if (word[i] != word[n-i-1]){
            flag = false;
            break;
        }
    }

    if (flag) 
        cout << word << " is a palindrome";
    
    else 
        cout << word << " not a palindrome";
    

    return 0;
}