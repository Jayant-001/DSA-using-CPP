#include <iostream>
using namespace std;

int main() {

    char name[100];
    cin >> name;

    cout << name << endl;

    for (int i = 0; name[i] != '\0'; i++) {
        cout << name[i] << " ";
    }

    // OR 
    cout << endl;

    int i = 0; 
    while(name[i] != '\0'){
        cout << name[i] << " ";
        i++;
    }


    return 0;
}