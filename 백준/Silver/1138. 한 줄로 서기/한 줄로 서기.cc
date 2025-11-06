#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main() {
    int n;
    int arr[11];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (arr[j] == 0) {
                for (int k = 1; k <= j; k++) {
                    arr[k]--;
                }
                cout << j << ' ';
                break;
            }
        }
    }
    return 0;
}