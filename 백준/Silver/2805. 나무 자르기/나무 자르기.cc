#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
long long arr[1000000];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    long long m, begin = 0, end = 0, answer = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        end = max(end, arr[i] + 1);
    }
    long long now = (begin + end) / 2;
    while (1) {
        long long tree = 0;
        for (int i = 0; i < n; i++) {
            if(arr[i] > now)
                tree += arr[i] - now;
        }
        if(tree < m){
            end = now;
            now = (begin + end) / 2;
        }
        else {
            begin = now;
            now = (begin + end) / 2;
            if (answer == now) break;
            answer = now;
        }
    }
    cout << answer;
}