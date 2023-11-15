#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int a, b, answer = 0;
	vector<vector<int>> v;
	cin >> a >> b;
	for (int i = 0; i < a; i++){
		int n = 0;
		int z = 0;
		for (int j = 0; j < b; j++) {
			switch (n) {
			case 0:
				cin >> n;
				if (n != 0) { 
					answer++;
					z = n;
				}
				break;
			case 1:
				cin >> n;
				if (n == 2 && z == 1)	answer++;
				break;
			case 2:
				cin >> n;
				if (n == 1 && z == 2) answer++;
				break;
			}
		}
	}
	cout << answer << endl;
	return 0;
}