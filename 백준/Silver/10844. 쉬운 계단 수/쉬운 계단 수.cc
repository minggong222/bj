#include <iostream>
#include <vector>
using namespace std;
int num[100][10] = { 0,1,1,1,1,1,1,1,1,1 };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, answer = 0;
    cin >> n;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < 10; j++) {
            if (j == 0)
                num[i][0] = num[i - 1][j + 1];
            else if (j == 9)
                num[i][9] = num[i - 1][j - 1];
            else
                num[i][j] = num[i - 1][j - 1] + num[i - 1][j + 1];
            num[i][j] %= 1000000000;
        }
    }
    for (int i = 0; i < 10; i++)
        answer = (answer +num[n-1][i]) % 1000000000;
    cout << answer;
    return 0;
}