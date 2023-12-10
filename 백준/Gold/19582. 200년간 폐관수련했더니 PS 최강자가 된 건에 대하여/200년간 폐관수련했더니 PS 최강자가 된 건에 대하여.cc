#include <iostream>
#include <algorithm>

using namespace std;
long long price[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, sum = 0;
    bool sw = false, answer = true;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x >> price[i];
        if (sum <= x)
            sum += price[i];
        else {
            if (sw) {
                answer = false;
                break;
            }
            else {
                sw = true;
                int max = 0;
                for (int j = 1; j <= i; j++) {
                    if (price[j] > max)
                        max = price[j];
                }
                if (max != price[i]) {
                    sum -= max;
                    if (x < sum) {
                        sum += max;
                    }
                    else {
                        sum += price[i];
                    }
                }
            }
        }
    }
    if (answer)
        cout << "Kkeo-eok";
    else
        cout << "Zzz";
    return 0;
}