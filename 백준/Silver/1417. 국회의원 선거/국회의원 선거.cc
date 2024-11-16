#include <iostream>
#include <queue>
#define ll long long
using namespace std;
int n;
int x;
priority_queue<int> q;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> x;
    for(int i =1;i <n;i++){
        int a;
        cin >> a;
        q.push(a);
    }
    int ans = 0;
    while(!q.empty()){
        int a = q.top();
        q.pop();
        if(a < x){
            break;
        }
        q.push(a-1);
        x++;
        ans++;
    }
    cout << ans;
    return 0;
}