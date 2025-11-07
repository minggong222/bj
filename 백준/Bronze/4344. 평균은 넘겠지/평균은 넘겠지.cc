#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main() {
    cout << fixed;
    cout.precision(3);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        int arr[1001];
        int sum = 0;
        for (int j = 0; j < m; j++) {
            cin >> arr[j];
            sum += arr[j];
        }
        float a = sum / m;
        int c = 0;
        for (int j = 0; j < m; j++) {
            if (arr[j] > a)
                c++;
        }
        cout << (float)c / m * 100 << '%' << '\n';
    }
    return 0;
}