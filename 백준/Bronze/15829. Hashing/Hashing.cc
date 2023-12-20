#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    string str;
    long long answer = 0;
    cin >> n >> str;
    for (int i = 0; i < str.size(); i++) {
        long long a = str[i] - 'a' + 1;
        for (int j = 0; j < i; j++) {
            a = a * 31;
            a %= 1234567891;
        }
        answer += a;
        answer %= 1234567891;
    }
    cout << answer;
    return 0;
}