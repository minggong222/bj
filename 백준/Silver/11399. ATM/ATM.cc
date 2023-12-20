#include <iostream>
#include <algorithm>
using namespace std;
int arr[1000];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int sum = 0, answer = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        answer += sum;
    }
    cout << answer;
    return 0;
}