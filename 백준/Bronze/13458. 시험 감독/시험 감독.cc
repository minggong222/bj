#include <iostream>
#include <vector>
#include <queue>
#include <map>
#define ll long long
using namespace std;
int n, A[1000000], B, C;
ll answer = 0;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    cin >> B >> C;
    for (int i = 0; i < n; i++) {
        int per = A[i] - B;
        answer++;
        if (per <= 0)
            continue;
        answer += per / C;
        if (per % C != 0)
            answer++;
    }
    cout << answer;
    return 0;
}