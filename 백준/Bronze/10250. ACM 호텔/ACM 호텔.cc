#include <iostream>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int H, W, N, x ,y;
        cin >> H >> W >> N;
        x = N / H + 1;
        y = N % H;

        if (y == 0) {
            y = H;
            x -= 1;
        }
        printf("%d%02d\n", y, x);
    }
    return 0;
}