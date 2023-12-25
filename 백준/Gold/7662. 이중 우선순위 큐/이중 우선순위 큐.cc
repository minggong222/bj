#include <iostream>
#include <map>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n;
    while (n--) {
        map<long, long > a;
        cin >> m;
        while (m--) {
            long x;
            char c;
            cin >> c >> x;
            switch (c)
            {
            case 'I':
                a[x]++;
                break;
            case 'D':
                if (!a.empty()) {
                    if (x == 1) {
                        if ((--a.end())->second > 1)
                            (--a.end())->second--;
                        else
                            a.erase((--a.end()));
                    }
                    else {
                        if (a.begin()->second > 1)
                            a.begin()->second--;
                        else
                            a.erase(a.begin());
                    }
                }
                break;
            }
        }
        if (!a.empty())
            cout << (--a.end())->first << ' ' << a.begin()->first << "\n";
        else
            cout << "EMPTY\n";
    }
    return 0;
}