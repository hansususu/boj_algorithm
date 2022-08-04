#include <iostream>
using namespace std;

char cross(int x, int y) {
    if ((x+y) % 2 == 0) return '#';
    else return '.';
}

int main() {
    char c[10][10];
    char f[20][20];
    int n, m, u, l, r, d;
    cin >> n >> m;
    cin >> u >> l >> r >> d;
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    for (int i = 0; i < n+ u +d; i++) {
        for (int j = 0; j < l + m + r; j++) {
            f[i][j] = cross(i, j);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            f[i+u][j+l] = c[i][j];
        }
    }
    for (int i = 0; i < n+u+d; i++) {
        for (int j = 0; j < l +m+r; j++) {
            cout << f[i][j];
        }
        cout <<"\n";
    }
}