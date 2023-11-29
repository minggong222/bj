#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    list<int> a;
    int n, k;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> k;
        if(k > 0)
            a.push_back(k+1001*i);
        else 
            a.push_back(k - 1001 * i);
    }
    while (!a.empty()) {
        if (a.front() > 0) {
            k = a.front() % 1001;
            cout << a.front() / 1001 << " ";
            a.pop_front();
            if (a.empty())
                break;
            for (int i = 1; i < k; i++) {
                a.push_back(a.front());
                a.pop_front();
            }
        }
        else {
            k = -a.front() % 1001;
            cout << -a.front() / 1001 << " ";
            a.pop_front();
            if (a.empty())
                break;
            for (int i = 0; i < k; i++) {
                a.push_front(a.back());
                a.pop_back();
            }
        }
    }
    return 0;
}