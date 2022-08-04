#include <iostream>
using namespace std;

int k, c, s[14], l[14];

void DFS(int node, int depth) {
    if (depth == 7) {
        for (int i = 1; i<= 6; i++) {
            cout << l[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = node; i <= k; i++) {
        l[depth] = s[i];
        DFS(i+1, depth+1);
    }
}

int main() {
    while (cin >> k && k) {
        for (int i = 1; i<= k; i++) {
            cin >> s[i];
        }
        DFS(1,1);
        cout << '\n';
    }
}