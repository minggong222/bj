#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool qwe[201] = { false };
int v[201][201] = { 0 };
int a, b, n;
void dfs(int idx) {
	for (int i = 1; i <= a; i++) {
		if (v[idx][i] == 1) {
			v[idx][i] = 0;
			v[i][idx] = 0;
			qwe[i] = true;
			dfs(i);
		}
	}
	return;
}
int main() {
	cin >> a >> b;
	for (int i = 1; i <= a; i++){
		for (int j = 1; j <= a; j++) {
			cin >> n;
			v[i][j] = n;
		}
	}
	bool sw = true;
	cin >> n;
	qwe[n] = true;
	dfs(n);
	for (int i = 1; i < b; i++) {
		cin >> n;
		if (!qwe[n]) {
			sw = false;
			break;
		}
	}
	if (sw)	cout << "YES";
	else	cout << "NO";
	return 0;
}