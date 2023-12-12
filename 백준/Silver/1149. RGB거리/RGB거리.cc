#include <iostream>
#include <cmath>
using namespace std;
int home[1001][3];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, a, b, c;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> home[i][0] >> home[i][1] >> home[i][2];
    }
    for (int i = 1; i <= n; i++) {
        home[i][0] = min(home[i - 1][1] + home[i][0], home[i - 1][2] + home[i][0]);
        home[i][1] = min(home[i - 1][0] + home[i][1], home[i - 1][2] + home[i][1]);
        home[i][2] = min(home[i - 1][1] + home[i][2], home[i - 1][0] + home[i][2]);
    }
    cout << min(home[n][0], min(home[n][1], home[n][2]));
    return 0;
}