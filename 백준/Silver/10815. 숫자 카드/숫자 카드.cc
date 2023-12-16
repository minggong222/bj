#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main() {
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
        if (m[a] != 0) {
            v.push_back(1);
        }
        else {
            v.push_back(0);
        }
    }
    for (int i = 0; i < M; i++) {
        cout << v[i] << ' ';
    }
}