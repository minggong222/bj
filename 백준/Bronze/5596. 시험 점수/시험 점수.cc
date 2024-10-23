#include <iostream>
#define ll long long
using namespace std;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int a = 0, b = 0;
    for(int i = 0; i < 4; i++){
        int x;
        cin >> x;
        a+= x;
    }
    for(int i = 0; i < 4; i++){
        int x;
        cin >> x;
        b+= x;
    }
    if(a > b) cout << a;
    else    cout << b;
    return 0;
}