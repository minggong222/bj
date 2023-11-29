#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    queue<int> a;
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        a.push(i);
    }
    cout << '<';
    while (a.size() != 1) {
        for (int i = 1; i < k; i++) {
            a.push(a.front());
            a.pop();
        }
        cout << a.front() << ", ";
        a.pop();
    }
    cout << a.front() << '>';
    return 0;
}