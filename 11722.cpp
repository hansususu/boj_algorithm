#include <iostream>
using namespace std;

int main() {
    int n, a[1001], dp[1001], max = 0;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        dp[i] = 1;
        for (int j = 1; j < i; j++) {
            if (a[i] < a[j] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
            }
        }
        if (max < dp[i]) max = dp[i];
    }
    cout << max;
}