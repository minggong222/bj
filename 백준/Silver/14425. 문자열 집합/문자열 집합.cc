#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    int N, M, answer = 0;
    string s;
    cin >> N >> M;
    map<string, int> m;
    for (int i = 0; i < N; i++) {
        cin >> s;
        m.insert({ s,1 });
    }
    for (int i = 0; i < M; i++) {
        cin >> s;
        if (m.find(s) != m.end())
            answer++;
    }
    cout << answer;
}