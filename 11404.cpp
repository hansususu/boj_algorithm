#include <iostream>
#include <algorithm>
using namespace std;

#define INF 987654321

int main() {
    int n, m, matrix[101][101];
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) matrix[i][j] = 0;
            else matrix[i][j] = INF;
        }
    }
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        matrix[a][b] = min(matrix[a][b], c);
    }
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                matrix[i][j] = min(matrix[i][j], matrix[i][k]+matrix[k][j]);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (matrix[i][j] == INF) {
                cout << 0 << ' ';
                continue;
            }
            cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }
}