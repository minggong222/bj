#include<iostream>
#include<queue>
#include<vector>
#include<stack>
#define ll long long
using namespace std;

int main() {
    while (1) {
        string str;
        cin >> str;
        if (str == "end")    break;
        if (str == "animal") {
            cout << "Panthera tigris" << '\n';
            continue;
        }
        if (str == "tree") {
            cout << "Pinus densiflora" << '\n';
            continue;
        }
        if (str == "flower") {
            cout << "Forsythia koreana" << '\n';
            continue;
        }
    }
    return 0;
}