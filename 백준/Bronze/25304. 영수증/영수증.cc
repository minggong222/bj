#include <iostream>

using namespace std;

int main() {
	int a;
	int sum = 0;
	cin >> sum;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int b, c;
		cin >> b >> c;
		sum -= b * c;
	}
	if (sum == 0)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}