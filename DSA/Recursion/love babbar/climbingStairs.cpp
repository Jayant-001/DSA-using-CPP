#include <bits/stdc++.h>
using namespace std;

long long countSteps(int n) {
    if(n < 0)
        return 0;
    if(n == 0)
        return 1;

    return countSteps(n-1) + countSteps(n-2);
}

int main() {

    int n;
    cin >> n;

    cout << countSteps(n);

    return 0;
}