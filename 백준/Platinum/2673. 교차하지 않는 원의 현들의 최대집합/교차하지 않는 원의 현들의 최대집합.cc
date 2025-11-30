#include<iostream>
#include<queue>
#include<vector>
#include<stack>
#define ll long long
using namespace std;
int n, answer = 1;
vector<vector<pair<int, int>>> dp;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        vector<pair<int, int>> v;
        if (x > y)   swap(x, y);
        v.push_back({ x,y });
        for (int j = 0; j < dp.size(); j++) {
            bool sw = true;
            for (int k = 0; k < dp[j].size(); k++) {
                int a = dp[j][k].first;
                int b = dp[j][k].second;
                if ((x < a && y < a) || (x > b && y > b) || (x < a && y > b) || (x > a && x < b && y < b && y > a))
                    continue;
                sw = false;
                break;
            }
            if (sw) {
                vector<pair<int,int>> vec = dp[j];
                vec.push_back({ x,y });
                dp.push_back(vec);
                answer = max((int)vec.size(), answer);
            }
        }
        dp.push_back(v);
    }
    cout << answer;
    return 0;
}