#include <iostream>
using namespace std;

int main() {
    int n, arr[201][4], ans[201];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 3; j++) cin >> arr[i][j];
    }
    for (int i = 1; i <= 3; i++) {
        for (int j =1; j <= n; j++) {
            int cnt = 0;
            for (int k = 1; k <= n; k++){
                if (arr[j][i] == arr[k][i] && j != k) {
                    cnt = 1;
                    break;
                }
            }
            if (!cnt) ans[j] += arr[j][i];
        }
    }
    for (int i = 1; i <= n; i++) cout << ans[i] << '\n';
}