#include <iostream>
#include <cmath>
#define INF = 1.7E+308
using namespace std;
int t;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed;
    cout.precision(4);
    cin >> t;
    while (t--) {
        double x[3], y[3], z[3];
        double answer = 0;
        bool sw = true;
        for (int i = 0; i < 3; i++) {
            cin >> x[i] >> y[i] >> z[i];
        }
        for (int i = 0; i < 3; i++) {
            for (int j = i + 1; j < 3; j++) {
                if (x[i] * y[j] - x[j] * y[i] == 0)
                    sw = false;
            }
        }
        if (sw) {
            double a[3], b[3];

            if (y[0] == 0) {
                swap(x[0], x[1]);
                swap(y[0], y[1]);
                swap(z[0], z[1]);
            }
            if (y[2] == 0) {
                swap(x[2], x[1]);
                swap(y[2], y[1]);
                swap(z[2], z[1]);
            }
            a[0] = (y[0] * z[1] - y[1] * z[0]) / (x[0] * y[1] - x[1] * y[0]);
            b[0] = (-x[0] / y[0]) * (y[0] * z[1] - y[1] * z[0]) / (x[0] * y[1] - x[1] * y[0]) - z[0] / y[0];
            a[1] = (y[0] * z[2] - y[2] * z[0]) / (x[0] * y[2] - x[2] * y[0]);
            b[1] = (-x[0] / y[0]) * (y[0] * z[2] - y[2] * z[0]) / (x[0] * y[2] - x[2] * y[0]) - z[0] / y[0];
            a[2] = (y[2] * z[1] - y[1] * z[2]) / (x[2] * y[1] - x[1] * y[2]);
            b[2] = (-x[2] / y[2]) * (y[2] * z[1] - y[1] * z[2]) / (x[2] * y[1] - x[1] * y[2]) - z[2] / y[2];
            double h = abs(a[0] * x[2] + b[0] * y[2] + z[2]) / sqrt(x[2] * x[2] + y[2] * y[2]);
            double N = sqrt((a[2] - a[1]) * (a[2] - a[1]) + (b[2] - b[1]) * (b[2] - b[1]));
            answer = h * N / 2;
        }
        cout << answer << '\n';
    }
    return 0;
}