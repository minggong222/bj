#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long
using namespace std;
int n;
int arr[1000];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int answer = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > answer) {
            break;
        }
        answer += arr[i];
    }
    cout << answer;
    return 0;
}