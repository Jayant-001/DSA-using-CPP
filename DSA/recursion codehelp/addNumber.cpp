#include<iostream>
using namespace std;

string ans = "";
pair<int, int> add(char a, char b, int c) {
	int x = a - '0';
	int y = b - '0';

	int sum = x + y + c;
	pair<int, int> r = {sum % 10, sum / 10};
	return r;
}
void getSum(string a, string b, int i, int j, int carry) {

	if (i < 0 && j < 0 && carry == 0) return;

	char x = '0', y = '0';
	if (i >= 0) x = a[i];
	if (j >= 0) y = b[j];

	pair<int, int> p = add(x, y, carry);
	ans.push_back(p.first + '0');
	carry = p.second;

	getSum(a, b, i - 1, j - 1, carry);
}

void reverse(string &s, int i, int j) {

	if (i >= j) return;

	swap(s[i], s[j]);
	reverse(s, i + 1, j - 1);
}

int main() {

	string a, b; cin >> a >> b;

	getSum(a, b, a.length() - 1, b.length() - 1, 0);
	reverse(ans, 0, ans.length() - 1);
	cout << ans;

	return 0;
}