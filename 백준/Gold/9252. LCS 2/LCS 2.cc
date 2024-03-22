#include <iostream>
using namespace std;
int dp[1001][1001];
string answer = "";
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str1, str2;
    cin >> str1 >> str2;
    int x = str1.size();
    int y = str2.size();
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= y; j++) {
            if (str1[i - 1] == str2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    while (x >= 1 && y >= 1) {
        int a = dp[x][y];
        int b = dp[x][y - 1];
        int c = dp[x - 1][y];
        int d = dp[x - 1][y - 1];
        if (a > b && b == c && c == d) {
            x--;
            y--;
            answer = str1[x] + answer;
        }
        else if(a == c && b < c){
            x--;
        }
        else{
            y--;
        }
    }
    if (answer.size())
        cout << answer.size() << '\n' << answer;
    else
        cout << 0;
    return 0;
}