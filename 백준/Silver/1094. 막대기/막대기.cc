#include <iostream>
using namespace std;
int answer = 0, n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    while (n > 0) {
        if (n % 2 == 1)
            answer++;
        n = n >> 1;
    }
    cout << answer;
    return 0;
}