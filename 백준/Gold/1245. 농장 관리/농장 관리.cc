#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int v[100][70] = { 0 };
bool asd[100][70] = { false };
int answer = 0;
int q[8] = { -1,0,1,1,1,0,-1,-1 };
int p[8] = { 1,1,1,0,-1,-1,-1,0 };
int a, b, n;
bool qwe(int i, int j) {
	asd[i][j] = true;
	for (int k = 0; k < 8; k++) {
		if (i + q[k] >= 0 && i + q[k] < a && j + p[k] >= 0 && j + p[k] < b) {
			if (v[i][j] < v[i + q[k]][j + p[k]]) {
				asd[i][j] = false;
				return false;
			}
			if (v[i][j] == v[i + q[k]][j + p[k]] && !asd[i + q[k]][j + p[k]]) {
				if (!qwe(i + q[k], j + p[k])) {
					asd[i][j] = false;
					return false;
				}
			}
		}
	}
	return true;
}
void dfs(int i, int j) {
	if (v[i][j] == 0 || asd[i][j]) return;
	for (int k = 0; k < 8; k++) {
		if (i + q[k] >= 0 && i + q[k] < a && j + p[k] >= 0 && j + p[k] < b) {
			if (v[i][j] < v[i + q[k]][j + p[k]])
				return;
		}
	}
	if (!asd[i][j]){
		if(qwe(i, j))
			answer++;
	}
	return;
}

int main() {
	cin >> a >> b;
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++) {
			cin >> n;
			v[i][j] = n;
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			dfs(i, j);
		}
	}
	cout << answer;
	return 0;
}