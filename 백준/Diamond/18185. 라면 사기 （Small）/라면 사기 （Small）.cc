#include <iostream>
#include <vector>
#include <map>
#include <queue>
#define ll long long
using namespace std;
int n, answer = 0;
int arr[10005];
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        while (1) {
            if (arr[i] == 0)
                break;
            else if (arr[i + 1] == 0) {
                arr[i]--;
                answer += 3;
            }else if (arr[i + 2] == 0) {
                arr[i]--;
                arr[i + 1]--;
                answer += 5;
            }
            else if(arr[i+1] <= arr[i+2]) {
                arr[i]--;
                arr[i + 1]--;
                arr[i + 2]--;
                answer += 7;
            }
            else {
                arr[i]--;
                arr[i + 1]--;
                answer += 5;
            }
        }
    }
    cout << answer;
    return 0;
}