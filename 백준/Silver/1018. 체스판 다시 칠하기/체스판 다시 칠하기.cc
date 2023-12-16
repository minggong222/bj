#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int x, y, min = 64;
    cin >> x >> y;
    vector<string> v;
    for (int i = 0; i < x; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }
    for (int a = 0; a <= x - 8; a++){
        for (int b = 0; b <= y - 8; b++) {
            int cnt = 0, cnt2 = 0;
            bool sw = true;
            for (int i = a; i < a+8; i++) {
                for (int j = b; j < b+8; j++) {
                    if (sw) {
                        if (v[i][j] != 'B') cnt++;
                        if (v[i][j] != 'W') cnt2++;
                    }
                    else {
                        if (v[i][j] != 'W') cnt++;
                        if (v[i][j] != 'B') cnt2++;
                    }
                    sw = !sw;
                }
                sw = !sw;
            }
            if (min > cnt)   min = cnt;
            if (min > cnt2)   min = cnt2;
        }
    }
    cout << min;
    return 0;
}
