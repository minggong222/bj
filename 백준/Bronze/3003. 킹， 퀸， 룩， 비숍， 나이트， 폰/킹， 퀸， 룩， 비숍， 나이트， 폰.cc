#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
	int a;
	vector<int> x = { 1,1,2,2,2,8 };
	for (int i = 0; i < 6; i++) {
		cin >> a;
		x[i] = x[i] - a;
	}
	for (int i = 0; i < 6; i++)
		cout << x[i] << " ";
	return 0;
}