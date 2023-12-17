#include <iostream>
#include <algorithm>
using namespace std;
int num[100001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> num[i];
    }
    cin >> m;
    sort(num + 1, num + n + 1);
    int i = 1, j = n, answer = 0;
    while (i != j) {
        int x = num[i] + num[j];
        if (x == m) {
            i++;
            answer++;
        }
        else if (x < m)  i++;
        else    j--;
    }
    cout << answer;
    return 0;
}