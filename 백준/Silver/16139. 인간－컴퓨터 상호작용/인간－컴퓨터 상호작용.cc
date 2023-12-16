#include <iostream>
using namespace std;
int al[26][200001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        for (int j = 0; j < 26; j++) {
            al[j][i + 1] = al[j][i];
        }
        al[str[i] - 'a'][i + 1]++;
    }
    cin >> n;
    for (int i = 0; i < n; i++) {
        char a;
        int x, y;
        cin >> a >> x >> y;
        cout << al[a - 'a'][y + 1] - al[a - 'a'][x] << '\n';
    }
    return 0;
}