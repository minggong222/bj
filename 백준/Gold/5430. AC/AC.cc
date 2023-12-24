#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        string p, str, x;
        int n;
        bool sw = true, ans = true;
        deque<int> dq;
        cin >> p >> n;
        cin >> str;
        for (int i = 1; i < str.size() - 1; i++) {
            if (str[i] == ',') {
                dq.push_back(stoi(x));
                x = "";
            }
            else   x += str[i];
        }
        if(x != "")
            dq.push_back(stoi(x));
        for (int i = 0; i < p.size(); i++) {
            switch (p[i])
            {
            case 'R':
                sw = !sw;
                break;
            case 'D':
                if (dq.empty()) {
                    ans = false;
                }
                else {
                    if (sw)
                        dq.pop_front();
                    else
                        dq.pop_back();
                }
                break;
            }
        }
        if (ans) {
            if (sw) {
                cout << '[';
                while (!dq.empty()) {
                    cout << dq.front();
                    dq.pop_front();
                    if (!dq.empty())
                        cout << ',';
                }
                cout << "]\n";
            }
            else {
                cout << '[';
                while (!dq.empty()) {
                    cout << dq.back();
                    dq.pop_back();
                    if (!dq.empty())
                        cout << ',';
                }
                cout << "]\n";
            }
        }
        else {
            cout << "error\n";
        }
    }
    return 0;
}