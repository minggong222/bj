#include <iostream>
#include <cstring>
using namespace std;
char arr[67108866];
void preorder(int a) {
    cout << arr[a];
    if (isalpha(arr[a * 2]))
        preorder(a * 2);
    if (isalpha(arr[a * 2 + 1]))
        preorder(a * 2 + 1);
}
void inorder(int a) {
    if (isalpha(arr[a * 2]))
        inorder(a * 2);
    cout << arr[a];
    if (isalpha(arr[a * 2 + 1]))
        inorder(a * 2 + 1);
}
void postorder(int a) {
    if (isalpha(arr[a * 2]))
        postorder(a * 2);
    if (isalpha(arr[a * 2 + 1]))
        postorder(a * 2 + 1);
    cout << arr[a];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    memset(arr, '.', sizeof(arr));
    int n;
    cin >> n;
    arr[1] = 'A';
    for (int i = 1; i <= n; i++) {
        char a, b, c;
        cin >> a >> b >> c;
        for (int j = 0; j < 67108866; j++) {
            if (arr[j] == a) {
                arr[j * 2] = b;
                arr[j * 2 + 1] = c;
                break;
            }
        }
    }
    preorder(1);
    cout << '\n';
    inorder(1);
    cout << '\n';
    postorder(1);
    cout << '\n';
    return 0;
}