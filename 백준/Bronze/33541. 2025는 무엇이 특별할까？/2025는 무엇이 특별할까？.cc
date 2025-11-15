#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main() {
    int n, answer = -1;
    cin >> n;
    for (int i = n + 1; i <= 9999; i++) {
        if ((i / 100 + i % 100) * (i / 100 + i % 100) == i) {
            answer = i;
            break;
        }
    }
    cout << answer;
    return 0;
}