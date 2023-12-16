#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	vector<string> x;
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		string s;
		cin >> s;
		x.push_back(s);
	}
	for (int i = 0; i < a; i++)
	{
		cout << x[i][0] << x[i][x[i].size() - 1] << endl;
	}
	return 0;
}
