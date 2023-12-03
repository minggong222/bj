#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int d = a * 60 + b + c;
	if (d < 24 * 60)
		cout << d / 60 << ' ' << d % 60;
	else {
		d -= 24 * 60;
		cout << d / 60 << ' ' << d % 60;
	}
	return 0;
}