#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int m, sum = 0;
        cin >> m;
        for(int j = 0; j < m; j++){
            int a;
            cin >> a;
            sum += a;
        }
        cout << sum << '\n';
    }
    return 0;
}