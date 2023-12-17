#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int num[100000];
bool visit[4000001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> prime;
    visit[0] = visit[1] = true;
    for (int i = 2; i < 4000001; i++) {
        if (!visit[i]) {
            prime.push_back(i);
            for (int j = i + i; j < 4000001; j = j + i) {
                visit[j] = true;
            }
        }
    }
    int n;
    cin >> n;
    int i = 0, j = 0, answer = 0;
    int sum = prime[0];
    while (j < prime.size() && prime[j] <= n) {
        if (sum == n) {
            answer++;
        }
        if (sum < n) {
            sum += prime[++j];
        }
        else {
            sum -= prime[i++];
        }
    }
    cout << answer;
    return 0;
}