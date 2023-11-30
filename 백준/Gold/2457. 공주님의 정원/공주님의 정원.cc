#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <deque>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<int, int> m;
    int n, x, answer = 0, date = 301, maximum = 0;
    bool sw = false;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int day1, day2;
        cin >> x >> day1;
        day1 += x * 100;
        cin >> x >> day2;
        day2 += x * 100;
        m[day1] = max(m[day1], day2);
        if (day2 > 1130)
            sw = true;
    }
    if (sw) {
        for (auto iter = m.begin(); iter != m.end();) {
            if (iter->first <= date) {
                maximum = max(iter->second, maximum);
                iter++;
                if (maximum > 1130) {
                    answer++;
                    break;
                }
            }
            else {
                if (maximum == 0) {
                    answer = 0;
                    break;
                }
                date = maximum;
                answer++;
                maximum = 0;
            }
        }
    }
    cout << answer;
    return 0;
}