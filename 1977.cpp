#include <iostream>
using namespace std;

int main() {
    int m, n, dp[10000], sum = 0, mi = 10000;
    cin >> m >> n;

    for (int i = 1; i <= n; i++) {
        dp[i] = i * i;
    }
    for (int i =1; i <= n; i++) {
        if (m <= dp[i] && dp[i] <= n) {
            sum += dp[i];
            mi = min(mi, dp[i]);
        }
    }
    if (sum == 0) cout << "-1\n";
    else cout << sum << '\n' << mi;
}