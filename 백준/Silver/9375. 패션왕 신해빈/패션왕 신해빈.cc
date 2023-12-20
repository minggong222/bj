#include <iostream>
#include <map>
using namespace std;
int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        map<string, int> M;
        int x;
        cin >> x;
        for (int j = 0; j < x; j++) {
            string str;
            cin >> str >> str;
            M[str]++;
        }
        int answer = 1;
        for (auto x : M) {
            answer *= x.second + 1;
        }
        cout << answer-1 << '\n';
    }
    return 0;
    }