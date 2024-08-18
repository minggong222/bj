#include <iostream>
#include <stack>
#include <map>
#define ll long long
using namespace std;
ll n, answer = 0;
stack<int> s;
stack<int> cnt;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        while (!s.empty() && s.top() < a)
        {
            answer += cnt.top();
            cnt.pop();
            s.pop();
        }
        if (!s.empty())
        {
            if (s.top() == a)
            {
                answer += cnt.top();
                cnt.top()++;
                if(cnt.size() > 1)
                    answer++;
            }
            else
            {
                answer++;
                s.push(a);
                cnt.push(1);
            }
        }
        else
        {
            s.push(a);
            cnt.push(1);
        }
    }
    cout << answer;
    return 0;
}