#include <iostream>
#include <cstring>
using namespace std;
struct Node {
    Node* left = nullptr;
    Node* right = nullptr;
    int num;
    Node(int n) { num = n; }
};
void setTree(int n, Node* node) {
    if (n > node->num) {
        if (node->right == nullptr)
            node->right = new Node(n);
        else
            setTree(n, node->right);
    }
    else {
        if (node->left == nullptr)
            node->left = new Node(n);
        else
            setTree(n, node->left);
    }
}
void postorder(Node* node) {
    if (node->left != nullptr)
        postorder(node->left);
    if (node->right != nullptr)
        postorder(node->right);
    cout << node->num << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    Node* head = new Node(n);
    while (cin >> n) {
        setTree(n, head);
    }
    postorder(head);
    return 0;
}