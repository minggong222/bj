#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main() {
    int n;
    string answer = "";
    cin >> n;
    cin >> answer;
    for (int i = 1; i < n; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < str.size(); j++) {
            if (answer[j] != str[j]) {
                answer[j] = '?';
            }
        }
    }
    cout << answer;
    return 0;
}