#include <iostream>
#include <vector>
using namespace std;
int m[202][202];
vector<int> v;
int dir[4][2] = { {1,0},{0,-1},{-1,0},{0,1} };
int main() {
    int n, answer = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int X, Y, d, g;
        cin >> X >> Y >> d >> g;
        X += 100;
        Y += 100;
        v.push_back(d);
        for (int i = 0; i < g; i++) {
            for (int j = v.size() - 1; j >= 0; j--) {
                v.push_back((v[j] + 1) % 4);
            }
        }
        m[X][Y]++;
        for (auto x : v) {
            X += dir[x][0];
            Y += dir[x][1];
            m[X][Y]++;
        }
        v.clear();
    }
    for (int i = 0; i < 202; i++) {
        for (int j = 0; j < 202; j++) {
            if (m[i][j] > 0) {
                if (m[i + 1][j] > 0 && m[i][j + 1] > 0 && m[i + 1][j + 1] > 0)
                    answer++;
            }
        }
    }
    cout << answer;
    return 0;
}