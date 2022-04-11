
#include <iostream>
using namespace std;
int main() {
    
    string s, t;
    cin >> s >> t;
    int k;
    cin >> k;

	int remS, remT;
	int same = 0;
	int n = s.length() > t.length() ? s.length() : t.length();
	for(int i = 0; i < t.length(); i++) {
		if(s[i] == t[i])
			same++;	
		else
			break;
	}

    remS = s.length() - same;
    remT = t.length() - same;

    debug(remS);
    debug(remT);
    
    if(k - (remS + remT) % 2 == 1)
    	cout << "No";

    else if(remS + remT <= k)
        cout << "Yes";
    else
        cout << "No";

}
