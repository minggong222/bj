#include <iostream>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while (1) {
        string n;
        bool sw = true;
        cin >> n;
        if (n == "0")  break;
        for (int i = 0; i < n.size(); i++) {
            if (n[i] != n[n.size() - 1 - i])   sw = false;
        }
        if (sw)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }
    return 0;
}