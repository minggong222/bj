#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int a, b;
	bool sw =true;
	vector<vector<int>> v;
	cin >> a >> b;
	for (int i = 0; i < a; i++){
		vector<int> w;
		for (int j = 0; j < b; j++) {
			int n;
			cin >> n;
			w.push_back(n);
		}
		v.push_back(w);
	}
	if (v[0][0] == 0)	sw = false;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			int x = 0, y = 0;
			if (i != 0)	x = v[i][j] + v[i - 1][j];
			if (j != 0)	y = v[i][j] + v[i][j - 1];
			v[i][j] = max(x, y);
		}
	}
	if(sw)
		cout << ++v[a - 1][b - 1];
	else
		cout << v[a - 1][b - 1];
	return 0;
}