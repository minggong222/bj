#include <iostream>
#include <map>
#define ll long long
using namespace std;
int n;
bool arr[4];
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    arr[1] = true;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x>>y;
        swap(arr[x], arr[y]);
    }
    for(int i = 1; i <= 3;i++){
        if(arr[i])
            cout << i;
    }
    return 0;
}