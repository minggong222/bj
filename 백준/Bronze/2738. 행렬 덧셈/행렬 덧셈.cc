#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v, v1;
    for (int i = 0; i < n; i++) {
        vector<int> v2;
        for (int j = 0; j < m; j++) {
            int a;
            cin >> a;
            v2.push_back(a);
        }
        v.push_back(v2);
    }
    for (int i = 0; i < n; i++) {
        vector<int> v2;
        for (int j = 0; j < m; j++) {
            int a;
            cin >> a;
            v2.push_back(a);
        }
        v1.push_back(v2);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            v[i][j] += v1[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}