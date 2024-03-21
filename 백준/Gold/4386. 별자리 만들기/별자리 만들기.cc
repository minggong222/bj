#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
int n, cnt = 1;
double answer = 0;
vector<pair<double, double>> v;
priority_queue<pair<double, pair<int, int>>> pq;
int arr[101];
bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.second)
        return a.second < b.second;
    return a.first < b.first;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        double x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 1; i <= n; i++) arr[i] = i;
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            pq.push(make_pair(-sqrt(pow((v[j].first - v[i].first), 2) + pow((v[j].second - v[i].second), 2)), make_pair(i + 1, j + 1)));
        }
    }
    while (!pq.empty()) {
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        double cost = -pq.top().first;
        pq.pop();
        if (arr[x] == arr[y])    continue;
        int r = arr[y];
        for (int i = 1; i <= n; i++) {
            if (arr[i] == r) arr[i] = arr[x];
        }
        answer += cost;
        if (++cnt == n)  break;
    }
    printf("%.2f",answer);
    return 0;
}