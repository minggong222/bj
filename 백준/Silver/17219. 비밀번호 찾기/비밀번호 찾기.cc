#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<string, string> M;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string str, pass;
        cin >> str >> pass;
        M[str] = pass;
    }
    for (int i = 0; i < m; i++) {
        string str;
        cin >> str;
        cout << M[str] << '\n';
    }
    return 0;
}