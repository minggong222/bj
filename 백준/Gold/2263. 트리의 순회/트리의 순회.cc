#include <iostream>
#include <vector>
#define INF 987654321;
using namespace std;
int n;
int in[100001];
int post[100001];
void preorder(int x, int y, int a, int b) {
    int root;
    for (int i = x; i <= y; i++) {
        if (in[i] == post[b]) {
            root = i;
            break;
        }
    }
    cout << in[root] << ' ';
    if (x != root)  preorder(x, root - 1, a, a + (root - 1 - x));
    if (y != root)  preorder(root + 1, y, b - (y - root), b - 1);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> in[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> post[i];
    }
    preorder(1, n, 1, n);
    return 0;
}