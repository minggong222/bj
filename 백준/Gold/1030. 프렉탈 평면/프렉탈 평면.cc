#include <iostream>
#include <cmath>
using namespace std;
long long a, R1, R2, C1, C2;
int c, N, K;
int matrix[100][100];
int answer[50][50];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> c >> N >> K >> R1 >> R2 >> C1 >> C2;
    a = pow(N, c);
    int b = (N - K) / 2;
    while (1) {
        for (int i = R1; i <= R2; i++) {
            for (int j = C1; j <= C2; j++) {
                if ((i / a) % N >= b && (i / a) % N < b + K && (j / a) % N >= b && (j / a) % N < b + K) {
                    answer[i - R1][j - C1] = 1;
                }
            }
        }
        a /= N;
        if (a == 0)
            break;
    }
    for (int i = 0; i <= R2 - R1; i++) {
        for (int j = 0; j <= C2 - C1; j++) {
            cout << answer[i][j];
        }
        cout << '\n';
    }
    return 0;
}