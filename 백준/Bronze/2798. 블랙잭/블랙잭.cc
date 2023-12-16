#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int N,M,max = 0;
    cin >> N >> M;
    vector<int> v;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    for(int i = 0; i < N; i++)
        for (int j = i+1; j < N; j++)
            for (int k = j + 1; k < N; k++) {
                if (v[i] + v[j] + v[k] <= M) {
                    if (v[i] + v[j] + v[k] > max)    max = v[i] + v[j] + v[k];
                }
            }
    cout << max;
    return 0;
}
