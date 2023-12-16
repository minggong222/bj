#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<bool>> v(100,  vector<bool>(100, { false, }));
    int n, x, y, answer = 0;
    cin >> n;
    while (n--) {
        cin >> x >> y;
        for (int i = x; i < x + 10; i++)
            for (int j = y; j < y + 10; j++) {
                if (!v[j][i]) {
                    v[j][i] = true;
                    answer++;
                }
            }
    }
    cout << answer;
	return 0;
}