#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long N, sum = 0, answer = 0;
    cin >> N;
    for (int i = 1; i < 100000; i++) {
        sum += i;
        if (N < sum) {
            answer = i - 1;
            break;
        }
    }
    cout << answer;
    return 0;
}