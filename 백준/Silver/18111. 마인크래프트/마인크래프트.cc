#include <iostream>
#include <map>
using namespace std;
int arr[250000];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, block, f = 0, a = 0, b = 0, time = 1000000000, floor = 256;
    map<int, int> M;
    cin >> n >> m >> block;
    for (int i = 0; i < n * m; i++) {
        int x;
        cin >> x;
        M[x]++;
        f = max(f, x);
    }
    floor = f;
    while (f>=0) {
        a = 0, b = 0;
        for (auto x : M) {
            if (x.first > f) {
                a += (x.first - f) * x.second;
            }
            else if (x.first < f) {
                b += (f - x.first) * x.second;
            }
        }
        if (block + a >= b) {
            int c = a * 2 + b;
            if (c < time) {
                time = c;
                floor = f;
            }
        }
        f--;
    }
    if (time == 1000000000)
        time = 0;
    cout << time << ' ' << floor;
    return 0;
}