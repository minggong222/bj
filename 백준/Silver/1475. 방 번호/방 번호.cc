#include <iostream>
#include <vector>
#include <map>
#include <queue>
#define ll long long
#define INF 1234567890
using namespace std;
map<char, int> m;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        m[str[i]]++;
    }
    m['6'] = (m['9'] + m['6'] + 1) / 2;
    int answer = 0;
    for (int i = 0; i < 9; i++) {
        answer = max(answer, m['0' + i]);
    }
    cout << answer;
    return 0;
}