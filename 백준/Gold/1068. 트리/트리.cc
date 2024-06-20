#include <iostream>
#include <vector>
#include <queue>
#define ll long long
using namespace std;
int n, k;
vector<int> v[50];
int answer = 0;
int root;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == -1) {
            root = i;
            continue;
        }
        v[x].push_back(i);
    }
    cin >> k;
    if (root != k) {
        queue<int> node;
        node.push(root);
        while (!node.empty()) {
            int x = node.front();
            node.pop();
            if (v[x].empty()) { answer++; continue; }
            for (int i = 0; i < v[x].size(); i++) {
                if (v[x][i] != k)
                    node.push(v[x][i]);
                else {
                    v[x].erase(v[x].begin() + i);
                    i--;
                    if (v[x].empty())
                        answer++;
                }
                    
            }
        }
    }
    cout << answer;
}