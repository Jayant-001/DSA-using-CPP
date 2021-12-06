#include <iostream>
using namespace std;

int main()
{

	int row, col;
	cout << "Enter row and column :" << endl;
	cin >> row >> col;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	cout << "-----------------------------" << endl;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (i == 0 || i == row - 1)
			{
				cout << "* ";
			}
			else if (j == 0 || j == col - 1)
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}

	cout << "-----------------------------" << endl;

	for (int i = row; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
		{
			cout << "* ";
		}
		cout << endl;
	}

	cout << "-----------------------------" << endl;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	cout << "-----------------------------" << endl;

	for(int i = row; i > 0; i--) {
		for (int j = i-1; j > 0; j--) {
			cout << "  ";
		}
		for (int j = i-1; j < row; j++) {
			cout << "* ";
		}
		cout << endl;
	}

	cout << "----------------OR-------------" << endl;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			if (j+1 < row) {
				cout << "  ";
			} else {
				cout << "* ";
			}
		}
		cout << endl;
	}

	return 0;
}


