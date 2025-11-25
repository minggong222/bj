#include<iostream>
#include<queue>
#include<vector>
#include<stack>
using namespace std;

int main() {
    for (int i = 0; i < 3; i++) {
        int h, m, s;
        cin >> h >> m >> s;
        int sum = 3600 * h + 60 * m + s;
        cin >> h >> m >> s;
        sum -= 3600 * h + 60 * m + s;
        h = sum / 3600;
        sum %= 3600;
        m = sum / 60;
        sum %= 60;
        s = sum;
        cout << -h << ' ' << -m << ' ' << -s << '\n';
    }
    return 0;
}