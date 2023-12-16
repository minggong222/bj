#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	int a, sum = 0;
	string b;
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		sum += b[i] - 48;
	}
	cout << sum;
	return 0;
}
