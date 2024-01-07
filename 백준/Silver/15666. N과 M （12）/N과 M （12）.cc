#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N, M;
vector<int> v;
void answer(int n, int m, vector<int> a) {
    if (n == 0) {
        for (int i = 0; i < a.size(); i++)
            cout << a[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = m; i < v.size(); i++) {
        a.push_back(v[i]);
        answer(n - 1, i, a);
        a.pop_back();
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for (int i = 0; i < v.size(); i++) {
        answer(M - 1, i, { v[i] });
    }
    return 0;
}