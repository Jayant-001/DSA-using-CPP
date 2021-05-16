#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<long long> v;

    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);

    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;

    for (int i  = 0; i < v.size()/2; i++) {
        int temp = v.at(i);
        v.at(i) = v.at(v.size() - i - 1);
        v.at(v.size() - i - 1) = temp; 
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }

    cout << " min " << min(34, 51);

    return 0;
}