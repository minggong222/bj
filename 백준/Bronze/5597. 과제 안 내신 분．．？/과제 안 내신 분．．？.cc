#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a, b;
	vector<int> x(30, {1, });
	for (int i = 0; i < 28; i++) {
		cin >> a;
		x[a-1] = 0;
	}
	for (int i = 0; i < 30; i++) {
		if (x[i] == 1)
			cout << i+1 << endl;
	}
	return 0;
}