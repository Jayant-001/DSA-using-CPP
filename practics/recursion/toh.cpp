#include <iostream>
using namespace std;

void toh(int n, char src, char des, char aux){

    if(n == 1){
        cout << "move " << n << " disk from " << src << " to " << des << endl;
        return;
    }

    toh(n-1, src, aux, des);
    cout << "move " << n << " disk from " << src << " to " << des << endl;
    toh(n-1, aux, des, src);

    return;
}

int main() {

    toh(3, 'A', 'C', 'B');

return 0;
}