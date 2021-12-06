/*
https://practice.geeksforgeeks.org/problems/game-of-death-in-a-circle1840/1

There are n people standing in a circle (numbered clockwise 1 to n) waiting to be executed. The counting begins at point 1 in the circle and proceeds around the circle in a fixed direction (clockwise). In each step, a certain number of people are skipped and the next person is executed. 
The elimination proceeds around the circle (which is becoming smaller and smaller as the executed people are removed), until only the last person remains, who is given freedom.
Given the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is killed in circle. The task is to choose the place in the initial circle so that you are the last one remaining and so survive.
Consider if n = 5 and k = 2, then the safe position is 3.
Firstly, the person at position 2 is killed, then person at position 4 is killed, then person at position 1 is killed. Finally, the person at position 5 is killed. So the person at position 3 survives.

*/
#include <iostream>
#include <vector>
using namespace std;

// n = number of peoples
// k = how many number of people will skip to kill next
// i = index(0 based) of people who will be killed

int solve(vector<int> &v, int k, int i = 0) {

    if(v.size() == 1) {
        return v[0];
    }

    i = (i + k) % v.size();
    
    v.erase(v.begin() + i);
    return solve(v, k, i);
}

int main() {

    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i = 1; i <= n; i++) {
        v[i-1] = i;
    }

    cout << solve(v, k-1) << endl;

    return 0;
}