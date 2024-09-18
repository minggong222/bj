#include <iostream>
#include <queue>
#define ll long long
using namespace std;
int n,m,k;
int answer = 0;
queue<int> q;
queue<int> t;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >>n>>m>>k;
    for(int i = 0; i < m; i++){
        q.push(0);
    }
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        t.push(a);
    }
    while(!t.empty()){
        int a = t.front();
        int w = q.front();
        answer++;
        q.pop();
        k += w;
        if(k >= a){
            k-=a;
            q.push(a);
            t.pop();
            continue;
        }
        q.push(0);
    }
    cout << answer + m;
    return 0;
}