    #include <iostream>
    #include <string>
    #include <stack>
    using namespace std;
    int answer[10];

    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int a, b, c;
        cin >> a >> b >> c;
        string str = to_string(a * b * c);
        for (int i = 0; i < str.size(); i++) {
            answer[str[i] - 48]++;
        }
        for (int i = 0; i < 10; i++) {
            cout << answer[i] << '\n';
        }
        return 0;
    }