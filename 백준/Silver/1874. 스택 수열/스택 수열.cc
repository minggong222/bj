#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int arr[100001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, idx = 1;
    vector<char> v;
    stack<int> s;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++) {
        while(!s.empty()) {
            if (s.top() == arr[idx]) {
                s.pop();
                idx++;
                v.push_back('-');
            }
            else {
                break;
            }
        }
        s.push(i);
        v.push_back('+');
    }
    while (!s.empty()) {
        if (s.top() == arr[idx]) {
            s.pop();
            idx++;
            v.push_back('-');
        }
        else {
            break;
        }
    }
    if (s.empty()) {
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << '\n';
    }
    else {
        cout << "NO";
    }
    return 0;
}