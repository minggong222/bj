#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int t, n, m;
long long answer = 0;
int a[1001];
int b[1001];
vector<int> aSum;
vector<int> bSum;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool sw = false;
    cin >> t;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        int sum = a[i];
        aSum.push_back(sum);
        for (int j = i + 1; j < n; j++) {
            sum += a[j];
            aSum.push_back(sum);
        }
    }
    for (int i = 0; i < m; i++) {
        int sum = b[i];
        bSum.push_back(sum);
        for (int j = i + 1; j < m; j++) {
            sum += b[j];
            bSum.push_back(sum);
        }
    }
    sort(bSum.begin(), bSum.end());
    for (int i = 0; i < aSum.size(); i++) {
        int target = t - aSum[i];
        answer += (upper_bound(bSum.begin(), bSum.end(), target) - bSum.begin()) - (lower_bound(bSum.begin(), bSum.end(), target) - bSum.begin());
    }
    cout << answer;
    return 0;
}