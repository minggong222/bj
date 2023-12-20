#include <iostream>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, answer = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int idx = i;
        while (idx % 5 == 0 ) {
            answer++;
            idx /= 5;
        }
    }
    cout << answer;
    return 0;
}