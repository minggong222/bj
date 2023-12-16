#include <iostream>

using namespace std;

int main() {
	int a, b;
	while (cin >> a >> b) {
		if (a == cin.eof() || b == cin.eof())
			break;
		cout << a + b << endl;
	}
	return 0;
}