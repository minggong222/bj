#include<iostream>
#include<queue>
#include<vector>
#include<stack>
#include<set>
#define ll long long
using namespace std;
vector<int> answer;
int main() {
    int m, d;
    cin >> m >> d;
    if (m < 2) {
        cout << "Before";
    }
    else if (m > 2) {
        cout << "After";
    }
    else {
        if (d < 18) {
            cout << "Before";
        }
        else if (d > 18) {
            cout << "After";
        }
        else {
            cout << "Special";
        }
    }

    return 0;
}