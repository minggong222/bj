#include <iostream>
#define ll long long
using namespace std;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for(int i = 0; i <n; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int j = i; j < n; j++){
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}