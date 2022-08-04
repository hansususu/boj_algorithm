#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, matrix[101][101];

    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 0) matrix[i][j] = 1000;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                matrix[j][k] = min(matrix[j][k], matrix[j][i]+matrix[i][k]);
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (matrix[i][j] == 1000) cout << 0 << ' ';
            else cout << 1 << ' ';
        }
        cout << '\n';
    }
}