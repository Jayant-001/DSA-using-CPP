#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> &v, int temp) {

    if(v.size() == 0 || v[v.size()-1] <= temp) {
        v.push_back(temp); 
        return;
    }

    int val = v[v.size()-1];
    v.pop_back();

    insert(v, temp);
    v.push_back(val);
    return;

}

void sort(vector<int> &v) {
    
    if(v.size() == 0) {
        return;
    }

    int temp = v[v.size()-1];
    v.pop_back();

    sort(v);
    insert(v, temp);
}


int main() {

    int n;
    cin >> n;

    vector<int> v(n);
    // v.push_back(2);
    // v.push_back(12);
    // v.push_back(5);
    // v.push_back(3);
    // v.push_back(1);
    // v.push_back(11);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v);

    for(int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }

    return 0;
}