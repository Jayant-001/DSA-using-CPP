#include <bits/stdc++.h>
using namespace std;

// reverse the given string
string reverse(string str)
{
    string revStr;

    for (int i = str.size() - 1; i >= 0; i--)
    {
        revStr.push_back(str[i]);
    }

    return revStr;
}

// check palindromic string
bool checkPalindroem(string str)
{

    bool check;

    for (int i = 0; i < str.size() / 2; i++)
    {
        if (str[i] == str[str.size() - 1 - i])
        {
            check = true;
        }
        else
        {
            check = false;
            break;
        }
    }

    return check;
}

// swap two numbers
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main()
{

    // cout << reverse("jayant");

    // cout << checkPalindroem("aba");
// --------------------------------------------------------------------------------

    // char c = '5';
    // cout << (int)c << endl;
    // cout << (int)c - '0' << endl;

    // cout << 3e2;
// --------------------------------------------------------------------------------


    int a = 23;
    int b = 32;

    swap(a, b);
    cout << "a - " << a << ", b - " << b;


    return 0;
}