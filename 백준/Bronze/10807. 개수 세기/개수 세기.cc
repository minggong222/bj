#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a;
	int b;
	int answer = 0;
	vector<int> x;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b;
		x.push_back(b);
	}
	cin >> b;
	for (int i = 0; i < a; i++) {
		if (x[i] == b)
			answer++;
	}
	cout << answer;
	return 0;
}