#include <iostream>
#include <vector>
using namespace std;
int N;
bool visit[1000001];
int answer[1000001];
vector<int> number;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        visit[a] = true;
        number.push_back(a);
    }
    for (int i = 0; i < number.size(); i++) {
        for (int j = number[i]; j < 1000001; j += number[i]) {
            if (visit[j]) {
                answer[number[i]]++;
                answer[j]--;
            }
        }
    }
    for (int i = 0; i < number.size(); i++) {
        cout << answer[number[i]] << ' ';
    }
    return 0;
}