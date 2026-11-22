#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <string>
#define ll long long
using namespace std;
int n, m, k;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        v.push_back(str);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = m-1; j >= 0; j--)
        {
            cout << v[i][j];
        }
        cout << '\n';
    }
}