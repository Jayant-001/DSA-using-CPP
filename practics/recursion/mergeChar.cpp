#include <iostream>
using namespace std;

void mergeString(string str1, string str2) {

    for(int i = 0; i < str1.size(); i++){
        for(int j = 0; j < str2.size(); j++) {

            string res = str1[i] + str2[j];
            cout << res << endl;
        }
    }

}

int main() {

    string str1 = "abc";
    string str2 = "def";

    mergeString("abc", "str2");
    return 0;
}