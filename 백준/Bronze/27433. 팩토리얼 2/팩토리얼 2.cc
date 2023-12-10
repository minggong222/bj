#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
using namespace std;

long long factorial(int i) {
    if (i == 1 || i == 0)
        return 1;
    return factorial(i - 1) * i;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}