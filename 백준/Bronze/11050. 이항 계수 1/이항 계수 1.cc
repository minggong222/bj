#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, K, answer = 1, b = 1;
    cin >> N >> K;
    for (int i = 1; i <= K; i++) {
        b *= i;
        answer *= N + 1 - i;
    }
    cout << answer/b;
    return 0;
}