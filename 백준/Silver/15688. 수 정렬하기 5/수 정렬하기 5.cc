#include <iostream>
#include <queue>
#define ll long long
using namespace std;
priority_queue<int> pq;
int n;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        pq.push(-x);
    }
    while(!pq.empty()){
        cout << -pq.top() << '\n';
        pq.pop();
    }
    return 0;
}