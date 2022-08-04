#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    int matrixA[101][101], matrixB[101][101], res[101][101];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrixA[i][j];
        }
    }
    cin >> m >> k;
    for (int i = 0; i< m; i++) {
        for (int j = 0; j < k; j++) {
            cin >> matrixB[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            for (int l = 0; l < m; l++) {
                res[i][j] += matrixA[i][l] * matrixB[l][j];
            }
            cout << res[i][j] << ' ';
        }
        cout << '\n';
    }
}