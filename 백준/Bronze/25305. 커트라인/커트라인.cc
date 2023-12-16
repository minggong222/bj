#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int N, k;
    cin >> N >> k;
    vector<int> v;
    int sum = 0;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        sum += a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    cout << v[N - k];
    return 0;
}
