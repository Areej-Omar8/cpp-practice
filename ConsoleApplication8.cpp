//This program takes month number from user and prints out the number of days in that month//
#include<iostream>
using namespace std;
int main() {
	int num;
	cout << "hello user please enter month number";
	cin >> num;
	switch (num)
	{
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "30 days";
		break;
	case 2:
		cout << "28 days";
		break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "31 days";
		break;
	default:
		cout << "invalid month";
	}
	return 0;
}