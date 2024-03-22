    #include <iostream>
    using namespace std;
    int n, m, k, answer = 0;
    int kid[10001];
    int parent[10001];
    int pay[10001];

    int find(int x) {
        if (parent[x] == x)  return x;
        return parent[x] = find(parent[x]);
    }

    void makeUnion(int x, int y) {
        int nx = find(x);
        int ny = find(y);
        if (nx != ny)    parent[nx] = ny;
    }

    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        cin >> n >> m >> k;
        for (int i = 1; i <= n; i++) {
            cin >> kid[i];
        }
        for (int i = 1; i <= n; i++) {
            parent[i] = i;
            pay[i] = 11111;
        }
        for (int i = 0; i < m; i++) {
            int a, b;
            cin >> a >> b;
            makeUnion(a, b);
        }
        for (int i = 1; i <= n; i++) {
            find(i);
            pay[parent[i]] = min(pay[parent[i]],kid[i]);
        }
        for (auto x : pay) {
            if (x <= 10000)
                answer += x;
        }
        if (k < answer)
            cout << "Oh no";
        else
            cout << answer;
        return 0;
    }