#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	int a;
	string b;
	cin >> b;
	for (int i = 0; i < 26; i++) {
		a = b.find('a' + i);
		cout << a << ' ';
	}
	return 0;
}
