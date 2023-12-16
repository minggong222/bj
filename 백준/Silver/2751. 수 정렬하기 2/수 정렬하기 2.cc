#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
vector<int> v;
int main() {
    int N, a;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < N; i++)
        cout << v[i] << '\n';
    return 0;
}