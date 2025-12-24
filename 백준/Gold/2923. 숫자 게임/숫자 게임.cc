#include <iostream>
#include <vector>
#include <map>
#include <queue>
#define ll long long
#define INF -1234567890
#define ARR_MAX 100
using namespace std;
int t;
int arrA[ARR_MAX];
int tempA[ARR_MAX];
int arrB[ARR_MAX];
int tempB[ARR_MAX];

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        arrA[n]++;
        arrB[m]++;
        for (int i = 0; i < ARR_MAX; i++) {
            tempA[i] = arrA[i];
            tempB[i] = arrB[i];
        }
        int idxA = 1;
        int idxB = ARR_MAX - 1;
        int answer = 0;
        while (idxA < ARR_MAX && idxB > 0) {
            if (tempA[idxA] == 0)    idxA++;
            else if (tempB[idxB] == 0)   idxB--;
            else {
                answer = max(answer, idxA + idxB);
                if (tempA[idxA] > tempB[idxB]) {
                    tempA[idxA] -= tempB[idxB];
                    tempB[idxB] = 0;
                }
                else {
                    tempB[idxB] -= tempA[idxA];
                    tempA[idxA] = 0;
                }
            }
        }
        cout << answer << '\n';
    }
    return 0;
}