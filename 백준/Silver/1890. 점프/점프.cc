#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int a;
	vector<vector<long>> v;
	cin >> a;
	vector<vector<long>> p(a, vector<long>(a, 0));
	p[0][0] = 1;
	for (int i = 0; i < a; i++){
		vector<long> w;
		for (int j = 0; j < a; j++) {
			long n;
			cin >> n;
			w.push_back(n);

		}
		v.push_back(w);
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			if (i + v[i][j] < a && i != a-1) {
				p[i + v[i][j]][j] = p[i][j] + p[i + v[i][j]][j];
			}
			if (j + v[i][j] < a && j != a-1) {
				p[i][j + v[i][j]] = p[i][j] + p[i][j + v[i][j]];
			}
		}
	}
	cout << p[a-1][a-1] << endl;
	return 0;
}