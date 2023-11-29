#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    map<string, int> m;
    cin >> n;
    for (int j = 0; j < n; j++) {
        string str1, str2;
        cin >> str1 >> str2;
        if (str1 == "ChongChong" || str2 == "ChongChong") {
            m[str1]++;
            m[str2]++;
        }
        else if (m.find(str1) != m.end() || m.find(str2) != m.end()) {
            m[str1]++;
            m[str2]++;
        }
    }
    cout << m.size();
    return 0;
}