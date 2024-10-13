#include <iostream>
#include <cstring>
#include <vector>
#define ll long long
using namespace std;
bool prime[10001];
int n;
vector<int> p;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    memset(prime, true, sizeof(prime));
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i <= 10000; i++)
    {
        if (!prime[i])
            continue;
        p.push_back(i);
        for (int j = i * i; j <= 10000; j += i)
        {
            prime[j] = false;
        }
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        int ans1,ans2;
        cin >> a;
        for(int j = 0; p[j] <= a; j++){
            if(a < 2*p[j])  break;
            if(prime[a-p[j]]){
                ans1 = p[j];
                ans2 = a-p[j];
            }
        }
        cout << ans1 << ' ' << ans2 << '\n';
    }
    return 0;
}