#include <iostream>
#define ll long long
#define INF 1234567890
using namespace std;

int arr[200002];
int mTree[800008];
int MTree[800008];
int M;
int m;
void init(int start, int end, int idx) {
    if (start == end) {
        mTree[idx] = arr[start];
        MTree[idx] = arr[start];
        return;
    }
    int mid = (start + end) / 2;
    init(start, mid, idx * 2);
    init(mid + 1, end, idx * 2 + 1);
    mTree[idx] = min(mTree[idx * 2], mTree[idx * 2 + 1]);
    MTree[idx] = max(MTree[idx * 2], MTree[idx * 2 + 1]);
    return;
}

void find(int start, int end, int idx, int left, int right) {
    if (start > right || end < left)    return;
    if (start >= left && end <= right) {
        m = min(mTree[idx], m);
        M = max(MTree[idx], M);
        return;
    }
    int mid = (start + end) / 2;
    find(start, mid, idx * 2, left, right);
    find(mid + 1, end, idx * 2 + 1, left, right);
    return;
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= a; i++) {
        cin >> arr[i];
    }
    init(1, a, 1);
    for (int i = 0; i < b; i++) {
        int x, y;
        cin >> x >> y;
        m = INF;
        M = 0;
        find(1, a, 1, x, y);
        cout << M - m << '\n';
    }
    return 0;
}