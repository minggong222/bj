#include <iostream>

using namespace std;
int n, m;
int arr[2002];
bool pal[2002][2002];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++) {
        pal[i][i] = true;
        if (arr[i] == arr[i + 1])
            pal[i][i + 1] = true;
    }
    for (int i = n; i >= 1; i--) {
        for (int j = i; j <= n; j++) {
            if (arr[i] == arr[j] && pal[i + 1][j - 1])
                pal[i][j] = true;
        }
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        int s, e;
        cin >> s >> e;
        if (pal[s][e])
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }
    return 0;
}