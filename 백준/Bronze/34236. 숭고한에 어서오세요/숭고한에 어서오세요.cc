#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    int arr[110];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << arr[n-1] + (arr[1] - arr[0]);
    return 0;
}