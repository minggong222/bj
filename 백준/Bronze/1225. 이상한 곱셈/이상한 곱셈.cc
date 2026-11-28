#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <cmath>
#include <string>
#define ll long long
#define MAX 2147483647
using namespace std;
int n, m = 0;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    string a, b;

    cin >> a >> b;
    ll answer = 0;
    for (int i = 0;i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            answer += (a[i] - '0') * (b[j] - '0');
        }
   }
    cout << answer;
    return 0;
}