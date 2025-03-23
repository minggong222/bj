#include <iostream>
#include <queue>
#include <map>
#define ll long long
using namespace std;
int n, m;
queue<int> a, b;
vector<int> answer;
map<int, int> A, B;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        A[x]++;
        a.push(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        B[x]++;
        b.push(x);
    }
    for (int i = 100; i >= 1; i--)
    {
        if (A[i] && B[i])
        {
            answer.push_back(i);
            while (!a.empty())
            {
                int x = a.front();
                a.pop();
                A[x]--;
                if (x == i)
                    break;
            }
            while (!b.empty())
            {
                int x = b.front();
                b.pop();
                B[x]--;
                if (x == i)
                    break;
            }
            i++;
        }
    }
    cout << answer.size() << '\n';
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << ' ';
    }
}