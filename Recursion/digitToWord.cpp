#include <iostream>
using namespace std;

void printSpell(int num) {

    string words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if(num == 0) {
        return;
    }

    int dig = num % 10;

    printSpell(num/10);

    cout << words[dig] << " ";
    return;

}

int main() {

    int num;
    cin >> num;

    printSpell(num);

    return 0;
}