#include <iostream>
#include <vector>
using namespace std;

int findFirst(vector<int> arr, int s, int t) {

    if(s == arr.size())
        return -1;
    
    if(arr[s] == t)
        return s;

    return findFirst(arr, s+1, t);
}

int findLast(vector<int> arr, int t) {

    if(arr.empty())
        return -1;

    if(arr[arr.size()-1] == t){
        return arr.size()-1;
    }

    arr.pop_back();
    return findLast(arr, t);
}

int main() {

    int n, target;
    cin >> n >> target;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    cout << "First index : " << findFirst(v, 0, target);
    cout << endl;
    cout << "Last index : " << findLast(v, target);

    return 0;
}