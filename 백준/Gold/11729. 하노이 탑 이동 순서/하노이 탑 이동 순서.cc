#include <iostream>
#include <vector>
using namespace std;
int answer = 0;
vector<int> v;
void move(int start, int to) {
    v.push_back(start);
    v.push_back(to);
    answer++;
}
void hanoi(int n, int start, int to, int via) {
    if (n == 1)
        move(start, to);
    else {
        hanoi(n - 1, start, via, to);
        move(start, to);
        hanoi(n - 1, via, to, start);
    }
}
int main() {
    int n;
    cin >> n;
    hanoi(n, 1, 3, 2);
    cout << answer << '\n';
    for (int i = 0; i < v.size(); i = i + 2) {
        cout << v[i] << ' ' << v[i + 1] << '\n';
    }
    return 0;
}