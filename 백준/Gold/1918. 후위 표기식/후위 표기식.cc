#include <iostream>
#include <stack>
#include <vector>
using namespace std;
stack<char> sym;
stack<int> num;
vector<char> answer;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            answer.push_back(s[i]);
        }
        else {
            if (sym.empty())
                sym.push(s[i]);
            else {
                switch (s[i])
                {
                case '+':
                case '-':
                    while (sym.top() != '(') {
                        answer.push_back(sym.top());
                        sym.pop();
                        if (sym.empty())
                            break;
                    }
                    sym.push(s[i]);
                    break;
                case '*':
                case '/':
                    if (sym.top() == '/' || sym.top() == '*') {
                        answer.push_back(sym.top());
                        sym.pop();
                    }
                    sym.push(s[i]);
                    break;
                case '(':
                    sym.push(s[i]);
                    break;
                case ')':
                    while (sym.top() != '(') {
                        answer.push_back(sym.top());
                        sym.pop();
                    }
                    sym.pop();
                    break;
                }
            }
        }
    }
    while (!sym.empty()) {
        answer.push_back(sym.top());
        sym.pop();
    }
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i];
    }
    return 0;
}