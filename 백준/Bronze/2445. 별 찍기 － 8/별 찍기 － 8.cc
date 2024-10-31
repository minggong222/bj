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
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            cout << '*';
        }
        for(int j = i+1; j < n; j++){
            cout << ' ';
        }
        for(int j = i+1; j < n; j++){
            cout << ' ';
        }
        for(int j = 0; j < i + 1; j++){
            cout << '*';
        }
        cout << '\n';
    }
    for(int i = n-2; i >= 0; i--){
        for(int j = 0; j < i + 1; j++){
            cout << '*';
        }
        for(int j = i+1; j < n; j++){
            cout << ' ';
        }
        for(int j = i+1; j < n; j++){
            cout << ' ';
        }
        for(int j = 0; j < i + 1; j++){
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}