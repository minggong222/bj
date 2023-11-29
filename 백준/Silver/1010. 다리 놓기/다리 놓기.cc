#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, N, K;
    cin >> n;
    for (int j = 0; j < n; j++) {
        int answer = 1;
        cin >> K >> N;
        for (int i = 1; i <= K; i++) {
            answer *= N + 1 - i;
            answer /= i;
        }
        cout << answer << '\n';
    }
    return 0;
}