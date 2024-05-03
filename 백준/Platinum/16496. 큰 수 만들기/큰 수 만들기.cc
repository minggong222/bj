#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int n;
string answer;
string arr[1000];
int A;
bool cmp(string a, string b) {

    if(a == b) return false;

    string ab = a + b;
    string ba = b + a;
    if(ab > ba) return true;
    else return false;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n, cmp);
    if (arr[0] != "0")
        for (int i = 0; i < n; i++)
            cout << arr[i];
    else
        cout << "0";
    return 0;
}