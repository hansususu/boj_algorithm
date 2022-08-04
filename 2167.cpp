#include <iostream>
using namespace std;

int main() {
    int n, m, arr[301][301];
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
        }
    }
    int k, i, j, x, y;
    cin >> k;
    while (k--) {
        cin >> i >> j >> x >> y;
        int num = 0;
        for (int l = i; l <= x; l++){
            for (int s = j; s <= y; s++) {
                num += arr[l][s];
            }
        }
        cout << num << '\n';
    }
}