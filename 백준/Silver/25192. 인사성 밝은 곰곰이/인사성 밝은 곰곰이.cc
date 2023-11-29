#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, answer = 0;
    map<string, int> m;
    cin >> n;
    for (int j = 0; j < n; j++) {
        string str;
        cin >> str;
        if (str == "ENTER") {
            answer += m.size();
            m.clear();
        }
        else
            m[str]++;
    }
    answer += m.size();
    cout << answer;
    return 0;
}