#include <string>
#include <vector>
#include <iostream>
using namespace std;
int main() {
    int L, A, B, C, D;
    cin >> L >> A >> B >> C >> D;
    int a = A/C, b = B/D;
    if (A % C != 0) {
        a++;
    }
    if (B % D != 0) {
        b++;
    }
    int c = max(a, b);
    cout << L - c;

    return 0;
}