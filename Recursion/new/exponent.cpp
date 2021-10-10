#include <iostream> 
using namespace std;

// standard approach
int expo(int num, int pow) {

    if(pow == 0)
        return 1;

    return num * expo(num, pow-1);
}


// optimal solution 
int exp(int num, int pow) {
    if (pow == 0) 
        return 1;

    int chota_ans = exp(num, pow);

    // odd
    if(pow&1) {
        return num * chota_ans * chota_ans;
    }
    else {
        return chota_ans * chota_ans;
    }
}

int main() {

    cout << expo(5,4);

    return 0;
}