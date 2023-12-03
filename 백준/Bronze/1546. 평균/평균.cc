#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	int a, b = 0 , max = 0;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int c;
		cin >> c;
		if (max < c)
			max = c;
		b += c;
	}
	cout << (double)b / a / max * 100;
	return 0;
}
