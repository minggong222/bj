#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
int n, k, d;
int answer = 0;
pair<int, vector<int>> p[100000];
int arr[31];
bool cmp(pair<int, vector<int>> a, pair<int, vector<int>> b)
{
    return a.first < b.first;
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> k >> d;
    for (int i = 0; i < n; i++)
    {
        int m, d;
        cin >> m >> d;
        p[i].first = d;
        for (int j = 0; j < m; j++)
        {
            int a;
            cin >> a;
            p[i].second.push_back(a);
        }
    }
    if(n == 1){
        cout << 0;
        return 0;
    }
    sort(p, p + n, cmp);
    int left = 0;
    int right = 1;
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j < p[i].second.size(); j++)
        {
            arr[p[i].second[j]]++;
        }
    }
    while (1)
    {
        if (p[right].first - p[left].first <= d)
        {
            while (true)
            {
                if (right == n - 1)
                {
                    break;
                }
                if (p[right + 1].first - p[left].first > d)
                {
                    break;
                }
                right++;
                for (int i = 0; i < p[right].second.size(); i++)
                {
                    arr[p[right].second[i]]++;
                }
            }
            int sum = 0, s = 0, P = right - left + 1;
            for (int i = 1; i <= k; i++)
            {
                if (arr[i])
                {
                    sum++;
                    if (arr[i] == P)
                    {
                        s++;
                    }
                }
            }
            answer = max(answer, (sum - s) * P);
        }
        if (right == n - 1)
        {
            break;
        }

        for (int i = 0; i < p[left].second.size(); i++)
        {
            arr[p[left].second[i]]--;
        }
        left++;
        if (left == right)
        {
            right++;
            for (int i = 0; i < p[right].second.size(); i++)
            {
                arr[p[right].second[i]]++;
            }
        }
    }
    cout << answer;
    return 0;
}