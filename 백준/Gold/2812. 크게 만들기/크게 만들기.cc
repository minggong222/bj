#include <iostream>
#include <stack>
#define ll long long
using namespace std;
int n, k;
int arr[500001];
string str;
stack<int> s;
stack<int> answer;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> k >> str;
    for (int i = 0; i < n; i++)
    {
        arr[i] = str[i] - '0';
    }
    int cnt = 0;
    int idx = 1;
    s.push(arr[0]);
    while(1){
        if(!s.empty() && s.top() < arr[idx] && cnt < k){
            s.pop();
            cnt++;
        }else{
            s.push(arr[idx++]);
        }
        if(idx == n){
            while(cnt != k){
                s.pop();
                cnt++;
            }
            break;
        }
    }
    while(!s.empty()){
        answer.push(s.top());
        s.pop();
    }
    while(!answer.empty()){
        cout << answer.top();
        answer.pop();
    }
    return 0;
}