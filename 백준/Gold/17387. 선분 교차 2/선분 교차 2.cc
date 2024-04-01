#include <iostream>
#define pii pair<long long, long long>
using namespace std;

int ccw(pii p1, pii p2, pii p3) {
    long long s = p1.first * p2.second + p2.first * p3.second + p3.first * p1.second;
    s -= p2.first * p1.second + p3.first * p2.second + p1.first * p3.second;
    if (s > 0)   return 1;
    else if (s == 0) return 0;
    else    return -1;
}

bool point1(pii p1, pii p2) {
    return(p1.first == p2.first && p1.second == p2.second);
}

bool point2(pii p1, pii p2, pii p3) {
    if (p1.first == p2.first && p1.first == p3.first)
        return true;
    else if (p1.first != p2.first && p1.first != p3.first) {
        double a = (p2.second - p1.second) / (p2.first - p1.first);
        double b = (p1.second - p3.second) / (p1.first - p3.first);
        return a == b;
    }
    return false;
}

bool func(pair<pii, pii> l1, pair<pii, pii> l2) {
    pii p1 = l1.first;
    pii p2 = l1.second;
    pii p3 = l2.first;
    pii p4 = l2.second;
    int p1p2 = ccw(p1, p2, p3) * ccw(p1, p2, p4);
    int p3p4 = ccw(p3, p4, p1) * ccw(p3, p4, p2);
    if (p1p2 == 0 && p3p4 == 0) {
        if (p1 > p2) swap(p2, p1);
        if (p3 > p4) swap(p3, p4);

        return p3 <= p2 && p1 <= p4;
    }
    return p1p2 <= 0 && p3p4 <= 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    pii p[4];
    for (int i = 0; i < 4; i++) {
        int x, y;
        cin >> x >> y;
        p[i] = { x,y };
    }
    cout << func({ p[0],p[1] }, { p[2],p[3] });
    return 0;
}