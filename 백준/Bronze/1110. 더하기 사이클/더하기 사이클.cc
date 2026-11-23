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
    cin >> n;
    int x = n;
    int answer = 0;
    do
    {
        answer++;
        x = x % 10 * 10 + (x / 10 + x % 10) % 10;
    } while (x != n);
    cout << answer;
}