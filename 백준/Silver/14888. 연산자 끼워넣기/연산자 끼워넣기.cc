#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
using namespace std;
deque<int> dq;
vector<int> answer;
int oper[4];
int n;
void dfs(int x) {
    if (dq.empty()) {
        answer.push_back(x);
    }
    else {
        int y = dq.front();
        dq.pop_front();
        if (oper[0]) {
            oper[0]--;
            dfs(x + y);
            oper[0]++;
        }
        if (oper[1]) {
            oper[1]--;
            dfs(x - y);
            oper[1]++;
        }
        if (oper[2]) {
            oper[2]--;
            dfs(x * y);
            oper[2]++;
        }
        if (oper[3]) {
            oper[3]--;
            dfs(x / y);
            oper[3]++; 
        }
        dq.push_front(y);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        dq.push_back(x);
    }
    for (int i = 0; i < 4; i++) {
        cin >> oper[i];
    }
    int x = dq.front();
    dq.pop_front();
    dfs(x);
    sort(answer.begin(), answer.end());
    cout << answer.back() << ' ' << answer.front();
    return 0;
}