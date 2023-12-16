#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, min = 1000000, max = -1000000, b;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b;
		if (b < min)
			min = b;
		if (b > max)
			max = b;
	}
	cout << min << ' ' << max;
	return 0;
}