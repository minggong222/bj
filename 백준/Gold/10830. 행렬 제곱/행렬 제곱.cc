#include <iostream>
using namespace std;
long long mat[6][6], answer[6][6], temp[6][6];
long long n, b;
void mul(long long mat1[6][6], long long mat2[6][6]) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            long long result = 0;
            for (int x = 1; x <= n; x++) {
                result += mat1[i][x] * mat2[x][j];
            }
            temp[i][j] = result % 1000;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            mat1[i][j] = temp[i][j];
        }
    }
}
void power(long long m) {
    if(m == 1)  return;
    power(m / 2);
    mul(answer, answer);
    if (m % 2 == 1) {
        mul(answer, mat);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> b;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> mat[i][j];
            answer[i][j] = mat[i][j] % 1000;
        }
    }
    power(b);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << answer[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}