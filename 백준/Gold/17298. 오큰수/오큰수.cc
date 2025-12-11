#include<iostream>
#include<queue>
#include<vector>
#include<stack>
#include<set>
#define ll long long
using namespace std;
int arr[1000000];
int main() {
    int n;
    stack<pair<int, int>> s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (s.empty()) {
            s.push({ x,i });
            continue;
        }
        while (!s.empty() && s.top().first < x) {
            arr[s.top().second] = x;
            s.pop();
        }
        s.push({ x,i });
    }
    while (!s.empty()) {
        arr[s.top().second] = -1;
        s.pop();
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    return 0;
}