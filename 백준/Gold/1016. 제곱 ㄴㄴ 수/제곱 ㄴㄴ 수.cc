#include<iostream>
#include<queue>
#include<vector>
#include<stack>
#include<set>
#define ll long long
using namespace std;
bool arr[1000001];

int main() {
    ll m, M;
    cin >> m >> M;
    for (ll i = 2; i * i <= M; i++) {
        ll n = m / (i * i);
        if (m % (i * i)) n++;

        while (n * i * i <= M) {
            arr[n * i * i - m] = true;
            n++;
        }
    }
    int answer = 0;
    for (int i = 0; i <= M - m; i++) {
        if (!arr[i]) answer++;
    }
    cout << answer;
    return 0;
}