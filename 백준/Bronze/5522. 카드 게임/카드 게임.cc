#include <iostream>
#define ll long long
using namespace std;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int answer = 0;
    for(int i = 0; i < 5; i++){
        int a;
        cin >> a;
        answer += a;
    }
    cout << answer;
    return 0;
}