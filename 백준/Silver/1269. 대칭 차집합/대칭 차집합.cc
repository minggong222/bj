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
    cin >> N >> M;
    map<int, int> m;
    for (int i = 0; i < N + M; i++) {
        cin >> a;
        if (m[a] == 0)   m[a]++;
        else    m.erase(a);
    }
    cout << m.size();
}