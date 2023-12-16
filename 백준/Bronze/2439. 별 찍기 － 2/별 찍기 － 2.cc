#include <iostream>

using namespace std;

int main() {
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int j;
		for (j = 0; j < a - i -1 ; j++) {
			cout << ' ';
		}
		for (j; j < a; j++) {
			cout << '*';
		}
		cout << endl;
	}
	return 0;
}