// #include <iostream>
// #include <vector>
// using namespace std;

// void getPowerSet(vector<int> arr, vector<int> output, int i) {

//     if(i == arr.size()) {
        
//         for (auto j: output) {
//             cout << j << " ";
//         }
//         cout << endl;
//         return;
//     }

//     getPowerSet(arr, output, i+1);

//     output.push_back(arr[i]);
//     getPowerSet(arr, output, i+1);
// }

// int main() {

//     // int n;
//     vector<int> arr(3);
//     vector<int> subset;

//     // for (int i = 0; i < n; i++) {
//     //     cin >> arr[i];
//     // }

//     arr.push_back(4);
//     arr.push_back(5);
//     arr.push_back(7);

//     getPowerSet(arr, subset, 0);


//     return 0;
// }










#include<bits/stdc++.h>
using namespace std;
int totalSubset = 0;

//index-&gt; ith index of input array
// subset: array to store the subset

void printSubset(vector<int> input, vector<int> output, int index) {

    //if saare elements traverse ho chuke hai
    if(index >= input.size()) {
        //print the output array
        int sum = 0;
        for(auto i : output) {
            sum += i;
            // cout << sum << " ";
        }
        cout << sum << " ";
        // cout << endl;
        totalSubset++;
        return ;
    }

//nahi lena hai
printSubset(input,output,index+1);

// lena hai
output.push_back(input[index]);
printSubset(input,output,index+1);

}
int main() {
cout << "Enter size " << endl;
int size;
cin >> size;

vector<int> vec(size);
vector<int> subset; // to store subset, 2^n

// cout&lt;&lt;&quot;Enter elements: &quot;&lt;&lt;endl;
for(int i=0; i<size; i++) {
cin >> vec[i];
}

cout << "Power Set is as follows: " << endl;

printSubset(vec,subset,0);

cout << "Total Number of Subsets is " << totalSubset <<endl;
//should be 2^n
}
