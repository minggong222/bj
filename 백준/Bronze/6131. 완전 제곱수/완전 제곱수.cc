#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main() {
    int n, answer = 0;
    cin >> n;
    for (int i = 1; i <= 500; i++) {
        for (int j = 1; j <= 500; j++) {
            if (i * i == j * j + n) {
                answer++;
            }
        }
    }
    cout << answer;
    return 0;
}