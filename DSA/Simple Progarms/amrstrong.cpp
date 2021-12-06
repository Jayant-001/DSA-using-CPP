#include <iostream>
using namespace std;

// 1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407

bool checkArmstrong(int n) {
    int temp = n;
    int res;

    while(n != 0) {
        int a = n % 10;
        res += (a*a*a);
        n /= 10;
    }

    if (temp == res){
        return true;
    } else {
        return false;
    }

}

int main() {

    int num;
    cout << "Enter a number to check Armstrong number or not :" << endl;
    cin >> num;

    if (checkArmstrong(num)) {
        cout << num << " is a armstrong number";
    } else {
        cout << num << " is not a armstrong number";
    }

    return 0;
}