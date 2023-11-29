#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    stack<int> a;
    int n, count = 1, x;
    bool sw = true;
    cin >> n;
    while (n--) {
        cin >> x;

        if (x == count) count++;
        else a.push(x);

        while (!a.empty() && a.top() == count) {
            a.pop();
            count++;
        }
    }
    if (a.empty()) cout << "Nice\n";
    else    cout << "Sad\n";

    return 0;
}