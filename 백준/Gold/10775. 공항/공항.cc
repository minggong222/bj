#include <iostream>
using namespace std;
int g, p, answer = 0;
int par[100001];
int find(int x) {
    if (par[x] == x)   return x;
    return par[x] = find(par[x]);
}
void Union(int x, int y) {
    x = find(x);
    y = find(y);
    if (x < y) swap(x, y);
    par[x] = y;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> g >> p;
    for (int i = 0; i <= g; i++) par[i] = i;
    while (p--) {
        int a;
        cin >> a;
        a = find(a);
        if (a == 0)  break;
        Union(a, a - 1);
        answer++;
    }
    cout << answer;
    return 0;
}