#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
int N, M;
int arr[8];
bool visit[8];
deque<int> answer;
void back(int n) {
    if (!n) {
        for (int i = 0; i < answer.size(); i++) {
            cout << answer.at(i) << ' ';
        }
        cout << '\n';
    }
    else {
        for (int i = 0; i < N; i++) {
            if (!visit[i]) {
                answer.push_back(arr[i]);
                visit[i] = true;
                back(n - 1);
                visit[i] = false;
                answer.pop_back();
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    back(M);
    return 0;
}