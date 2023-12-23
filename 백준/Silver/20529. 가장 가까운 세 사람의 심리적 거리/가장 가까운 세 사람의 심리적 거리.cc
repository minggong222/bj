#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int N, M;
vector<int> v;
int dist(string a, string b, string c) {
    int answer = 0;
    for (int i = 0; i < 4; i++) {
        answer += (a[i] != b[i]) + (b[i] != c[i]) + (c[i] != a[i]);
    }
    return answer;
}
int solve(int N, vector<string> v) {
    if (N >= 33) {
        return 0;
    }
    else {
        int minimum = 100000;
        for (int i = 0; i < N - 2; i++) {
            for (int j = i + 1; j < N - 1; j++) {
                for (int k = j + 1; k < N; k++) {
                    minimum = min(minimum, dist(v[i], v[j], v[k]));
                }
            }
        }
        return minimum;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> M;
        vector<string> v(M);
        for (int j = 0; j < M; j++) {
            cin >> v[j];
        }
        cout << solve(M, v) << '\n';
    }
    return 0;
}