#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	vector<int> x(a, { 0, });
	for (int i = 0; i < b; i++) {
		int q,w,e;
		cin >> q >> w >> e;
		for (q; q <= w; q++) {
			x[q-1] = e;
		}
	}
	for (int i = 0; i < a; i++) {
		cout << x[i] << ' ';
	}
	return 0;
}