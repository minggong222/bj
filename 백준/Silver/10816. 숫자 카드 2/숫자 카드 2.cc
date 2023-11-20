#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, a;
    cin >> N;
    vector<int> v;
    map<int, int> m;
    for (int i = 0; i < N; i++) {
        cin >> a;
        m[a]++;
    }
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> a;
        cout << m[a] << ' ';
    }
}