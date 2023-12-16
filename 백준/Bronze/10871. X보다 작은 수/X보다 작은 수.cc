#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a;
	int b;
	int c;
	int answer = 0;
	vector<int> x;
	cin >> a;
	cin >> c;
	for (int i = 0; i < a; i++) {
		cin >> b;
		if (b < c)
			x.push_back(b);
	}
	for (int i = 0; i < x.size(); i++) {
		cout << x[i] << ' ';
	}
	return 0;
}