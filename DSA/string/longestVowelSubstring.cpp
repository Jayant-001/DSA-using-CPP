#include <bits/stdc++.h>
using namespace std;

int longestString(string s)
{
    int start = 0, end = s.size()-1, res = 0, c = 0, i = 0;
    vector<int> temp;
    while (start <= end)
    {
        if (s[start] == 'a' || s[start] == 'o' || s[start] == 'u' || s[start] == 'e' || s[start] == 'i')
            ++start;
        else if (s[end] == 'a' || s[end] == 'o' || s[end] == 'u' || s[end] == 'e' || s[end] == 'i')
            --end;
        else
            break;
    }
    if (start > end)
        return s.size();
    for (i = start; i <= end; i++)
    {
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'u' || s[i] == 'e' || s[i] == 'i')
            ++c;
        else
        {
            if (c > 0)
                temp.push_back(c);
            c = 0;
        }
    }
    end = s.size() - end - 1;
    for (i = 0; i < temp.size(); i++)
    {
        res = res = max(res, max(start + temp[i], max(end + temp[i], start + temp[i] + end)));
    }
    return res;
}

int main()
{

    int t;
    cin >> t;
    while(t--) {

        string s;
        cin >> s;

        cout << longestString(s) << endl;

    }

    return 0;
}