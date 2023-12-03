#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a, b, max = 0, idx;
	vector<int> x;
	for (int i = 0; i < 9; i++) {
		cin >> b;
		if (b > max) {
			max = b; idx = i + 1;
		}
	}

	cout << max << endl << idx;
	return 0;
}