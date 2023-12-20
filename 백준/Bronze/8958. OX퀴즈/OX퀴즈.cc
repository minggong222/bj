#include <iostream>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        int score = 0;
        cin >> str;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == 'O') {
                int a = 1;
                while (str[i++] == 'O') {
                    score += a++;
                }
                i--;
            }
        }
        cout << score << '\n';
    }
    return 0;
}