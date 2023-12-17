#include <iostream>
#include <algorithm>
using namespace std;
int num[100001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> num[i];
    }
    int i = 1, j = 1, length = 100001;
    long long sum = num[1];
    while (i <= n && j <= n) {
        if (sum < m) {
            sum += num[++j];
        }
        else {
            if (length > j - i + 1) {
                length = j - i + 1;
            }
            sum -= num[i++];
        }
    }
    if (length == 100001)
        length = 0;
    cout << length;
    return 0;
}