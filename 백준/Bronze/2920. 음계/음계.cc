#include <iostream>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    string s = "";
    for (int i = 1; i <= 8; i++) {
        cin >> n;
        s += n + 48;
    }
    if (s == "12345678")
        cout << "ascending";
    else if (s == "87654321")
        cout << "descending";
    else
        cout << "mixed";
    return 0;
}