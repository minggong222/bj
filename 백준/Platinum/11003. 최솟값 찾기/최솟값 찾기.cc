#include <iostream>
#include <vector>
#include <map>
#include <queue>
#define ll long long
using namespace std;
int n, l;
deque<pair<int, int>> dq;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> l;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (!dq.empty()) {
            if (dq.front().second < i - l + 1)   dq.pop_front();
        }
        while (!dq.empty() && dq.back().first > x)   dq.pop_back();
        dq.push_back({ x,i });
        cout << dq.front().first << ' ';
    }
    return 0;
}