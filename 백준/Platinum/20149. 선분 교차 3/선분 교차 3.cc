#include <iostream>
#define pii pair<double, double>
using namespace std;

int ccw(pii p1, pii p2, pii p3) {
    long double s = p1.first * p2.second + p2.first * p3.second + p3.first * p1.second;
    s -= (p2.first * p1.second + p3.first * p2.second + p1.first * p3.second);
    if (s > 0)   return 1;
    else if (s == 0)  return 0;
    else    return -1;
}

bool func(pair<pii, pii> l1, pair<pii,pii> l2) {
    pii p1 = l1.first;
    pii p2 = l1.second;
    pii p3 = l2.first;
    pii p4 = l2.second;
    int p1p2 = ccw(p1, p2, p3) * ccw(p1, p2, p4);
    int p3p4 = ccw(p3, p4, p1) * ccw(p3, p4, p2);
    if (p1p2 == 0 && p3p4 == 0) {
        return p3 <= p2 && p1 <= p4;
    }
    return p1p2 <= 0 && p3p4 <= 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    pair<pii, pii> l1, l2;
    pii p1, p2, p3, p4;
    cin >> p1.first >> p1.second >> p2.first >> p2.second;
    cin >> p3.first >> p3.second >> p4.first >> p4.second;
    if (p1 > p2) swap(p1, p2);
    if (p3 > p4) swap(p3, p4);
    l1 = { p1,p2 };
    l2 = { p3,p4 };
    if (func(l1, l2)) {
        cout << 1;
        long double p = (p1.first - p2.first) * (p3.second - p4.second) - (p1.second - p2.second) * (p3.first - p4.first);
        long double px = (p1.first * p2.second - p1.second * p2.first) * (p3.first - p4.first) - (p1.first - p2.first) * (p3.first * p4.second - p3.second * p4.first);
        long double py = (p1.first * p2.second - p1.second * p2.first) * (p3.second - p4.second) - (p1.second - p2.second) * (p3.first * p4.second - p3.second * p4.first);
        cout.precision(10);
        if (p == 0) {
            if (p1 == p4 && p1 >= p3) {
                cout << '\n' << p1.first << ' ' << p1.second;
            }
            else if (p2 == p3 && p1 <= p3) {
                cout << '\n' << p2.first << ' ' << p2.second;
            }
        }
        else {
            cout << '\n' << px / p << ' ' << py / p;
        }
    }
    else
        cout << 0;
    return 0;
}