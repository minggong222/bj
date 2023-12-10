#include <iostream>
#include <cstring>
using namespace std;
int answer = 0;
int recursion(const char* s, int l, int r) {
    answer++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
    return recursion(s, 0, strlen(s) - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        answer = 0;
        string str;
        cin >> str;
        cout << isPalindrome(str.c_str()) << ' ' << answer << '\n';
    }
    return 0;
}