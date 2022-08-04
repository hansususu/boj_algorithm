#include <iostream>
using namespace std;

int main() {
    int t, n;
    long long dp[65][10] = { 0 };

    for (int i = 0; i <= 9; i++) {
        dp[1][i] = 1;
    }
    for (int i = 2; i <= 64; i++) {
        for (int j = 0; j <= 9; j++) {
            for (int k = j; k <= 9; k++) {
                dp[i][j] += dp[i-1][k];
            }
        }
    }
    cin >> t;
    while (t--) {
        cin >> n;
        long long res = 0;
        for (int i = 0; i <= 9; i++) {
            res += dp[n][i];
        }
        cout << res <<'\n';
    }
}