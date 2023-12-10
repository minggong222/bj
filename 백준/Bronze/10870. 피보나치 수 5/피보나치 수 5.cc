#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
using namespace std;
long long answer[21];
long long fibonacci(int i) {
    if (i == 0)
        return 0;
    if (i == 1)
        return 1;
    if (!answer[i])
        answer[i] = fibonacci(i - 2) + fibonacci(i - 1);
    return answer[i];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}