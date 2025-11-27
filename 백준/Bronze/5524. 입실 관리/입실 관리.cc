#include<iostream>
#include<queue>
#include<vector>
#include<stack>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < str.size(); j++) {
            cout << (char)tolower(str[j]);
        }
        cout << '\n';
    }
    return 0;
}