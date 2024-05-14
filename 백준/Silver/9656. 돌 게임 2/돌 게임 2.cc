#include <iostream>
#include <vector>
#include <queue>
#define ll long long
using namespace std;
int n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    if (n % 2 == 0)
        cout << "SK";
    else
        cout << "CY";
    return 0;
}