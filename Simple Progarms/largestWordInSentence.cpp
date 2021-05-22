// incomplete program

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    cin.ignore();

    char s[n+1];
    cin.getline(s, n);
    cin.ignore();

    int max = 0;

    int i = 0, len = 0;
    int stWord = 0;

    while(s[i] != '\0'){
        
        if (s[i] != ' ') {
            len++;

            if (len > max) {
                max = len;
                stWord = i - len;
            }
            max = std::max(max, len);
        }
        else {
            len = 0;
        }
        i++;
    }

    cout << max << endl;

    cout << "Max word : ";
    for (int j = stWord; s[j] != '\0'; j++) {
        cout << s[j];
    }
    

    return 0;
}