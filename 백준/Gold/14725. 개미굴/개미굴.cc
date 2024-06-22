#include <iostream>
#include <vector>
#include <queue>
#include <map>
#define ll long long
using namespace std;
int n;
class Node {
public:
    map<string, Node*> m;
    void insert(vector<string>& v, int idx) {
        if (idx == v.size())
            return;
        if (m.find(v[idx]) == m.end()) {
            Node* node = new Node;
            m.insert({ v[idx],node });
        }
        m[v[idx]]->insert(v, idx + 1);
    }

    void dfs(int d) {
        for (auto& i : m) {
            for (int j = 0; j < d; j++)
                cout << "--";
            cout << i.first << '\n';
            i.second->dfs(d + 1);
            delete i.second;
        }
    }
};
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    Node* root = new Node;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vector<string> v(x);
        for (int j = 0; j < x; j++) {
            cin >> v[j];
        }
        root->insert(v, 0);
    }
    root->dfs(0);
    delete root;
    return 0;
}