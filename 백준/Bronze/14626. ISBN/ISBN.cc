#include<iostream>
#include<queue>
#include<vector>
#include<stack>
#define ll long long
using namespace std;

int main() {
    string str;
    cin >> str;
    int sum = 0;
    bool sw = true;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '*') {
            if (i % 2 == 0)  sw = true;
            else    sw = false;
            continue;
        }
        if (i % 2 == 0) {
            sum += (str[i] - '0');
        }
        else {
            sum += 3 * (str[i] - '0');
        }
    }
    sum %= 10;
    if (sw) {
        cout << (10 - sum) % 10;
    }
    else {
        for (int i = 0; i < 10; i++) {
            if ((sum + i * 3) % 10 == 0) {
                cout << i;
                break;
            }
        }
    }
    return 0;
}