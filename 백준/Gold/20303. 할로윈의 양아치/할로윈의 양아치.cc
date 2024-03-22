    #include <iostream>
    using namespace std;
    int n, m, k, answer = 0;
    int kid[30001];
    int parent[30001];
    int candy[30001][2];
    int dp[3001];
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
        }
        for (int i = 0; i < m; i++) {
            int a, b;
            cin >> a >> b;
            makeUnion(a, b);
        }
        for (int i = 1; i <= n; i++) {
            find(i);
            candy[parent[i]][0]++;
            candy[parent[i]][1] += kid[i];
        }
        for (int i = 1; i <= n; i++) {
            if (!candy[i][0])   continue;
            for (int j = k - 1; j - candy[i][0] >= 0; j--) {
                dp[j] = max(dp[j], dp[j - candy[i][0]] + candy[i][1]);
            }
        }
        cout << dp[k - 1];
        return 0;
    }