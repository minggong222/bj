#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	int a, b;
	map<int, int> x;
	for (int i = 0; i < 10; i++) {
		cin >> a;
		x[a % 42]++;
	}
	cout << x.size();
	return 0;
}