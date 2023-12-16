#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	vector<int> x;
	for (int i = 0; i < a; i++) {
		x.push_back(i + 1);
	}
	for (int i = 0; i < b; i++) {
		int q, w, e;
		cin >> q >> w;
		e = x[q - 1];
		x[q - 1] = x[w - 1];
		x[w - 1] = e;
	}
	for (int i = 0; i < a; i++) {
		cout << x[i] << ' ';
	}
	return 0;
}