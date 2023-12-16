#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	vector<int> x(a);
	for (int i = 0; i < a; i++) {
		x[i] = i+1;
	}
	for (int i = 0; i < b; i++) {
		int q, w;
		cin >> q >> w;
		q--;
		w--;
		while (q < w) {
			int temp = x[q];
			x[q] = x[w];
			x[w] = temp;
			q++;
			w--;
		}
	}
	for (int i = 0; i < a; i++) {
		cout << x[i] << ' ';
	}
	return 0;
}
