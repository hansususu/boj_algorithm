#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int a[50][2];

void preorder(int n) {
    if (n == -1) return;
    cout << (char)(n+'A');
    preorder(a[n][0]);
    preorder(a[n][1]);
}

void inorder(int n) {
    if (n == -1) return;
    inorder(a[n][0]);
    cout << (char)(n+'A');
    inorder(a[n][1]);
}

void postorder(int n) {
    if (n == -1) return;
    postorder(a[n][0]);
    postorder(a[n][1]);
    cout << (char)(n+'A');
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char x, y, z;
        cin >> x >> y >> z;
        x = x -'A';
        if (y == '.'){
            a[x][0] = -1;
        }
        else a[x][0] = y-'A';
        if (z == '.') a[x][1] = -1;
        else a[x][1] = z -'A';
    }
    preorder(0);
    cout << '\n';
    inorder(0);
    cout << '\n';
    postorder(0);
    return 0;
}
