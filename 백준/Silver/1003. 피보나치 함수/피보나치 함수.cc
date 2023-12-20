#include <iostream>
#include <vector>
using namespace std;
int arr[41][2];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    arr[0][0] = 1;
    arr[0][1] = 0;
    arr[1][0] = 0;
    arr[1][1] = 1;
    int n;
    cin >> n;
    for (int i = 2; i <= 40; i++) {
        arr[i][0] = arr[i - 1][0] + arr[i - 2][0];
        arr[i][1] = arr[i - 1][1] + arr[i - 2][1];
    }
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cout << arr[x][0] << ' ' << arr[x][1] << '\n';
    }
    return 0;
}