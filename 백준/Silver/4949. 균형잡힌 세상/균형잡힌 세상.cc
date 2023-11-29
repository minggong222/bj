#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while(true){
        string s;
        bool sw = true;
        stack<char> a;
        getline(cin, s);
        if (s.size() == 1)
            break;
        for (int j = 0; j < s.size(); j++) {
            switch (s[j])
            {
            case '[':
                a.push(s[j]);
                break;
            case ']':
                if (a.empty()) {
                    sw = false;
                }
                else {
                    if (a.top() == '[') {
                        a.pop();
                    }
                    else {
                        sw = false;
                    }
                }
                break;
            case '(':
                a.push(s[j]);
                break;
            case ')':
                if (a.empty()) {
                    sw = false;
                }
                else {
                    if (a.top() == '(') {
                        a.pop();
                    }
                    else {
                        sw = false;
                    }
                }
                break;
            }
        }
        if(a.empty() && sw) cout << "yes\n";
        else    cout << "no\n";
    }
    return 0;
}