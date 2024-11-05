#include <iostream>
#define ll long long
using namespace std;
int n;
ll arr[100001];
ll m = 1000000001;
ll ans = 0;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n - 1; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n - 1; i++){
        ll a;
        cin >> a;
        m = min(m,a);
        ans += m*arr[i];
    }
    cout << ans;
    return 0;
}