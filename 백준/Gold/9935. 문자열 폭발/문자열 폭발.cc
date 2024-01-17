#include <iostream>
#include <deque>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str, boom;
    cin >> str >> boom;
    deque<string> ss;
    string temp = "";
    string answer = "";
    for (int i = 0; i < str.size(); i++) {
        temp += str[i];
        if (temp.back() == boom.back()) {
            if (temp.size() >= boom.size()) {
                bool sw = true;
                for (int j = 0; j < boom.size(); j++) {
                    if (temp[temp.size() - boom.size() + j] != boom[j]) {
                        sw = false;
                        break;
                    }
                }
                if (sw)
                    for (int j = 0; j < boom.size(); j++)    temp.pop_back();
            }
        }
    }
    if (temp == "")
        temp = "FRULA";
    cout << temp;
    return 0;
}