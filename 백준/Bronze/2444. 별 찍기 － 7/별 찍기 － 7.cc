#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
	int a;
	vector<string> x;
	bool b = true;
	cin >> a;
	for (int i = 0; i < a; i++) {
		x.push_back("");
		for (int k = 0; k < a - i - 1; k++) {
			x[i] += ' ';
		}
		for (int j = a - i - 1; j <= a + i - 1; j++) {
			x[i] += '*';
		}
	}
	for (int i = 0; i < a; i++)
	{
		cout << x[i] << endl;
	}
	for (int i = a-2; i >= 0; i--)
	{
		cout << x[i] << endl;
	}
	return 0;
}